// Function: FUN_004015d0
// Entry: 004015d0
// Size: 252 bytes
// Thunk: false
// External: false


void FUN_004015d0(HWND param_1)

{
  if (DAT_0041000c != 0) {
    if (DAT_0040c000 == 0) {
      DAT_0041000c = 0;
      ShowWindow(DAT_00410a24,0);
      if ((DAT_00410a20 != 0) && (DAT_00410a28 != 0)) {
        KillTimer(param_1,1);
        FUN_00401f36();
        PostQuitMessage(0);
      }
    }
    else {
      DAT_0040c000 = DAT_0040c000 + -100;
      if (DAT_00410a20 != 0) {
        EnumWindows(FUN_004016cc,0);
      }
    }
  }
  GetExitCodeProcess(DAT_00418c38,(LPDWORD)&DAT_00410014);
  if ((DAT_00410014 != 0x103) || ((DAT_0041000c == 0 && (DAT_00410010 == 0)))) {
    KillTimer(DAT_00410a24,1);
    PostQuitMessage(0);
  }
  return;
}


