// Function: FUN_004815f6
// Entry: 004815f6
// Size: 63 bytes
// Thunk: false
// External: false


void FUN_004815f6(wchar_t *param_1)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  long unaff_EBP;
  ulong unaff_ESI;
  
  p_Var1 = FUN_00481c0c(0x21,"FlsGetValue",(int *)&DAT_0050e450,(int *)&DAT_0050e458);
  if (p_Var1 != (_func_int_wchar_t_ptr_ulong_long *)0x0) {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)(param_1,unaff_ESI,unaff_EBP);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048162f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue((DWORD)param_1);
  return;
}


