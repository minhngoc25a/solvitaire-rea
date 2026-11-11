// Function: FUN_00422830
// Entry: 00422830
// Size: 195 bytes
// Thunk: false
// External: false


void FUN_00422830(short *param_1,int param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  short *psVar5;
  
  if (param_1 == (short *)0x0) {
    FUN_00469d30(param_3);
    return;
  }
  psVar2 = param_1;
  do {
    sVar4 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar4 != 0);
  uVar3 = (((int)psVar2 - (int)(param_1 + 1) >> 1) - param_2) + 1;
  uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
  iVar1 = FUN_004542f0((uint)param_1);
  psVar2 = (short *)FUN_0044c3e0(uVar3,param_3);
  if (iVar1 != 0) {
    param_1 = (short *)FUN_004542d0(iVar1);
  }
  psVar5 = psVar2;
  if (param_1 != (short *)0x0) {
    for (; (1 < param_2 && (*param_1 != 0)); param_1 = param_1 + 1) {
      param_2 = param_2 + -1;
    }
    sVar4 = *param_1;
    if (sVar4 != 0) {
      do {
        if (uVar3 == 0) break;
        *psVar5 = sVar4;
        uVar3 = uVar3 - 1;
        sVar4 = *(short *)((int)param_1 + (2 - (int)psVar2) + (int)psVar5);
        psVar5 = psVar5 + 1;
      } while (sVar4 != 0);
    }
  }
  FUN_0044c470(uVar3);
  *psVar5 = 0;
  return;
}


