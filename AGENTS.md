# AGENTS.md — solvitaire-rea reverse engineering project

## Project goal
Turn `solvitaire_installv5.3.3.exe` into source code. The binary is an InstallForge installer wrapping a Launch4j-wrapped Java solitaire game. Full Java source has been recovered.

## Repo layout

| Path | Description |
|------|-------------|
| `solvitaire_installv5.3.3.exe` | Original target (37.8 MB PE32 x86 installer) |
| `CHANGELOG/2026-11-11.md` | Change log for this session |
| `decompiled_installer/` | 2,826 Ghidra-decompiled installer functions (C-like pseudocode) |
| `decompiled_game/` | 240 Ghidra-decompiled game launcher functions |
| `java_source/com/solvitaire/solitaire/` | 1,216 CFR-decompiled Java source files (refactored) |
| `ghidra_proj_installer/` | Ghidra project (installer) |
| `ghidra_proj_game/` | Ghidra project (game launcher) |
| `extracted_archive1/` | 11 installer data files from SETUPCONFIGURATION 7z archive |
| `extracted_archive2/` | 171 game payload files from main 7z archive |
| `game_run/` | Runnable game staging dir (JAR + DLL) |
| `C:/sgame/` | Clean runnable copy (javaw.exe, JAR, DLL) |
| `solvitaire_game_from_pe.jar` | Extracted game JAR (Main-Class: com.solvitaire.solitaire.Main) |
| `com_solvitaire_app_winuser32.dll` | Native JNI library required by the game |
| `cfr-decompiler.jar` | CFR 0.152 Java decompiler |
| `DecompileAll.java` / `.class` | Ghidra headless batch decompilation script |
| `ghidra*.log` | Ghidra headless execution logs |

## Refactored Java package structure (`com.solvitaire.solitaire`)

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
| `native` | 1 | `WinUser32` (JNI native wrapper) |
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
| `WinUser32` | `WinUser32` | native | JNI native wrapper |
| `ak_0` | `GameConfig` | config | Game configuration |
| `CommandLine` | `ApiCommandProcessor` | api | API stdin/stdout thread |

## Key facts

- Installer: PE32 x86, zeroed section table (packed stub), two embedded 7-Zip archives at file offsets `1371408` (SETUPCONFIGURATION) and `1409045` (main payload)
- Game: Launch4j wrapper; JAR embedded as PE overlay at offset `0x001b75fc`; `Main-Class: com.solvitaire.app.Main`; depends on XChart 3.8.1; class names obfuscated
- Native DLL `com_solvitaire_app_winuser32.dll` must be on `java.library.path` to run
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

CFR 0.152 downloaded from `https://www.benf.org/other/cfr/cfr-0.152.jar`. Procyon download from Bitbucket returned an HTML page (not a valid JAR) — do not use.

## Important addresses / offsets

- Installer entry: `0x10a943` (PE header), actual `0x0050a943` after analysis
- Installer main logic: `FUN_00411ef0` (17,349 bytes)
- Installer archive iteration: `FUN_00418a64` (open), `FUN_004189d4` (has more), `FUN_00418a42` (get name), `FUN_004189f6` (extract via vtable), `FUN_00418b1d` (extract), `FUN_00401150` (path transform)
- Game entry: `0x00401590` → `FUN_00401180` (CRT main) → `FUN_0040ba30` → `FUN_00401803` (Launch4j main) → `FUN_00404890` (JNI/Java launch)
- Game JAR overlay offset in PE: `0x001b75fc`
- SETUPCONFIGURATION resource payload offset: `1371408`
- Second 7-Zip archive offset: `1409045`

## Lessons learned / gotchas

- The `strings -e l` output showing a Sysinternals EULA could not be correlated to any findable bytes in the file (exhaustive UTF-16LE/ASCII searches for "Russinovich"/"Sysinternals"/"Mark" returned 0). Treat as an unresolved tool anomaly, not confirmed content.
- PowerShell mangles `-Djava...` flags and forward-slash paths. Use `cmd /c "..."` or a `.bat` file to launch the game.
- VS Code `code` wrapper is broken (`./Code.exe` not found). Launch `Code.exe` directly if needed.
- Windows paths use backslashes.
- Do not use `cygpath` or `pyenv.bat` — both are broken on this system (pyenv.bat calls cygpath which is missing). Use direct Windows paths and the venv Python at `C:/Users/admin/AppData/Local/hermes/hermes-agent/venv/Scripts/python.exe`.
