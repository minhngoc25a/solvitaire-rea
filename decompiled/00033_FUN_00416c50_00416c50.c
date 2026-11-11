// Function: FUN_00416c50
// Entry: 00416c50
// Size: 495 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00416c50(int *param_1,uint param_2,double param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  undefined *puVar10;
  int *piVar11;
  
  if (DAT_005424ac == 0) {
    return 0;
  }
  uVar2 = FUN_004258d0(DAT_005424a8,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  if ((param_2 & 2) == 0) {
    FUN_0044b880((int)param_1);
  }
  piVar3 = (int *)FUN_00416860();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  piVar3[0xd6] = (int)param_1;
  piVar3[0xd8] = param_2 | 4;
  iVar7 = *(int *)(uVar2 + 0x38);
  *(bool *)((int)piVar3 + 0x36a) = iVar7 != 0;
  if (iVar7 == 0) {
    FUN_0042f430((int *)(uVar2 + 8),piVar3 + 0xb8);
    uVar8 = FUN_00434e40(0x5424b0,piVar3 + 0xb8,0x4002,0,piVar3);
  }
  else {
    FUN_00425a94(*(int **)(uVar2 + 0x38));
    piVar1 = piVar3 + 0xb8;
    puVar10 = &LAB_00416c30;
    piVar3[0xd7] = *(int *)(uVar2 + 0x38);
    piVar11 = piVar3;
    uVar4 = FUN_00425a6d(*(int **)(uVar2 + 0x38));
    uVar5 = FUN_00425a7a(*(int **)(uVar2 + 0x38));
    uVar6 = FUN_00425a60(*(int **)(uVar2 + 0x38));
    iVar7 = FUN_0044b710(piVar1,uVar6,uVar5,uVar4,puVar10,piVar11);
    if (iVar7 == 0) goto LAB_00416d27;
    uVar8 = FUN_00434e40(0x5424b0,piVar1,0x4000,0,piVar3);
    if (uVar8 == 0xffffffff) {
      FUN_0044b7e0((int)piVar1);
      goto LAB_00416d27;
    }
  }
  if (uVar8 == 0) {
    if ((param_2 & 1) != 0) {
      FUN_00435240((int)piVar3,1);
    }
    fVar9 = (float10)param_3;
    if ((float10)DAT_0050c078 == fVar9) {
      fVar9 = (float10)*(double *)(uVar2 + 0x40);
    }
    FUN_00435030((int)piVar3,(float)(fVar9 / (float10)_DAT_0050c070));
    FUN_00435110((int)piVar3,(float)*(int *)(uVar2 + 0x48) / (float)_DAT_0050c070);
    FUN_00435140((int)piVar3,(float)*(int *)(uVar2 + 0x4c) / (float)*(int *)(uVar2 + 0x50));
    FUN_00435270((int)piVar3,*(undefined4 *)(uVar2 + 0x58),*(undefined4 *)(uVar2 + 0x5c));
    if ((param_2 & 2) == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = piVar3[0xd9] + 2;
    }
    FUN_004352c0((int)piVar3,&LAB_00416c10,piVar3);
    FUN_00434fb0((int)piVar3);
    return iVar7;
  }
LAB_00416d27:
  *(undefined1 *)(piVar3 + 0xda) = 0;
  return 0;
}


