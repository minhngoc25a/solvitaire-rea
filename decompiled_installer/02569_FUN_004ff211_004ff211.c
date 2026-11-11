// Function: FUN_004ff211
// Entry: 004ff211
// Size: 269 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004ff211(int param_1,int param_2,int param_3,double param_4,double param_5,double param_6,
            double param_7)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  
  dVar2 = _DAT_00522380;
  iVar4 = param_3 - param_2;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  uVar8 = *(int *)(param_1 + 0x3508) - 1;
  uVar5 = param_2 + param_3;
  if (uVar8 < (uint)(param_2 + param_3)) {
    uVar5 = uVar8;
  }
  iVar9 = param_3 + -1;
  uVar8 = param_3 + 1;
  pdVar6 = (double *)(param_1 + 0x3408);
  pdVar3 = (double *)(iVar9 * 0x20 + 0x18 + param_1);
  pdVar7 = (double *)(param_1 + 0x18 + uVar8 * 0x20);
  while ((uVar8 <= uVar5 || (iVar4 <= iVar9))) {
    pdVar6 = pdVar6 + 1;
    dVar1 = *pdVar6 * dVar2;
    if (uVar8 <= uVar5) {
      uVar8 = uVar8 + 1;
      pdVar7[-2] = pdVar7[-2] - (pdVar7[-2] - param_4) * dVar1;
      pdVar7[-1] = pdVar7[-1] - (pdVar7[-1] - param_5) * dVar1;
      *pdVar7 = *pdVar7 - (*pdVar7 - param_6) * dVar1;
      pdVar7[1] = pdVar7[1] - (pdVar7[1] - param_7) * dVar1;
      pdVar7 = pdVar7 + 4;
    }
    if (iVar4 <= iVar9) {
      iVar9 = iVar9 + -1;
      pdVar3[-2] = pdVar3[-2] - (pdVar3[-2] - param_4) * dVar1;
      pdVar3[-1] = pdVar3[-1] - (pdVar3[-1] - param_5) * dVar1;
      *pdVar3 = *pdVar3 - (*pdVar3 - param_6) * dVar1;
      pdVar3[1] = pdVar3[1] - (pdVar3[1] - param_7) * dVar1;
      pdVar3 = pdVar3 + -4;
    }
  }
  return;
}


