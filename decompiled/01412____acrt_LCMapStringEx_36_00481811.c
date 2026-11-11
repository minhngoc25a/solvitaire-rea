// Function: ___acrt_LCMapStringEx@36
// Entry: 00481811
// Size: 93 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_LCMapStringEx@36
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_LCMapStringEx_36
               (wchar_t *param_1,ulong param_2,wchar_t *param_3,int param_4,wchar_t *param_5,
               int param_6,_nlsversioninfo *param_7,void *param_8,long param_9)

{
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
  *p_Var1;
  LCID Locale;
  
  p_Var1 = try_get_LCMapStringEx();
  if (p_Var1 == (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
                 *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


