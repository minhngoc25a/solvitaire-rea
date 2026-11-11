// Function: FUN_0047e10f
// Entry: 0047e10f
// Size: 95 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_0047e10f(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*param_1);
  piVar2 = *(int **)(*(int *)*param_2 + 0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_00540e48)) {
      FUN_004247be(piVar2);
    }
  }
  FUN_0047e16e();
  ExceptionList = local_14;
  return;
}


