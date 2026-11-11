// Function: FUN_004229f0
// Entry: 004229f0
// Size: 164 bytes
// Thunk: false
// External: false


void FUN_004229f0(short *param_1,short *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  short *psVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  
  iVar6 = 0;
  sVar5 = 0x20;
  if (param_2 != (short *)0x0) {
    sVar5 = *param_2;
  }
  iVar2 = FUN_004542f0((uint)param_1);
  if (param_1 != (short *)0x0) {
    sVar7 = *param_1;
    bVar1 = false;
    param_2 = param_1;
    psVar4 = param_1;
    if (sVar7 != 0) {
      do {
        if (sVar7 == sVar5) {
          if (!bVar1) {
            bVar1 = true;
            param_2 = psVar4;
          }
        }
        else {
          bVar1 = false;
        }
        sVar7 = psVar4[1];
        psVar4 = psVar4 + 1;
        iVar6 = iVar6 + 1;
      } while (sVar7 != 0);
      if (bVar1) {
        iVar6 = iVar6 - ((int)psVar4 - (int)param_2 >> 1);
      }
    }
  }
  puVar3 = (undefined2 *)FUN_0044c3e0(iVar6,param_3);
  if (iVar2 != 0) {
    param_1 = (short *)FUN_004542d0(iVar2);
  }
  if (iVar6 == 0) {
    *puVar3 = 0;
    return;
  }
  FUN_0047d0c0((int)puVar3,(undefined4 *)param_1,iVar6);
  return;
}


