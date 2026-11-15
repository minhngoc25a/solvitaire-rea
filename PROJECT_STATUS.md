# PROJECT_STATUS.md — solvitaire-rea

## Completed goals (current goal)

1. **Add README.md** — User-facing documentation: how to build and run, API command list, project structure. ✅ DONE
2. **Fix CFR decompiler artifacts in Java source** — All `** GOTO` / `** break` markers removed across 11 affected files. ✅ DONE
3. **Run the game via API mode to verify behavior** — ✅ DONE (2026-11-12): game launches in API mode (`javaw -Djava.library.path=C:/sgame -jar ...solvitaire_game_from_pe.jar api`) on Java 25; flow verified end to end: `1^mode play` → `1^version klondike 1` → `1^difficulty easy` → `1^deal` → `1^status` (STARTSOLVE) → `1^solve` → `1^wait` → `1^list` (84-move solution printed) → `1^step 3` → `1^status` (SOLVED) → `1^exit` clean. Caveats: commands need `<macro>^<command>` prefix (bare command crashes the API thread); `reset` before `mode play` crashes the shipped build's mode-selector dialog (pre-existing bug).
4. **GitHub repo** — https://github.com/minhngoc25a/solvitaire-rea — pushed with full source code.

## Deeper next steps (work beyond current goal)

Ordered by priority. Pick one slice at a time.

**1. Make the refactored source compile cleanly** — In progress. Gradle build is set up (`build.gradle.kts`, `settings.gradle.kts`, `config/checkstyle/google_checks.xml`); `gradle compile-java`, `lint` (`checkstyleMain` + `spotlessJavaCheck`), and `fmt` (`spotlessApply`) tasks all resolve and run, but Checkstyle/Spotless cannot produce useful results until the source compiles (they parse source text).

Fixed so far (each verified → 0 errors for that file):
- `data/do.java` → copied to `data/do_0.java` (class `do` renamed to `do_0`; `do` is a Java keyword); original `do.java` neutralized; `util/co_0.java` updated to import/reference `do_0`. → **co_0 compiles cleanly.**
- All 779 `data/*.java` `static final int[][] AboutDialog` fields made `public` (cross-package access from `util.co_0`).
- `reader/qi_0BoardReader.java` — added missing closing `}` before `@Override`. → **compiles cleanly (0 errors).**
- `native/WinUser32.java` — package `com.solvitaire.solitaire.native` renamed to `com.solvitaire.solitaire.jni` (`native` is a Java keyword, illegal as a package segment). Nothing imports `solitaire.native.WinUser32`. → **compiles cleanly.**
- `engine/GameStats.java` — CFR block structure fixed (closing `}` added before affected `@Override` methods); dead CFR code removed from `AboutDialog(qw_0,Card,...)` method; remaining methods stubbed out. → **~30 errors remaining (CFR artifacts in stubbed methods).**
- `ui/panels/uPanel.java` — CFR block structure fixed (closing `}` added before `b()` method; EOF `}` added). → **compiles cleanly (0 errors).**
- `engine/SolitaireGameEngine.java` — CFR structure fixes: `data/do`→`do_0` reference updated, `data.do` import removed; `com.solvitaire.app.ApiCommandProcessor` import removed (class excluded); `com.solvitaire.api.DesktopDuplication` import removed (class excluded); `com.solvitaire.app.ApiCommandProcessor.k` field type changed to `Thread`; `MainWindow.AboutDialog()` made public; ~30 fields/methods made public; `ErrorDialog.AboutDialog(String,boolean)` made public; `Rectangle` field names fixed; `StringBuffer`→`String` fixes; unreachable `while (bl3 && false)` block removed; `DesktopDuplication` usage stubbed out; `br` field initialized with `new ChallengeSolver(this)`; `bs` field typed as `Object`. → **~20 errors remaining (cross-package access + CFR artifacts).**
- `util/qy_0.java` — Fields (`AboutDialog`, `b`, `c`, `d`, `e`, `f`), constructors, and `AboutDialog()` methods made public. → **compiles cleanly.**
- `util/q.java` — `AboutDialog` field made public. → **compiles cleanly.**
- `util/pX.java` — fields `d`, `e`, `f`, `g`, `h`, `i`, `j`, `k` made public. → **compiles cleanly.**
- `util/pH.java` — fields made public; constructor made public. → **compiles cleanly.**
- `util/s_0.java` — `e` field and copy constructor made public. → **compiles cleanly.**
- `util/t.java` — `k` field made public. → **compiles cleanly.**
- `engine/CardImage.java` — constructor made public. → **compiles cleanly.**
- `ui/MainWindow.java` — `c(int)` and `d(String)` methods made public. → **compiles cleanly.**
- `engine/SolitaireSolver.java` — `Random` variable name conflict fixed; `toArray()` cast to `long[]` fixed; `block3` label removed; local variable declarations added. → **~50 errors remaining (cross-package field access + method signature mismatches).**

Remaining compile errors (reduced from ~200 to ~94 after extensive fixes):
- Fixed: ~165 fields/methods made public across SolitaireGameEngine, ChallengeSolver, MainWindow, t, j, i, qa, BoardReader, ErrorDialog, CardStack, Card, CardImage, CardRun, g, qp_0, pLPanel, h, si, GameStats, SolitaireSolver
- Remaining: Method signature mismatches (AboutDialog overloads, b(), c(), etc.), cross-package field access in SolitaireSolver, XChart type issues in qzPanel.java
- Strategy: Remaining errors require understanding original obfuscated code intent — not mechanical fixes
- The shipped JAR in `C:/sgame/` runs fine; compilation issues are in the recovered source only

**2. Analyze the native DLL `com_solvitaire_app_winuser32.dll`** — ✅ DONE (2026-11-12). PE32+ x64, 45,056 bytes. 33 JNI exports mapped in `jini/WinUser32.java`. Imports: USER32 (window/cursor/input), ADVAPI32 (registry), KERNEL32 (memory/process), SHELL32 (notification state), GDI32 (screen capture via GDI), d3d11/dxgi/D3DCOMPILER_47 (DirectX screen capture), d2d1 (ordinal-only). Embedded HLSL tone-mapping shader (scRGB/PQ10/linear BGRA8). PDB path: `C:\Users\Phil\solitaire\solitaire\native\com_solvitaire_app_winuser32.pdb`. See docs/FILE_FORMATS.md for full details.

**3. Document reverse engineering methodology and file formats** — ✅ DONE (2026-11-12). Created `docs/RE_METHODOLOGY.md`, `docs/FILE_FORMATS.md`, `docs/API_PROTOCOL.md`. Added `docs/` section to AGENTS.md.

**4. Changelog** — `CHANGELOG/2026-11-12.md` updated with native DLL analysis entry.

**5. Analyze the InstallForge installer** (`decompiled_installer/`, 2,826 functions) — ✅ DONE (2026-11-12). Two embedded 7z archives at file offsets `1371408` (SETUPCONFIGURATION) and `1409045` (main payload). Full extraction flow documented in docs/FILE_FORMATS.md:

- `FUN_00411ef0` (17,349 bytes) — installer main logic
- Initialization: GetModuleHandle, HeapCreate, function pointer table, Advapi32 registry functions
- Singleton mutex: `__InstallForgeSetup__`
- GUID via CoCreateGuid/StringFromGUID2
- Install dir: `FUN_004171d5` strips `\\?\` prefix, truncates at last `\`; `FUN_00401560` → SHCreateDirectory
- SETUPCONFIGURATION from PE resource: LoadLibraryW(self) → FindResourceW(RT_RCDATA, "SETUPCONFIGURATION") → LoadResource/LockResource/SizeofResource → FUN_0041f260 (open) → FUN_0041f580 (4KB buffer) → FUN_0041f9e0 (read resource bytes) → FUN_0041f1a0 (flush+close)
- Main loop at LAB_0041289d: FUN_00418a64(open) → FUN_004189d4(has-more) → while FUN_00418a42(get-name) → FUN_004189f6(extract vtable 0x24) → FUN_00401150(path transform) → FUN_00418a1f(flag check 0x1c) → if 0: FUN_00401560(SHCreateDirectory) → FUN_00418b1d(extract to disk, vtable 0x28) → FUN_00418942(close on error)


**6. Analyze the Launch4j launcher** (`decompiled_game/`, 240 functions) — ✅ DONE (2026-11-12). PE32 x86 native EXE. Full launch chain documented in docs/FILE_FORMATS.md:

- Entry: `entry` (0x00401590) → `__set_app_type(2)` → `FUN_00401180` (CRT main) → `FUN_0040ba30` (cmd-line parse) → `FUN_00401803` (Launch4j WinMain) → `FUN_00404890` (JNI/Java launch)
- `FUN_0040ba30`: parses command line (skips program name/quoted args), gets show cmd from STARTUPINFO, calls `FUN_00401803(hInstance, 0, cmd_line, show_cmd)`
- `FUN_00401803`: calls `FUN_00404890`; on 0xb7 shows existing window (return 2); on 1 runs message loop + logs exit code
- `FUN_00404890`: initial check `FUN_00401c58` → path buffer setup → `FUN_004025a0` → `FUN_00401d3a`(core launch) → on success: `FUN_00403001` → `FUN_00402a7b`(launch JVM with args, 32768-char arg buffer) → `FUN_004034b3` → `FUN_00403903` → return 1
- JAR overlay at PE offset 0x001b75fc; Main-Class: com.solvitaire.solitaire.Main; depends on XChart 3.8.1


**7. Add tests** — Test skeletons created (blocked by compilation errors):
   - `test/java/com/solvitaire/solitaire/engine/CardStackTest.java` — CardStack push/pop/peek/LIFO/canAccept
   - `test/java/com/solvitaire/solitaire/engine/CardRunTest.java` — CardRun add/remove/validate
   - `test/java/com/solvitaire/solitaire/engine/GameMoveTest.java` — GameMove construction/equality
   - `test/java/com/solvitaire/solitaire/engine/GameStatsTest.java` — GameStats win/loss/move/time tracking
   - `test/java/com/solvitaire/solitaire/solver/KlondikeSolverTest.java` — KlondikeSolver solve/step/difficulty
   - `test/java/com/solvitaire/solitaire/solver/SpiderSolverTest.java` — SpiderSolver suit sequences/empty columns
   - `test/java/com/solvitaire/solitaire/solver/SpiderVariantSolverTest.java` — Variant-specific rules
   All tests are documentation skeletons with TODO comments. They cannot compile until
   the main source compilation errors (~60 remaining) are resolved.

**8. Exercise remaining API commands** — Only `mode`/`version`/`difficulty`/`deal`/`status`/`solve`/`wait`/`list`/`step`/`exit` were verified. Untested: `keystroke`, `readcards`, `challenge`, `skipads`, `run`, `pause`, `tracelevel`. Also confirm `reset` before `mode play` crashes (documented pre-existing bug).

## Project status

**Goals complete.** README added, CFR `** GOTO`/`** break` artifacts removed, API mode verified end-to-end on Java 25, GitHub pushed. The game was verified end-to-end via API mode on 2026-11-12 (fresh launch → `mode play` → `version klondike 1` → `difficulty easy` → `deal` → `status` STARTSOLVE → `solve` → `wait` → `list` (84-move solution) → `step 3` → `status` SOLVED → `exit`).

**Compilation status (2026-11-13):** ~85 errors remain across SolitaireGameEngine (~20), SolitaireSolver (~50), GameStats (~15), qzPanel (~4), and other files. The remaining errors are CFR decompilation artifacts — method signature mismatches, cross-package field access, and type inconsistencies that require understanding the original obfuscated code intent. ~120 errors were fixed across 15+ files. The shipped JAR in `C:/sgame/` runs fine; compilation issues are in the recovered source only.

**New blocker found (2026-11-13):** SolitaireSolver.java has ~50 errors from CFR decompilation — cross-package field access to SolitaireGameEngine fields, missing local variable declarations, and invalid label references (`block3`). These require original code intent to fix properly.

Pre-existing shipped-build bugs (not fixed):
- `reset` before `mode play` crashes the mode-selector dialog.
- Bare API commands (no `<macro>^<command>` prefix) crash the API input thread.

## Changelog file convention

One changelog file per day, named `CHANGELOG/YYYY-MM-DD.md`. Do **not** rename a previous day's file; create a new file for the current day. `CHANGELOG/2026-11-12.md` was created for today rather than renaming `CHANGELOG/2026-11-11.md`.
