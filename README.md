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

Legacy refactored tree (frozen, does not compile):

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
├── native/                      # JNI declarations; package renamed to ...solitaire.jni (breaks JNI linkage, see docs/RECONSTRUCTION_PLAN.md)
│   └── WinUser32.java
├── config/                      # Game configuration (1 file)
├── util/                        # Utilities (71 files)
└── data/                        # Datatable classes (779 int[][] arrays)
```

## How to build

> [!WARNING]
> **The recovered source does not build yet.** `java_source/com/solvitaire/solitaire/` is a frozen legacy tree. Its renames were text replacements that corrupted identifiers and string literals, it moved the JNI class, and it stubbed methods. The reconstruction is being redone from a bytecode-remapped JAR; see [docs/RECONSTRUCTION_PLAN.md](docs/RECONSTRUCTION_PLAN.md). Until milestone M4 of that plan passes, the shipped JAR below is the only runnable build.

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

The refactored `com.solvitaire.solitaire` package no longer has CFR `** GOTO` / `** break` markers, but it **doesn't compile** and is frozen (see the warning under [How to build](#how-to-build)). The parallel `com.solvitaire.app/` package is the raw CFR output, kept for reference. The obfuscator used case-only class names, keyword class names and duplicate field names, so neither tree can compile without a bytecode remap first.

Two pre-existing bugs in the shipped build (documented, not fixed):
- `reset` before `mode play` crashes the mode-selector dialog (native UI code, `com.solvitaire.app.G.g`).
- A bare API command without the `<macro>^` prefix crashes the API input thread (`CommandLine.run`, `ArrayIndexOutOfBoundsException`).

## Related decompiled output

- `decompiled_installer/` — 2,826 Ghidra C-like pseudocode functions from the installer PE
- `decompiled_game/` — 240 Ghidra C-like pseudocode functions from the game launcher PE

## Requirements

- JDK 25+ (for running/building)
- The bundled JRE 1.8.0 is included in the installer for running the game directly
