// Function: ___acrt_get_parent_window
// Entry: 00481a39
// Size: 104 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_get_parent_window
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl ___acrt_get_parent_window(ulong param_1,long param_2)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  wchar_t *pwVar2;
  ulong unaff_ESI;
  wchar_t *unaff_EDI;
  long unaff_retaddr;
  
  p_Var1 = FUN_00481c0c(3,"GetActiveWindow",(int *)&DAT_0050e3bc,(int *)&DAT_0050e3c4);
  if (p_Var1 != (_func_int_wchar_t_ptr_ulong_long *)0x0) {
    (*(code *)PTR_guard_check_icall_00532084)();
    pwVar2 = (wchar_t *)(*p_Var1)(unaff_EDI,unaff_ESI,unaff_retaddr);
    if (pwVar2 != (wchar_t *)0x0) {
      p_Var1 = FUN_00481c0c(7,"GetLastActivePopup",(int *)&DAT_0050e3cc,(int *)&DAT_0050e3d4);
      if (p_Var1 == (_func_int_wchar_t_ptr_ulong_long *)0x0) {
        return pwVar2;
      }
      (*(code *)PTR_guard_check_icall_00532084)();
      pwVar2 = (wchar_t *)(*p_Var1)(pwVar2,param_1,param_2);
      return pwVar2;
    }
  }
  return (wchar_t *)0x0;
}


