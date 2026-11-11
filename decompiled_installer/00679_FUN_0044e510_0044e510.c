// Function: FUN_0044e510
// Entry: 0044e510
// Size: 130 bytes
// Thunk: false
// External: false


LPSTR FUN_0044e510(LPCWSTR param_1)

{
  WCHAR WVar1;
  int cbMultiByte;
  LPSTR pCVar2;
  int iVar3;
  LPCWSTR pWVar4;
  
  if (param_1 != (LPCWSTR)0x0) {
    pWVar4 = param_1;
    do {
      WVar1 = *pWVar4;
      pWVar4 = pWVar4 + 1;
    } while (WVar1 != L'\0');
    iVar3 = ((int)pWVar4 - (int)(param_1 + 1) >> 1) + 1;
    cbMultiByte = WideCharToMultiByte(0,0,param_1,iVar3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte != 0) {
      pCVar2 = (LPSTR)FUN_00482949(cbMultiByte + 1);
      if (pCVar2 != (LPSTR)0x0) {
        iVar3 = WideCharToMultiByte(0,0,param_1,iVar3,pCVar2,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
        pCVar2[iVar3] = '\0';
        return pCVar2;
      }
    }
  }
  pCVar2 = (LPSTR)FUN_00482949(1);
  *pCVar2 = '\0';
  return pCVar2;
}


