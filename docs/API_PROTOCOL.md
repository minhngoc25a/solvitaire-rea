# API Protocol — solvitaire-rea

## Launch

The game runs in API mode when launched with the `api` argument:

```
cmd /c "C:/sgame/javaw.exe -Djava.library.path=C:/sgame -jar C:/sgame/solvitaire_game_from_pe.jar api"
```

- Java 25 Temurin (`javaw.exe`) bundled in `C:/sgame/`.
- Native DLL `com_solvitaire_app_winuser32.dll` must be on `java.library.path`.
- Only a harmless Java 25 `System::loadLibrary` module warning appears; the DLL loads successfully.

## Command Format

All commands are sent on stdin as `<macro>^<command>` followed by newline:

```
<macro>^<command>
```

- `<macro>` is an integer prefix (typically `1`).
- `^` is required — a bare command without `^` crashes the API input thread (pre-existing bug in the shipped build).
- Responses are written to stdout.

## Commands

| Command | Purpose | Example response |
|---------|---------|------------------|
| `status` | Query game state | `STARTSOLVE`, `SOLVED` |
| `deal` | Deal a new game | (no error) |
| `solve` | Start solving asynchronously | `# start solving` |
| `step N` | Execute N solve steps | (no error) |
| `version <id>` | Select game version | `# version "klondike" selected` |
| `difficulty <level>` | Set difficulty | `# difficulty "easy" selected` |
| `keystroke` | Simulate keystroke | — |
| `readcards` | Read card state | — |
| `challenge` | Challenge mode | — |
| `mode <mode>` | Select game mode | `# Mode play selected` |
| `skipads` | Skip ads | — |
| `list` | Print full solution | 84-move solution, ending `You can do the rest!` |
| `run` | Run game | — |
| `pause` | Pause game | — |
| `tracelevel` | Set trace level | — |
| `exit` | Clean process exit | clean exit |

## Verified End-to-End Flow (2026-11-12)

| Step | Command | Observed output |
|------|---------|-----------------|
| 1 | `1^mode play` | `# Mode play selected` |
| 2 | `1^version klondike 1` | `# version "klondike" selected` |
| 3 | `1^difficulty easy` | `# difficulty "easy" selected` |
| 4 | `1^deal` | game dealt, no error |
| 5 | `1^status` | `STARTSOLVE` |
| 6 | `1^solve` | `# start solving` (asynchronous) |
| 7 | `1^wait` | solve completed |
| 8 | `1^list` | full solution — 84 moves, ending `You can do the rest!` |
| 9 | `1^step 3` | executed, no error |
| 10 | `1^status` | `SOLVED` |
| 11 | `1^exit` | clean process exit |

## Untested Commands

`keystroke`, `readcards`, `challenge`, `skipads`, `run`, `pause`, `tracelevel` were not exercised.

## Pre-Existing Shipped-Build Bugs

- `reset` before `mode play` crashes the mode-selector dialog (`ArrayIndexOutOfBoundsException` — `G.g` indexes past a 5-token split). Do not `reset` between launch and `mode play`.
- Bare commands (no `^<macro>` prefix) crash the API input thread.
