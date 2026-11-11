// Function: FUN_00497ae0
// Entry: 00497ae0
// Size: 449 bytes
// Thunk: false
// External: false


LPWSTR __cdecl FUN_00497ae0(LPCWSTR param_1)

{
  bool bVar1;
  DWORD DVar2;
  LPWSTR lpBuffer;
  LPWSTR pWVar3;
  LPWSTR pWVar4;
  WCHAR WVar5;
  int iVar6;
  uint uVar7;
  LPWSTR pWVar8;
  
  DVar2 = GetFullPathNameW(param_1,0,(LPWSTR)0x0,(LPWSTR *)0x0);
  if (DVar2 == 0) {
    return (LPWSTR)0x0;
  }
  lpBuffer = (LPWSTR)FUN_00482949((DVar2 + 3) * 2);
  if (lpBuffer == (LPWSTR)0x0) {
    return (LPWSTR)0x0;
  }
  DVar2 = GetFullPathNameW(param_1,DVar2 + 3,lpBuffer,(LPWSTR *)0x0);
  pWVar8 = lpBuffer;
  if ((*lpBuffer == L'\\') && (lpBuffer[1] == L'\\')) {
    if (lpBuffer[2] != L'?') {
      if ((lpBuffer[2] == L'.') && (lpBuffer[3] == L'\\')) {
        WVar5 = lpBuffer[4];
        if ((((ushort)WVar5 < 0x61) || (0x7a < (ushort)WVar5)) && (0x19 < (ushort)(WVar5 + L'﾿')))
        {
          return lpBuffer;
        }
        if (lpBuffer[5] != L':') {
          return lpBuffer;
        }
        if (lpBuffer[6] != L'\\') {
          return lpBuffer;
        }
        lpBuffer[2] = L'?';
        return lpBuffer;
      }
      goto LAB_00497b97;
    }
    if (lpBuffer[3] == L'\\') {
      return lpBuffer;
    }
  }
  else {
LAB_00497b97:
    iVar6 = 0;
    bVar1 = false;
    if (*lpBuffer != L'\\') goto LAB_00497c1a;
  }
  bVar1 = false;
  iVar6 = 0;
  if ((lpBuffer[1] == L'\\') && (WVar5 = lpBuffer[2], WVar5 != L'\\')) {
    pWVar3 = lpBuffer + 2;
    do {
      if (WVar5 == L'\0') {
        if (*pWVar3 != L'\\') goto LAB_00497c1a;
        break;
      }
      WVar5 = pWVar3[1];
      pWVar3 = pWVar3 + 1;
    } while (WVar5 != L'\\');
    WVar5 = pWVar3[1];
    pWVar4 = pWVar3 + 1;
    if (WVar5 != L'\\') {
      do {
        if (WVar5 == L'\0') {
          if (*pWVar4 != L'\\') goto LAB_00497c1a;
          break;
        }
        WVar5 = pWVar4[1];
        pWVar4 = pWVar4 + 1;
      } while (WVar5 != L'\\');
      if (pWVar4 != pWVar3 + 1) {
        iVar6 = 1;
        DVar2 = DVar2 - 2;
        bVar1 = true;
        pWVar8 = lpBuffer + 2;
      }
    }
  }
LAB_00497c1a:
  iVar6 = DVar2 + iVar6 * 4;
  pWVar3 = (LPWSTR)FUN_00482949(iVar6 * 2 + 10);
  if (pWVar3 == (LPWSTR)0x0) {
    FUN_0047d191(lpBuffer);
    return (LPWSTR)0x0;
  }
  FUN_0044c204(pWVar3,0x52d5a4,4);
  pWVar4 = pWVar3 + 4;
  uVar7 = iVar6 + 1;
  if (bVar1) {
    FUN_0044c204(pWVar4,0x52d598,4);
    pWVar4 = pWVar3 + 8;
    uVar7 = iVar6 - 3;
  }
  FUN_0044c204(pWVar4,(int)pWVar8,uVar7);
  pWVar4[uVar7 - 1] = L'\0';
  FUN_0047d191(lpBuffer);
  return pWVar3;
}


