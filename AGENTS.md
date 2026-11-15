# AGENTS.md — solvitaire-rea reverse engineering project

## Language matching: respond in the user's language

Always answer in English by default. Only respond in Vietnamese if the user explicitly writes in Vietnamese and asks for a Vietnamese response. Detect the language from the user's message and match it. This applies to all responses, clarifications, and actions.

## Python / uv

Prefer installing Python packages and running Python through uv commands. Manage everything Python-related through uv.

## Project goal

Turn `solvitaire_installv5.3.3.exe` into source code that **rebuilds into a JAR that behaves like the shipped one**. The binary is an InstallForge installer wrapping a Launch4j-wrapped Java solitaire game.

Status:
- **Done:** binary analysis (installer, launcher, DLL) and extraction of the JAR.
- **Not done:** source reconstruction. CFR output exists in `java_source/com/solvitaire/app/`. The "refactored" tree `java_source/com/solvitaire/solitaire/` doesn't compile and is behaviorally corrupted (see below).
- The project is **not** complete.

## ⚠ Current direction (read first, before any Java work)

The authoritative plan is **`docs/RECONSTRUCTION_PLAN.md`**. Follow its milestones in order, one per session:

| Milestone | Work | Done when |
|---|---|---|
| **M0** | Golden API test harness (`tools/golden_api_test.py`, run with `uv run`) | Passes against the shipped JAR, and output is deterministic |
| **M1** | Bytecode-level remap of the original JAR (ASM `ClassRemapper` / Enigma) to unique, legal, case-insensitive-safe names. The mapping lives in `mappings/solvitaire.mapping` | `remapped.jar` passes the golden test |
| **M2** | Decompile `remapped.jar` with Vineflower (main), plus CFR (second opinion), into `java_source_v2/` | Both outputs exist |
| **M3** | Compile one class at a time against `remapped.jar` on the classpath. Keep the per-class results in `reports/compile_matrix.csv` | Every class compiles, or is listed as "still from bytecode" with a reason |
| **M4** | Full Gradle build of `java_source_v2/merged/` → `rebuilt.jar` | 0 errors, and the golden test passes on `rebuilt.jar` |
| **M5** | Readable names through the mapping file (or an AST-aware refactor), then re-run M1–M4 | Golden test still passes |

Hard rules:
- **Don't edit `java_source/com/solvitaire/solitaire/` any more.** It's frozen legacy. Use it only as a source of class names for the mapping file. Its `a → AboutDialog`-style renames were **text replacements**: they rewrote 4,668 identifiers and string literals on 175 lines. It also moved `WinUser32`, disabled the API thread in `Main.java`, and stubbed methods in `GameStats`.
- **Never rename by text replace.** Rename at the bytecode level (mapping file) or with an AST/symbol-aware tool.
- **Never stub a method body to make it compile.** Leave that class "from bytecode" and move on.
- **`com.solvitaire.app.WinUser32` must keep its package, class name and native method names.** The DLL exports `Java_com_solvitaire_app_WinUser32_*`. Renaming or moving it causes `UnsatisfiedLinkError`.
- **Don't split classes into packages before M4 passes.** The original is a single package. Splitting it is what forced the ~165 `public` edits.
- **Don't trust a whole-tree `javac` error count** while parse errors exist. javac stops before attribution, so the count is incomplete. Use per-class compiles (M3).
- **Don't write "complete" in status docs** unless a command you ran shows it (M4 golden test passing). Paste the command and its result into `PROJECT_STATUS.md`. Write a distinct, accurate commit message each time.
- **Why source-level fixing can't work:** the obfuscator uses class names that differ only by case (`qo`/`qO`, `g`/`G`), keywords as class names (`do`), and same-name fields of different types in one class (`qo` has two each of `a`…`h`). All of this is legal in bytecode and illegal in Java source. Only a bytecode remap fixes it.
- Use the `reverse-engineer-anything` (REA) skill for claims about native binaries (installer, launcher, DLL). The Java remap/decompile/compile loop uses ordinary JVM tooling.

## Project status — see PROJECT_STATUS.md

Project status, completed items, blockers, and next steps are tracked in `PROJECT_STATUS.md`. Confer that file before planning work; keep this file limited to standing project instructions.

## Documentation — see `docs/`

Reverse engineering documentation lives in `docs/`:
- `RECONSTRUCTION_PLAN.md` — **the current plan for source reconstruction (read first)**, with the evidence behind it and the milestones M0–M5
- `RE_METHODOLOGY.md` — decompilation pipeline, toolchain, refactoring strategy, verification approach, gotchas
- `FILE_FORMATS.md` — PE installer format, embedded 7z archives, Launch4j launcher, JAR overlay, DLL exports/imports, HLSL shader
- `API_PROTOCOL.md` — stdin/stdout API command format, verified end-to-end flow, untested commands, pre-existing bugs
- `CFR_ARTIFACTS.md` — catalog of CFR/compile issues from the legacy refactored tree (historical; its fix strategy is superseded)


## Repo layout

| Path | Description |
|------|-------------|
| `solvitaire_installv5.3.3.exe` | Original target (37.8 MB PE32 x86 installer) |
| `CHANGELOG/YYYY-MM-DD.md` | One change log per day (latest: `2026-11-15.md`) |
| `docs/` | Reverse engineering documentation. Start with `RECONSTRUCTION_PLAN.md`, then `RE_METHODOLOGY.md`, `FILE_FORMATS.md`, `API_PROTOCOL.md`, `CFR_ARTIFACTS.md` |
| `decompiled_installer/` | 2,826 Ghidra-decompiled installer functions (C-like pseudocode) |
| `decompiled_game/` | 240 Ghidra-decompiled game launcher functions |
| `java_source/com/solvitaire/app/` | Raw CFR 0.152 output, 1,008 files. The obfuscated names are the original names, except the 494 classes CFR suffixed `_0` because of Windows case collisions |
| `java_source/com/solvitaire/solitaire/` | **Frozen legacy.** Refactored copy produced by a text-replace rename; it doesn't compile and is behaviorally corrupted. Use it only as a source of names |
| `java_source_v2/`, `mappings/`, `tools/`, `tests/golden/`, `reports/` | Planned outputs of `docs/RECONSTRUCTION_PLAN.md` (M0–M4) |
| `ghidra_proj_installer/` | Ghidra project (installer) |
| `ghidra_proj_game/` | Ghidra project (game launcher) |
| `extracted_archive1/` | 11 installer data files from SETUPCONFIGURATION 7z archive |
| `extracted_archive2/` | 171 game payload files from main 7z archive |
| `game_run/` | Runnable game staging dir (JAR + DLL) |
| `C:/sgame/` | Clean runnable copy (javaw.exe, JAR, DLL) |
| `solvitaire_game_from_pe.jar` | Extracted game JAR (`Main-Class: com.solvitaire.app.Main`, `Class-Path: .`; XChart is bundled) |
| `com_solvitaire_app_winuser32.dll` | Native JNI library required by the game |
| `cfr-decompiler.jar` | CFR 0.152 Java decompiler |
| `DecompileAll.java` / `.class` | Ghidra headless batch decompilation script |
| `ghidra*.log` | Ghidra headless execution logs |

## Legacy refactored package structure (`com.solvitaire.solitaire`, frozen)

> These tables describe the frozen legacy tree. The class-name mapping in
> "Key renamed classes" is still useful as a seed for `mappings/solvitaire.mapping`
> (M1/M5 in `docs/RECONSTRUCTION_PLAN.md`). The package split is not: keep the
> single original package until M4 passes.
>
> Names ending in `_0` (`qo_0`, `g_0`, …) are CFR's renames for Windows case
> collisions, **not** bytecode names. `qo_0` could be `qo` or `qO`. Before you
> put one in a mapping file, confirm the real case-sensitive bytecode name with
> `javap -p` (compare fields and methods).

| Package | Files | Purpose |
|---------|-------|---------|
| root | 1 | `Main.java` entry point |
| `engine` | 7 | `SolitaireGameEngine`, `CardStack`, `Card`, `CardRun`, `GameMove`, `CardImage`, `GameStats` |
| `solver` | 7 | `SolitaireSolver` (abstract), `SolverException`, `KlondikeSolver`, `SpiderSolver`, `SpiderVariantSolver` |
| `reader` | 6 | `BoardReader` (abstract), `SpiderBoardReader`, `KlondikeBoardReader`, etc. |
| `ui` | 5 | `MainWindow`, `ModeSelector`, `AboutDialog`, `MainFrame`, `GameFrame` |
| `ui.panels` | 19 | UI panel classes |
| `ui.handlers` | 108 | ActionListener/button handler classes |
| `api` | 2 | `ApiCommandProcessor`, `DesktopDuplication` |
| `challenge` | 1 | `ChallengeSolver` |
| `native/` dir (package `...solitaire.jni`) | 1 | `WinUser32` (JNI native wrapper). **This move breaks JNI linkage; the class must stay `com.solvitaire.app.WinUser32`** |
| `config` | 1 | `GameConfig` |
| `util` | 71 | `ErrorDialog`, `ApiErrorCodes`, utility classes |
| `data` | 779 | Datatable classes (int[][] arrays for card images, board layouts, solver tables) |

## Key renamed classes

| Obfuscated | New name | Package | Role |
|------------|----------|---------|------|
| `qo_0` | `SolitaireGameEngine` | engine | Central game engine |
| `qv` | `CardStack` | engine | Card stack/pile |
| `qu` | `Card` | engine | Individual card |
| `qm_0` | `CardRun` | engine | Card run/sequence |
| `pJ` | `GameMove` | engine | Move representation |
| `pV` | `CardImage` | engine | Card rendering |
| `qr` | `SolitaireSolver` | solver | Abstract base solver |
| `qh` | `KlondikeSolver` | solver | Klondike variant solver |
| `qs_0` | `SpiderSolver` | solver | Spider variant solver |
| `e_0` | `BoardReader` | reader | Abstract board reader |
| `g_0` | `ModeSelector` | ui | Game mode selection UI |
| `qb_0` | `MainWindow` | ui | Main window |
| `a` | `AboutDialog` | ui | About dialog |
| `qx_0` | `ChallengeSolver` | challenge | Challenge management |
| `WinUser32` | `WinUser32` (**never rename or move**) | `com.solvitaire.app` | JNI native wrapper; the DLL exports `Java_com_solvitaire_app_WinUser32_*` |
| `ak_0` | `GameConfig` | config | Game configuration |
| `CommandLine` | `ApiCommandProcessor` | api | API stdin/stdout thread |

## Key facts

- Installer: PE32 x86, zeroed section table (packed stub), two embedded 7-Zip archives at file offsets `1371408` (SETUPCONFIGURATION) and `1409045` (main payload)
- Game: Launch4j wrapper; JAR embedded as PE overlay at offset `0x001b75fc`; `Main-Class: com.solvitaire.app.Main`; depends on XChart 3.8.1; class names obfuscated
- Native DLL `com_solvitaire_app_winuser32.dll` must be on `java.library.path` to run. Its JNI exports are named `Java_com_solvitaire_app_WinUser32_*`, which binds them to the exact class `com.solvitaire.app.WinUser32`.
- Obfuscation (verified with `jar tf` / `javap -p`):
  - class names that differ only by case (`qo`/`qO`, `g`/`G`, `e`/`E`, `do`/`dO`);
  - Java keywords as class names (`do`);
  - same-name fields of different types in one class (`qo` has two each of `a`…`h`).

  None of this is valid Java source; a bytecode remap fixes it (see `docs/RECONSTRUCTION_PLAN.md`).
- Game runs in API mode with `javaw -jar ... api` and accepts stdin commands: `status`, `deal`, `solve`, `step N`, `version`, `difficulty`, `keystroke`, `readcards`, `challenge`, `mode`, `skipads`, `list`, `run`, `pause`, `tracelevel`, `exit`

## How to run the game

```
cmd /c "C:/sgame/javaw.exe -Djava.library.path=C:/sgame -jar C:/sgame/solvitaire_game_from_pe.jar"
```

API mode:
```
cmd /c "C:/sgame/javaw.exe -Djava.library.path=C:/sgame -jar C:/sgame/solvitaire_game_from_pe.jar api"
```

## How to re-run Ghidra decompilation

Prerequisites (must be set in the environment before launching REA/omp):
- `GHIDRA_INSTALL_DIR=C:/Users/admin/Downloads/ghidra_12.1.4_PUBLIC_20260921/ghidra_12.1.4_PUBLIC`
- `JAVA_HOME=C:/Users/admin/scoop/apps/temurin-lts-jdk/current` (JDK 25+)

**Ghidra 12.2 and JDK 21 are rejected by REA version checks — do not use them.**

Run headless (from Ghidra install dir):
```
support\analyzeHeadless.bat <project_dir> <project_name> -import <target.exe> -overwrite -scriptPath <script_dir> -postScript DecompileAll
```

`DecompileAll.java` must be compiled against the full Ghidra classpath (202 jars) before use:
```
javac -cp "<all ghidra jars joined with ;>" DecompileAll.java
```

Note: Ghidra 12.x uses `DecompiledFunction.getC()` (not `getCCode()`); `Function` is in `ghidra.program.model.listing` (not `ghidra.program.model.symbol`); `getFunctions()` returns `FunctionIterator` (not `Function[]`).

REA's MCP transport has a 30s timeout — too short for Ghidra auto-analysis on this 36MB binary (~175s). Use `analyzeHeadless.bat` directly instead of REA's `list_procedures`/`list_strings`/`procedure_pseudo_code`.

## How to re-run Java decompilation

```
java -jar cfr-decompiler.jar <input.jar> --outputdir <output_dir>
```

CFR 0.152 downloaded from `https://www.benf.org/other/cfr/cfr-0.152.jar`. The Procyon download page on Bitbucket returned HTML instead of a JAR; Procyon itself is fine and available from Maven Central (`org.bitbucket.mstrobel:procyon-*`) or GitHub releases.

For reconstruction, decompile the **remapped** JAR (M1), not the original. Use **Vineflower** (`org.vineflower:vineflower`, Maven Central) as the main decompiler and CFR as a second opinion. Decompiling the original JAR directly on Windows produces `_0` class-name collisions and invalid duplicate fields.

## Important addresses / offsets

- Installer entry: `0x10a943` (PE header), actual `0x0050a943` after analysis
- Installer main logic: `FUN_00411ef0` (17,349 bytes)
- Installer archive iteration: `FUN_00418a64` (open), `FUN_004189d4` (has more), `FUN_00418a42` (get name), `FUN_004189f6` (extract via vtable), `FUN_00418b1d` (extract), `FUN_00401150` (path transform)
- Game entry: `0x00401590` → `FUN_00401180` (CRT main) → `FUN_0040ba30` → `FUN_00401803` (Launch4j main) → `FUN_00404890` (JNI/Java launch)
- Game JAR overlay offset in PE: `0x001b75fc`
- SETUPCONFIGURATION resource payload offset: `1371408`
- Second 7-Zip archive offset: `1409045`

## Gradle build and linting

A Gradle build (Kotlin DSL) is at the repo root. It currently compiles the frozen legacy `com.solvitaire.solitaire` package, which doesn't compile. In M4 of `docs/RECONSTRUCTION_PLAN.md`, point it at `java_source_v2/merged/` instead. It also runs Google-Java-rule linting via Checkstyle and google-java-format formatting via Spotless. Maven Central already resolves, so add ASM/Vineflower as separate Gradle configurations (M1/M2).

```
settings.gradle.kts   # rootProject.name = "solvitaire-rea"
build.gradle.kts      # java, checkstyle, com.diffplug.spotless plugins
config/checkstyle/google_checks.xml   # Google Java Style checkstyle config
```

Tasks:
| Task | Purpose |
|------|---------|
| `compile-java` / `compileJava` | Compile the refactored Java source |
| `lint` | Run Checkstyle (Google Java rules) + google-java-format check |
| `fmt` | Apply google-java-format to the Java source |
| `checkstyleMain` | Checkstyle analysis only |
| `spotlessJavaCheck` / `spotlessJavaApply` | Format check / apply only |

Run from repo root:
```
gradle compile-java
gradle lint
gradle fmt
```

Notes:
- Checkstyle/Spotless parse source text, so they give no useful results until the source compiles cleanly. Don't enable linting before M4 passes.
- Spotless's `googleJavaFormat` step uses the JDK's internal `com.sun.tools.javac` API, which is incompatible with JDK 25. If `spotlessJavaCheck`/`spotlessApply` fail with `DeferredDiagnosticHandler`, run on JDK 17/21 or drop the Spotless step and rely on Checkstyle alone.
- In the legacy tree, `native/WinUser32.java` had its package renamed `com.solvitaire.solitaire.native` → `com.solvitaire.solitaire.jni`, because `native` is a Java keyword and illegal as a package segment. **That move breaks JNI linkage.** In the new pipeline, `WinUser32` stays `com.solvitaire.app.WinUser32`.

## Lessons learned / gotchas

- The `strings -e l` output showing a Sysinternals EULA could not be correlated to any findable bytes in the file (exhaustive UTF-16LE/ASCII searches for "Russinovich"/"Sysinternals"/"Mark" returned 0). Treat as an unresolved tool anomaly, not confirmed content.
- PowerShell mangles `-Djava...` flags and forward-slash paths. Use `cmd /c "..."` or a `.bat` file to launch the game.
- VS Code `code` wrapper is broken (`./Code.exe` not found). Launch `Code.exe` directly if needed.
- Windows paths use backslashes.
- Windows is case-insensitive. Never extract or decompile the original JAR's classes to disk without remapping them first, because `qo.class` and `qO.class` collide.
- A whole-tree `javac` stops at parse errors and reports no semantic errors, so its error count is a lower bound. Compile one class at a time against a JAR classpath to get real numbers.
- (2026-11-13) Four commits titled "~120 errors fixed" came from hand-fixing the legacy tree without converging. Don't repeat that loop. Follow `docs/RECONSTRUCTION_PLAN.md`.
- Do not use `cygpath` or `pyenv.bat` — both are broken on this system (pyenv.bat calls cygpath which is missing). Use direct Windows paths.
