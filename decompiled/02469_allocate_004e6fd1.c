// Function: allocate
// Entry: 004e6fd1
// Size: 63 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::allocate(unsigned int)
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_public_dynamic_resizing>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall allocate(void *this,int param_1)

{
  int iVar1;
  
  deallocate((int)this);
  iVar1 = __crt_win32_buffer_internal_dynamic_resizing::allocate
                    ((void **)((int)this + 8),param_1 * 2,this);
  if (iVar1 == 0) {
    *(undefined1 *)((int)this + 0x14) = 1;
    iVar1 = 0;
    *(int *)((int)this + 0xc) = param_1;
  }
  else {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 0x14) = 0;
  }
  return iVar1;
}


