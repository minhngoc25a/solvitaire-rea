// Function: ___acrt_LocaleNameToLCID@8
// Entry: 004818ad
// Size: 49 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_LocaleNameToLCID@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_LocaleNameToLCID_8(wchar_t *param_1,ulong param_2)

{
  _func_ulong_wchar_t_ptr_ulong *p_Var1;
  
  p_Var1 = try_get_LocaleNameToLCID();
  if (p_Var1 == (_func_ulong_wchar_t_ptr_ulong *)0x0) {
    ___acrt_DownlevelLocaleNameToLCID((ushort *)param_1);
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)(param_1,param_2);
  }
  return;
}


