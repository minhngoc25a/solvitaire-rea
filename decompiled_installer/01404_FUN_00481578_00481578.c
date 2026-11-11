// Function: FUN_00481578
// Entry: 00481578
// Size: 63 bytes
// Thunk: false
// External: false


void FUN_00481578(wchar_t *param_1)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  long unaff_EBP;
  ulong unaff_ESI;
  
  p_Var1 = FUN_00481c0c(0x1f,"FlsAlloc",(int *)&DAT_0050e440,(int *)&DAT_0050e448);
  if (p_Var1 == (_func_int_wchar_t_ptr_ulong_long *)0x0) {
    TlsAlloc();
  }
  else {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*p_Var1)(param_1,unaff_ESI,unaff_EBP);
  }
  return;
}


