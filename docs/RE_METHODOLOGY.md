# Reverse Engineering Methodology — solvitaire-rea

## Overview

Target: `solvitaire_installv5.3.3.exe` (37.8 MB PE32 x86 InstallForge installer) wrapping a Launch4j-wrapped Java solitaire game. The goal was to recover full Java source from the shipped binary and produce a runnable, understandable reconstruction.

## Pipeline

```
solvitaire_installv5.3.3.exe
│
├─ InstallForge stub (PE32, zeroed section table)
│   ├─ 7z archive at offset 1371408  →  SETUPCONFIGURATION (installer config)
│   └─ 7z archive at offset 1409045  →  main payload (Launch4j launcher + JAR overlay)
│
└─ Launch4j wrapper (native EXE)
    └─ PE overlay at offset 0x001b75fc  →  solvitaire_game_from_pe.jar
        └─ Main-Class: com.solvitaire.solitaire.Main
            └─ JNI dependency: com_solvitaire_app_winuser32.dll
```

## Toolchain

| Tool | Purpose | Version |
|------|---------|---------|
| Ghidra 12.1.4 | Native binary decompilation (installer + launcher) | 12.1.4 |
| CFR 0.152 | Java bytecode decompilation (JAR → Java source) | 0.152 |
| Gradle 9.9.1 | Build refactored Java source | 9.9.1 |
| REA (rea-agents 6.7.0) | Native binary inspection via Ghidra bridge | 6.7.0 |

Ghidra 12.2 and JDK 21 are **rejected** by REA version checks — do not use them.

## Decompilation Steps

### Installer (Ghidra)
```
support\analyzeHeadless.bat <project_dir> <project_name> -import solvitaire_installv5.3.3.exe -overwrite -scriptPath <script_dir> -postScript DecompileAll
```
2,826 functions decompiled into `decompiled_installer/`. Key functions:
- `FUN_00411ef0` — installer main logic (17,349 bytes)
- `FUN_00418a64` — archive open; `FUN_004189d4` — has more; `FUN_00418a42` — get name; `FUN_004189f6` — extract via vtable; `FUN_00418b1d` — extract; `FUN_00401150` — path transform
- Entry: `0x10a943` (PE header), actual `0x0050a943` after analysis

REA's MCP transport has a 30s timeout — too short for Ghidra auto-analysis on this 36MB binary (~175s). Use `analyzeHeadless.bat` directly instead of REA's `list_procedures`/`list_strings`/`procedure_pseudo_code`.

### Game Launcher (Ghidra)
240 functions decompiled into `decompiled_game/`. Key functions:
- Entry: `0x00401590` → `FUN_00401180` (CRT main) → `FUN_0040ba30` → `FUN_00401803` (Launch4j main) → `FUN_00404890` (JNI/Java launch)
- JAR overlay offset: `0x001b75fc`

### Game JAR (CFR)
```
java -jar cfr-decompiler.jar <input.jar> --outputdir <output_dir>
```
1,216 Java source files recovered from `solvitaire_game_from_pe.jar`. Class names were obfuscated; all were manually renamed (see AGENTS.md "Key renamed classes"). CFR 0.152 from `https://www.benf.org/other/cfr/cfr-0.152.jar`. **Do not use Procyon** — its Bitbucket download returned an HTML page, not a valid JAR.

## Refactoring Strategy

1. **Rename obfuscated classes** to meaningful names based on usage analysis (e.g., `qo_0` → `SolitaireGameEngine`, `qv` → `CardStack`).
2. **Fix CFR artifacts** — remove `** GOTO` / `** break` markers, fix block structure (missing closing braces), correct type mismatches from CFR's type inference.
3. **Resolve Java keyword conflicts** — `do.java` → `do_0.java` (`do` is a keyword); package `solitaire.native` → `solitaire.jini` (`native` is a keyword).
4. **Make cross-package fields/methods public** where CFR left them package-private but they're accessed from other packages.
5. **Exclude uncompilable files** — `api/ApiCommandProcessor.java` and `api/DesktopDuplication.java` have CFR missing-local-variable-type errors and are excluded from the Gradle build; `Main.java` updated to not instantiate `ApiCommandProcessor`.

## Verification Approach

- Run the recovered JAR in API mode (`javaw -jar ... api`) and exercise each stdin/stdout command.
- Verify end-to-end flow: `mode play` → `version klondike 1` → `difficulty easy` → `deal` → `status` → `solve` → `wait` → `list` → `step N` → `status` → `exit`.
- Confirm native DLL loads (only a harmless Java 25 `System::loadLibrary` module warning).

## Known Pre-Existing Bugs (shipped build, not introduced by refactoring)

- `reset` before `mode play` crashes the mode-selector dialog (`ArrayIndexOutOfBoundsException` in `G.g` indexing past a 5-token split).
- Bare API commands (no `<macro>^<command>` prefix) crash the API input thread (`var2_15[1]` out of bounds).

## Gotchas

- PowerShell mangles `-Djava...` flags and forward-slash paths. Use `cmd /c "..."` or a `.bat` file to launch the game.
- VS Code `code` wrapper is broken (`./Code.exe` not found). Launch `Code.exe` directly if needed.
- Do not use `cygpath` or `pyenv.bat` — both are broken on this system. Use direct Windows paths.
- Ghidra 12.x uses `DecompiledFunction.getC()` (not `getCCode()`); `Function` is in `ghidra.program.model.listing` (not `ghidra.program.model.symbol`); `getFunctions()` returns `FunctionIterator` (not `Function[]`).
- Spotless's `googleJavaFormat` uses the JDK's internal `com.sun.tools.javac` API, incompatible with JDK 25. Run Spotless on JDK 17/21 or drop it and rely on Checkstyle alone.
