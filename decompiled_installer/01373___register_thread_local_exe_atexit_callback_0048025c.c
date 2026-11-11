// Function: __register_thread_local_exe_atexit_callback
// Entry: 0048025c
// Size: 38 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __register_thread_local_exe_atexit_callback
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __register_thread_local_exe_atexit_callback(_func_int_wchar_t_ptr_ulong_long *param_1)

{
  code *pcVar1;
  __acrt_ptd *p_Var2;
  
  if (DAT_00544364 == (_func_int_wchar_t_ptr_ulong_long *)DAT_0053fbc0) {
    DAT_00544364 = __crt_fast_encode_pointer<int_(__stdcall*)(wchar_t*,unsigned_long,long)>(param_1)
    ;
    return;
  }
  p_Var2 = FUN_0047dbec();
  pcVar1 = *(code **)(p_Var2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


