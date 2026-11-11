// Function: FUN_00417f09
// Entry: 00417f09
// Size: 243 bytes
// Thunk: false
// External: false


void FUN_00417f09(LPCWSTR param_1,short *param_2,int param_3)

{
  LPCSTR lpMultiByteStr;
  int iVar1;
  LPWSTR lpWideCharStr;
  LPWSTR pWVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  
  FUN_00423ccb(DAT_00543794);
  lpMultiByteStr = (LPCSTR)FUN_00453575(param_1);
  if (lpMultiByteStr == (LPCSTR)0x0) {
    psVar5 = &DAT_0052ef5c;
    if (param_2 != (short *)0x0) {
      psVar5 = param_2;
    }
    iVar1 = FUN_004542f0((uint)psVar5);
    uVar3 = FUN_0044be0a(psVar5);
    psVar4 = (short *)FUN_0044c3e0(uVar3,param_3);
    if (iVar1 != 0) {
      psVar5 = (short *)FUN_004542d0(iVar1);
    }
    FUN_0044ca75(psVar4,psVar5);
  }
  else {
    for (; (*lpMultiByteStr == ' ' || (*lpMultiByteStr == '\t'));
        lpMultiByteStr = lpMultiByteStr + 1) {
    }
    iVar1 = MultiByteToWideChar(0xfde9,0,lpMultiByteStr,-1,(LPWSTR)0x0,0);
    lpWideCharStr = (LPWSTR)FUN_0044c3e0(iVar1 + -1,param_3);
    MultiByteToWideChar(0xfde9,0,lpMultiByteStr,-1,lpWideCharStr,iVar1);
    if (0 < iVar1) {
      pWVar2 = lpWideCharStr + iVar1 + -1;
      if ((*pWVar2 == L' ') || (*pWVar2 == L'\t')) {
        for (; (lpWideCharStr <= pWVar2 && ((*pWVar2 == L' ' || (*pWVar2 == L'\t'))));
            pWVar2 = pWVar2 + -1) {
          *pWVar2 = L'\0';
        }
        uVar3 = FUN_0044be0a(lpWideCharStr);
        FUN_0044c470(iVar1 - uVar3);
      }
    }
  }
  return;
}


