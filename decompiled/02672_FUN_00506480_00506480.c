// Function: FUN_00506480
// Entry: 00506480
// Size: 1490 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00506480(int param_1,int *param_2,uint *param_3,uint *param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint local_30;
  uint local_2c;
  int *local_28;
  int *local_24;
  uint *local_20;
  uint local_1c;
  uint local_18;
  uint local_10 [4];
  
  local_18 = param_2[0x12];
  if (param_2[6] == 0) {
    local_30 = FUN_00509370(param_2,(int *)&local_24,param_1 + 0x204);
  }
  else {
    local_30 = *(uint *)(param_1 + 0xa98);
    local_24 = *(int **)(param_1 + 0xa94);
  }
  uVar17 = (param_2[8] - param_2[5]) + 1;
  if (uVar17 < 0x111) {
    if (uVar17 < 2) goto LAB_00506646;
  }
  else {
    uVar17 = 0x111;
  }
  pbVar16 = (byte *)(*param_2 + param_2[5] + -1);
  uVar18 = 0;
  local_2c = 0;
  local_1c = 0;
  local_20 = (uint *)0x0;
  do {
    if (*(short *)pbVar16 == *(short *)(pbVar16 + (-1 - *(int *)(param_1 + 500 + local_1c * 4)))) {
      uVar18 = 2;
      uVar13 = uVar17;
      if (2 < uVar17) {
        pbVar7 = pbVar16 + 2;
        do {
          uVar10 = *(int *)pbVar7 -
                   *(int *)(pbVar7 + ((int)(pbVar16 + (-1 - *(int *)(param_1 + 500 + local_1c * 4)))
                                     - (int)pbVar16));
          if (uVar10 != 0) {
            cVar6 = (char)(uVar10 >> 0x10);
            uVar14 = uVar18 + 2;
            if ((uVar10 & 0xffff) != 0) {
              cVar6 = (char)uVar10;
              uVar14 = uVar18;
            }
            uVar18 = uVar14 + 1;
            if (cVar6 != '\0') {
              uVar18 = uVar14;
            }
            if (uVar18 < uVar17) {
              uVar13 = uVar18;
            }
            break;
          }
          uVar18 = uVar18 + 4;
          pbVar7 = pbVar7 + 4;
        } while (uVar18 < uVar17);
      }
      local_10[local_1c] = uVar13;
      uVar18 = local_2c;
      if (*(uint *)((int)local_10 + (int)local_20) < uVar13) {
        uVar18 = local_1c;
        local_2c = local_1c;
        local_20 = (uint *)(local_1c * 4);
      }
    }
    else {
      local_10[local_1c] = 0;
    }
    local_1c = local_1c + 1;
  } while (local_1c < 4);
  uVar17 = local_10[uVar18];
  if (uVar17 < local_18) {
    if (local_30 < local_18) {
      iVar19 = *(int *)(param_1 + 500);
      bVar2 = *pbVar16;
      bVar3 = pbVar16[-1 - iVar19];
      if (((1 < local_30) || (bVar2 == bVar3)) || (1 < uVar17)) {
        local_1c = *(int *)(param_1 + 0x1f0);
        uVar18 = *(uint *)(param_1 + 0xaa0) & param_5;
        *(uint *)(param_1 + 0x10df4) = local_1c;
        local_18 = local_1c * 0x10 + uVar18;
        iVar8 = FUN_005061d0(param_1,param_5,(uint)pbVar16[-1],6 < (int)local_1c,(uint)bVar3,
                             (uint)bVar2);
        bVar4 = (&DAT_00522710)[*(ushort *)(param_1 + 0x6aac + local_18 * 2) >> 4];
        *(uint *)(param_1 + 0x10e30) = iVar8 + (uint)bVar4;
        *(undefined4 *)(param_1 + 0x10e38) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x10e24) = 0;
        bVar5 = (&DAT_00522710)[(*(ushort *)(param_1 + 0x6aac + local_18 * 2) ^ 0x7f0) >> 4];
        iVar9 = (uint)(byte)(&DAT_00522710)
                            [(*(ushort *)(param_1 + 0x6c2c + local_1c * 2) ^ 0x7f0) >> 4] +
                (uint)bVar5;
        uVar13 = 0xffffffff;
        if (bVar3 == bVar2) {
          uVar10 = (uint)(byte)(&DAT_00522710)[*(ushort *)(param_1 + 0x6c8c + local_18 * 2) >> 4] +
                   (uint)(byte)(&DAT_00522710)[*(ushort *)(param_1 + 0x6c44 + local_1c * 2) >> 4] +
                   iVar9;
          uVar13 = 0xffffffff;
          if (uVar10 < iVar8 + (uint)bVar4) {
            *(uint *)(param_1 + 0x10e30) = uVar10;
            uVar13 = 0;
            *(undefined4 *)(param_1 + 0x10e38) = 0;
          }
        }
        uVar10 = local_30;
        if (local_30 <= uVar17) {
          uVar10 = uVar17;
        }
        if (uVar10 < 2) {
          *param_3 = uVar13;
          *param_4 = 1;
          return 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x10e34) = 0;
        *(int *)(param_1 + 0x10e10) = iVar19;
        *(undefined4 *)(param_1 + 0x10e14) = *(undefined4 *)(param_1 + 0x1f8);
        *(undefined4 *)(param_1 + 0x10e18) = *(undefined4 *)(param_1 + 0x1fc);
        *(undefined4 *)(param_1 + 0x10e1c) = *(undefined4 *)(param_1 + 0x200);
        puVar11 = (undefined4 *)((uVar10 + 0x623) * 0x2c + param_1);
        uVar17 = uVar10;
        do {
          uVar17 = uVar17 - 1;
          *puVar11 = 0x40000000;
          puVar11 = puVar11 + -0xb;
        } while (1 < uVar17);
        uVar17 = 0;
        do {
          uVar13 = local_10[uVar17];
          if (1 < uVar13) {
            iVar8 = *(int *)(param_1 + 0x1f0);
            iVar19 = param_1 + iVar8 * 2;
            if (uVar17 == 0) {
              iVar19 = (uint)(byte)(&DAT_00522710)
                                   [(*(ushort *)(param_1 + 0x6c8c + (iVar8 * 0x10 + uVar18) * 2) ^
                                    0x7f0) >> 4] +
                       (uint)(byte)(&DAT_00522710)[*(ushort *)(iVar19 + 0x6c44) >> 4];
            }
            else {
              iVar1 = param_1 + iVar8 * 2;
              if (uVar17 == 1) {
                iVar19 = (uint)(byte)(&DAT_00522710)[(*(ushort *)(iVar19 + 0x6c44) ^ 0x7f0) >> 4] +
                         (uint)(byte)(&DAT_00522710)[*(ushort *)(iVar1 + 0x6c5c) >> 4];
              }
              else {
                iVar19 = (uint)(byte)(&DAT_00522710)[(*(ushort *)(iVar19 + 0x6c44) ^ 0x7f0) >> 4] +
                         (uint)(byte)(&DAT_00522710)[(*(ushort *)(iVar1 + 0x6c5c) ^ 0x7f0) >> 4] +
                         (uint)(byte)(&DAT_00522710)
                                     [(uint)(*(ushort *)(param_1 + 0x6c74 + iVar8 * 2) >> 4) ^
                                      2 - uVar17 >> 4 & 0x7f];
              }
            }
            puVar12 = (uint *)((uVar13 + 0x623) * 0x2c + param_1);
            piVar15 = (int *)(param_1 + (uVar18 * 0x110 + 0x2f55 + uVar13) * 4);
            do {
              uVar14 = *piVar15 + iVar9 + iVar19;
              if (uVar14 < *puVar12) {
                *puVar12 = uVar14;
                puVar12[1] = 0;
                puVar12[2] = uVar17;
                *(undefined1 *)(puVar12 + -3) = 0;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + -1;
              puVar12 = puVar12 + -0xb;
            } while (1 < uVar13);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < 4);
        bVar2 = (&DAT_00522710)[*(ushort *)(param_1 + 0x6c2c + *(int *)(param_1 + 0x1f0) * 2) >> 4];
        if (local_10[0] < 2) {
          local_10[0] = 2;
        }
        else {
          local_10[0] = local_10[0] + 1;
        }
        if (local_10[0] <= local_30) {
          piVar15 = (int *)0x0;
          puVar12 = (uint *)(param_1 + 0x204);
          uVar17 = *puVar12;
          while (uVar17 < local_10[0]) {
            puVar12 = puVar12 + 2;
            piVar15 = (int *)((int)piVar15 + 1);
            uVar17 = *puVar12;
          }
          local_20 = (uint *)(param_1 + 0x204 + (int)piVar15 * 8);
          puVar12 = (uint *)((local_10[0] + 0x623) * 0x2c + param_1);
          local_28 = (int *)(param_1 + (uVar18 * 0x110 + 0x1d43 + local_10[0]) * 4);
          param_2 = piVar15;
          do {
            uVar17 = local_20[1];
            iVar19 = local_10[0] - 2;
            if (5 < local_10[0]) {
              iVar19 = 3;
            }
            if (uVar17 < 0x80) {
              iVar19 = *(int *)(param_1 + 0x105a0 + (iVar19 * 0x80 + uVar17) * 4);
            }
            else {
              iVar8 = 0x1f;
              if (uVar17 != 0) {
                for (; uVar17 >> iVar8 == 0; iVar8 = iVar8 + -1) {
                }
              }
              iVar19 = *(int *)(param_1 + 0x101a0 +
                               ((uVar17 >> ((char)iVar8 - 1U & 0x1f) & 1) +
                               (iVar19 * 0x20 + iVar8) * 2) * 4) +
                       *(int *)(param_1 + 0x10da8 + (uVar17 & 0xf) * 4);
              piVar15 = param_2;
            }
            uVar18 = iVar19 + (uint)bVar2 + (uint)bVar5 + *local_28;
            if (uVar18 < *puVar12) {
              *puVar12 = uVar18;
              puVar12[1] = 0;
              puVar12[2] = uVar17 + 4;
              *(undefined1 *)(puVar12 + -3) = 0;
            }
            if (local_10[0] == *local_20) {
              piVar15 = (int *)((int)piVar15 + 1);
              local_20 = local_20 + 2;
              param_2 = piVar15;
              if (piVar15 == local_24) {
                return uVar10;
              }
            }
            local_28 = local_28 + 1;
            local_10[0] = local_10[0] + 1;
            puVar12 = puVar12 + 0xb;
          } while( true );
        }
        return uVar10;
      }
LAB_00506646:
      *param_3 = 0xffffffff;
      *param_4 = 1;
      return 0xffffffff;
    }
    *param_3 = *(int *)(param_1 + 0x200 + (int)local_24 * 8) + 4;
    *param_4 = local_30;
  }
  else {
    *param_3 = local_2c;
    *param_4 = uVar17;
    local_30 = uVar17;
  }
  iVar19 = local_30 - 1;
  if (iVar19 != 0) {
    (*(code *)param_2[0xb])(param_2,iVar19);
    param_2[6] = param_2[6] + iVar19;
  }
  return 0xffffffff;
}


