// Function: FUN_00424340
// Entry: 00424340
// Size: 98 bytes
// Thunk: false
// External: false


LPSTR FUN_00424340(LPCWSTR param_1)

{
  SIZE_T dwBytes;
  LPSTR pCVar1;
  
  if (param_1 != (LPCWSTR)0x0) {
    dwBytes = WideCharToMultiByte(0,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    pCVar1 = HeapAlloc(DAT_0054358c,0,dwBytes);
    WideCharToMultiByte(0,0,param_1,-1,pCVar1,dwBytes,(LPCSTR)0x0,(LPBOOL)0x0);
    return pCVar1;
  }
  pCVar1 = HeapAlloc(DAT_0054358c,0,1);
  return pCVar1;
}


