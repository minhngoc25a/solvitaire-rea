// Function: try_get_EnumSystemLocalesEx
// Entry: 00481cc5
// Size: 26 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int (__stdcall*__cdecl try_get_EnumSystemLocalesEx(void))(int (__stdcall*)(wchar_t *,unsigned
   long,long),unsigned long,long,void *)
   
   Library: Visual Studio 2019 Release */

_func_int__func_int_wchar_t_ptr_ulong_long_ptr_ulong_long_void_ptr * __cdecl
try_get_EnumSystemLocalesEx(void)

{
  _func_int__func_int_wchar_t_ptr_ulong_long_ptr_ulong_long_void_ptr *p_Var1;
  
  p_Var1 = (_func_int__func_int_wchar_t_ptr_ulong_long_ptr_ulong_long_void_ptr *)
           FUN_00481c0c(2,"EnumSystemLocalesEx",(int *)&DAT_0050e3b4,(int *)&DAT_0050e3bc);
  return p_Var1;
}


