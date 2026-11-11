// Function: FUN_00494e80
// Entry: 00494e80
// Size: 1011 bytes
// Thunk: false
// External: false


byte __cdecl FUN_00494e80(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  ushort uVar12;
  uint uVar13;
  
  piVar2 = param_1;
  uVar10 = param_1[0xb];
  if (param_1[3] - 5U <= (uint)param_1[0xb]) {
    uVar10 = param_1[3] - 5U;
  }
  uVar12 = 0;
  iVar8 = *(int *)(*param_1 + 4);
  do {
    iVar5 = *param_1;
    uVar3 = param_1[0x5af] + 0x2a >> 3;
    if (*(uint *)(iVar5 + 0x10) < uVar3) break;
    uVar3 = *(uint *)(iVar5 + 0x10) - uVar3;
    uVar13 = param_1[0x1b] - param_1[0x17];
    uVar4 = *(int *)(iVar5 + 4) + uVar13;
    uVar9 = 0xffff;
    if (uVar4 < 0xffff) {
      uVar9 = uVar4;
    }
    if (uVar3 < uVar9) {
      uVar9 = uVar3;
    }
    if (uVar9 < uVar10) {
      if (uVar9 == 0) {
        if (param_2 != 4) break;
      }
      else if (param_2 == 0) break;
      if (uVar9 != *(int *)(iVar5 + 4) + uVar13) break;
    }
    if ((param_2 == 4) && (uVar9 == *(int *)(iVar5 + 4) + uVar13)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    FUN_004d0ea0((int)param_1,(uint *)0x0,0,uVar12);
    *(byte *)(param_1[2] + -4 + param_1[5]) = (byte)uVar9;
    bVar7 = (byte)(uVar9 >> 8);
    *(byte *)(param_1[2] + -3 + param_1[5]) = bVar7;
    *(byte *)(param_1[2] + -2 + param_1[5]) = ~(byte)uVar9;
    *(byte *)(param_1[2] + -1 + param_1[5]) = ~bVar7;
    iVar5 = *param_1;
    iVar1 = *(int *)(iVar5 + 0x1c);
    thunk_FUN_004d2390(iVar1);
    uVar3 = *(uint *)(iVar5 + 0x10);
    if (*(uint *)(iVar1 + 0x14) <= *(uint *)(iVar5 + 0x10)) {
      uVar3 = *(uint *)(iVar1 + 0x14);
    }
    if (uVar3 != 0) {
      FUN_0044c490(*(uint **)(iVar5 + 0xc),*(uint **)(iVar1 + 0x10),uVar3);
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + uVar3;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + uVar3;
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + uVar3;
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) - uVar3;
      piVar11 = (int *)(iVar1 + 0x14);
      *piVar11 = *piVar11 - uVar3;
      if (*piVar11 == 0) {
        *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
      }
    }
    if (uVar13 != 0) {
      if (uVar9 < uVar13) {
        uVar13 = uVar9;
      }
      FUN_0044c490(*(uint **)(*param_1 + 0xc),(uint *)(param_1[0x17] + param_1[0xe]),uVar13);
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + uVar13;
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) - uVar13;
      *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + uVar13;
      param_1[0x17] = param_1[0x17] + uVar13;
      uVar9 = uVar9 - uVar13;
    }
    if (uVar9 != 0) {
      FUN_004973c0((int *)*param_1,(uint *)((int *)*param_1)[3],uVar9);
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + uVar9;
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) - uVar9;
      *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + uVar9;
    }
  } while (uVar12 == 0);
  uVar10 = iVar8 - ((int *)*param_1)[1];
  if (uVar10 != 0) {
    uVar3 = param_1[0xb];
    if (uVar10 < uVar3) {
      uVar9 = param_1[0x1b];
      if (param_1[0xf] - uVar9 <= uVar10) {
        param_1[0x1b] = uVar9 - uVar3;
        FUN_0044c490((uint *)param_1[0xe],(uint *)(param_1[0xe] + uVar3),uVar9 - uVar3);
        if ((uint)param_1[0x5ac] < 2) {
          param_1[0x5ac] = param_1[0x5ac] + 1;
        }
        uVar9 = param_1[0x1b];
        if (uVar9 < (uint)param_1[0x5ad]) {
          param_1[0x5ad] = uVar9;
        }
      }
      FUN_0044c490((uint *)(param_1[0xe] + uVar9),(uint *)(*(int *)*param_1 - uVar10),uVar10);
      uVar3 = param_1[0xb] - param_1[0x5ad];
      iVar8 = param_1[0x1b] + uVar10;
      if (uVar3 < uVar10) {
        uVar10 = uVar3;
      }
      iVar5 = param_1[0x5ad] + uVar10;
    }
    else {
      param_1[0x5ac] = 2;
      FUN_0044c490((uint *)param_1[0xe],(uint *)(*(int *)*param_1 - uVar3),uVar3);
      iVar5 = param_1[0xb];
      iVar8 = iVar5;
    }
    param_1[0x1b] = iVar8;
    param_1[0x5ad] = iVar5;
    param_1[0x17] = iVar8;
  }
  uVar10 = param_1[0x1b];
  if ((uint)param_1[0x5b0] < uVar10) {
    param_1[0x5b0] = uVar10;
  }
  if (uVar12 != 0) {
    return 3;
  }
  if ((((param_2 != 0) && (param_2 != 4)) && (*(int *)(*param_1 + 4) == 0)) &&
     (uVar10 == param_1[0x17])) {
    return 1;
  }
  piVar11 = (int *)(param_1[0xf] - uVar10);
  if (piVar11 < *(int **)(*param_1 + 4)) {
    iVar8 = param_1[0xb];
    if (iVar8 <= param_1[0x17]) {
      param_1[0x17] = param_1[0x17] - iVar8;
      param_1[0x1b] = uVar10 - iVar8;
      FUN_0044c490((uint *)param_1[0xe],(uint *)(iVar8 + param_1[0xe]),uVar10 - iVar8);
      if ((uint)param_1[0x5ac] < 2) {
        param_1[0x5ac] = param_1[0x5ac] + 1;
      }
      piVar11 = (int *)((int)piVar11 + param_1[0xb]);
      if ((uint)param_1[0x1b] < (uint)param_1[0x5ad]) {
        param_1[0x5ad] = param_1[0x1b];
      }
    }
  }
  param_1 = piVar11;
  piVar11 = (int *)((int *)*piVar2)[1];
  if (param_1 <= piVar11) {
    piVar11 = param_1;
  }
  if (piVar11 != (int *)0x0) {
    FUN_004973c0((int *)*piVar2,(uint *)(piVar2[0x1b] + piVar2[0xe]),(uint)piVar11);
    piVar2[0x1b] = piVar2[0x1b] + (int)piVar11;
    piVar6 = (int *)(piVar2[0xb] - piVar2[0x5ad]);
    if (piVar6 < piVar11) {
      piVar11 = piVar6;
    }
    piVar2[0x5ad] = piVar2[0x5ad] + (int)piVar11;
  }
  uVar10 = piVar2[0x1b];
  if ((uint)piVar2[0x5b0] < uVar10) {
    piVar2[0x5b0] = uVar10;
  }
  uVar3 = piVar2[3] - (piVar2[0x5af] + 0x2a >> 3);
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  uVar10 = uVar10 - piVar2[0x17];
  uVar9 = piVar2[0xb];
  if (uVar3 <= (uint)piVar2[0xb]) {
    uVar9 = uVar3;
  }
  if (uVar10 < uVar9) {
    uVar12 = 0;
    if (uVar10 == 0) {
      if (param_2 != 4) goto LAB_00495262;
    }
    else if (param_2 == 0) goto LAB_00495262;
    if ((*(int *)(*piVar2 + 4) != 0) || (uVar3 < uVar10)) goto LAB_00495262;
  }
  uVar9 = uVar10;
  if (uVar3 < uVar10) {
    uVar9 = uVar3;
  }
  if (((param_2 == 4) && (*(int *)(*piVar2 + 4) == 0)) && (uVar9 == uVar10)) {
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
  }
  FUN_004d0ea0((int)piVar2,(uint *)(piVar2[0xe] + piVar2[0x17]),uVar9,uVar12);
  piVar2[0x17] = piVar2[0x17] + uVar9;
  FUN_00497370(*piVar2);
LAB_00495262:
  return -(uVar12 != 0) & 2;
}


