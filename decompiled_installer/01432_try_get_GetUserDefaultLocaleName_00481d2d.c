// Function: try_get_GetUserDefaultLocaleName
// Entry: 00481d2d
// Size: 26 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int (__stdcall*__cdecl try_get_GetUserDefaultLocaleName(void))(wchar_t *,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_int_wchar_t_ptr_int * __cdecl try_get_GetUserDefaultLocaleName(void)

{
  _func_int_wchar_t_ptr_ulong_long *p_Var1;
  
  p_Var1 = FUN_00481c0c(0xc,"GetUserDefaultLocaleName",(int *)&DAT_0050e3ec,(int *)&DAT_0050e3f4);
  return (_func_int_wchar_t_ptr_int *)p_Var1;
}


