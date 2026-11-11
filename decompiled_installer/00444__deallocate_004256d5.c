// Function: _deallocate
// Entry: 004256d5
// Size: 26 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    private: void __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::_deallocate(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::_deallocate
          (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *this)

{
  if (this[0x14] != (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0) {
    FUN_004247be(*(LPVOID *)(this + 8));
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>)0x0;
  }
  return;
}


