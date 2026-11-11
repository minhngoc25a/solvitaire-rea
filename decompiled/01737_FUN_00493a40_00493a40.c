// Function: FUN_00493a40
// Entry: 00493a40
// Size: 102 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00493a40(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (*(int *)(param_1 + 0x304) != 0) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x304) + 4);
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x304) + 8);
    *param_4 = *(undefined4 *)(*(int *)(param_1 + 0x304) + 0xc);
    *(undefined4 *)(param_1 + 0x304) = **(undefined4 **)(param_1 + 0x304);
    return 0;
  }
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  return 0xffffffec;
}


