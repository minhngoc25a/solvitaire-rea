// Function: FUN_004258d0
// Entry: 004258d0
// Size: 63 bytes
// Thunk: false
// External: false


uint FUN_004258d0(int param_1,int *param_2)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 8))) {
    param_2 = *(int **)(*(int *)(param_1 + 0xc) + (int)param_2 * 4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    uVar1 = (uint)param_2 & -(uint)(*param_2 != 0);
  }
  return uVar1;
}


