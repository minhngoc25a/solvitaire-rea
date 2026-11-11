// Function: FUN_004c0eb3
// Entry: 004c0eb3
// Size: 98 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_004c0eb3(void)

{
  __acrt_ptd *p_Var1;
  undefined **ppuVar2;
  int iVar3;
  void *pvStack_14;
  
  p_Var1 = FUN_0047dbec();
  if (((*(uint *)(p_Var1 + 0x350) & DAT_00540e44) != 0) &&
     (iVar3 = *(int *)(p_Var1 + 0x4c), iVar3 != 0)) {
    ExceptionList = pvStack_14;
    return iVar3;
  }
  ___acrt_lock(4);
  ppuVar2 = __updatetlocinfoEx_nolock((undefined4 *)(p_Var1 + 0x4c),DAT_005441f4);
  FUN_004c0f13();
  if (ppuVar2 != (undefined **)0x0) {
    iVar3 = FUN_004c0f1c();
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


