// Function: FUN_0042fa20
// Entry: 0042fa20
// Size: 77 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042fa20(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 1;
  UNLOCK();
  while (iVar1 != 0) {
    LOCK();
    iVar1 = *param_1;
    if (iVar1 == 0) {
      *param_1 = 0;
      iVar1 = 0;
    }
    UNLOCK();
    while (iVar1 == 1) {
      LOCK();
      iVar1 = *param_1;
      if (iVar1 == 0) {
        *param_1 = 0;
        iVar1 = 0;
      }
      UNLOCK();
    }
    LOCK();
    iVar1 = *param_1;
    *param_1 = 1;
    UNLOCK();
  }
  return 0;
}


