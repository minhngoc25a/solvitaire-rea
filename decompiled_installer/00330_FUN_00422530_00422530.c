// Function: FUN_00422530
// Entry: 00422530
// Size: 155 bytes
// Thunk: false
// External: false


int FUN_00422530(short *param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_1 == (short *)0x0) {
    return 0;
  }
  if (param_2 == (short *)0x0) {
    return 0;
  }
  if (*param_2 != 0) {
    sVar2 = *param_1;
    while (sVar2 != 0) {
      param_1 = param_1 + 1;
      if (sVar2 == *param_2) {
        sVar2 = *param_1;
        psVar4 = param_1;
        psVar3 = param_2;
        while (psVar3 = psVar3 + 1, sVar2 != 0) {
          if (*psVar3 == 0) goto LAB_004225a2;
          if (sVar2 != *psVar3) break;
          psVar1 = psVar4 + 1;
          psVar4 = psVar4 + 1;
          sVar2 = *psVar1;
        }
        if (*psVar3 == 0) {
LAB_004225a2:
          iVar5 = iVar5 + 1;
          param_1 = psVar4;
        }
      }
      sVar2 = *param_1;
    }
  }
  return iVar5;
}


