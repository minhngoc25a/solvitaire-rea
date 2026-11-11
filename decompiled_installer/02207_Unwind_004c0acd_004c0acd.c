// Function: Unwind@004c0acd
// Entry: 004c0acd
// Size: 5 bytes
// Thunk: true
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void Unwind_004c0acd(void)

{
  code *pcVar1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = FUN_0047dbec();
  pcVar1 = *(code **)(p_Var2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


