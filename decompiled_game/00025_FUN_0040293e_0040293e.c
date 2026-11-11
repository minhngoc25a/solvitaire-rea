// Function: FUN_0040293e
// Entry: 0040293e
// Size: 272 bytes
// Thunk: false
// External: false


int __cdecl FUN_0040293e(LPCSTR param_1,uint param_2)

{
  BYTE BVar1;
  LSTATUS LVar2;
  int iVar3;
  int iVar4;
  BYTE *pBVar5;
  HKEY local_230;
  DWORD local_22c;
  DWORD local_228;
  BYTE local_224 [260];
  BYTE local_120 [272];
  
  pBVar5 = local_224;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    pBVar5[0] = '\0';
    pBVar5[1] = '\0';
    pBVar5[2] = '\0';
    pBVar5[3] = '\0';
    pBVar5 = pBVar5 + 4;
  }
  LVar2 = RegOpenKeyExA((HKEY)0x80000002,param_1,0,param_2 & 0x100 | 0x20019,&local_230);
  if (LVar2 == 0) {
    pBVar5 = local_120;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      pBVar5[0] = '\0';
      pBVar5[1] = '\0';
      pBVar5[2] = '\0';
      pBVar5[3] = '\0';
      pBVar5 = pBVar5 + 4;
    }
    iVar4 = 0;
    local_22c = 0x104;
    LVar2 = RegQueryValueExA(local_230,"JavaHome",(LPDWORD)0x0,&local_228,local_120,&local_22c);
    iVar3 = 0;
    if (LVar2 == 0) {
      do {
        BVar1 = local_120[iVar3];
        local_224[iVar3] = BVar1;
        iVar3 = iVar3 + 1;
      } while (BVar1 != '\0');
      iVar4 = FUN_00402657((char *)local_224);
    }
    RegCloseKey(local_230);
    if (iVar4 != 0) {
      strcpy(&DAT_00418edc,(char *)local_224);
      return iVar4;
    }
  }
  DAT_00418c58 = 1;
  return 0;
}


