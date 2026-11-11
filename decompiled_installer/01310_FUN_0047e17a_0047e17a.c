// Function: FUN_0047e17a
// Entry: 0047e17a
// Size: 73 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_0047e17a(int *param_1,undefined4 *param_2)

{
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_2,(__crt_locale_data *)0x0);
  FUN_0047e1c3();
  ExceptionList = local_14;
  return;
}


