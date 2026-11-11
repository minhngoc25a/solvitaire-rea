// Function: ___acrt_FlsSetValue@8
// Entry: 00481635
// Size: 66 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_FlsSetValue@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_FlsSetValue_8(wchar_t *param_1,LPVOID param_2)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  long unaff_ESI;
  
  p_Var1 = FUN_00481c0c(0x22,"FlsSetValue",(int *)&DAT_0050e458,(int *)&PTR_DAT_0050e460);
  if (p_Var1 != (_func_int_wchar_t_ptr_ulong_long *)0x0) {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)(param_1,(ulong)param_2,unaff_ESI);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00481671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue((DWORD)param_1,param_2);
  return;
}


