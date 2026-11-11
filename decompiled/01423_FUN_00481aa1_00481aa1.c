// Function: FUN_00481aa1
// Entry: 00481aa1
// Size: 160 bytes
// Thunk: false
// External: false


void FUN_00481aa1(void)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  _func_int_wchar_t_ptr_ulong_long *p_Var2;
  int iVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  wchar_t local_14 [6];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  p_Var1 = FUN_00481c0c(9,"GetProcessWindowStation",(int *)&DAT_0050e3dc,(int *)&DAT_0050e3e4);
  if (p_Var1 != (_func_int_wchar_t_ptr_ulong_long *)0x0) {
    puVar7 = &DAT_0050e3f4;
    pcVar5 = "GetUserObjectInformationW";
    p_Var2 = FUN_00481c0c(0xd,"GetUserObjectInformationW",(int *)&DAT_0050e3f4,(int *)&DAT_0050e3fc)
    ;
    if (p_Var2 != (_func_int_wchar_t_ptr_ulong_long *)0x0) {
      lVar8 = 0x481afb;
      (*(code *)PTR_guard_check_icall_00532084)();
      iVar3 = (*p_Var1)((wchar_t *)pcVar5,(ulong)puVar7,lVar8);
      if (iVar3 != 0) {
        local_14[0] = L'\0';
        local_14[1] = L'\0';
        lVar8 = 0;
        uVar6 = 0xc;
        local_14[2] = L'\0';
        local_14[3] = L'\0';
        local_14[4] = L'\0';
        local_14[5] = L'\0';
        pwVar4 = local_14;
        (*(code *)PTR_guard_check_icall_00532084)(iVar3,1);
        (*p_Var2)(pwVar4,uVar6,lVar8);
      }
    }
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


