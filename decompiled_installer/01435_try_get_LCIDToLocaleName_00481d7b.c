// Function: try_get_LCIDToLocaleName
// Entry: 00481d7b
// Size: 26 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int (__stdcall*__cdecl try_get_LCIDToLocaleName(void))(unsigned long,wchar_t *,int,unsigned
   long)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_int_ulong_wchar_t_ptr_int_ulong * __cdecl try_get_LCIDToLocaleName(void)

{
  _func_int_ulong_wchar_t_ptr_int_ulong *p_Var1;
  
  p_Var1 = (_func_int_ulong_wchar_t_ptr_int_ulong *)
           FUN_00481c0c(0x12,"LCIDToLocaleName",(int *)&DAT_0050e414,(int *)&DAT_0050e41c);
  return p_Var1;
}


