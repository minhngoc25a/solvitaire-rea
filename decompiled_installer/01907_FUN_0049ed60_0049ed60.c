// Function: FUN_0049ed60
// Entry: 0049ed60
// Size: 4794 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0049ed60(undefined4 *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  char *pcVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uStack_7c;
  uint uStack_78;
  char *local_74;
  int *piStack_70;
  uint local_6c;
  char *local_68;
  uint uStack_64;
  uint uStack_60;
  int *piStack_5c;
  char *pcStack_58;
  char *pcStack_54;
  int *piStack_50;
  byte *pbStack_4c;
  int *piStack_48;
  int *piStack_44;
  uint uStack_40;
  uint uStack_3c;
  char *pcStack_38;
  int *piStack_34;
  uint auStack_30 [4];
  uint uStack_20;
  int *piStack_1c;
  char *pcStack_18;
  byte *pbStack_14;
  uint auStack_10 [4];
  
  param_1[7] = 0;
  param_1[6] = 0;
  if (param_1[0xd] == 0) {
    local_6c = FUN_0049ecb0(param_1,(int *)&local_68);
    pcVar10 = local_68;
  }
  else {
    local_6c = param_1[8];
    pcVar10 = (char *)param_1[9];
  }
  uVar19 = param_1[10];
  if (1 < uVar19) {
    if (0x111 < uVar19) {
      uVar19 = 0x111;
    }
    pbStack_4c = (byte *)(*(code *)param_1[3])(*param_1);
    local_68 = (char *)(param_1 + 0xe);
    pcStack_58 = (char *)0x0;
    pbVar1 = pbStack_4c + -1;
    piStack_5c = (int *)0x0;
    bVar2 = *pbVar1;
    iVar24 = 0;
    do {
      uVar16 = *(uint *)(local_68 + (int)piStack_5c * 4);
      auStack_30[(int)piStack_5c] = uVar16;
      iVar25 = -uVar16;
      if ((bVar2 == pbVar1[iVar25]) && (*pbStack_4c == pbVar1[iVar25 + 1])) {
        uVar16 = 2;
        pbVar13 = pbStack_4c;
        if (2 < uVar19) {
          do {
            pbVar13 = pbVar13 + 1;
            if (*pbVar13 != pbVar13[iVar25]) break;
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar19);
        }
        auStack_10[(int)piStack_5c] = uVar16;
        if (*(uint *)((int)auStack_10 + iVar24) < uVar16) {
          pcStack_58 = (char *)piStack_5c;
          iVar24 = (int)piStack_5c * 4;
        }
        if (uVar16 == 0x111) break;
      }
      else {
        auStack_10[(int)piStack_5c] = 0;
      }
      piStack_5c = (int *)((int)piStack_5c + 1);
    } while (piStack_5c < (char *)0x4);
    uVar19 = auStack_10[(int)pcStack_58];
    uStack_60 = uVar19;
    if ((uint)param_1[0xc] <= uVar19) {
      param_1[0x24] = pcStack_58;
      param_1[0xd] = param_1[0xd] + (uVar19 - 1);
      (*(code *)param_1[5])(*param_1,uVar19 - 1);
      return uVar19;
    }
    if ((uint)param_1[0xc] <= local_6c) {
      param_1[0x24] = param_1[(int)(pcVar10 + 0x1d1)] + 4;
      param_1[0xd] = param_1[0xd] + (local_6c - 1);
      (*(code *)param_1[5])(*param_1,local_6c - 1);
      return local_6c;
    }
    uStack_3c = auStack_30[0];
    bVar2 = *pbVar1;
    bVar3 = pbVar1[-auStack_30[0]];
    if (uVar19 <= local_6c) {
      uStack_60 = local_6c;
    }
    if ((1 < uStack_60) || (bVar2 == bVar3)) {
      *(undefined2 *)(param_1 + 0x2ea9) = *(undefined2 *)(param_1 + 0xb);
      piVar21 = (int *)(param_1[0x13] & param_2);
      iVar24 = param_1[0x14] +
               (((uint)pbStack_4c[-2] + param_2 * 0x100 & param_1[0x12]) <<
               ((byte)param_1[0x25] & 0x1f)) * 6;
      piStack_5c = piVar21;
      if ((uint)param_1[0xb] < 7) {
        iVar25 = 0;
        uVar19 = bVar2 | 0x100;
        do {
          uVar16 = uVar19 >> 1;
          iVar25 = iVar25 + param_1[((uint)(*(ushort *)(iVar24 + uVar16 * 2) >> 4) ^
                                    -(uVar19 & 1) >> 4 & 0x7f) + 0x152];
          uVar19 = uVar16;
        } while (1 < uVar16);
      }
      else {
        iVar25 = FUN_0049e7d0(iVar24,(uint)bVar2,(uint)bVar3,(int)(param_1 + 0x152));
      }
      iVar24 = param_1[0xb];
      piVar14 = piVar21 + iVar24 * 4;
      iVar11 = param_1[(*(ushort *)((int)param_1 + (int)piVar14 * 2 + 0x1c98) >> 4) + 0x152];
      *(undefined2 *)((int)param_1 + 0xbac6) = 0;
      param_1[0x2eb0] = (char *)(iVar11 + iVar25);
      param_1[0x2eb3] = 0xffffffff;
      local_68 = (char *)param_1[((*(ushort *)((int)param_1 + (int)piVar14 * 2 + 0x1c98) ^ 0x7f0) >>
                                 4) + 0x152];
      pcStack_58 = local_68 +
                   param_1[((*(ushort *)((int)param_1 + iVar24 * 2 + 0x1c38) ^ 0x7f0) >> 4) + 0x152]
      ;
      if ((bVar3 == bVar2) && (auStack_10[0] == 0)) {
        uVar8 = 0xffffffff;
        if (pcStack_58 +
            param_1[(*(ushort *)((int)param_1 + iVar24 * 2 + 0x1c50) >> 4) + 0x152] +
            param_1[(*(ushort *)((int)param_1 + (int)piVar14 * 2 + 0x1e18) >> 4) + 0x152] <
            (char *)(iVar11 + iVar25)) {
          param_1[0x2eb0] =
               pcStack_58 +
               param_1[(*(ushort *)((int)param_1 + iVar24 * 2 + 0x1c50) >> 4) + 0x152] +
               param_1[(*(ushort *)((int)param_1 + (int)piVar14 * 2 + 0x1e18) >> 4) + 0x152];
          uVar8 = 0;
          param_1[0x2eb3] = 0;
        }
        if (uStack_60 < 2) {
          param_1[0x24] = uVar8;
          return 1;
        }
      }
      param_1[0x2eac] = uStack_3c;
      uStack_40 = auStack_30[1];
      param_1[0x2ead] = auStack_30[1];
      param_1[0x2eae] = auStack_30[2];
      uVar19 = 0;
      param_1[0x2eb2] = 1;
      param_1[0x2eaf] = auStack_30[3];
      do {
        uVar16 = auStack_10[uVar19];
        if (1 < uVar16) {
          iVar24 = param_1[0xb];
          uVar4 = *(ushort *)((int)param_1 + iVar24 * 2 + 0x1c50);
          if (uVar19 == 0) {
            iVar24 = param_1[((*(ushort *)((int)param_1 + (int)(piVar21 + iVar24 * 4) * 2 + 0x1e18)
                              ^ 0x7f0) >> 4) + 0x152] + param_1[(uVar4 >> 4) + 0x152];
          }
          else {
            uVar5 = *(ushort *)((int)param_1 + iVar24 * 2 + 0x1c68);
            if (uVar19 == 1) {
              iVar24 = param_1[((uVar4 ^ 0x7f0) >> 4) + 0x152] + param_1[(uVar5 >> 4) + 0x152];
            }
            else {
              iVar24 = param_1[((uVar4 ^ 0x7f0) >> 4) + 0x152] +
                       param_1[((uint)(*(ushort *)((int)param_1 + iVar24 * 2 + 0x1c80) >> 4) ^
                               2 - uVar19 >> 4 & 0x7f) + 0x152] +
                       param_1[((uVar5 ^ 0x7f0) >> 4) + 0x152];
            }
          }
          puVar12 = param_1 + uVar16 * 8 + 0x2eab;
          piVar14 = param_1 + (int)piStack_5c * 0x110 + 0x1da6 + uVar16;
          do {
            if (pcStack_58 + *piVar14 + iVar24 < (char *)puVar12[-3]) {
              puVar12[-3] = (uint)(pcStack_58 + *piVar14 + iVar24);
              puVar12[-1] = uVar16;
              *puVar12 = uVar19;
              *(undefined2 *)((int)puVar12 + -6) = 0;
            }
            uVar16 = uVar16 - 1;
            piVar14 = piVar14 + -1;
            puVar12 = puVar12 + -8;
            piVar21 = piStack_5c;
          } while (1 < uVar16);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < 4);
      auStack_10[0] = auStack_10[0] + 1;
      if (auStack_10[0] <= local_6c) {
        pcVar22 = (char *)0x0;
        local_68 = local_68 +
                   param_1[(*(ushort *)((int)param_1 + param_1[0xb] * 2 + 0x1c38) >> 4) + 0x152];
        if (auStack_10[0] < 2) {
          auStack_10[0] = 2;
        }
        else {
          uVar19 = param_1[0x1d2];
          while (uVar19 < auStack_10[0]) {
            uVar19 = param_1[(int)(pcVar22 + 0x1d4)];
            pcVar22 = pcVar22 + 2;
          }
        }
        piStack_50 = param_1 + auStack_10[0] * 8 + 0x2eab;
        piVar21 = param_1 + (int)piStack_5c * 0x110 + 0xca5 + auStack_10[0];
        while( true ) {
          pcStack_58 = (char *)param_1[(int)(pcVar22 + 0x1d3)];
          iVar24 = auStack_10[0] - 2;
          if (4 < auStack_10[0]) {
            iVar24 = 3;
          }
          if (pcStack_58 < (char *)0x80) {
            iVar24 = param_1[iVar24 * 0x80 + ((uint)pcStack_58 & 0x7f) + 0x506];
          }
          else {
            iVar25 = (-(uint)(pcStack_58 < (char *)0x20000) & 0xfffffff6) + 0x10;
            iVar24 = param_1[(uint)*(byte *)(((uint)pcStack_58 >> ((byte)iVar25 & 0x1f)) + 0x2a98 +
                                            (int)param_1) + (iVar24 * 0x20 + iVar25) * 2 + 0x406] +
                     param_1[((uint)pcStack_58 & 0xf) + 0x3f6];
          }
          if (local_68 + iVar24 + *piVar21 < (char *)piStack_50[-3]) {
            piStack_50[-3] = (int)(local_68 + iVar24 + *piVar21);
            *piStack_50 = (int)(pcStack_58 + 4);
            piStack_50[-1] = auStack_10[0];
            *(undefined2 *)((int)piStack_50 + -6) = 0;
          }
          if ((auStack_10[0] == param_1[(int)(pcVar22 + 0x1d2)]) &&
             (pcVar22 = pcVar22 + 2, pcVar22 == pcVar10)) break;
          auStack_10[0] = auStack_10[0] + 1;
          piVar21 = piVar21 + 1;
          piStack_50 = piStack_50 + 8;
        }
      }
      uStack_7c = 1;
      if (uStack_60 != 1) {
        do {
          uVar19 = uStack_60;
          if (0x7bf < uStack_7c) {
            uVar16 = param_1[(uStack_7c + 0x5d5) * 8];
            uVar23 = uStack_7c + 1;
            uVar20 = uStack_7c;
            if (uVar23 <= uStack_60) {
              puVar12 = param_1 + (uStack_7c + 0x5d6) * 8;
              do {
                if (*puVar12 <= uVar16) {
                  uVar20 = uVar23;
                  uVar16 = *puVar12;
                }
                uVar23 = uVar23 + 1;
                puVar12 = puVar12 + 8;
              } while (uVar23 <= uStack_60);
            }
            iVar24 = uVar20 - uStack_7c;
            uStack_60 = uVar19;
            uStack_7c = uVar20;
            if (iVar24 != 0) {
              param_1[0xd] = param_1[0xd] + iVar24;
              (*(code *)param_1[5])(*param_1,iVar24);
              uStack_60 = uVar19;
            }
            break;
          }
          piStack_34 = (int *)FUN_0049ecb0(param_1,(int *)&pcStack_58);
          if ((int *)param_1[0xc] <= piStack_34) {
            param_1[9] = pcStack_58;
            param_1[8] = piStack_34;
            uStack_60 = uVar19;
            break;
          }
          uVar19 = param_2 + 1;
          piVar21 = param_1 + (uStack_7c + 0x5d5) * 8;
          iVar24 = uStack_7c - piVar21[2];
          if (piVar21[2] == 1) {
            if (piVar21[3] == 0) {
              puVar7 = &DAT_005190f4;
            }
            else {
              puVar7 = &DAT_005190d0;
            }
            uStack_64 = (uint)(byte)puVar7[*(ushort *)(param_1 + iVar24 * 8 + 0x2ea9)];
          }
          else {
            uVar4 = *(ushort *)((int)piVar21 + 6);
            uVar16 = piVar21[3];
            if (uVar4 == 0) {
              if (3 < uVar16) {
                uStack_64 = (uint)(byte)(&DAT_005190dc)[*(ushort *)(param_1 + iVar24 * 8 + 0x2ea9)];
                puVar9 = param_1 + (iVar24 + 0x5d5) * 8;
                auStack_30[1] = puVar9[4];
                goto LAB_0049f3ed;
              }
              uStack_64 = (uint)(byte)(&DAT_005190e8)[*(ushort *)(param_1 + iVar24 * 8 + 0x2ea9)];
              puVar9 = param_1 + (iVar24 + 0x5d5) * 8;
              auStack_30[1] = puVar9[4];
            }
            else {
              uStack_64 = 8;
              if (uVar4 == 1) {
                uStack_64 = (uVar16 < 4) + 7;
              }
              puVar9 = param_1 + ((iVar24 - (uint)uVar4) + 0x5d5) * 8;
              auStack_30[1] = puVar9[4];
              uStack_20 = uStack_64;
              if (3 < uVar16) {
LAB_0049f3ed:
                auStack_30[2] = puVar9[5];
                auStack_30[3] = puVar9[6];
                uStack_40 = auStack_30[1];
                uStack_3c = uVar16 - 3;
                auStack_30[0] = uVar16 - 3;
                goto LAB_0049f40e;
              }
            }
            uVar20 = puVar9[5];
            if (uVar16 == 0) {
              auStack_30[2] = puVar9[6];
              auStack_30[3] = puVar9[7];
              uStack_40 = uVar20;
              uStack_3c = auStack_30[1];
              auStack_30[0] = auStack_30[1];
              auStack_30[1] = uVar20;
            }
            else {
              uStack_40 = auStack_30[1];
              if (uVar16 == 1) {
                auStack_30[2] = puVar9[6];
                auStack_30[3] = puVar9[7];
                uStack_3c = uVar20;
                auStack_30[0] = uVar20;
              }
              else {
                auStack_30[3] = puVar9[(uVar16 ^ 1) + 4];
                uStack_3c = puVar9[uVar16 + 4];
                auStack_30[0] = puVar9[uVar16 + 4];
                auStack_30[2] = uVar20;
              }
            }
          }
LAB_0049f40e:
          uVar16 = uStack_64;
          *(short *)(piVar21 + 1) = (short)uStack_64;
          piVar21[4] = uStack_3c;
          piVar21[5] = uStack_40;
          piVar21[6] = auStack_30[2];
          piVar21[7] = auStack_30[3];
          pcVar10 = (char *)(*(code *)param_1[3])(*param_1);
          bVar2 = pcVar10[-1];
          pbStack_4c = (byte *)(param_1[0x13] & uVar19);
          pcStack_54 = pcVar10 + -1;
          bVar3 = pcStack_54[-uStack_3c];
          uVar4 = *(ushort *)((int)param_1 + (int)(pbStack_4c + uVar16 * 0x10) * 2 + 0x1c98);
          iVar24 = param_1[(uVar4 >> 4) + 0x152];
          iVar25 = *piVar21;
          local_68 = (char *)(param_1[((uVar4 ^ 0x7f0) >> 4) + 0x152] + *piVar21);
          bVar6 = false;
          puVar9 = param_1 + (uStack_7c + 0x5d6) * 8;
          piVar21 = (int *)*puVar9;
          if (((piVar21 < (int *)0x40000000) && (bVar3 == bVar2)) ||
             (piVar21 < (int *)(iVar24 + iVar25))) {
            piStack_48 = (int *)0x0;
          }
          else {
            piStack_44 = (int *)(param_1[0x14] +
                                (((uint)(byte)pcVar10[-2] + uVar19 * 0x100 & param_1[0x12]) <<
                                ((byte)param_1[0x25] & 0x1f)) * 6);
            if (uStack_64 < 7) {
              iVar11 = 0;
              uVar16 = bVar2 | 0x100;
              do {
                uVar20 = uVar16 >> 1;
                iVar11 = iVar11 + param_1[((uint)(*(ushort *)((int)piStack_44 + uVar20 * 2) >> 4) ^
                                          -(uVar16 & 1) >> 4 & 0x7f) + 0x152];
                uVar16 = uVar20;
              } while (1 < uVar20);
            }
            else {
              iVar11 = FUN_0049e7d0((int)piStack_44,(uint)bVar2,(uint)bVar3,(int)(param_1 + 0x152));
            }
            piStack_48 = (int *)(iVar24 + iVar25 + iVar11);
            piVar21 = (int *)*puVar9;
            if (piStack_48 < (int *)*puVar9) {
              *puVar9 = piStack_48;
              puVar9[2] = 1;
              puVar9[3] = 0xffffffff;
              *(undefined2 *)((int)puVar9 + 6) = 0;
              bVar6 = true;
              piVar21 = piStack_48;
            }
          }
          piStack_1c = (int *)(local_68 +
                              param_1[((*(ushort *)((int)param_1 + uStack_64 * 2 + 0x1c38) ^ 0x7f0)
                                      >> 4) + 0x152]);
          piStack_5c = (int *)param_1[10];
          if ((int *)(0x7ff - uStack_7c) < (int *)param_1[10]) {
            piStack_5c = (int *)(0x7ff - uStack_7c);
          }
          if ((((uStack_64 < 7) && (bVar3 == bVar2)) &&
              ((piStack_1c < piVar21 && (((uint)puVar9[2] < 2 || (puVar9[3] != 0)))))) &&
             (piVar14 = (int *)(param_1[(*(ushort *)
                                          ((int)param_1 +
                                          (int)(pbStack_4c + uStack_64 * 0x10) * 2 + 0x1e18) >> 4) +
                                        0x152] +
                                param_1[(*(ushort *)((int)param_1 + uStack_64 * 2 + 0x1c50) >> 4) +
                                        0x152] + (int)piStack_1c), piVar14 < piVar21)) {
            bVar6 = false;
            *puVar9 = piVar14;
            puVar9[2] = 1;
            puVar9[3] = 0;
            *(undefined2 *)((int)puVar9 + 6) = 0;
          }
          if ((int *)0x1 < piStack_5c) {
            piVar21 = (int *)param_1[0xc];
            piStack_50 = piStack_5c;
            if (piVar21 < piStack_5c) {
              piStack_50 = piVar21;
            }
            if (((((!bVar6) && (piStack_48 != (int *)0x0)) && (bVar3 != bVar2)) &&
                (((int *)0x2 < piStack_5c &&
                 (iVar24 = (int)pcStack_54 - uStack_3c, *pcVar10 == *(char *)(iVar24 + 1))))) &&
               (pcStack_54[2] == *(char *)(iVar24 + 2))) {
              piVar14 = (int *)((int)piVar21 + 1);
              if (piStack_5c < (int *)((int)piVar21 + 1)) {
                piVar14 = piStack_5c;
              }
              piVar21 = (int *)0x3;
              if ((int *)0x3 < piVar14) {
                pcVar22 = (char *)(iVar24 + 3);
                do {
                  if (pcVar22[(int)pcStack_54 - iVar24] != *pcVar22) break;
                  piVar21 = (int *)((int)piVar21 + 1);
                  pcVar22 = pcVar22 + 1;
                } while (piVar21 < piVar14);
              }
              uVar20 = param_2 + 2 & param_1[0x13];
              uVar16 = (uint)(byte)(&DAT_005190d0)[uStack_64];
              iVar24 = uVar16 * 0x10 + uVar20;
              uVar23 = uStack_7c + (int)piVar21;
              if (uStack_60 < uVar23) {
                uStack_60 = uVar23;
              }
              uVar16 = (int)piStack_48 +
                       param_1[uVar20 * 0x110 + ((int)piVar21 - 1U) + 0x1da6] +
                       param_1[((*(ushort *)((int)param_1 + iVar24 * 2 + 0x1e18) ^ 0x7f0) >> 4) +
                               0x152] +
                       param_1[((*(ushort *)((int)param_1 + iVar24 * 2 + 0x1c98) ^ 0x7f0) >> 4) +
                               0x152] +
                       param_1[((*(ushort *)((int)param_1 + uVar16 * 2 + 0x1c38) ^ 0x7f0) >> 4) +
                               0x152] +
                       param_1[(*(ushort *)((int)param_1 + uVar16 * 2 + 0x1c50) >> 4) + 0x152];
              puVar12 = param_1 + (uVar23 + 0x5d5) * 8;
              if (uVar16 < *puVar12) {
                *puVar12 = uVar16;
                puVar12[2] = (int)piVar21 - 1U;
                puVar12[3] = 0;
                *(undefined2 *)((int)puVar12 + 6) = 1;
              }
            }
            pbStack_14 = pbStack_4c + uStack_64 * 0x10;
            uStack_78 = 0;
            piStack_70 = (int *)0x2;
            do {
              piVar21 = piStack_1c;
              uStack_20 = auStack_30[uStack_78];
              pcStack_38 = pcVar10 + (-1 - uStack_20);
              if ((pcVar10[-1] == *pcStack_38) && (*pcVar10 == pcStack_38[1])) {
                piVar14 = (int *)0x2;
                piStack_48 = (int *)0x2;
                if ((int *)0x2 < piStack_50) {
                  pcVar22 = pcStack_38 + 2;
                  do {
                    piStack_48 = piVar14;
                    if (pcVar22[uStack_20] != *pcVar22) break;
                    piVar14 = (int *)((int)piVar14 + 1);
                    pcVar22 = pcVar22 + 1;
                    piStack_48 = piVar14;
                  } while (piVar14 < piStack_50);
                }
                uVar16 = uStack_7c + (int)piStack_48;
                if (uStack_60 < uVar16) {
                  uStack_60 = uVar16;
                }
                uVar4 = *(ushort *)((int)param_1 + uStack_64 * 2 + 0x1c50);
                if (uStack_78 == 0) {
                  iVar24 = param_1[((*(ushort *)((int)param_1 + (int)pbStack_14 * 2 + 0x1e18) ^
                                    0x7f0) >> 4) + 0x152] + param_1[(uVar4 >> 4) + 0x152];
                }
                else {
                  uVar5 = *(ushort *)((int)param_1 + uStack_64 * 2 + 0x1c68);
                  if (uStack_78 == 1) {
                    iVar24 = param_1[((uVar4 ^ 0x7f0) >> 4) + 0x152] + param_1[(uVar5 >> 4) + 0x152]
                    ;
                  }
                  else {
                    iVar24 = param_1[((uVar4 ^ 0x7f0) >> 4) + 0x152] +
                             param_1[((uint)(*(ushort *)((int)param_1 + uStack_64 * 2 + 0x1c80) >> 4
                                            ) ^ 2 - uStack_78 >> 4 & 0x7f) + 0x152] +
                             param_1[((uVar5 ^ 0x7f0) >> 4) + 0x152];
                  }
                }
                piVar14 = param_1 + (int)pbStack_4c * 0x110 + 0x1da6 + (int)piStack_48;
                puVar12 = param_1 + uVar16 * 8 + 0x2eab;
                piVar17 = piStack_48;
                do {
                  uVar16 = (int)piStack_1c + *piVar14 + iVar24;
                  if (uVar16 < puVar12[-3]) {
                    puVar12[-3] = uVar16;
                    puVar12[-1] = (uint)piVar17;
                    *puVar12 = uStack_78;
                    *(undefined2 *)((int)puVar12 + -6) = 0;
                  }
                  piVar17 = (int *)((int)piVar17 + -1);
                  piVar14 = piVar14 + -1;
                  puVar12 = puVar12 + -8;
                } while ((int *)0x1 < piVar17);
                if (uStack_78 == 0) {
                  piStack_70 = (int *)((int)piStack_48 + 1);
                }
                piStack_44 = (int *)((int)piStack_48 + param_1[0xc] + 1);
                if (piStack_5c < piStack_44) {
                  piStack_44 = piStack_5c;
                }
                piVar14 = (int *)((int)piStack_48 + 3);
                if (((piVar14 <= piStack_44) &&
                    (pcStack_18 = pcStack_38 + (int)piVar14,
                    (pcStack_54 + -2)[(int)piVar14] == pcStack_18[-2])) &&
                   ((pcStack_54 + -1)[(int)piVar14] == pcStack_18[-1])) {
                  uVar16 = param_1[0x13] & uVar19 + (int)piStack_48;
                  iVar25 = FUN_0049e7d0(param_1[0x14] +
                                        (((uint)(byte)pcStack_54[(int)piStack_48 + -1] +
                                          (uVar19 + (int)piStack_48) * 0x100 & param_1[0x12]) <<
                                        ((byte)param_1[0x25] & 0x1f)) * 6,
                                        (uint)*(byte *)((int)piStack_48 + (int)pcStack_54),
                                        (uint)*(byte *)((int)piStack_48 + (int)pcStack_38),
                                        (int)(param_1 + 0x152));
                  pcStack_38 = (char *)(uVar16 + 1 & param_1[0x13]);
                  for (pcVar22 = pcStack_18;
                      (piVar14 < piStack_44 && (pcVar22[uStack_20] == *pcVar22));
                      pcVar22 = pcVar22 + 1) {
                    piVar14 = (int *)((int)piVar14 + 1);
                  }
                  uVar20 = uStack_7c + (int)piVar14;
                  if (uStack_60 < uVar20) {
                    uStack_60 = uVar20;
                  }
                  uVar23 = (int)piVar14 + (-1 - (int)piStack_48);
                  puVar12 = param_1 + (uVar20 + 0x5d5) * 8;
                  uVar16 = (int)piVar21 +
                           param_1[(int)pcStack_38 * 0x110 + uVar23 + 0x1da6] +
                           param_1[((*(ushort *)((int)param_1 + (int)pcStack_38 * 2 + 0x1eb8) ^
                                    0x7f0) >> 4) + 0x152] +
                           param_1[((*(ushort *)((int)param_1 + (int)pcStack_38 * 2 + 0x1d38) ^
                                    0x7f0) >> 4) + 0x152] +
                           param_1[((*(ushort *)((int)param_1 + 0x1c42) ^ 0x7f0) >> 4) + 0x152] +
                           param_1[(*(ushort *)((int)param_1 + 0x1c5a) >> 4) + 0x152] +
                           iVar25 + param_1[(*(ushort *)
                                              ((int)param_1 +
                                              ((uint)(byte)(&DAT_005190e8)[uStack_64] * 0x10 +
                                              uVar16) * 2 + 0x1c98) >> 4) + 0x152] +
                           param_1[(int)(piStack_48 + (int)pbStack_4c * 0x44) + 0x1da6] + iVar24;
                  if (uVar16 < *puVar12) {
                    *puVar12 = uVar16;
                    *(short *)((int)puVar12 + 6) = (short)piStack_48 + 1;
                    puVar12[2] = uVar23;
                    puVar12[3] = uStack_78;
                  }
                }
              }
              uStack_78 = uStack_78 + 1;
            } while (uStack_78 < 4);
            piVar21 = piStack_34;
            if (piStack_50 < piStack_34) {
              piVar21 = (int *)param_1[0x1d2];
              iVar24 = 0;
              while (piVar21 < piStack_50) {
                piVar21 = (int *)param_1[iVar24 + 0x1d4];
                iVar24 = iVar24 + 2;
              }
              pcStack_58 = (char *)(iVar24 + 2);
              param_1[iVar24 + 0x1d2] = piStack_50;
              piVar21 = piStack_50;
            }
            if (piStack_70 <= piVar21) {
              pcStack_18 = local_68 +
                           param_1[(*(ushort *)((int)param_1 + uStack_64 * 2 + 0x1c38) >> 4) + 0x152
                                  ];
              if (uStack_60 < uStack_7c + (int)piVar21) {
                uStack_60 = uStack_7c + (int)piVar21;
              }
              pcVar10 = (char *)0x0;
              piVar21 = (int *)param_1[0x1d2];
              while (piVar21 < piStack_70) {
                pcVar10 = pcVar10 + 2;
                piVar21 = (int *)param_1[(int)(pcVar10 + 0x1d2)];
              }
              piVar14 = (int *)param_1[(int)(pcVar10 + 0x1d3)];
              iVar24 = (-(uint)(piVar14 < (int *)0x20000) & 0xfffffff6) + 0x10;
              pcStack_38 = (char *)((uint)*(byte *)(((uint)piVar14 >> ((byte)iVar24 & 0x1f)) +
                                                    0x2a98 + (int)param_1) + iVar24 * 2);
              piVar21 = (int *)((int)piStack_70 + 3);
              piStack_50 = (int *)((uVar19 + (int)piStack_70) * 0x100);
              piStack_48 = param_1 + (int)piStack_70 + (int)pbStack_4c * 0x110 + 0xca5;
              piStack_70 = param_1 + ((int)piStack_70 + uStack_7c) * 8 + 0x2eab;
              local_74 = pcVar10;
              piStack_44 = piVar14;
              do {
                uVar16 = (int)piVar21 - 5;
                if (2 < uVar16) {
                  uVar16 = 3;
                }
                if (piVar14 < (int *)0x80) {
                  iVar24 = param_1[uVar16 * 0x80 + ((uint)piVar14 & 0x7f) + 0x506];
                }
                else {
                  iVar24 = param_1[(int)(pcStack_38 + uVar16 * 0x40 + 0x406)] +
                           param_1[((uint)piVar14 & 0xf) + 0x3f6];
                }
                local_68 = pcStack_18 + iVar24 + *piStack_48;
                if (local_68 < (char *)piStack_70[-3]) {
                  piStack_70[-3] = (int)local_68;
                  piStack_70[-1] = (int)piVar21 + -3;
                  *piStack_70 = (int)(piVar14 + 1);
                  *(undefined2 *)((int)piStack_70 + -6) = 0;
                }
                if ((int)piVar21 + -3 == param_1[(int)(pcVar10 + 0x1d2)]) {
                  piStack_34 = (int *)(pcStack_54 + (-1 - (int)piVar14));
                  piVar14 = (int *)(param_1[0xc] + -2 + (int)piVar21);
                  if (piStack_5c < piVar14) {
                    piVar14 = piStack_5c;
                  }
                  if (((piVar21 <= piVar14) &&
                      ((pcStack_54 + -2)[(int)piVar21] ==
                       *(char *)((int)piVar21 + -2 + (int)piStack_34))) &&
                     ((pcStack_54 + -1)[(int)piVar21] ==
                      *(char *)((int)piVar21 + -1 + (int)piStack_34))) {
                    piVar17 = piVar21;
                    if (piVar21 < piVar14) {
                      pcVar10 = (char *)((int)piVar21 + (int)pcStack_54);
                      do {
                        if (*pcVar10 != pcVar10[(int)piStack_34 - (int)pcStack_54]) break;
                        piVar17 = (int *)((int)piVar17 + 1);
                        pcVar10 = pcVar10 + 1;
                      } while (piVar17 < piVar14);
                    }
                    uStack_20 = (int)piVar17 + (3 - (int)piVar21);
                    uVar16 = (param_2 - 2) + (int)piVar21 & param_1[0x13];
                    iVar24 = FUN_0049e7d0(param_1[0x14] +
                                          (((uint)*(byte *)((int)(piVar21 + -1) + (int)pcStack_54) +
                                            (int)piStack_50 & param_1[0x12]) <<
                                          ((byte)param_1[0x25] & 0x1f)) * 6,
                                          (uint)(byte)pcStack_54[(int)piVar21 + -3],
                                          (uint)*(byte *)((int)piVar21 + -3 + (int)piStack_34),
                                          (int)(param_1 + 0x152));
                    piStack_34 = (int *)(uVar16 + 1 & param_1[0x13]);
                    uVar20 = uStack_7c + (int)piVar17;
                    if (uStack_60 < uVar20) {
                      uStack_60 = uVar20;
                    }
                    puVar12 = param_1 + (uVar20 + 0x5d5) * 8;
                    if (local_68 +
                        param_1[(int)piStack_34 * 0x110 + (uStack_20 - 1) + 0x1da6] +
                        param_1[((*(ushort *)((int)param_1 + (int)piStack_34 * 2 + 0x1e98) ^ 0x7f0)
                                >> 4) + 0x152] +
                        param_1[((*(ushort *)((int)param_1 + (int)piStack_34 * 2 + 0x1d18) ^ 0x7f0)
                                >> 4) + 0x152] +
                        param_1[((*(ushort *)(param_1 + 0x710) ^ 0x7f0) >> 4) + 0x152] +
                        param_1[(*(ushort *)(param_1 + 0x716) >> 4) + 0x152] +
                        iVar24 + param_1[(*(ushort *)
                                           ((int)param_1 +
                                           ((uint)(byte)(&DAT_005190dc)[uStack_64] * 0x10 + uVar16)
                                           * 2 + 0x1c98) >> 4) + 0x152] < (char *)*puVar12) {
                      *puVar12 = (uint)(local_68 +
                                       param_1[(int)piStack_34 * 0x110 + (uStack_20 - 1) + 0x1da6] +
                                       param_1[((*(ushort *)
                                                  ((int)param_1 + (int)piStack_34 * 2 + 0x1e98) ^
                                                0x7f0) >> 4) + 0x152] +
                                       param_1[((*(ushort *)
                                                  ((int)param_1 + (int)piStack_34 * 2 + 0x1d18) ^
                                                0x7f0) >> 4) + 0x152] +
                                       param_1[((*(ushort *)(param_1 + 0x710) ^ 0x7f0) >> 4) + 0x152
                                              ] +
                                       param_1[(*(ushort *)(param_1 + 0x716) >> 4) + 0x152] +
                                       iVar24 + param_1[(*(ushort *)
                                                          ((int)param_1 +
                                                          ((uint)(byte)(&DAT_005190dc)[uStack_64] *
                                                           0x10 + uVar16) * 2 + 0x1c98) >> 4) +
                                                        0x152]);
                      puVar12[2] = uStack_20 - 1;
                      *(short *)((int)puVar12 + 6) = (short)piVar21 + -2;
                      puVar12[3] = (uint)(piStack_44 + 1);
                    }
                  }
                  pcVar10 = local_74 + 2;
                  if (pcVar10 == pcStack_58) break;
                  piVar14 = (int *)param_1[(int)(pcVar10 + 0x1d3)];
                  iVar24 = (-(uint)(piVar14 < (int *)0x20000) & 0xfffffff6) + 0x10;
                  pcStack_38 = (char *)((uint)*(byte *)(((uint)piVar14 >> ((byte)iVar24 & 0x1f)) +
                                                        0x2a98 + (int)param_1) + iVar24 * 2);
                  local_74 = pcVar10;
                  piStack_44 = piVar14;
                }
                piStack_70 = piStack_70 + 8;
                piStack_50 = piStack_50 + 0x40;
                piStack_48 = piStack_48 + 1;
                piVar21 = (int *)((int)piVar21 + 1);
              } while( true );
            }
          }
          uStack_7c = uStack_7c + 1;
          param_2 = uVar19;
        } while (uStack_7c != uStack_60);
      }
      puVar9 = param_1 + (uStack_60 + 0x5d5) * 8;
      do {
        *puVar9 = 0x40000000;
        puVar9 = puVar9 + -8;
        uStack_60 = uStack_60 - 1;
      } while (uStack_60 != 0);
      iVar24 = uStack_7c + 1;
      param_1[7] = iVar24;
      puVar12 = param_1 + iVar24 * 8 + 0x2eaa;
      puVar9 = param_1 + iVar24 * 8 + 0x2eab;
      while( true ) {
        uVar19 = param_1[uStack_7c * 8 + 0x2eaa];
        uVar8 = param_1[uStack_7c * 8 + 0x2eab];
        uVar16 = (uint)*(ushort *)(uStack_7c * 0x20 + 0xbaa6 + (int)param_1);
        uStack_7c = uStack_7c - uVar19;
        puVar15 = puVar9;
        puVar18 = puVar12;
        iVar25 = iVar24;
        if (uVar16 != 0) {
          uStack_7c = uStack_7c - uVar16;
          puVar18 = puVar12 + -8;
          iVar25 = iVar24 + -1;
          puVar15 = puVar9 + -8;
          *puVar18 = uVar19;
          if (uVar16 == 1) {
            *puVar15 = uVar8;
            uVar8 = 0xffffffff;
            uVar19 = 1;
          }
          else {
            *puVar15 = 0;
            uVar19 = uVar16 - 1;
            puVar15 = puVar9 + -0x10;
            iVar25 = iVar24 + -2;
            puVar18 = puVar12 + -0x10;
            *puVar15 = 0xffffffff;
            *puVar18 = 1;
          }
        }
        if (uStack_7c == 0) break;
        puVar9 = puVar15 + -8;
        puVar18[-8] = uVar19;
        iVar24 = iVar25 + -1;
        puVar12 = puVar18 + -8;
        *puVar9 = uVar8;
      }
      param_1[6] = iVar25;
      param_1[0x24] = uVar8;
      return uVar19;
    }
  }
  param_1[0x24] = 0xffffffff;
  return 1;
}


