// Function: ___acrt_InitializeCriticalSectionEx@12
// Entry: 0048178e
// Size: 75 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_InitializeCriticalSectionEx@12
   
   Library: Visual Studio 2019 Release */

void ___acrt_InitializeCriticalSectionEx_12(LPCRITICAL_SECTION param_1,DWORD param_2,long param_3)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  
  p_Var1 = FUN_00481c0c(0xf,"InitializeCriticalSectionEx",(int *)&DAT_0050e3fc,(int *)&DAT_0050e404)
  ;
  if (p_Var1 == (_func_int_wchar_t_ptr_ulong_long *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)((wchar_t *)param_1,param_2,param_3);
  }
  return;
}


