// Function: try_get_CompareStringEx
// Entry: 00481cab
// Size: 26 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int (__stdcall*__cdecl try_get_CompareStringEx(void))(wchar_t const *,unsigned long,wchar_t
   const *,int,wchar_t const *,int,struct _nlsversioninfo *,void *,long)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long *
__cdecl try_get_CompareStringEx(void)

{
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
  *p_Var1;
  
  p_Var1 = (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
            *)FUN_00481c0c(1,"CompareStringEx",(int *)&DAT_0050e3ac,(int *)&DAT_0050e3b4);
  return p_Var1;
}


