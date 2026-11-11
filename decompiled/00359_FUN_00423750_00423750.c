// Function: FUN_00423750
// Entry: 00423750
// Size: 101 bytes
// Thunk: false
// External: false


void FUN_00423750(uint *param_1,uint param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0xffffffff) {
    FUN_004238d0(param_1,param_3);
    return;
  }
  uVar4 = ((int)param_2 < 0) - 1 & param_2;
  psVar2 = (short *)FUN_0044c3e0(uVar4,param_3);
  if ((param_1 != (uint *)0x0) && (uVar4 != 0)) {
    iVar3 = (int)param_1 - (int)psVar2;
    do {
      sVar1 = *(short *)(iVar3 + (int)psVar2);
      if (sVar1 == 0) break;
      *psVar2 = sVar1;
      psVar2 = psVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_0044c470(uVar4);
  *psVar2 = 0;
  return;
}


