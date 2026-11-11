// Function: FUN_005011c2
// Entry: 005011c2
// Size: 34 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_005011c2(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(undefined4 *)(param_2 + 0x18) = 0x2a;
  return 0xffffffff;
}


