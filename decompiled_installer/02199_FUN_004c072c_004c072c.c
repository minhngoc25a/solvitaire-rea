// Function: FUN_004c072c
// Entry: 004c072c
// Size: 463 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl FUN_004c072c(int param_1)

{
  bool bVar1;
  __crt_signal_action_t *p_Var2;
  code *pcVar3;
  __acrt_ptd *p_Var4;
  int iVar5;
  int iVar6;
  __acrt_ptd *p_Var7;
  undefined4 local_38;
  int local_34;
  void *local_14;
  
  p_Var7 = (__acrt_ptd *)0x0;
  local_38 = 0;
  bVar1 = true;
  if (param_1 < 0xc) {
    if (param_1 != 0xb) {
      if (param_1 == 2) goto LAB_004c07b5;
      if (param_1 != 4) {
        if (param_1 == 6) goto LAB_004c07b5;
        if (param_1 != 8) goto LAB_004c0788;
      }
    }
    p_Var7 = FUN_0047dd3d();
    if (p_Var7 == (__acrt_ptd *)0x0) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = siglookup(param_1,*(__crt_signal_action_t **)p_Var7);
    if (p_Var2 == (__crt_signal_action_t *)0x0) {
LAB_004c0788:
      p_Var7 = FUN_0042470e();
      *(undefined4 *)p_Var7 = 0x16;
      FUN_004243be();
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = p_Var2 + 8;
    bVar1 = false;
  }
  else {
    if (((param_1 != 0xf) && (param_1 != 0x15)) && (param_1 != 0x16)) goto LAB_004c0788;
LAB_004c07b5:
    p_Var2 = (__crt_signal_action_t *)get_global_action_nolock(param_1);
  }
  local_34 = 0;
  if (bVar1) {
    ___acrt_lock(3);
  }
  pcVar3 = *(code **)p_Var2;
  if (bVar1) {
    pcVar3 = (code *)FUN_004804fb((uint)pcVar3);
  }
  if (pcVar3 == (code *)0x1) goto LAB_004c0876;
  if (pcVar3 == (code *)0x0) {
    if (bVar1) {
      ___acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00480228(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_34 = *(int *)(p_Var7 + 4);
    *(int *)(p_Var7 + 4) = 0;
    if (param_1 == 8) {
      p_Var4 = FUN_0047dbec();
      local_38 = *(undefined4 *)(p_Var4 + 8);
      p_Var4 = FUN_0047dbec();
      *(undefined4 *)(p_Var4 + 8) = 0x8c;
      goto LAB_004c0845;
    }
  }
  else {
LAB_004c0845:
    if (param_1 == 8) {
      iVar5 = DAT_0051a734 * 0xc + *(int *)p_Var7;
      iVar6 = DAT_0051a738 * 0xc + iVar5;
      for (; iVar5 != iVar6; iVar5 = iVar5 + 0xc) {
        *(undefined4 *)(iVar5 + 8) = 0;
      }
      goto LAB_004c0876;
    }
  }
  *(uint *)p_Var2 = DAT_0053fbc0;
LAB_004c0876:
  FUN_004c08b6();
  if (pcVar3 != (code *)0x1) {
    if (param_1 == 8) {
      p_Var4 = FUN_0047dbec();
      (*(code *)PTR_guard_check_icall_00532084)(8,*(undefined4 *)(p_Var4 + 8));
      (*pcVar3)();
    }
    else {
      (*(code *)PTR_guard_check_icall_00532084)(param_1);
      (*pcVar3)();
      if ((param_1 != 0xb) && (param_1 != 4)) {
        ExceptionList = local_14;
        return 0;
      }
    }
    *(int *)(p_Var7 + 4) = local_34;
    if (param_1 == 8) {
      p_Var7 = FUN_0047dbec();
      *(undefined4 *)(p_Var7 + 8) = local_38;
    }
  }
  ExceptionList = local_14;
  return 0;
}


