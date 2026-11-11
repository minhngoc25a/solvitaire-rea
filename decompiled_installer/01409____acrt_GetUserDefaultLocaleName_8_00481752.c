// Function: ___acrt_GetUserDefaultLocaleName@8
// Entry: 00481752
// Size: 60 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_GetUserDefaultLocaleName@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_GetUserDefaultLocaleName_8(wchar_t *param_1,int param_2)

{
  _func_int_wchar_t_ptr_int *p_Var1;
  LCID LVar2;
  ulong uVar3;
  
  p_Var1 = try_get_GetUserDefaultLocaleName();
  if (p_Var1 == (_func_int_wchar_t_ptr_int *)0x0) {
    uVar3 = 0;
    LVar2 = GetUserDefaultLCID();
    ___acrt_LCIDToLocaleName_16(LVar2,param_1,param_2,uVar3);
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)(param_1,param_2);
  }
  return;
}


