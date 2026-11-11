// Function: FUN_004227a0
// Entry: 004227a0
// Size: 139 bytes
// Thunk: false
// External: false


void FUN_004227a0(short *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  
  uVar4 = ((int)param_3 < 0) - 1 & param_3;
  iVar1 = FUN_004542f0((uint)param_1);
  psVar2 = (short *)FUN_0044c3e0(uVar4,param_4);
  if (iVar1 != 0) {
    param_1 = (short *)FUN_004542d0(iVar1);
  }
  psVar5 = psVar2;
  if (param_1 != (short *)0x0) {
    for (; (1 < param_2 && (*param_1 != 0)); param_1 = param_1 + 1) {
      param_2 = param_2 + -1;
    }
    sVar3 = *param_1;
    if (sVar3 != 0) {
      do {
        if (uVar4 == 0) break;
        *psVar5 = sVar3;
        uVar4 = uVar4 - 1;
        sVar3 = *(short *)((int)param_1 + (2 - (int)psVar2) + (int)psVar5);
        psVar5 = psVar5 + 1;
      } while (sVar3 != 0);
    }
  }
  FUN_0044c470(uVar4);
  *psVar5 = 0;
  return;
}


