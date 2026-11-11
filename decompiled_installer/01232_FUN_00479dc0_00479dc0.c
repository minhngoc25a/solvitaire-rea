// Function: FUN_00479dc0
// Entry: 00479dc0
// Size: 104 bytes
// Thunk: false
// External: false


void FUN_00479dc0(int *param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 != (int *)0x0) {
    iVar4 = (int)((*param_1 >> 0x1f & 7U) + *param_1) >> 3;
  }
  psVar1 = (short *)FUN_0044c3e0(iVar4 * 2,param_2);
  if (0 < iVar4) {
    psVar2 = psVar1;
    pbVar3 = (byte *)(param_1 + 2);
    do {
      psVar1 = psVar2 + 2;
      *psVar2 = (short)"0123456789abcdef"[*pbVar3 >> 4];
      psVar2[1] = (short)"0123456789abcdef"[*pbVar3 & 0xf];
      iVar4 = iVar4 + -1;
      psVar2 = psVar1;
      pbVar3 = pbVar3 + 1;
    } while (iVar4 != 0);
  }
  *psVar1 = 0;
  return;
}


