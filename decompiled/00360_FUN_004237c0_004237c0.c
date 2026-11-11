// Function: FUN_004237c0
// Entry: 004237c0
// Size: 270 bytes
// Thunk: false
// External: false


void FUN_004237c0(byte *param_1,uint param_2,uint param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  LPWSTR lpWideCharStr;
  UINT CodePage;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  
  pbVar6 = param_1;
  uVar5 = ((int)param_2 < -1) - 1 & param_2;
  if ((param_3 & 0x1f) == 0x19) {
    if (uVar5 == 0xffffffff) {
      do {
        sVar2 = *(short *)pbVar6;
        pbVar6 = pbVar6 + 2;
      } while (sVar2 != 0);
      uVar5 = (int)pbVar6 - (int)(param_1 + 2) >> 1;
    }
    psVar3 = (short *)FUN_0044c3e0(uVar5,param_4);
    if ((param_1 != (byte *)0x0) && (uVar5 != 0)) {
      iVar8 = (int)param_1 - (int)psVar3;
      do {
        sVar2 = *(short *)(iVar8 + (int)psVar3);
        if (sVar2 == 0) break;
        *psVar3 = sVar2;
        psVar3 = psVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_0044c470(uVar5);
    *psVar3 = 0;
    return;
  }
  if ((param_3 & 0x1f) == 2) {
    CodePage = 0xfde9;
    param_1 = (byte *)0xfde9;
    if (uVar5 == 0xffffffff) goto LAB_0042386d;
    if ((param_3 & 0x40) == 0) {
      uVar5 = FUN_0047d380(pbVar6,uVar5);
      CodePage = 0xfde9;
      goto LAB_0042386d;
    }
  }
  else {
    CodePage = 0;
    param_1 = (byte *)0x0;
LAB_0042386d:
    if (uVar5 == 0xffffffff) {
      pbVar7 = pbVar6;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      iVar8 = (int)pbVar7 - (int)(pbVar6 + 1);
      goto LAB_00423893;
    }
  }
  iVar8 = 0;
  if (0 < (int)uVar5) {
    do {
      if (pbVar6[iVar8] == 0) break;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar5);
  }
LAB_00423893:
  iVar4 = MultiByteToWideChar(CodePage,0,(LPCSTR)pbVar6,iVar8,(LPWSTR)0x0,0);
  lpWideCharStr = (LPWSTR)FUN_0044c3e0(iVar4,param_4);
  iVar8 = MultiByteToWideChar((UINT)param_1,0,(LPCSTR)pbVar6,iVar8,lpWideCharStr,iVar4 + 1);
  lpWideCharStr[iVar8] = L'\0';
  return;
}


