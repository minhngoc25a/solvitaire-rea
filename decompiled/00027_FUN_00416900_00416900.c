// Function: FUN_00416900
// Entry: 00416900
// Size: 42 bytes
// Thunk: false
// External: false


void __cdecl FUN_00416900(int param_1)

{
  *(undefined1 *)(param_1 + 0x368) = 0;
  if (*(char *)(param_1 + 0x36a) != '\0') {
    *(undefined1 *)(param_1 + 0x36a) = 0;
    FUN_0044b7e0(param_1 + 0x2e0);
    return;
  }
  return;
}


