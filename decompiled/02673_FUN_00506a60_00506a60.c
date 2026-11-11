// Function: FUN_00506a60
// Entry: 00506a60
// Size: 3403 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_00506a60(uint *param_1,int *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  byte *pbVar13;
  uint *puVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  bool bVar29;
  uint local_38;
  uint local_30;
  uint *local_28;
  char *local_24;
  uint local_14;
  
  puVar5 = param_1;
  local_38 = 0xb;
  local_14 = param_1[0x2a5];
  uVar17 = param_1[param_6 * 0xb + 0x4382];
  piVar28 = (int *)param_1[0x2a6];
  if ((char)param_1[param_6 * 0xb + 0x437e] == '\0') {
    uVar24 = param_1[uVar17 * 0xb + 0x437d];
  }
  else {
    uVar17 = uVar17 - 1;
    if (*(char *)((int)param_1 + param_6 * 0x2c + 0x10df9) == '\0') {
      uVar24 = param_1[uVar17 * 0xb + 0x437d];
    }
    else if (param_1[param_6 * 0xb + 0x4380] < 4) {
      uVar24 = 0xb;
      if ((int)param_1[param_1[param_6 * 0xb + 0x437f] * 0xb + 0x437d] < 7) {
        uVar24 = 8;
      }
    }
    else {
      uVar24 = 10;
      if ((int)param_1[param_1[param_6 * 0xb + 0x437f] * 0xb + 0x437d] < 7) {
        uVar24 = 7;
      }
    }
    if ((int)uVar24 < 4) {
      uVar24 = 0;
    }
    else if ((int)uVar24 < 10) {
      uVar24 = uVar24 - 3;
    }
    else {
      uVar24 = uVar24 - 6;
    }
  }
  local_24 = (char *)((int)param_1 + param_6 * 0x2c + 0x10df9);
  if (uVar17 == param_6 - 1) {
    if (param_1[param_6 * 0xb + 0x4383] == 0) {
      local_38 = (uint)(6 < (int)uVar24) * 2 + 9;
    }
    else if ((int)uVar24 < 4) {
      local_38 = 0;
    }
    else if ((int)uVar24 < 10) {
      local_38 = uVar24 - 3;
    }
    else {
      local_38 = uVar24 - 6;
    }
    goto LAB_00506ca4;
  }
  if (((char)param_1[param_6 * 0xb + 0x437e] == '\0') || (*local_24 == '\0')) {
    uVar18 = param_1[param_6 * 0xb + 0x4383];
    if (3 < uVar18) {
      local_38 = 10;
      if ((int)uVar24 < 7) {
        local_38 = 7;
      }
      goto LAB_00506c76;
    }
    if ((int)uVar24 < 7) {
      local_38 = 8;
    }
  }
  else {
    uVar18 = param_1[param_6 * 0xb + 0x4380];
    uVar17 = param_1[param_6 * 0xb + 0x437f];
    if ((int)uVar24 < 7) {
      local_38 = 8;
    }
    if (3 < uVar18) {
LAB_00506c76:
      *param_2 = uVar18 - 4;
      param_2[1] = param_1[uVar17 * 0xb + 0x4384];
      param_2[2] = param_1[uVar17 * 0xb + 0x4385];
      param_2[3] = param_1[uVar17 * 0xb + 0x4386];
      goto LAB_00506ca4;
    }
  }
  *param_2 = param_1[uVar17 * 0xb + uVar18 + 0x4384];
  uVar24 = 1;
  if (uVar18 != 0) {
    puVar11 = param_1 + uVar17 * 0xb + 0x4384;
    do {
      uVar20 = *puVar11;
      puVar11 = puVar11 + 1;
      param_2[uVar24] = uVar20;
      uVar24 = uVar24 + 1;
    } while (uVar24 <= uVar18);
    if (3 < uVar24) goto LAB_00506ca4;
  }
  puVar11 = param_1 + uVar24 + 0x4384 + uVar17 * 0xb;
  do {
    uVar17 = *puVar11;
    puVar11 = puVar11 + 1;
    param_2[uVar24] = uVar17;
    uVar24 = uVar24 + 1;
  } while (uVar24 < 4);
LAB_00506ca4:
  param_1[param_6 * 0xb + 0x437d] = local_38;
  param_1[param_6 * 0xb + 0x4384] = *param_2;
  param_1[param_6 * 0xb + 0x4385] = param_2[1];
  param_1[param_6 * 0xb + 0x4386] = param_2[2];
  param_1[param_6 * 0xb + 0x4387] = param_2[3];
  uVar17 = param_1[(param_6 + 0x623) * 0xb];
  bVar1 = *param_3;
  bVar2 = param_3[-1 - *param_2];
  uVar24 = param_1[0x2a8] & param_5;
  iVar6 = local_38 * 0x10 + uVar24;
  iVar7 = FUN_005061d0((int)param_1,param_5,(uint)param_3[-1],6 < (int)local_38,(uint)bVar2,
                       (uint)bVar1);
  uVar18 = (uint)(byte)(&DAT_00522710)[*(ushort *)((int)param_1 + iVar6 * 2 + 0x6aac) >> 4] +
           iVar7 + uVar17;
  iVar7 = param_6 + 0x624;
  bVar29 = uVar18 < param_1[iVar7 * 0xb];
  if (bVar29) {
    param_1[iVar7 * 0xb] = uVar18;
    param_1[param_6 * 0xb + 0x438d] = param_6;
    param_1[param_6 * 0xb + 0x438e] = 0xffffffff;
    *(undefined1 *)(param_1 + param_6 * 0xb + 0x4389) = 0;
  }
  iVar12 = (byte)(&DAT_00522710)[(*(ushort *)((int)param_1 + iVar6 * 2 + 0x6aac) ^ 0x7f0) >> 4] +
           uVar17;
  iVar8 = (uint)(byte)(&DAT_00522710)
                      [(*(ushort *)((int)param_1 + local_38 * 2 + 0x6c2c) ^ 0x7f0) >> 4] + iVar12;
  if ((bVar2 == bVar1) &&
     (((param_6 <= param_1[param_6 * 0xb + 0x438d] || (param_1[param_6 * 0xb + 0x438e] != 0)) &&
      (uVar17 = (uint)(byte)(&DAT_00522710)[*(ushort *)((int)param_1 + local_38 * 2 + 0x6c44) >> 4]
                + (uint)(byte)(&DAT_00522710)[*(ushort *)((int)param_1 + iVar6 * 2 + 0x6c8c) >> 4] +
                  iVar8, uVar17 <= param_1[iVar7 * 0xb])))) {
    param_1[iVar7 * 0xb] = uVar17;
    bVar29 = true;
    param_1[param_6 * 0xb + 0x438d] = param_6;
    param_1[param_6 * 0xb + 0x438e] = 0;
    *(undefined1 *)(param_1 + param_6 * 0xb + 0x4389) = 0;
  }
  if (1 < param_8) {
    piVar22 = (int *)param_7;
    if (param_8 < param_7) {
      piVar22 = (int *)param_8;
    }
    if ((!bVar29) && (bVar2 != bVar1)) {
      uVar17 = param_7 + 1;
      if (param_8 < param_7 + 1) {
        uVar17 = param_8;
      }
      uVar17 = FUN_00506170((int)param_3,(int)(param_3 + (-1 - *param_2)),1,uVar17);
      if (1 < uVar17 - 1) {
        if ((int)local_38 < 4) {
          iVar6 = 0x3556;
          local_28 = (uint *)0x6c44;
          iVar19 = 0x6c2c;
          iVar7 = 0x3646;
        }
        else {
          iVar7 = local_38 * 0x10;
          if ((int)local_38 < 10) {
            iVar6 = iVar7 + 0x3526;
            iVar7 = iVar7 + 0x3616;
            iVar19 = local_38 * 2 + 0x6c26;
            local_28 = (uint *)(local_38 * 2 + 0x6c3e);
          }
          else {
            iVar6 = iVar7 + 0x34f6;
            iVar7 = iVar7 + 0x35e6;
            iVar19 = local_38 * 2 + 0x6c20;
            local_28 = (uint *)(local_38 * 2 + 0x6c38);
          }
        }
        uVar27 = param_1[0x2a8] & param_5 + 1;
        bVar1 = (&DAT_00522710)[(*(ushort *)((int)param_1 + (iVar6 + uVar27) * 2) ^ 0x7f0) >> 4];
        uVar20 = uVar17 + param_6;
        bVar2 = (&DAT_00522710)[(*(ushort *)(iVar19 + (int)param_1) ^ 0x7f0) >> 4];
        if (param_4 < uVar20) {
          puVar11 = param_1 + (param_4 + 0x623) * 0xb;
          iVar6 = uVar20 - param_4;
          do {
            puVar11[0xb] = 0x40000000;
            puVar11 = puVar11 + 0xb;
            iVar6 = iVar6 + -1;
            param_4 = uVar20;
          } while (iVar6 != 0);
        }
        uVar17 = (uint)(byte)(&DAT_00522710)
                             [(*(ushort *)((int)param_1 + (uVar27 + iVar7) * 2) ^ 0x7f0) >> 4] +
                 (uint)(byte)(&DAT_00522710)[*(ushort *)((int)local_28 + (int)param_1) >> 4] +
                 param_1[uVar27 * 0x110 + (uVar17 - 1) + 0x2f55] + (uint)bVar2 + bVar1 + uVar18;
        if (uVar17 < param_1[(uVar20 + 0x623) * 0xb]) {
          param_1[(uVar20 + 0x623) * 0xb] = uVar17;
          param_1[uVar20 * 0xb + 0x4382] = param_6 + 1;
          param_1[uVar20 * 0xb + 0x4383] = 0;
          *(undefined2 *)(param_1 + uVar20 * 0xb + 0x437e) = 1;
        }
      }
    }
    local_28 = (uint *)0x2;
    local_30 = 0;
    do {
      pbVar13 = param_3 + (-1 - param_2[local_30]);
      if (*(short *)param_3 == *(short *)pbVar13) {
        piVar25 = (int *)0x2;
        piVar23 = piVar22;
        if ((int *)0x2 < piVar22) {
          pbVar9 = param_3 + 2;
          do {
            uVar17 = *(int *)pbVar9 - *(int *)(pbVar9 + ((int)pbVar13 - (int)param_3));
            if (uVar17 != 0) {
              piVar21 = (int *)((int)piVar25 + 2);
              if ((uVar17 & 0xffff) != 0) {
                piVar21 = piVar25;
              }
              uVar18 = uVar17 >> 0x10;
              if ((uVar17 & 0xffff) != 0) {
                uVar18 = uVar17;
              }
              piVar25 = (int *)((int)piVar21 + 1);
              if ((char)uVar18 != '\0') {
                piVar25 = piVar21;
              }
              if (piVar25 < piVar22) {
                piVar23 = piVar25;
              }
              break;
            }
            piVar25 = piVar25 + 1;
            pbVar9 = pbVar9 + 4;
          } while (piVar25 < piVar22);
        }
        uVar17 = param_6 + (int)piVar23;
        if (param_4 < uVar17) {
          puVar11 = param_1 + (param_4 + 0x623) * 0xb;
          iVar7 = uVar17 - param_4;
          do {
            puVar11[0xb] = 0x40000000;
            puVar11 = puVar11 + 0xb;
            iVar7 = iVar7 + -1;
            param_4 = uVar17;
          } while (iVar7 != 0);
        }
        if (local_30 == 0) {
          iVar7 = (uint)(byte)(&DAT_00522710)
                              [(*(ushort *)((int)param_1 + (local_38 * 0x10 + uVar24) * 2 + 0x6c8c)
                               ^ 0x7f0) >> 4] +
                  (uint)(byte)(&DAT_00522710)
                              [*(ushort *)((int)param_1 + local_38 * 2 + 0x6c44) >> 4];
        }
        else if (local_30 == 1) {
          iVar7 = (uint)(byte)(&DAT_00522710)
                              [(*(ushort *)((int)param_1 + local_38 * 2 + 0x6c44) ^ 0x7f0) >> 4] +
                  (uint)(byte)(&DAT_00522710)
                              [*(ushort *)((int)param_1 + local_38 * 2 + 0x6c5c) >> 4];
        }
        else {
          iVar7 = (uint)(byte)(&DAT_00522710)
                              [(*(ushort *)((int)param_1 + local_38 * 2 + 0x6c44) ^ 0x7f0) >> 4] +
                  (uint)(byte)(&DAT_00522710)
                              [(*(ushort *)((int)param_1 + local_38 * 2 + 0x6c5c) ^ 0x7f0) >> 4] +
                  (uint)(byte)(&DAT_00522710)
                              [(uint)(*(ushort *)((int)param_1 + local_38 * 2 + 0x6c74) >> 4) ^
                               2 - local_30 >> 4 & 0x7f];
        }
        iVar7 = iVar8 + iVar7;
        puVar10 = param_1 + (param_6 + 0x623 + (int)piVar23) * 0xb;
        puVar11 = param_1 + (int)(piVar23 + uVar24 * 0x44) + 0x2f55;
        piVar25 = piVar23;
        do {
          uVar17 = *puVar11 + iVar7;
          if (uVar17 < *puVar10) {
            *puVar10 = uVar17;
            puVar10[1] = param_6;
            puVar10[2] = local_30;
            *(undefined1 *)(puVar10 + -3) = 0;
          }
          piVar25 = (int *)((int)piVar25 - 1);
          puVar11 = puVar11 + -1;
          puVar10 = puVar10 + -0xb;
        } while ((int *)0x1 < piVar25);
        piVar25 = (int *)((int)piVar23 + 1);
        if (local_30 == 0) {
          local_28 = (uint *)piVar25;
        }
        piVar21 = (int *)(param_7 + (int)piVar25);
        if (param_8 < (int *)(param_7 + (int)piVar25)) {
          piVar21 = (int *)param_8;
        }
        if (piVar25 < piVar21) {
          pbVar9 = param_3 + (int)piVar25;
          do {
            if (*pbVar9 != pbVar9[(int)pbVar13 - (int)param_3]) break;
            piVar25 = (int *)((int)piVar25 + 1);
            pbVar9 = pbVar9 + 1;
          } while (piVar25 < piVar21);
        }
        uVar17 = (int)piVar25 + (-1 - (int)piVar23);
        if (1 < uVar17) {
          uVar20 = (int)piVar23 + param_5;
          uVar18 = param_1[0x2a8];
          iVar6 = FUN_005061d0((int)param_1,uVar20,(uint)param_3[(int)piVar23 - 1],'\x01',
                               (uint)*(byte *)((int)piVar23 + (int)pbVar13),
                               (uint)*(byte *)((int)piVar23 + (int)param_3));
          iVar19 = 0x3606;
          if ((int)local_38 < 7) {
            iVar19 = 0x35d6;
          }
          uVar27 = uVar20 + 1 & uVar18;
          bVar1 = (&DAT_00522710)[*(ushort *)((int)param_1 + (iVar19 + (uVar18 & uVar20)) * 2) >> 4]
          ;
          uVar18 = param_1[(int)(piVar23 + uVar24 * 0x44) + 0x2f55];
          bVar2 = (&DAT_00522710)[(*(ushort *)((int)param_1 + uVar27 * 2 + 0x6b4c) ^ 0x7f0) >> 4];
          uVar20 = (int)piVar25 + param_6;
          bVar3 = (&DAT_00522710)[(*(ushort *)((int)param_1 + 0x6c36) ^ 0x7f0) >> 4];
          if (param_4 < uVar20) {
            puVar11 = param_1 + (param_4 + 0x623) * 0xb;
            iVar19 = uVar20 - param_4;
            do {
              puVar11[0xb] = 0x40000000;
              puVar11 = puVar11 + 0xb;
              iVar19 = iVar19 + -1;
              param_4 = uVar20;
            } while (iVar19 != 0);
          }
          uVar17 = (uint)(byte)(&DAT_00522710)
                               [(*(ushort *)((int)param_1 + uVar27 * 2 + 0x6d2c) ^ 0x7f0) >> 4] +
                   (uint)(byte)(&DAT_00522710)[*(ushort *)((int)param_1 + 0x6c4e) >> 4] +
                   param_1[uVar27 * 0x110 + uVar17 + 0x2f55] +
                   (uint)bVar3 + (uint)bVar2 + iVar6 + (uint)bVar1 + uVar18 + iVar7;
          if (uVar17 < param_1[(uVar20 + 0x623) * 0xb]) {
            param_1[(uVar20 + 0x623) * 0xb] = uVar17;
            param_1[uVar20 * 0xb + 0x4383] = 0;
            *(undefined2 *)(param_1 + uVar20 * 0xb + 0x437e) = 0x101;
            param_1[uVar20 * 0xb + 0x4382] = param_6 + 1 + (int)piVar23;
            param_1[uVar20 * 0xb + 0x437f] = param_6;
            param_1[uVar20 * 0xb + 0x4380] = local_30;
          }
        }
      }
      local_30 = local_30 + 1;
    } while (local_30 < 4);
    if (piVar22 < piVar28) {
      puVar11 = param_1 + 0x81;
      iVar7 = 0;
      piVar28 = (int *)*puVar11;
      while (piVar28 < piVar22) {
        puVar11 = puVar11 + 2;
        iVar7 = iVar7 + 1;
        piVar28 = (int *)*puVar11;
      }
      param_1[iVar7 * 2 + 0x81] = (uint)piVar22;
      local_14 = iVar7 + 1;
      piVar28 = piVar22;
    }
    if (local_28 <= piVar28) {
      uVar17 = (int)piVar28 + param_6;
      bVar1 = (&DAT_00522710)[*(ushort *)((int)param_1 + local_38 * 2 + 0x6c2c) >> 4];
      if (param_4 < uVar17) {
        puVar11 = param_1 + (param_4 + 0x623) * 0xb;
        iVar7 = uVar17 - param_4;
        do {
          puVar11[0xb] = 0x40000000;
          puVar11 = puVar11 + 0xb;
          iVar7 = iVar7 + -1;
          param_4 = uVar17;
        } while (iVar7 != 0);
      }
      local_24 = (char *)0x0;
      puVar11 = param_1 + 0x81;
      piVar28 = (int *)*puVar11;
      while (piVar28 < local_28) {
        puVar11 = puVar11 + 2;
        local_24 = (char *)((int)local_24 + 1);
        piVar28 = (int *)*puVar11;
      }
      piVar28 = (int *)(param_7 + 1 + (int)local_28);
      puVar14 = param_1 + ((int)local_28 + param_6 + 0x623) * 0xb;
      puVar11 = param_1 + uVar24 * 0x110 + 0x1d43 + (int)local_28;
      uVar17 = ~param_7;
      param_1 = param_1 + (int)local_24 * 2 + 0x81;
      puVar10 = local_28;
      do {
        local_28 = puVar11;
        param_2 = (int *)((int)puVar10 + 1);
        uVar24 = param_1[1];
        iVar7 = (-3 - param_7) + (int)piVar28;
        if (5 < uVar17 + (int)piVar28) {
          iVar7 = 3;
        }
        if (uVar24 < 0x80) {
          uVar18 = puVar5[iVar7 * 0x80 + uVar24 + 0x4168];
        }
        else {
          iVar6 = 0x1f;
          if (uVar24 != 0) {
            for (; uVar24 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          uVar18 = puVar5[(uVar24 >> ((char)iVar6 - 1U & 0x1f) & 1) + (iVar7 * 0x20 + iVar6) * 2 +
                          0x4068] + puVar5[(uVar24 & 0xf) + 0x436a];
        }
        uVar18 = uVar18 + (uint)bVar1 + iVar12 + *local_28;
        if (uVar18 < *puVar14) {
          *puVar14 = uVar18;
          puVar14[1] = param_6;
          puVar14[2] = uVar24 + 4;
          *(undefined1 *)(puVar14 + -3) = 0;
        }
        if (uVar17 + (int)piVar28 == *param_1) {
          piVar22 = piVar28;
          if (param_8 < piVar28) {
            piVar22 = (int *)param_8;
          }
          piVar23 = param_2;
          if (param_2 < piVar22) {
            pcVar15 = (char *)(((int)param_3 - param_7) + (int)piVar28);
            do {
              if (*pcVar15 != pcVar15[-1 - uVar24]) break;
              piVar23 = (int *)((int)piVar23 + 1);
              pcVar15 = pcVar15 + 1;
            } while (piVar23 < piVar22);
          }
          uVar20 = (int)piVar23 + ((-1 - uVar17) - (int)piVar28);
          if (1 < uVar20) {
            uVar16 = (int)param_2 + (param_5 - 1);
            uVar27 = puVar5[0x2a8];
            uVar26 = uVar27 & uVar16;
            iVar7 = FUN_005061d0((int)puVar5,uVar16,(uint)param_3[(int)puVar10 + -1],'\x01',
                                 (uint)(param_3 + uVar17 + (-1 - uVar24))[(int)piVar28],
                                 (uint)*(byte *)((int)puVar10 + (int)param_3));
            iVar6 = 0x35f6;
            if ((int)local_38 < 7) {
              iVar6 = 0x35c6;
            }
            uVar27 = uVar26 + 1 & uVar27;
            bVar2 = (&DAT_00522710)[*(ushort *)((int)puVar5 + (iVar6 + uVar26) * 2) >> 4];
            bVar3 = (&DAT_00522710)[(*(ushort *)((int)puVar5 + uVar27 * 2 + 0x6b2c) ^ 0x7f0) >> 4];
            uVar16 = (int)piVar23 + param_6;
            bVar4 = (&DAT_00522710)[((ushort)puVar5[0x1b0d] ^ 0x7f0) >> 4];
            if (param_4 < uVar16) {
              puVar11 = puVar5 + (param_4 + 0x623) * 0xb;
              iVar6 = uVar16 - param_4;
              do {
                puVar11[0xb] = 0x40000000;
                puVar11 = puVar11 + 0xb;
                iVar6 = iVar6 + -1;
                param_4 = uVar16;
              } while (iVar6 != 0);
            }
            uVar18 = (uint)(byte)(&DAT_00522710)
                                 [(*(ushort *)((int)puVar5 + uVar27 * 2 + 0x6d0c) ^ 0x7f0) >> 4] +
                     (uint)(byte)(&DAT_00522710)[(ushort)((ushort)puVar5[0x1b13] >> 4)] +
                     puVar5[uVar27 * 0x110 + uVar20 + 0x2f55] +
                     (uint)bVar4 + (uint)bVar3 + (uint)bVar2 + iVar7 + uVar18;
            if (uVar18 < puVar5[(uVar16 + 0x623) * 0xb]) {
              puVar5[(uVar16 + 0x623) * 0xb] = uVar18;
              puVar5[uVar16 * 0xb + 0x4382] = (param_6 - param_7) + (int)piVar28;
              puVar5[uVar16 * 0xb + 0x437f] = param_6;
              puVar5[uVar16 * 0xb + 0x4383] = 0;
              *(undefined2 *)(puVar5 + uVar16 * 0xb + 0x437e) = 0x101;
              puVar5[uVar16 * 0xb + 0x4380] = uVar24 + 4;
            }
          }
          local_24 = (char *)((int)local_24 + 1);
          param_1 = param_1 + 2;
          if (local_24 == (char *)local_14) {
            return param_4;
          }
        }
        puVar14 = puVar14 + 0xb;
        piVar28 = (int *)((int)piVar28 + 1);
        puVar11 = local_28 + 1;
        puVar10 = (uint *)param_2;
      } while( true );
    }
  }
  return param_4;
}


