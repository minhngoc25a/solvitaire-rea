// Function: ___acrt_AppPolicyGetProcessTerminationMethodInternal@4
// Entry: 00481990
// Size: 64 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_AppPolicyGetProcessTerminationMethodInternal@4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int ___acrt_AppPolicyGetProcessTerminationMethodInternal_4(ulong param_1)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  int iVar2;
  long unaff_ESI;
  wchar_t *pwVar3;
  
  p_Var1 = FUN_00481c0c(0x1c,"AppPolicyGetWindowingModel",(int *)&DAT_0050e43c,(int *)&DAT_0050e440)
  ;
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


