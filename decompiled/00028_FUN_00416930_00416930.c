// Function: FUN_00416930
// Entry: 00416930
// Size: 106 bytes
// Thunk: false
// External: false


void FUN_00416930(int *param_1)

{
  uint uVar1;
  
  if (DAT_005424ac != 0) {
    if (param_1 == (int *)0xffffffff) {
      FUN_00425a07((int)DAT_005424a8);
      return;
    }
    uVar1 = FUN_004258d0((int)DAT_005424a8,param_1);
    if (uVar1 != 0) {
      FUN_0044b880((int)param_1);
      HeapFree(DAT_00542264,0,*(LPVOID *)(uVar1 + 0x3c));
      if (*(int **)(uVar1 + 0x38) != (int *)0x0) {
        FUN_00425a87(*(int **)(uVar1 + 0x38));
      }
      FUN_00425965(DAT_005424a8,(int)param_1);
    }
  }
  return;
}


