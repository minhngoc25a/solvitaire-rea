// Function: allocate
// Entry: 00425638
// Size: 31 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: static int __cdecl __crt_win32_buffer_internal_dynamic_resizing::allocate(void * *
   const,unsigned int,class __crt_win32_buffer_empty_debug_info const &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__crt_win32_buffer_internal_dynamic_resizing::allocate
          (void **param_1,uint param_2,__crt_win32_buffer_empty_debug_info *param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = __malloc_base(param_2);
  *param_1 = pvVar1;
  return (-(uint)(pvVar1 != (LPVOID)0x0) & 0xfffffff4) + 0xc;
}


