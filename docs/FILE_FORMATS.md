# File Formats — solvitaire-rea

## 1. Installer: `solvitaire_installv5.3.3.exe`

- **Format:** PE32 x86, InstallForge installer stub with zeroed section table (packed).
- **Size:** 37.8 MB.
- **Entry point:** `0x10a943` (PE header), actual `0x0050a943` after analysis.

### Two Embedded 7-Zip Archives

| Offset | Archive | Contents | Destination |
|--------|---------|----------|-------------|
| `1371408` | SETUPCONFIGURATION | 11 installer data files | `extracted_archive1/` |
| `1409045` | main payload | 171 game payload files | `extracted_archive2/` |

### Archive1 files (BASE64-encoded names)

Decoded names include: `Commands.dat`, `Desktop.dat`, `TS.dat`, `Registry.dat`, `StartMenu.dat`, `SC.dat`, `Serials.dat`, `Variables.dat`, `Default.inf`, `languages.dat`, `license.rtf`.

### Archive2 files

Decoded names include: `Uninstall.exe`, `com_solivitaire_app_winuser32.dll`, `solivitaire.exe`, `solivitaire.ico`, `solivitairejc.exe`, `solivitairejr.exe`, etc.

### Installer Execution Flow

`FUN_00411ef0` (17,349 bytes) is the installer main logic. The flow:

1. **Initialization** — `GetModuleHandleW(NULL)` → module handle; `HeapCreate(0, 0x1000, 0)` → heap; initialize function pointer table (`DAT_005381b0`…); load `Advapi32.dll` and resolve registry functions (`RegDeleteKeyExW`, `RegSetValueExW`, `RegDeleteTreeW`, `RegEnumKeyExW`, `RegCopyTreeW`).

2. **Singleton mutex** — `CreateMutexW(NULL, 1, L"__InstallForgeSetup__")`; if `GetLastError() == ERROR_ALREADY_EXISTS (0xb7)`, show "There is already an InstallForge setup running" dialog and exit.

3. **GUID generation** — `CoCreateGuid` + `StringFromGUID2` → setup instance GUID.

4. **Install directory** — `FUN_004171d5` gets the installer's own module filename, strips the `\\?\` prefix if present, and truncates at the last `\` → the directory containing the installer EXE. `FUN_00401560` calls `SHCreateDirectory` on it (returns true if `ERROR_SUCCESS`, `ERROR_ALREADY_EXISTS`, or `ERROR_ACCESS_DENIED`).

5. **SETUPCONFIGURATION archive from PE resource:**
   - `pWStack_11c = install_dir + u_setupConfiguration_archive` (path concat)
   - `LoadLibraryW(install_dir)` — loads the installer EXE as a library to access its resources
   - `FindResourceW(hModule, L"SETUPCONFIGURATION", RT_RCDATA(0xa))` — finds the embedded SETUPCONFIGURATION resource
   - `LoadResource`/`LockResource`/`SizeofResource` — extracts the resource bytes (the SETUPCONFIGURATION 7z archive at file offset 1371408)
   - `FUN_0041f260(0xffffffff, archive_path)` — opens a file handle to `pWStack_11c`
   - `FUN_0041f580(handle, 0x1000)` — initializes a 4KB read buffer
   - `FUN_0041f9e0(handle, resource_bytes, resource_size)` — writes resource bytes into the archive handle
   - `FUN_0041f1a0(handle)` — flushes buffer to disk, closes handle (SETUPCONFIGURATION archive now on disk at `pWStack_11c`)

6. **Main archive extraction loop (from `pWStack_11c`):**
   - `FUN_00418a64(0xffffffff, pWStack_11c, 2)` — opens the archive at `pWStack_11c` (mode flag 2)
   - `FUN_004189d4(handle)` — returns non-zero if more entries exist
   - While `FUN_00418a42(handle)` — get next entry name (non-zero = more entries)
   - `FUN_004189f6(handle, entry_idx)` — extract entry via vtable call (offset 0x24)
   - `FUN_00401150(transformed_path, entry_idx)` — path transform function (renames/transforms the extracted destination path)
   - `FUN_00418a1f(handle)` — returns non-zero if entry needs special handling (offset 0x1c)
   - If returns 0: `FUN_0041f056(buffer, entry_idx)` then `FUN_00401560(path)` — `SHCreateDirectory` to create the destination directory
   - `FUN_00418942(handle)` — close archive on error
   - `FUN_00418b1d(handle, entry_idx)` — extract entry to disk (calls `FUN_00418af2(handle, entry_idx, 0)`, vtable offset 0x28); returns -1 on failure

### Archive Access API (vtable-based, `DAT_00542930` = archive context)

| Function | Role | Vtable offset |
|----------|------|---------------|
| `FUN_00418a64` | Open archive (path, mode) → handle | — |
| `FUN_004189d4` | Has more entries | — |
| `FUN_00418a42` | Get entry name | — |
| `FUN_004189f6` | Extract via vtable | 0x24 |
| `FUN_00418b1d` | Extract to disk (calls FUN_00418af2 with param3=0) | — |
| `FUN_00418af2` | Internal extract | 0x28 |
| `FUN_00418a1f` | Entry flag check | 0x1c |
| `FUN_00418942` | Close archive | — |

### In-Memory Archive API (`DAT_0054348c` = archive context)

| Function | Role |
|----------|------|
| `FUN_0041f260` | Open archive from file path → handle |
| `FUN_0041f580` | Initialize read buffer (size param) |
| `FUN_0041f9e0` | Read bytes into archive handle |
| `FUN_0041f1a0` | Flush buffer to disk, close handle |

### Key installer functions (Ghidra decompiled)

| Function | Role | Size |
|----------|------|------|
| `FUN_00411ef0` | Installer main logic | 17,349 bytes |
| `FUN_00418a64` | Archive open | 103 bytes |
| `FUN_004189d4` | Archive has-more | 34 bytes |
| `FUN_00418a42` | Archive get-name | 34 bytes |
| `FUN_004189f6` | Archive extract via vtable | 41 bytes |
| `FUN_00418b1d` | Archive extract | 18 bytes |
| `FUN_00418af2` | Internal extract | 43 bytes |
| `FUN_00418a1f` | Entry flag check | 35 bytes |
| `FUN_00418942` | Close archive | 64 bytes |
| `FUN_00401150` | Path transform | 769 bytes |
| `FUN_0041f260` | Open archive from file | 221 bytes |
| `FUN_0041f580` | Init read buffer | 176 bytes |
| `FUN_0041f9e0` | Read from archive | 108 bytes |
| `FUN_0041f1a0` | Process/close archive | 136 bytes |
| `FUN_00401560` | `SHCreateDirectory` wrapper | 106 bytes |
| `FUN_004171d5` | Get installer directory | 93 bytes |


## 2. Game Launcher: Launch4j wrapper (native EXE)

- **Format:** PE32 x86 native EXE.
- **Entry chain:** `entry` (0x00401590) → `__set_app_type(2)` → `FUN_00401180` (CRT main) → `FUN_0040ba30` (cmd-line parse) → `FUN_00401803` (Launch4j WinMain) → `FUN_00404890` (JNI/Java launch).
- **JAR overlay:** PE offset `0x001b75fc` — `solvitaire_game_from_pe.jar` embedded as PE overlay.
- **Main-Class:** `com.solvitaire.solitaire.Main` (refactored from obfuscated `com.solvitaire.app.Main`).

### Launch chain detail

| Function | Address | Role |
|----------|---------|------|
| `entry` | 0x00401590 | Sets app type, calls CRT main (does not return) |
| `FUN_00401180` | 0x00401180 | CRT main: exception filter, stdio, fmode, environ init → calls FUN_0040ba30 |
| `FUN_0040ba30` | 0x0040ba30 | Parses command line (skips program name, quoted args), gets show cmd → calls FUN_00401803 |
| `FUN_00401803` | 0x00401803 | Launch4j WinMain: calls FUN_00404890; on 0xb7 shows existing window (return 2); on 1 runs message loop + logs exit code |
| `FUN_00404890` | 0x00404890 | JNI/Java launch: initial check FUN_00401c58 → path buffer setup → FUN_004025a0 → FUN_00401d3a(core launch) → on success: FUN_00403001 → FUN_00402a7b(launch JVM with args, 32768-char arg buffer) → FUN_004034b3 → FUN_00403903 → return 1 |

### FUN_00404890 (JNI/Java launch) sub-flow

1. `FUN_00401c58(...)` — initial check; if zero, return 0 (failure)
2. Zero 260-byte path buffer (`local_8120`)
3. `FUN_004025a0(buffer)` → resolve JAR path/handle into `iVar7`; if -1, skip
4. `FUN_00401d3a(param_1, buffer, iVar7)` → core JNI launch; if returns 0, skip
5. Log JNI messages via `fprintf` ("JNI:\t\t%s\n")
6. `FUN_00401e4d()` — cleanup/error handler
7. `FUN_00403001()` → if 0: return 0xb7 (ERROR_ALREADY_EXISTS)
8. `FUN_004030d5` → `FUN_00404726` → `FUN_00403352` → `FUN_004033d0` → `FUN_004021ab` → `FUN_00402629` → `FUN_00402e1f` → `FUN_00402e9d` → `FUN_00402a7b` (main launcher: builds Java command line into 32768-char buffer `local_801c`) → `FUN_004034b3` → `FUN_00403903` → log launcher → return 1

### FUN_00401803 (Launch4j WinMain) sub-flow

1. `FUN_00404890(cmd_line, 0)` → JNI/Java launch
2. If return == 0xb7: `FUN_0040173c()` (find existing window) → ShowWindow(SW_SHOW) → SetForegroundWindow → `FUN_00401d21()` → return 2
3. If return == 1: `FUN_00402168(4)` → `DAT_0041000c`; `FUN_00402168(0x1f)` → `DAT_00410008`; create message-only window; message loop; log "Exit code:\t%d\n"; `FUN_00401d21()` → return exit code
4. Else: error path → return non-1 value


## 3. Game JAR: `solvitaire_game_from_pe.jar`

- **Format:** Standard ZIP/JAR, decompiled with CFR 0.152 into 1,216 Java source files.
- **Dependency:** XChart 3.8.1.
- **Native dependency:** `com_solvitaire_app_winuser32.dll` must be on `java.library.path`.

### Refactored package structure (`com.solvitaire.solitaire`)

| Package | Files | Purpose |
|---------|-------|---------|
| root | 1 | `Main.java` entry point |
| `engine` | 7 | `SolitaireGameEngine`, `CardStack`, `Card`, `CardRun`, `GameMove`, `CardImage`, `GameStats` |
| `solver` | 7 | `SolitaireSolver`, `SolverException`, `KlondikeSolver`, `SpiderSolver`, `SpiderVariantSolver` |
| `reader` | 6 | `BoardReader` (abstract), `SpiderBoardReader`, `KlondikeBoardReader`, etc. |
| `ui` | 5 | `MainWindow`, `ModeSelector`, `AboutDialog`, `MainFrame`, `GameFrame` |
| `ui.panels` | 19 | UI panel classes |
| `ui.handlers` | 108 | ActionListener/button handler classes |
| `api` | 2 | `ApiCommandProcessor`, `DesktopDuplication` (excluded from build) |
| `challenge` | 1 | `ChallengeSolver` |
| `jini` | 1 | `WinUser32` (JNI native wrapper; package renamed from `native`) |
| `config` | 1 | `GameConfig` |
| `util` | 71 | `ErrorDialog`, `ApiErrorCodes`, utilities |
| `data` | 779 | Datatable classes (`int[][]` arrays) |

## 4. Native DLL: `com_solvitaire_app_winuser32.dll`

- **Format:** PE32+ x64, 45,056 bytes, SHA-256 `d1ceffb29798d6f30b11467f552d9596dd05c2379e0a669db2f058b97f76d537`.
- **Sections:** `.text` (0x6E06), `.rdata` (0x2346), `.data` (0x463), `.pdata` (0x48C), `.idata` (0xFC3), `.reloc` (0x8).
- **PDB path:** `C:\Users\Phil\solitaire\solitaire\native\com_solvitaire_app_winuser32.pdb`.

### Imported APIs

| DLL | Functions |
|-----|-----------|
| USER32.dll | `SetWindowPos`, `ShowWindow`, `IsIconic`, `SetFocus`, `GetKeyState`, `GetAsyncKeyState`, `SendInput`, `GetSystemMetrics`, `SetActiveWindow`, `GetForegroundWindow`, `SetForegroundWindow`, `GetDC`, `ReleaseDC`, `GetWindowTextA`, `GetClientRect`, `GetWindowRect`, `GetCursorPos`, `ClientToScreen`, `WindowFromPoint`, `GetParent`, `EnumChildWindows`, `EnumWindows`, `GetClassNameA`, `SystemParametersInfoA`, `MonitorFromPoint`, `MonitorFromWindow` |
| ADVAPI32.dll | `RegCloseKey`, `RegOpenKeyExA`, `RegQueryValueExA` |
| KERNEL32.dll | `OutputDebugStringA`, `HeapAlloc`, `GetProcessHeap`, `Sleep`, `GetModuleHandleA`, `GetProcAddress`, `RtlZeroMemory`, `RtlMoveMemory` |
| SHELL32.dll | `SHQueryUserNotificationState` |
| GDI32.dll | `CreateCompatibleBitmap`, `CreateCompatibleDC`, `DeleteDC`, `DeleteObject`, `GetDIBits`, `SelectObject`, `StretchBlt`, `SetStretchBltMode` |
| d3d11.dll | `D3D11CreateDevice` |
| d2d1.dll | ordinal-only import |
| dxgi.dll | `CreateDXGIFactory1`, `CreateDXGIFactory2` |
| D3DCOMPILER_47.dll | `D3DCompile` |

### JNI Exported Functions (33)

All `Java_com_solivitaire_app_WinUser32_*` functions mapped in `jini/WinUser32.java`:
- Window: `GetForegroundWindow`, `SetForegroundWindow`, `IsIconic`, `SetFocus`, `SetActiveWindow`, `ShowWindow`, `SetWindowPos`, `GetWindowRect`, `GetClientRect`, `ClientToScreenY`, `WindowFromPoint`, `GetParent`
- Input: `GetCursorPos`, `GetWindowTextA`, `getHwnd`, `getTitleHwnd`, `mouseMoveAbsolute`, `mouseClickDownUp`, `mouseClickDown`, `mouseClickUp`, `mouseLocation`, `keyEvent`
- Metrics: `GetSystemMetrics`
- Desktop duplication: `initDesktopDuplication`, `termDesktopDuplication`, `acquireDesktopDuplication`, `grabGdiScreenArea`, `grabD3dScreenArea`
- System: `getLastError`, `getAdapterDesc`, `getOutputDesc`, `getMachineGUID`, `queryUserNotificationState`
- SystemParameters: `SystemParametersInfoA`

Three functions exist in the DLL but have no `native` declaration in `WinUser32.java`: `getAdapterDesc`, `getOutputDesc`, `getMachineGUID`, `getTitleHwnd`, `queryUserNotificationState` — may be called via reflection or unused.

### HLSL Shader (embedded in `.rdata`)

Tone-mapping shader supporting scRGB, PQ10, and linear BGRA8 modes: `ToneMap`, `ToneMapReinhard`, `ToneMapLuma`, `PQ_to_linear`, `LinearToSRGB`, `main` (pixel shader with `SV_Position`/`SV_Target` semantics).
