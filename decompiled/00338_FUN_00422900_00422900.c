// Function: FUN_00422900
// Entry: 00422900
// Size: 239 bytes
// Thunk: false
// External: false


void FUN_00422900(uint *param_1,uint param_2,short *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  short *psVar8;
  
  if ((param_3 != (short *)0x0) && (sVar1 = *param_3, sVar1 != 0)) {
    uVar4 = ((int)param_2 < 0) - 1 & param_2;
    if ((param_1 == (uint *)0x0) || ((short)*param_1 == 0)) {
      uVar7 = 0;
    }
    else {
      puVar6 = param_1;
      do {
        uVar7 = *puVar6;
        puVar6 = (uint *)((int)puVar6 + 2);
      } while ((short)uVar7 != 0);
      uVar7 = (int)puVar6 - ((int)param_1 + 2) >> 1;
      if ((int)uVar4 < (int)uVar7) {
        uVar7 = uVar4;
      }
      uVar4 = ((int)(uVar4 - uVar7) < 0) - 1 & uVar4 - uVar7;
    }
    iVar2 = FUN_004542f0((uint)param_1);
    psVar3 = (short *)FUN_0044c3e0(uVar7 + uVar4,param_4);
    if (iVar2 != 0) {
      param_1 = (uint *)FUN_004542d0(iVar2);
    }
    if (uVar7 != 0) {
      FUN_0044c490((uint *)(psVar3 + uVar4),param_1,uVar7 * 2);
    }
    if (uVar4 != 0) {
      psVar8 = psVar3;
      for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)psVar8 = CONCAT22(sVar1,sVar1);
        psVar8 = psVar8 + 2;
      }
      psVar3 = psVar3 + uVar4;
      for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        *psVar8 = sVar1;
        psVar8 = psVar8 + 1;
      }
    }
    psVar3[uVar7] = 0;
    return;
  }
  FUN_00469d30(param_4);
  return;
}


