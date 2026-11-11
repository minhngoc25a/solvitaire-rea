// Function: FUN_0041711a
// Entry: 0041711a
// Size: 61 bytes
// Thunk: false
// External: false


void FUN_0041711a(LPCWSTR param_1,int param_2)

{
  DWORD DVar1;
  LPWSTR lpBuffer;
  
  DVar1 = GetEnvironmentVariableW(param_1,(LPWSTR)0x0,0);
  if (DVar1 != 0) {
    DVar1 = DVar1 - 1;
  }
  lpBuffer = (LPWSTR)FUN_0044c3e0(DVar1,param_2);
  GetEnvironmentVariableW(param_1,lpBuffer,DVar1 + 1);
  lpBuffer[DVar1] = L'\0';
  return;
}


