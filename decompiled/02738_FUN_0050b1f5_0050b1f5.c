// Function: FUN_0050b1f5
// Entry: 0050b1f5
// Size: 46 bytes
// Thunk: false
// External: false


void FUN_0050b1f5(undefined4 *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)*param_1 + -1;
  *(int *)*param_1 = iVar1;
  UNLOCK();
  if ((iVar1 == 0) && ((undefined *)*param_1 != &DAT_00540e48)) {
    FUN_004247be((LPVOID)*param_1);
    *param_1 = &DAT_00540e48;
  }
  return;
}


