// Function: FUN_00422f10
// Entry: 00422f10
// Size: 341 bytes
// Thunk: false
// External: false


void FUN_00422f10(uint param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  char acStack_10 [16];
  
  if (param_2 + (uint)(0x7fffffff < param_1) != 0) {
    psVar4 = (short *)FUN_0044c3e0(0x40,param_3);
    FUN_0047d206(psVar4,param_1,param_2);
    psVar3 = psVar4 + 1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    FUN_0044c470(0x40 - ((int)psVar4 - (int)psVar3 >> 1));
    return;
  }
  psVar3 = (short *)FUN_0044c3e0(0x20,param_3);
  if (param_1 == 0) {
    *psVar3 = 0x30;
    psVar4 = psVar3 + 1;
  }
  else {
    psVar4 = psVar3;
    if ((int)param_1 < 0) {
      *psVar3 = 0x2d;
      psVar4 = psVar3 + 1;
      if (param_1 == 0x80000000) {
        *(undefined4 *)psVar4 = DAT_0052dfbc;
        *(undefined4 *)(psVar3 + 3) = DAT_0052dfc0;
        *(undefined4 *)(psVar3 + 5) = DAT_0052dfc4;
        *(undefined4 *)(psVar3 + 7) = DAT_0052dfc8;
        *(undefined4 *)(psVar3 + 9) = DAT_0052dfcc;
        psVar3[0xb] = DAT_0052dfd0;
        psVar4 = psVar3 + 0xb;
        goto LAB_00423001;
      }
      param_1 = -param_1;
    }
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      uVar2 = (int)param_1 / 10;
      acStack_10[iVar5 + 1] = (char)param_1 + (char)uVar2 * -10 + '0';
      param_1 = uVar2;
      iVar5 = iVar6;
    } while (uVar2 != 0);
    for (; 0 < iVar6; iVar6 = iVar6 + -1) {
      *psVar4 = (short)acStack_10[iVar6];
      psVar4 = psVar4 + 1;
    }
  }
LAB_00423001:
  FUN_0044c470(0x20 - ((int)psVar4 - (int)psVar3 >> 1));
  *psVar4 = 0;
  return;
}


