// Function: FUN_00423f90
// Entry: 00423f90
// Size: 83 bytes
// Thunk: false
// External: false


void FUN_00423f90(short *param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  
  psVar1 = (short *)FUN_0044c3e0(param_2,-1);
  sVar3 = *param_1;
  psVar2 = psVar1;
  if (sVar3 != 0) {
    iVar4 = param_2;
    do {
      if (iVar4 == 0) break;
      *psVar2 = sVar3;
      iVar4 = iVar4 + -1;
      sVar3 = *(short *)((int)param_1 + (2 - (int)psVar1) + (int)psVar2);
      psVar2 = psVar2 + 1;
    } while (sVar3 != 0);
  }
  *psVar2 = 0;
  FUN_0044c470(param_2 - ((int)psVar2 - (int)psVar1 >> 1));
  return;
}


