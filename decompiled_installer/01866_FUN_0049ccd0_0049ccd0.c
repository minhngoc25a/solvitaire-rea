// Function: FUN_0049ccd0
// Entry: 0049ccd0
// Size: 589 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049ccd0(int *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint local_10;
  undefined4 local_8;
  
  piVar7 = (int *)param_1[2];
  piVar3 = *(int **)(*param_1 + 4);
  iVar14 = *piVar7;
  iVar13 = piVar7[1];
  piVar8 = piVar7;
  for (; piVar7 != piVar3; piVar7 = (int *)((int)piVar7 + -6)) {
    *piVar7 = *(int *)((int)piVar8 + -6);
    *(undefined2 *)(piVar7 + 1) = *(undefined2 *)((int)piVar8 + -2);
    piVar8 = (int *)((int)piVar8 + -6);
  }
  *piVar7 = iVar14;
  *(short *)(piVar7 + 1) = (short)iVar13;
  bVar5 = *(byte *)((int)piVar7 + 1) + 4;
  uVar15 = (uint)*(ushort *)(*param_1 + 2) - (uint)*(byte *)((int)piVar7 + 1);
  *(byte *)((int)piVar7 + 1) = bVar5;
  iVar14 = param_1[3];
  local_10 = (uint)bVar5 + (uint)(iVar14 != 0) >> 1;
  *(char *)((int)piVar7 + 1) = (char)local_10;
  iVar13 = *(ushort *)*param_1 - 1;
  do {
    piVar8 = (int *)((int)piVar7 + 6);
    pbVar11 = (byte *)((int)piVar7 + 7);
    uVar15 = uVar15 - *(byte *)((int)piVar7 + 7);
    uVar6 = (uint)(iVar14 != 0) + (uint)*(byte *)((int)piVar7 + 7) >> 1;
    local_10 = local_10 + uVar6;
    bVar5 = (byte)uVar6;
    *pbVar11 = bVar5;
    if (*(byte *)((int)piVar7 + 1) < bVar5) {
      uVar1 = *(undefined2 *)((int)piVar7 + 10);
      iVar4 = *piVar8;
      piVar7 = piVar8;
      do {
        piVar10 = piVar7;
        *piVar10 = *(int *)((int)piVar10 + -6);
        *(undefined2 *)(piVar10 + 1) = *(undefined2 *)((int)piVar10 + -2);
        piVar7 = (int *)((int)piVar10 + -6);
        if (piVar7 == piVar3) break;
      } while (*(byte *)((int)piVar10 + -0xb) < (byte)((uint)iVar4 >> 8));
      *piVar7 = iVar4;
      *(undefined2 *)((int)piVar10 + -2) = uVar1;
      bVar5 = *pbVar11;
    }
    iVar13 = iVar13 + -1;
    piVar7 = piVar8;
  } while (iVar13 != 0);
  if (bVar5 == 0) {
    uVar2 = *(ushort *)*param_1;
    iVar14 = 0;
    do {
      pbVar11 = pbVar11 + -6;
      iVar14 = iVar14 + 1;
    } while (*pbVar11 == 0);
    uVar15 = uVar15 + iVar14;
    *(ushort *)*param_1 = uVar2 - (short)iVar14;
    if (*(ushort *)*param_1 == 1) {
      local_8 = *piVar3;
      iVar14 = piVar3[1];
      do {
        bVar5 = (byte)((uint)local_8 >> 8);
        uVar15 = uVar15 >> 1;
        local_8._0_2_ = CONCAT11(bVar5 - (bVar5 >> 1),(undefined1)local_8);
      } while (1 < uVar15);
      uVar15 = (uint)*(byte *)((uVar2 + 1 >> 1) + 0x6d + (int)param_1);
      *piVar3 = param_1[uVar15 + 0x3c];
      param_1[uVar15 + 0x3c] = (int)piVar3;
      iVar13 = *param_1;
      piVar7 = (int *)(iVar13 + 2);
      param_1[2] = (int)piVar7;
      *piVar7 = local_8;
      *(short *)(iVar13 + 6) = (short)iVar14;
      return;
    }
    uVar6 = uVar2 + 1 >> 1;
    uVar12 = *(ushort *)*param_1 + 1 >> 1;
    if (uVar6 != uVar12) {
      uVar9 = (uint)*(byte *)(uVar6 + 0x6d + (int)param_1);
      uVar6 = (uint)*(byte *)(uVar12 + 0x6d + (int)param_1);
      if (uVar9 != uVar6) {
        piVar7 = (int *)param_1[uVar6 + 0x3c];
        if (piVar7 != (int *)0x0) {
          param_1[uVar6 + 0x3c] = *piVar7;
          piVar8 = piVar3 + 2;
          piVar10 = piVar7;
          do {
            *piVar10 = piVar8[-2];
            piVar10[1] = piVar8[-1];
            *(int *)((int)piVar8 + ((int)piVar7 - (int)piVar3)) = *piVar8;
            uVar12 = uVar12 - 1;
            piVar8 = piVar8 + 3;
            piVar10 = piVar10 + 3;
          } while (uVar12 != 0);
          *piVar3 = param_1[uVar9 + 0x3c];
          param_1[uVar9 + 0x3c] = (int)piVar3;
          *(int **)(*param_1 + 4) = piVar7;
          goto LAB_0049cefe;
        }
        FUN_0049c390((int)param_1,(int)piVar3,uVar9,uVar6);
      }
      *(int **)(*param_1 + 4) = piVar3;
    }
  }
LAB_0049cefe:
  *(short *)(*param_1 + 2) = ((short)uVar15 - (short)(uVar15 >> 1)) + (short)local_10;
  param_1[2] = *(int *)(*param_1 + 4);
  return;
}


