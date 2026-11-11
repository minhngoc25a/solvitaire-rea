// Function: try_get_LocaleNameToLCID
// Entry: 00481d95
// Size: 26 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    unsigned long (__stdcall*__cdecl try_get_LocaleNameToLCID(void))(wchar_t const *,unsigned long)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_ulong_wchar_t_ptr_ulong * __cdecl try_get_LocaleNameToLCID(void)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  
  p_Var1 = FUN_00481c0c(0x13,"LocaleNameToLCID",(int *)&DAT_0050e41c,(int *)&DAT_0050e424);
  return (_func_ulong_wchar_t_ptr_ulong *)p_Var1;
}


