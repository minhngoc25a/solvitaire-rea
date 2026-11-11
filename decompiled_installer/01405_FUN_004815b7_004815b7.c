// Function: FUN_004815b7
// Entry: 004815b7
// Size: 63 bytes
// Thunk: false
// External: false


void FUN_004815b7(wchar_t *param_1)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  long unaff_EBP;
  ulong unaff_ESI;
  
  p_Var1 = FUN_00481c0c(0x20,"FlsFree",(int *)&DAT_0050e448,(int *)&DAT_0050e450);
  if (p_Var1 != (_func_int_wchar_t_ptr_ulong_long *)0x0) {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)(param_1,unaff_ESI,unaff_EBP);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004815f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree((DWORD)param_1);
  return;
}


