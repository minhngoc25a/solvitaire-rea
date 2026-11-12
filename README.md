# Solitaire Reverse Engineering Project

This repository contains the reverse-engineered source code of `solvitaire_installv5.3.3.exe` — an InstallForge installer wrapping a Launch4j-wrapped Java solitaire game with a bundled JRE 1.8.0.

## What was reverse engineered

| Component | Format | Source |
|-----------|--------|--------|
| Installer stub | PE32 x86 | Ghidra decompilation → `decompiled_installer/` |
| Game launcher | Launch4j PE32 | Ghidra decompilation → `decompiled_game/` |
| Game JAR | Embedded PE overlay | CFR decompilation → `java_source/` |

The game is **not a native binary** — it's a Java application wrapped by Launch4j with a bundled JRE. The actual game logic runs on the JVM.

## Repository structure

```
java_source/com/solvitaire/solitaire/
├── Main.java                    # Entry point
├── engine/                      # Core game engine (7 files)
│   ├── SolitaireGameEngine.java
│   ├── CardStack.java
│   ├── Card.java
│   ├── CardRun.java
│   ├── GameMove.java
│   ├── CardImage.java
│   └── GameStats.java
├── solver/                      # Solitaire solvers (7 files)
│   ├── SolitaireSolver.java     # Abstract base
│   ├── SolverException.java
│   ├── KlondikeSolver.java
│   ├── SpiderSolver.java
│   └── SpiderVariantSolver.java
├── reader/                      # Board screen readers (6 files)
│   ├── BoardReader.java         # Abstract base
│   ├── SpiderBoardReader.java
│   └── ...
├── ui/                          # User interface (5 files)
│   ├── MainWindow.java
│   ├── ModeSelector.java
│   └── ...
├── ui.panels/                   # UI panels (19 files)
├── ui.handlers/                 # Event handlers (108 files)
├── api/                         # API command processor (2 files)
│   ├── ApiCommandProcessor.java
│   └── DesktopDuplication.java
├── challenge/                   # Challenge management (1 file)
├── native/                      # JNI native declarations (1 file)
│   └── WinUser32.java
├── config/                      # Game configuration (1 file)
├── util/                        # Utilities (71 files)
└── data/                        # Datatable classes (779 int[][] arrays)
```

## How to build

The Java source was decompiled with CFR 0.152. Some files contain CFR artifacts (`** GOTO`, `** break` markers) that prevent direct compilation. See [Known issues](#known-issues).

```bash
javac -d build/classes -sourcepath java_source java_source/com/solvitaire/solitaire/Main.java
```

## How to run

The game requires the bundled JRE and the native DLL on `java.library.path`:

```cmd
cmd /c "C:/sgame/javaw.exe -Djava.library.path=C:/sgame -jar C:/sgame/solvitaire_game_from_pe.jar"
```

### API mode

The game can be controlled via stdin/stdout in API mode:

```cmd
cmd /c "C:/sgame/javaw.exe -Djava.library.path=C:/sgame -jar C:/sgame/solvitaire_game_from_pe.jar api"
```

Supported API commands:

| Command | Description |
|---------|-------------|
| `status` | Check game status (DEALT, SOLVED, EXPOSE, CHOOSEFROM, CONFIRMCARD) |
| `deal` | Generate a new game |
| `solve` | Solve the current game (asynchronous) |
| `step N` | Step forward N moves |
| `version <game>` | Set game type (klondike [1|3], spider [1|2|4], freecell, pyramid, tripeaks) |
| `difficulty <level>` | Set difficulty (easy, moderate, hard, seed N) |
| `keystroke [modifier] <key>` | Inject keystroke (modifiers: ctrl, alt, shift) |
| `readcards <file>` | Load card file |
| `challenge <type> <n> [folder]` | Challenge operations (create, play, boards, stacks, cards, score) |
| `mode msft|play` | Switch to Microsoft Solitaire Collection or play mode |
| `skipads` | Skip advertisements |
| `list [file]` | Print current solution moves |
| `run` | Step through the entire solution |
| `pause N` | Pause N milliseconds |
| `tracelevel <1-9>` | Set logging verbosity |
| `exit` | Quit |

### API usage notes

- Commands are sent on stdin as `<macro>^<command>` (e.g. `1^status`). A bare command without the `^` separator crashes the API input thread — the macro value itself is arbitrary (any integer works).
- `mode play` must be issued on a fresh launch, before `version`/`difficulty`/`deal`. Sending `reset` before `mode play` crashes the game (pre-existing bug in the shipped build's mode-selector dialog) — do not reset between launch and mode selection.

## Known issues

CFR 0.152 decompiler artifacts prevent clean compilation in 11 files:
- Markers like `** GOTO` and `** break` appear in control-flow-heavy functions
- Affected files: `ApiCommandProcessor.java`, `GameStats.java`, `BoardReader.java`, `SpiderBoardReader.java`, `pEBoardReader.java`, `qi_0BoardReader.java`, `SolitaireSolver.java`, `SpiderSolver.java`, `ModeSelector.java`, `uPanel.java`, `pX.java`

These need manual cleanup before the project compiles cleanly.

## Related decompiled output

- `decompiled_installer/` — 2,826 Ghidra C-like pseudocode functions from the installer PE
- `decompiled_game/` — 240 Ghidra C-like pseudocode functions from the game launcher PE

## Requirements

- JDK 25+ (for running/building)
- The bundled JRE 1.8.0 is included in the installer for running the game directly
