// Function: FUN_00481c0c
// Entry: 00481c0c
// Size: 133 bytes
// Thunk: false
// External: false


_func_int_wchar_t_ptr_ulong_long * __cdecl
FUN_00481c0c(int param_1,LPCSTR param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  HMODULE hModule;
  _func_int_wchar_t_ptr_ulong_long *p_Var2;
  byte bVar3;
  _func_int_wchar_t_ptr_ulong_long *p_Var4;
  
  puVar1 = &DAT_005445d8 + param_1;
  bVar3 = (byte)DAT_0053fbc0 & 0x1f;
  p_Var4 = (_func_int_wchar_t_ptr_ulong_long *)
           ((*puVar1 ^ DAT_0053fbc0) >> bVar3 | (*puVar1 ^ DAT_0053fbc0) << 0x20 - bVar3);
  if (p_Var4 == (_func_int_wchar_t_ptr_ulong_long *)0xffffffff) {
    p_Var4 = (_func_int_wchar_t_ptr_ulong_long *)0x0;
  }
  else if (p_Var4 == (_func_int_wchar_t_ptr_ulong_long *)0x0) {
    hModule = FUN_00481b41(param_3,param_4);
    if ((hModule == (HMODULE)0x0) ||
       (p_Var4 = (_func_int_wchar_t_ptr_ulong_long *)GetProcAddress(hModule,param_2),
       p_Var4 == (_func_int_wchar_t_ptr_ulong_long *)0x0)) {
      bVar3 = 0x20 - ((byte)DAT_0053fbc0 & 0x1f) & 0x1f;
      LOCK();
      *puVar1 = (0xffffffffU >> bVar3 | -1 << 0x20 - bVar3) ^ DAT_0053fbc0;
      UNLOCK();
      p_Var4 = (_func_int_wchar_t_ptr_ulong_long *)0x0;
    }
    else {
      p_Var2 = __crt_fast_encode_pointer<int_(__stdcall*)(wchar_t*,unsigned_long,long)>(p_Var4);
      LOCK();
      *puVar1 = (uint)p_Var2;
      UNLOCK();
    }
  }
  return p_Var4;
}


