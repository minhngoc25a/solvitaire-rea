// Function: FUN_0044e7a0
// Entry: 0044e7a0
// Size: 68 bytes
// Thunk: false
// External: false


void FUN_0044e7a0(short *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  if (param_1 == (short *)0x0) {
    param_1 = &DAT_0052ef5c;
  }
  psVar3 = param_1;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  iVar2 = FUN_0044c3e0((int)psVar3 - (int)(param_1 + 1) >> 1,param_2);
  iVar2 = iVar2 - (int)param_1;
  do {
    sVar1 = *param_1;
    param_1 = param_1 + 1;
    *(short *)(iVar2 + -2 + (int)param_1) = sVar1;
  } while (sVar1 != 0);
  return;
}


