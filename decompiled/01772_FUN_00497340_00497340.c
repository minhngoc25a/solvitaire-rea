// Function: FUN_00497340
// Entry: 00497340
// Size: 42 bytes
// Thunk: false
// External: false


void __cdecl FUN_00497340(int param_1,undefined4 param_2)

{
  *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)((uint)param_2 >> 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


