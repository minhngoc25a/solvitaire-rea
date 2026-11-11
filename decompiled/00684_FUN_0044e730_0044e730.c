// Function: FUN_0044e730
// Entry: 0044e730
// Size: 102 bytes
// Thunk: false
// External: false


void FUN_0044e730(LPCSTR param_1,int param_2)

{
  char cVar1;
  int cchWideChar;
  LPWSTR lpWideCharStr;
  LPCSTR pCVar2;
  
  if (param_1 != (LPCSTR)0x0) {
    pCVar2 = param_1;
    do {
      cVar1 = *pCVar2;
      pCVar2 = pCVar2 + 1;
    } while (cVar1 != '\0');
    cchWideChar = MultiByteToWideChar(0xfde9,0,param_1,(int)(pCVar2 + (1 - (int)(param_1 + 1))),
                                      (LPWSTR)0x0,0);
    if (0 < cchWideChar) {
      lpWideCharStr = (LPWSTR)FUN_0044c3e0(cchWideChar + -1,param_2);
      MultiByteToWideChar(0xfde9,0,param_1,(int)(pCVar2 + (1 - (int)(param_1 + 1))),lpWideCharStr,
                          cchWideChar);
      return;
    }
  }
  FUN_00469d30(param_2);
  return;
}


