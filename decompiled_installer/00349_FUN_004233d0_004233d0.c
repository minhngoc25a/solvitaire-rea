// Function: FUN_004233d0
// Entry: 004233d0
// Size: 175 bytes
// Thunk: false
// External: false


void FUN_004233d0(short *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  short *psVar5;
  int iVar6;
  
  iVar2 = FUN_00422770(param_1);
  if (param_1 == (short *)0x0) {
    param_1 = (short *)0x0;
    iVar6 = 0;
  }
  else {
    sVar1 = *param_1;
    psVar5 = param_1;
    while (sVar1 == 0x20) {
      psVar5 = psVar5 + 1;
      sVar1 = *psVar5;
    }
    iVar6 = (int)psVar5 - (int)param_1 >> 1;
    if (iVar6 < iVar2) {
      psVar5 = param_1 + iVar2 + -1;
      sVar1 = *psVar5;
      while (sVar1 == 0x20) {
        psVar5 = psVar5 + -1;
        sVar1 = *psVar5;
      }
      iVar2 = iVar2 - (((int)param_1 + (iVar2 * 2 - (int)psVar5) + -2 >> 1) + iVar6);
    }
    else {
      iVar2 = iVar2 - iVar6;
    }
  }
  iVar3 = FUN_004542f0((uint)param_1);
  puVar4 = (undefined2 *)FUN_0044c3e0(iVar2,param_2);
  if (iVar3 != 0) {
    param_1 = (short *)FUN_004542d0(iVar3);
  }
  if (param_1 == (short *)0x0) {
    *puVar4 = 0;
    return;
  }
  FUN_0047d0c0((int)puVar4,(undefined4 *)(param_1 + iVar6),iVar2);
  return;
}


