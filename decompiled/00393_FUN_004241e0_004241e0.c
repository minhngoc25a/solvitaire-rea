// Function: FUN_004241e0
// Entry: 004241e0
// Size: 50 bytes
// Thunk: false
// External: false


undefined4 FUN_004241e0(void)

{
  undefined4 uVar1;
  DWORD dwErrCode;
  LPVOID pvVar2;
  
  dwErrCode = GetLastError();
  pvVar2 = TlsGetValue(DAT_0053fba8);
  *(int *)((int)pvVar2 + 0x19c) = *(int *)((int)pvVar2 + 0x19c) + -1;
  uVar1 = *(undefined4 *)((int)pvVar2 + *(int *)((int)pvVar2 + 0x19c) * 4 + 0xc);
  SetLastError(dwErrCode);
  return uVar1;
}


