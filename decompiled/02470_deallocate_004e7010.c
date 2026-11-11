// Function: deallocate
// Entry: 004e7010
// Size: 26 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::_deallocate(void)
    private: void __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_public_dynamic_resizing>::_deallocate(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __fastcall deallocate(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_0047d191(*(LPVOID *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


