// Function: FUN_004a0c50
// Entry: 004a0c50
// Size: 3026 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a0c50(undefined4 *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  short *psVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  byte *pbVar18;
  uint uVar19;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_14;
  uint uStack_4;
  
  if (param_1[0x2d] != 0) {
    (*(code *)param_1[1])(*param_1);
    param_1[0x2d] = 0;
  }
  if (param_1[0x2b] != 0) {
    return param_1[0x34];
  }
  iVar8 = FUN_004a0510((int)param_1);
  if (iVar8 == 0) {
    uVar7 = param_1[0x2e];
    uStack_1c = uVar7;
    if (uVar7 == 0 && param_1[0x2f] == 0) {
      iVar8 = (*(code *)param_1[2])(*param_1);
      if (iVar8 == 0) {
        iVar8 = FUN_004a0570((int)param_1,uVar7);
        return iVar8;
      }
      FUN_0049ecb0(param_1,(int *)&uStack_4);
      uVar6 = *(ushort *)(param_1 + 0x726);
      puVar17 = param_1 + 0x16;
      uVar19 = (*puVar17 >> 0xb) * (uint)uVar6;
      *(ushort *)(param_1 + 0x726) = (short)(0x800 - uVar6 >> 5) + uVar6;
      if (uVar19 < 0x1000000) {
        uVar19 = uVar19 * 0x100;
        FUN_0049e680((int)puVar17);
      }
      *puVar17 = uVar19;
      iVar8 = (*(code *)param_1[3])(*param_1);
      FUN_0049e720(puVar17,param_1[0x14],(uint)*(byte *)(iVar8 - param_1[0xd]));
      param_1[0xd] = param_1[0xd] + -1;
      uStack_1c = uVar7 + 1;
    }
    iVar8 = (*(code *)param_1[2])(*param_1);
    if (iVar8 != 0) {
      do {
        do {
          puVar17 = param_1 + 0x16;
          if (param_1[0x29] == 0) {
            iVar8 = param_1[6];
            if (param_1[7] == iVar8) {
              uStack_20 = FUN_0049ed60(param_1,uStack_1c);
            }
            else {
              uStack_20 = param_1[(iVar8 + 0x5d5) * 8 + 2];
              param_1[0x24] = param_1[(iVar8 + 0x5d5) * 8 + 3];
              param_1[6] = iVar8 + 1;
            }
          }
          else {
            uStack_20 = FUN_004a0040(param_1);
          }
          uVar11 = param_1[0x13] & uStack_1c;
          uVar19 = param_1[0x24];
          puVar3 = (ushort *)((int)param_1 + (param_1[0xb] * 0x10 + uVar11 + 0xe4c) * 2);
          uVar6 = *puVar3;
          uVar12 = (*puVar17 >> 0xb) * (uint)uVar6;
          if (uVar19 == 0xffffffff) {
            *puVar3 = (short)(0x800 - uVar6 >> 5) + uVar6;
            if (uVar12 < 0x1000000) {
              uVar12 = uVar12 * 0x100;
              FUN_0049e680((int)puVar17);
            }
            *puVar17 = uVar12;
            iVar8 = (*(code *)param_1[3])(*param_1);
            pbVar18 = (byte *)(iVar8 - param_1[0xd]);
            uVar19 = param_1[0xb];
            iVar8 = param_1[0x14] +
                    (((uint)pbVar18[-1] + uStack_1c * 0x100 & param_1[0x12]) <<
                    ((byte)param_1[0x25] & 0x1f)) * 6;
            bVar5 = *pbVar18;
            param_1[0xb] = (uint)(byte)(&DAT_005190d0)[uVar19];
            if (uVar19 < 7) {
              FUN_0049e720(puVar17,iVar8,(uint)bVar5);
            }
            else {
              uVar19 = (uint)pbVar18[-param_1[0xe]];
              uStack_24 = param_1[0x16];
              uStack_28 = 0x100;
              uVar11 = bVar5 | 0x100;
              do {
                uVar19 = uVar19 * 2;
                puVar3 = (ushort *)(iVar8 + ((uVar11 >> 8) + (uStack_28 & uVar19) + uStack_28) * 2);
                uVar12 = uVar11 * 2;
                uVar13 = uVar11 >> 7 & 1;
                uVar6 = *puVar3;
                uStack_28 = uStack_28 & ~(uVar12 ^ uVar19);
                uVar9 = -uVar13;
                uVar15 = (uStack_24 >> 0xb) * (uint)uVar6;
                uVar10 = uVar9 & uVar15;
                puVar17 = param_1 + 0x18;
                uVar11 = *puVar17;
                *puVar17 = *puVar17 + uVar10;
                param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar11,uVar10);
                uVar13 = uVar13 - 1;
                uStack_24 = ((uStack_24 & uVar9) - uVar10) + (uVar13 & uVar15);
                *puVar3 = (short)((int)(((uVar13 & 0x7e1) - (uint)uVar6) + 0x1f) >> 5) + uVar6;
                if (uStack_24 < 0x1000000) {
                  uStack_24 = uStack_24 * 0x100;
                  FUN_0049e680((int)(param_1 + 0x16));
                }
                uVar11 = uVar12;
              } while (uVar12 < 0x10000);
LAB_004a0f5d:
              param_1[0x16] = uStack_24;
            }
          }
          else {
            uVar10 = *puVar17 - uVar12;
            puVar2 = param_1 + 0x18;
            uVar9 = *puVar2;
            *puVar2 = *puVar2 + uVar12;
            param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar9,uVar12);
            *puVar3 = uVar6 - (uVar6 >> 5);
            if (uVar10 < 0x1000000) {
              uVar10 = uVar10 * 0x100;
              FUN_0049e680((int)puVar17);
            }
            uVar6 = *(ushort *)((int)param_1 + (param_1[0xb] + 0xe1c) * 2);
            uVar12 = (uint)uVar6;
            psVar4 = (short *)((int)param_1 + (param_1[0xb] + 0xe1c) * 2);
            uStack_4 = (uVar10 >> 0xb) * uVar12;
            puVar17 = param_1 + 0x16;
            if (uVar19 < 4) {
              uVar10 = uVar10 - uStack_4;
              puVar2 = param_1 + 0x18;
              uVar9 = *puVar2;
              *puVar2 = *puVar2 + uStack_4;
              param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar9,uStack_4);
              *psVar4 = uVar6 - (uVar6 >> 5);
              if (uVar10 < 0x1000000) {
                uVar10 = uVar10 * 0x100;
                uStack_4 = uVar12;
                FUN_0049e680((int)puVar17);
              }
              puVar3 = (ushort *)((int)param_1 + param_1[0xb] * 2 + 0x1c50);
              uVar6 = *puVar3;
              uStack_4 = (uint)uVar6;
              uVar12 = (uVar10 >> 0xb) * uStack_4;
              if (uVar19 == 0) {
                *puVar3 = (short)(0x800 - uStack_4 >> 5) + uVar6;
                if (uVar12 < 0x1000000) {
                  uVar12 = uVar12 * 0x100;
                  FUN_0049e680((int)puVar17);
                }
                puVar3 = (ushort *)((int)param_1 + (param_1[0xb] * 0x10 + 0xf0c + uVar11) * 2);
                uVar6 = *puVar3;
                uVar9 = (uVar12 >> 0xb) * (uint)uVar6;
                if (uStack_20 == 1) {
                  *puVar3 = (short)(0x800 - uVar6 >> 5) + uVar6;
                  param_1[0xb] = (uint)(byte)(&DAT_005190f4)[param_1[0xb]];
                }
                else {
                  puVar2 = param_1 + 0x18;
                  uVar19 = *puVar2;
                  *puVar2 = *puVar2 + uVar9;
                  param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar19,uVar9);
                  *puVar3 = uVar6 - (uVar6 >> 5);
                  uVar9 = uVar12 - uVar9;
                }
              }
              else {
                uVar10 = uVar10 - uVar12;
                puVar2 = param_1 + 0x18;
                uVar9 = *puVar2;
                *puVar2 = *puVar2 + uVar12;
                param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar9,uVar12);
                *puVar3 = uVar6 - (uVar6 >> 5);
                if (uVar10 < 0x1000000) {
                  uVar10 = uVar10 * 0x100;
                  FUN_0049e680((int)puVar17);
                }
                puVar3 = (ushort *)((int)param_1 + (param_1[0xb] + 0xe34) * 2);
                uVar6 = *puVar3;
                uStack_4 = (uint)uVar6;
                uVar9 = (uVar10 >> 0xb) * uStack_4;
                if (uVar19 == 1) {
                  *puVar3 = (short)(0x800 - uStack_4 >> 5) + uVar6;
                  uVar14 = param_1[0xf];
                }
                else {
                  uVar10 = uVar10 - uVar9;
                  puVar2 = param_1 + 0x18;
                  uVar12 = *puVar2;
                  *puVar2 = *puVar2 + uVar9;
                  param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar12,uVar9);
                  *puVar3 = uVar6 - (uVar6 >> 5);
                  if (uVar10 < 0x1000000) {
                    uVar10 = uVar10 * 0x100;
                    FUN_0049e680((int)puVar17);
                  }
                  puVar3 = (ushort *)((int)param_1 + (param_1[0xb] + 0xe40) * 2);
                  uVar6 = *puVar3;
                  uStack_4 = (uint)uVar6;
                  uVar12 = (uVar10 >> 0xb) * uStack_4;
                  if (uVar19 == 2) {
                    *puVar3 = *puVar3 + (short)(0x800 - uStack_4 >> 5);
                    uVar14 = param_1[0x10];
                    uVar9 = uVar12;
                  }
                  else {
                    uVar9 = uVar10 - uVar12;
                    puVar2 = param_1 + 0x18;
                    uVar19 = *puVar2;
                    *puVar2 = *puVar2 + uVar12;
                    param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar19,uVar12);
                    *puVar3 = uVar6 - (uVar6 >> 5);
                    uVar14 = param_1[0x11];
                    param_1[0x11] = param_1[0x10];
                  }
                  param_1[0x10] = param_1[0xf];
                }
                param_1[0xf] = param_1[0xe];
                param_1[0xe] = uVar14;
              }
              if (uVar9 < 0x1000000) {
                uVar9 = uVar9 << 8;
                FUN_0049e680((int)puVar17);
              }
              *puVar17 = uVar9;
              if (uStack_20 != 1) {
                FUN_0049e840((ushort *)(param_1 + 0x9a6),puVar17,uStack_20 - 2,uVar11);
                param_1[0x31] = param_1[0x31] + -1;
                param_1[0xb] = (uint)(byte)(&DAT_005190e8)[param_1[0xb]];
              }
            }
            else {
              *psVar4 = (short)(0x800 - uVar12 >> 5) + uVar6;
              if (uStack_4 < 0x1000000) {
                uStack_4 = uStack_4 * 0x100;
                FUN_0049e680((int)puVar17);
              }
              *puVar17 = uStack_4;
              param_1[0xb] = (uint)(byte)(&DAT_005190dc)[param_1[0xb]];
              uStack_4 = uStack_20 - 2;
              FUN_0049e840((ushort *)(param_1 + 0x8a6),puVar17,uStack_4,uVar11);
              uVar11 = uVar19 - 4;
              param_1[0x11] = param_1[0x10];
              param_1[0x10] = param_1[0xf];
              param_1[0xf] = param_1[0xe];
              param_1[0xe] = uVar19 - 3;
              param_1[0x30] = param_1[0x30] + 1;
              if (uVar11 < 0x80) {
                uVar19 = (uint)*(byte *)((uVar11 & 0x7f) + 0x2a98 + (int)param_1);
              }
              else {
                iVar8 = (-(uint)(uVar11 < 0x20000) & 0xfffffff6) + 0x10;
                uVar19 = (uint)*(byte *)((uVar11 >> ((byte)iVar8 & 0x1f)) + 0x2a98 + (int)param_1) +
                         iVar8 * 2;
              }
              if (4 < uStack_20) {
                uStack_4 = 3;
              }
              iVar8 = uStack_4 * 0x80 + 0x1f98;
              uStack_4 = uVar19 + 0x40;
              uStack_28 = *puVar17;
              do {
                uVar6 = *(ushort *)((int)param_1 + (uStack_4 >> 6) * 2 + iVar8);
                uVar9 = uStack_4 * 2;
                uVar15 = uStack_4 >> 5 & 1;
                uVar16 = (uStack_28 >> 0xb) * (uint)uVar6;
                uVar10 = -uVar15;
                uVar13 = uVar10 & uVar16;
                puVar17 = param_1 + 0x18;
                uVar12 = *puVar17;
                *puVar17 = *puVar17 + uVar13;
                param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar12,uVar13);
                uVar15 = uVar15 - 1;
                uVar12 = ((uStack_28 & uVar10) - uVar13) + (uVar15 & uVar16);
                puVar17 = param_1 + 0x16;
                *(ushort *)((int)param_1 + (uStack_4 >> 6) * 2 + iVar8) =
                     (short)((int)(((uVar15 & 0x7e1) - (uint)uVar6) + 0x1f) >> 5) + uVar6;
                uStack_4 = uVar9;
                if (uVar12 < 0x1000000) {
                  uVar12 = uVar12 * 0x100;
                  FUN_0049e680((int)puVar17);
                }
                uStack_28 = uVar12;
              } while (uStack_4 < 0x1000);
              *puVar17 = uVar12;
              if (3 < uVar11) {
                uStack_28 = (uVar19 >> 1) - 1;
                if (0x7f < uVar11) {
                  iVar8 = (uVar11 | 0xf) << (0x20 - (byte)uStack_28 & 0x1f);
                  do {
                    uVar12 = uVar12 >> 1;
                    uVar9 = iVar8 >> 0x1f & uVar12;
                    puVar2 = param_1 + 0x18;
                    uVar19 = *puVar2;
                    *puVar2 = *puVar2 + uVar9;
                    param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar19,uVar9);
                    iVar8 = iVar8 * 2;
                    if (uVar12 < 0x1000000) {
                      uVar12 = uVar12 << 8;
                      FUN_0049e680((int)puVar17);
                    }
                  } while (iVar8 != -0x10000000);
                  uVar6 = *(ushort *)((int)param_1 + 0x1c1a);
                  uVar9 = uVar11 & 1;
                  uVar13 = (uVar12 >> 0xb) * (uint)uVar6;
                  uVar10 = -uVar9 & uVar13;
                  puVar17 = param_1 + 0x18;
                  uVar19 = *puVar17;
                  *puVar17 = *puVar17 + uVar10;
                  param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar19,uVar10);
                  uVar19 = ((uVar12 & -uVar9) - uVar10) + (uVar9 - 1 & uVar13);
                  *(ushort *)((int)param_1 + 0x1c1a) =
                       (short)((int)(((uVar9 - 1 & 0x7e1) - (uint)uVar6) + 0x1f) >> 5) + uVar6;
                  if (uVar19 < 0x1000000) {
                    uVar19 = uVar19 * 0x100;
                    FUN_0049e680((int)(param_1 + 0x16));
                  }
                  uVar9 = uVar9 + 2;
                  uVar12 = uVar11 >> 1 & 1;
                  uVar6 = *(ushort *)((int)param_1 + uVar9 * 2 + 0x1c18);
                  uVar15 = (uVar19 >> 0xb) * (uint)uVar6;
                  uVar13 = -uVar12 & uVar15;
                  puVar17 = param_1 + 0x18;
                  uVar10 = *puVar17;
                  *puVar17 = *puVar17 + uVar13;
                  param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar10,uVar13);
                  uVar19 = ((uVar19 & -uVar12) - uVar13) + (uVar12 - 1 & uVar15);
                  *(ushort *)((int)param_1 + uVar9 * 2 + 0x1c18) =
                       (short)((int)(((uVar12 - 1 & 0x7e1) - (uint)uVar6) + 0x1f) >> 5) + uVar6;
                  if (uVar19 < 0x1000000) {
                    uVar19 = uVar19 * 0x100;
                    uStack_4 = uVar9;
                    FUN_0049e680((int)(param_1 + 0x16));
                  }
                  uVar12 = uVar12 + uVar9 * 2;
                  uVar6 = *(ushort *)((int)param_1 + uVar12 * 2 + 0x1c18);
                  uVar10 = uVar11 >> 2 & 1;
                  uVar15 = (uVar19 >> 0xb) * (uint)uVar6;
                  uVar13 = -uVar10 & uVar15;
                  puVar17 = param_1 + 0x18;
                  uVar9 = *puVar17;
                  *puVar17 = *puVar17 + uVar13;
                  param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar9,uVar13);
                  uStack_28 = ((uVar19 & -uVar10) - uVar13) + (uVar10 - 1 & uVar15);
                  *(ushort *)((int)param_1 + uVar12 * 2 + 0x1c18) =
                       (short)((int)(((uVar10 - 1 & 0x7e1) - (uint)uVar6) + 0x1f) >> 5) + uVar6;
                  uStack_4 = uVar12;
                  if (uStack_28 < 0x1000000) {
                    uStack_28 = uStack_28 * 0x100;
                    FUN_0049e680((int)(param_1 + 0x16));
                  }
                  uVar9 = uVar11 >> 3 & 1;
                  uVar11 = -uVar9;
                  iVar8 = uVar10 + uVar12 * 2;
                  uVar6 = *(ushort *)((int)param_1 + iVar8 * 2 + 0x1c18);
                  uVar10 = (uStack_28 >> 0xb) * (uint)uVar6;
                  uVar12 = uVar11 & uVar10;
                  puVar17 = param_1 + 0x18;
                  uVar19 = *puVar17;
                  *puVar17 = *puVar17 + uVar12;
                  uVar9 = uVar9 - 1;
                  param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar19,uVar12);
                  uStack_24 = ((uStack_28 & uVar11) - uVar12) + (uVar9 & uVar10);
                  *(ushort *)((int)param_1 + iVar8 * 2 + 0x1c18) =
                       (short)((int)(((uVar9 & 0x7e1) - (uint)uVar6) + 0x1f) >> 5) + uVar6;
                  if (uStack_24 < 0x1000000) {
                    uStack_24 = uStack_24 * 0x100;
                    FUN_0049e680((int)(param_1 + 0x16));
                  }
                  goto LAB_004a0f5d;
                }
                iVar8 = ((uVar19 & 1 | 2) << ((byte)uStack_28 & 0x1f)) + 0x10cc;
                uStack_14 = 1;
                do {
                  uVar6 = *(ushort *)((int)param_1 + uStack_14 * 2 + iVar8 * 2);
                  uVar9 = uVar11 & 1;
                  uVar11 = uVar11 >> 1;
                  uVar13 = (uVar12 >> 0xb) * (uint)uVar6;
                  uVar10 = -uVar9 & uVar13;
                  puVar17 = param_1 + 0x18;
                  uVar19 = *puVar17;
                  *puVar17 = *puVar17 + uVar10;
                  param_1[0x19] = param_1[0x19] + (uint)CARRY4(uVar19,uVar10);
                  uVar12 = ((uVar12 & -uVar9) - uVar10) + (uVar9 - 1 & uVar13);
                  *(ushort *)((int)param_1 + uStack_14 * 2 + iVar8 * 2) =
                       (short)((int)(((uVar9 - 1 & 0x7e1) - (uint)uVar6) + 0x1f) >> 5) + uVar6;
                  if (uVar12 < 0x1000000) {
                    uVar12 = uVar12 * 0x100;
                    FUN_0049e680((int)(param_1 + 0x16));
                  }
                  uStack_14 = uStack_14 * 2 | uVar9;
                  uStack_28 = uStack_28 + -1;
                } while (uStack_28 != 0);
                param_1[0x16] = uVar12;
              }
            }
          }
          uStack_1c = uStack_1c + uStack_20;
          piVar1 = param_1 + 0xd;
          *piVar1 = *piVar1 - uStack_20;
        } while (*piVar1 != 0);
        if (param_1[0x29] == 0) {
          if (0x3f < (uint)param_1[0x30]) {
            FUN_004a05d0((int)param_1);
            FUN_004a0910((int)param_1);
            FUN_0049eb30(param_1 + 0xca6,1 << ((byte)param_1[0x27] & 0x1f),
                         (ushort *)(param_1 + 0x8a6),(int)(param_1 + 0x152));
          }
          if ((int)param_1[0x31] < 1) {
            param_1[0x31] = 0x40;
            FUN_0049eb30(param_1 + 0x1da7,1 << ((byte)param_1[0x27] & 0x1f),
                         (ushort *)(param_1 + 0x9a6),(int)(param_1 + 0x152));
          }
        }
        iVar8 = (*(code *)param_1[2])(*param_1);
        if (iVar8 == 0) break;
        uVar19 = uStack_1c - uVar7;
        if (param_2 == 0) {
          if (0x1ffff < uVar19) {
            puVar17 = param_1 + 0x2e;
            uVar7 = *puVar17;
            *puVar17 = *puVar17 + uVar19;
            param_1[0x2f] = param_1[0x2f] + (uint)CARRY4(uVar7,uVar19);
            iVar8 = FUN_004a0510((int)param_1);
            return iVar8;
          }
        }
        else if ((param_3 <= uVar19 + 0x92c) ||
                (param_2 <=
                 (uint)(param_1[0x1a] + 0x4000 + (param_1[0x20] - param_1[0x1e]) + param_1[0x1c])))
        break;
      } while( true );
    }
    puVar17 = param_1 + 0x2e;
    uVar19 = *puVar17;
    *puVar17 = *puVar17 + (uStack_1c - uVar7);
    param_1[0x2f] = param_1[0x2f] + (uint)CARRY4(uVar19,uStack_1c - uVar7);
    iVar8 = FUN_004a0570((int)param_1,uStack_1c);
  }
  return iVar8;
}


