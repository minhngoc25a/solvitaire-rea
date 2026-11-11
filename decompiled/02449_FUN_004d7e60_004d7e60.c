// Function: FUN_004d7e60
// Entry: 004d7e60
// Size: 536 bytes
// Thunk: false
// External: false


int __cdecl FUN_004d7e60(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  
  iVar10 = 0;
  iVar7 = *param_1;
  iVar3 = param_1[4];
  if ((iVar7 != 0) && (iVar5 = *(int *)(*(int *)(param_1[2] + 0x10) + 0x84), iVar5 != 0)) {
    piVar1 = (int *)(iVar5 + 4);
    *piVar1 = *piVar1 + 0x1c;
    iVar7 = *param_1;
  }
  iVar5 = param_1[4];
  uVar4 = iVar5 + 0x1c;
  param_1[4] = uVar4;
  if ((uVar4 & 1) != 0) {
    iVar5 = iVar5 + 0x1d;
    param_1[4] = iVar5;
    if (param_1[1] != 0) {
      *(undefined1 *)(param_1[1] + iVar5) = 0;
      iVar7 = *param_1;
    }
    iVar10 = 1;
  }
  piVar1 = param_1 + 7;
  piVar2 = param_1 + 8;
  if (iVar7 == 0) {
    param_1[5] = param_1[4];
  }
  else if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    FUN_004de5b0((undefined4 *)param_1[3],*piVar2,*piVar1,param_1[4] - iVar10);
  }
  *param_1 = 1;
  if (param_1[1] != 0) {
    param_1[3] = param_1[1] + iVar3 + 1;
    iVar3 = *(int *)(param_1[2] + 0x10);
    if (piVar1 == (int *)0x0) {
      if (*(int *)(iVar3 + 0x7c) != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x80) + -0x808);
        if ((piVar9 != (int *)0x0) && (0x1b < 0x800 - *(int *)(*(int *)(iVar3 + 0x80) + -0x804)))
        goto LAB_004d7f95;
      }
      piVar9 = (int *)FUN_00482949(0x80c);
      if (piVar9 == (int *)0x0) {
        param_1[1] = -1;
        goto LAB_004d8056;
      }
      *piVar9 = 0;
      piVar9[1] = 0;
      piVar9[0x202] = 0;
      puVar8 = *(undefined4 **)(iVar3 + 0x80);
      if (*(undefined4 **)(iVar3 + 0x80) == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)(iVar3 + 0x7c);
      }
      *puVar8 = piVar9;
      *(int **)(iVar3 + 0x80) = piVar9 + 0x202;
    }
    else {
      piVar9 = *(int **)(iVar3 + 0x84);
      if (0x800 - piVar9[1] < 0x1c) {
        piVar9 = (int *)piVar9[0x202];
      }
    }
LAB_004d7f95:
    iVar7 = piVar9[1];
    uVar4 = -iVar7 + 0x7e4;
    param_1[6] = uVar4;
    if ((uVar4 & 1) != 0) {
      param_1[6] = -iVar7 + 0x7e3;
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = piVar9[1];
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar9;
    }
    *(int **)(iVar3 + 0x84) = piVar9;
    param_1[1] = piVar9[1] + 7 + (int)piVar9;
    goto LAB_004d8056;
  }
  iVar3 = *(int *)(param_1[2] + 0x10);
  if (*(int *)(iVar3 + 0x7c) == 0) {
LAB_004d7ff7:
    puVar8 = (undefined4 *)FUN_00482949(0x80c);
    if (puVar8 == (undefined4 *)0x0) goto LAB_004d8056;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[0x202] = 0;
    puVar6 = *(undefined4 **)(iVar3 + 0x80);
    if (*(undefined4 **)(iVar3 + 0x80) == (undefined4 *)0x0) {
      *(undefined4 **)(iVar3 + 0x80) = (undefined4 *)(iVar3 + 0x7c);
      puVar6 = (undefined4 *)(iVar3 + 0x7c);
    }
    *puVar6 = puVar8;
    *(undefined4 **)(iVar3 + 0x80) = puVar8 + 0x202;
  }
  else {
    puVar8 = (undefined4 *)(*(int *)(iVar3 + 0x80) + -0x808);
    if ((puVar8 == (undefined4 *)0x0) || (0x800 - *(int *)(*(int *)(iVar3 + 0x80) + -0x804) < 0x1c))
    goto LAB_004d7ff7;
  }
  iVar7 = puVar8[1];
  uVar4 = -iVar7 + 0x7e4;
  param_1[6] = uVar4;
  if ((uVar4 & 1) != 0) {
    param_1[6] = -iVar7 + 0x7e3;
  }
  *(undefined4 **)(iVar3 + 0x84) = puVar8;
LAB_004d8056:
  param_1[4] = 0;
  if (param_1[6] < param_2) {
    FUN_004d7e60(param_1,param_2);
  }
  return param_1[1];
}


