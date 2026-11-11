// Function: FUN_00481950
// Entry: 00481950
// Size: 64 bytes
// Thunk: false
// External: false


int FUN_00481950(ulong param_1)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  int iVar2;
  long unaff_ESI;
  wchar_t *pwVar3;
  
  p_Var1 = FUN_00481c0c(0x1b,"AppPolicyGetShowDeveloperDiagnostic",(int *)&DAT_0050e438,
                        (int *)&DAT_0050e43c);
  if (p_Var1 == (_func_int_wchar_t_ptr_ulong_long *)0x0) {
    iVar2 = -0x3ffffddb;
  }
  else {
    pwVar3 = (wchar_t *)0xfffffffa;
    (*(code *)PTR_guard_check_icall_00532084)();
    iVar2 = (*p_Var1)(pwVar3,param_1,unaff_ESI);
  }
  return iVar2;
}


