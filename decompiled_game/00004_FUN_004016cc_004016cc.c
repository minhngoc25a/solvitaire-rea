// Function: FUN_004016cc
// Entry: 004016cc
// Size: 112 bytes
// Thunk: false
// External: false


undefined4 FUN_004016cc(HWND param_1)

{
  uint uVar1;
  DWORD local_10 [2];
  
  GetWindowThreadProcessId(param_1,local_10);
  if ((DAT_00418c40 == local_10[0]) &&
     (uVar1 = GetWindowLongA(param_1,-0x10), (uVar1 & 0x10000000) != 0)) {
    DAT_0041000c = 0;
    ShowWindow(DAT_00410a24,0);
    return 0;
  }
  return 1;
}


