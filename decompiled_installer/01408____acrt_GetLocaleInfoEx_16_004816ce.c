// Function: ___acrt_GetLocaleInfoEx@16
// Entry: 004816ce
// Size: 63 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_GetLocaleInfoEx@16
   
   Library: Visual Studio 2019 Release */

void ___acrt_GetLocaleInfoEx_16(wchar_t *param_1,ulong param_2,wchar_t *param_3,int param_4)

{
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int *p_Var1;
  LCID Locale;
  
  p_Var1 = try_get_GetLocaleInfoEx();
  if (p_Var1 == (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)(param_1,param_2,param_3,param_4);
  }
  return;
}


