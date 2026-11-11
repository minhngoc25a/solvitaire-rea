// Function: FUN_0044e620
// Entry: 0044e620
// Size: 114 bytes
// Thunk: false
// External: false


LPWSTR FUN_0044e620(LPCSTR param_1)

{
  char cVar1;
  int iVar2;
  LPWSTR pWVar3;
  LPCSTR pCVar4;
  
  if (param_1 != (LPCSTR)0x0) {
    pCVar4 = param_1;
    do {
      cVar1 = *pCVar4;
      pCVar4 = pCVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = MultiByteToWideChar(0,0,param_1,(int)pCVar4 - (int)(param_1 + 1),(LPWSTR)0x0,0);
    if (iVar2 != 0) {
      pWVar3 = (LPWSTR)FUN_00482949(iVar2 * 2 + 2);
      iVar2 = MultiByteToWideChar(0,0,param_1,(int)pCVar4 - (int)(param_1 + 1),pWVar3,iVar2);
      pWVar3[iVar2] = L'\0';
      return pWVar3;
    }
  }
  pWVar3 = (LPWSTR)FUN_00482949(2);
  *pWVar3 = L'\0';
  return pWVar3;
}


