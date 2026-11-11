// Function: call_win32_function<>
// Entry: 004e70aa
// Size: 102 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_public_dynamic_resizing>::call_win32_function<class
   <lambda_0d87af4cf61654f651d26e3c6a4f13fc> >(class <lambda_0d87af4cf61654f651d26e3c6a4f13fc> const
   &)
    public: int __thiscall __crt_win32_buffer<wchar_t,struct
   __crt_win32_buffer_internal_dynamic_resizing>::call_win32_function<class
   <lambda_44f1df80ccead0226c26eac3423fba1d> >(class <lambda_44f1df80ccead0226c26eac3423fba1d> const
   &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall call_win32_function<>(void *this,undefined4 *param_1)

{
  DWORD DVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  
  DVar1 = GetFullPathNameW((LPCWSTR)*param_1,*(DWORD *)((int)this + 0xc),*(LPWSTR *)((int)this + 8),
                           (LPWSTR *)0x0);
  if (DVar1 == 0) {
LAB_004e70ca:
    DVar1 = GetLastError();
    ___acrt_errno_map_os_error(DVar1);
    p_Var2 = FUN_0042470e();
    iVar3 = *(int *)p_Var2;
  }
  else {
    if (*(uint *)((int)this + 0xc) < DVar1) {
      iVar3 = allocate(this,DVar1 + 1);
      if (iVar3 != 0) {
        return iVar3;
      }
      DVar1 = GetFullPathNameW((LPCWSTR)*param_1,*(DWORD *)((int)this + 0xc),
                               *(LPWSTR *)((int)this + 8),(LPWSTR *)0x0);
      if (DVar1 == 0) goto LAB_004e70ca;
    }
    *(DWORD *)((int)this + 0x10) = DVar1;
    iVar3 = 0;
  }
  return iVar3;
}


