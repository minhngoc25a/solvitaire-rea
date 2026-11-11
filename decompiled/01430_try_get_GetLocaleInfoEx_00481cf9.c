// Function: try_get_GetLocaleInfoEx
// Entry: 00481cf9
// Size: 26 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int (__stdcall*__cdecl try_get_GetLocaleInfoEx(void))(wchar_t const *,unsigned long,wchar_t
   *,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int * __cdecl try_get_GetLocaleInfoEx(void)

{
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int *p_Var1;
  
  p_Var1 = (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int *)
           FUN_00481c0c(8,"GetLocaleInfoEx",(int *)&DAT_0050e3d4,(int *)&DAT_0050e3dc);
  return p_Var1;
}


