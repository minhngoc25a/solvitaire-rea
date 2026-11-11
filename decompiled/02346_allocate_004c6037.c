// Function: allocate
// Entry: 004c6037
// Size: 39 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_no_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __thiscall
__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>::allocate
          (__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing> *this,uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (this[0x14] != (__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>)0x0) {
    this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>)0x0;
  }
  p_Var1 = FUN_0042470e();
  *(undefined4 *)p_Var1 = 0x22;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x14] = (__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>)0x0;
  return 0x22;
}


