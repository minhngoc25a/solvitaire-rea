// Function: FUN_0044e5b0
// Entry: 0044e5b0
// Size: 107 bytes
// Thunk: false
// External: false


void FUN_0044e5b0(LPCSTR param_1,int param_2)

{
  char cVar1;
  int iVar2;
  LPWSTR lpWideCharStr;
  undefined2 *puVar3;
  LPCSTR pCVar4;
  
  if (param_1 != (LPCSTR)0x0) {
    pCVar4 = param_1;
    do {
      cVar1 = *pCVar4;
      pCVar4 = pCVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = MultiByteToWideChar(0,0,param_1,(int)pCVar4 - (int)(param_1 + 1),(LPWSTR)0x0,0);
    if (0 < iVar2) {
      lpWideCharStr = (LPWSTR)FUN_0044c3e0(iVar2,param_2);
      iVar2 = MultiByteToWideChar(0,0,param_1,(int)pCVar4 - (int)(param_1 + 1),lpWideCharStr,iVar2);
      lpWideCharStr[iVar2] = L'\0';
      return;
    }
  }
  puVar3 = (undefined2 *)FUN_0044c3e0(0,param_2);
  *puVar3 = 0;
  return;
}


