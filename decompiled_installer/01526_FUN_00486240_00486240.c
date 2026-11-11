// Function: FUN_00486240
// Entry: 00486240
// Size: 63 bytes
// Thunk: false
// External: false


void __cdecl FUN_00486240(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  _memset((void *)(param_1 + 0x58),0,0x100);
  *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + 1;
  return;
}


