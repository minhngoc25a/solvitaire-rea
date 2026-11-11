// Function: FUN_004c12b8
// Entry: 004c12b8
// Size: 129 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_004c12b8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((*(uint *)(param_1 + 0x350) & DAT_00540e44) == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
    ___acrt_lock(5);
    piVar2 = *(int **)(param_1 + 0x48);
    if (piVar2 != (int *)*param_2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = iVar1 + -1;
        UNLOCK();
        if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_00540e48)) {
          FUN_004247be(piVar2);
        }
      }
      piVar2 = (int *)*param_2;
      *(int **)(param_1 + 0x48) = piVar2;
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    FUN_004c1337();
  }
  else {
    piVar2 = *(int **)(param_1 + 0x48);
  }
  if (piVar2 != (int *)0x0) {
    FUN_004c1340();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


