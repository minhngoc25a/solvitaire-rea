// Function: FUN_004352c0
// Entry: 004352c0
// Size: 50 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004352c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x2b8) == 0) {
    return 0xfffffffd;
  }
  *(undefined4 *)(param_1 + 0x2cc) = param_2;
  *(undefined4 *)(param_1 + 0x2d0) = param_3;
  return 0;
}


