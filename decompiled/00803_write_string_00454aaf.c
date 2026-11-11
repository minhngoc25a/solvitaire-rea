// Function: write_string
// Entry: 00454aaf
// Size: 44 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_stdio_output::stream_output_adapter<char>::write_string(char const
   * const,int,int * const,class __crt_deferred_errno_cache &)const 
    public: void __thiscall __crt_stdio_output::stream_output_adapter<wchar_t>::write_string(wchar_t
   const * const,int,int * const,class __crt_deferred_errno_cache &)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall write_string(void *this,byte *param_1,int param_2,int *param_3,int *param_4)

{
  if (((*(uint *)(*(int *)this + 0xc) >> 0xc & 1) != 0) && (*(int *)(*(int *)this + 4) == 0)) {
    *param_3 = *param_3 + param_2;
    return;
  }
  FUN_004549be(this,param_1,param_2,param_3,param_4);
  return;
}


