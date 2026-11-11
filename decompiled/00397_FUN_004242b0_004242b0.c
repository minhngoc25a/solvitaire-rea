// Function: FUN_004242b0
// Entry: 004242b0
// Size: 39 bytes
// Thunk: false
// External: false


void FUN_004242b0(undefined4 param_1)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(DAT_0053fba8);
  *(undefined4 *)((int)pvVar1 + 8) = param_1;
  SetLastError(dwErrCode);
  return;
}


