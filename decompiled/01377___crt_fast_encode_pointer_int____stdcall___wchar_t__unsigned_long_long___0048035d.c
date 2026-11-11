// Function: __crt_fast_encode_pointer<int_(__stdcall*)(wchar_t*,unsigned_long,long)>
// Entry: 0048035d
// Size: 31 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int (__stdcall*__cdecl __crt_fast_encode_pointer<int (__stdcall*)(wchar_t *,unsigned
   long,long)>(int (__stdcall*const)(wchar_t *,unsigned long,long)))(wchar_t *,unsigned long,long)
   
   Library: Visual Studio 2019 Release */

_func_int_wchar_t_ptr_ulong_long * __cdecl
__crt_fast_encode_pointer<int_(__stdcall*)(wchar_t*,unsigned_long,long)>
          (_func_int_wchar_t_ptr_ulong_long *param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_0053fbc0 & 0x1f) & 0x1f;
  return (_func_int_wchar_t_ptr_ulong_long *)
         (((uint)param_1 >> bVar1 | (int)param_1 << 0x20 - bVar1) ^ DAT_0053fbc0);
}


