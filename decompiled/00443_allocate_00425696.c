// Function: allocate
// Entry: 00425696
// Size: 63 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::allocate
          (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *this,
          uint param_1)

{
  int iVar1;
  
  _deallocate(this);
  iVar1 = __crt_win32_buffer_internal_dynamic_resizing::allocate
                    ((void **)(this + 8),param_1 * 2,(__crt_win32_buffer_empty_debug_info *)this);
  if (iVar1 == 0) {
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x1;
    iVar1 = 0;
    *(uint *)(this + 0xc) = param_1;
  }
  else {
    *(undefined4 *)(this + 0xc) = 0;
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0;
  }
  return iVar1;
}


