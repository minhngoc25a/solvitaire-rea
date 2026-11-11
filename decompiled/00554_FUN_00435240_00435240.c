// Function: FUN_00435240
// Entry: 00435240
// Size: 43 bytes
// Thunk: false
// External: false


void __cdecl FUN_00435240(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x2b8), piVar1 != (int *)0x0)) {
    LOCK();
    piVar1[0xd] = param_2;
    UNLOCK();
    if (*(code **)(*piVar1 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00435268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x14))();
      return;
    }
  }
  return;
}


