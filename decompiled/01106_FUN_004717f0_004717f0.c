// Function: FUN_004717f0
// Entry: 004717f0
// Size: 1320 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004717f0(int param_1,int *param_2,ushort *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  ushort *puVar22;
  ushort *puVar23;
  int local_18;
  int local_14;
  
  uVar21 = 0;
  bVar3 = *(byte *)(param_2 + 2);
  if (((bVar3 & 1) == 0) && ((bVar3 & 2) != 0)) {
    uVar17 = (uint)*(ushort *)(param_1 + 0x24c);
    uVar12 = (uint)*(ushort *)(param_1 + 0x24a);
    iVar9 = (0x8000 - uVar17) - uVar12;
    bVar3 = bVar3 >> 2;
    iVar5 = *param_2;
    if (*(char *)((int)param_2 + 9) == '\b') {
      if ((*(int *)(param_1 + 0x194) == 0) ||
         (iVar7 = iVar5, puVar23 = param_3, *(int *)(param_1 + 0x198) == 0)) {
        if (iVar5 != 0) {
          puVar23 = param_3;
          local_18 = iVar5;
          if ((bVar3 & 1) == 0) {
            do {
              uVar20 = (undefined1)*param_3;
              if (((byte)*param_3 != *(byte *)((int)param_3 + 1)) ||
                 ((byte)*param_3 != (byte)param_3[1])) {
                uVar21 = 1;
                uVar20 = (undefined1)
                         ((uint)(byte)param_3[1] * iVar9 + *(byte *)((int)param_3 + 1) * uVar17 +
                          (*param_3 & 0xff) * uVar12 >> 0xf);
              }
              *(undefined1 *)puVar23 = uVar20;
              local_18 = local_18 + -1;
              param_3 = (ushort *)((int)param_3 + 3);
              puVar23 = (ushort *)((int)puVar23 + 1);
            } while (local_18 != 0);
          }
          else {
            do {
              uVar20 = (undefined1)*param_3;
              if (((byte)*param_3 != *(byte *)((int)param_3 + 1)) ||
                 ((byte)*param_3 != (byte)param_3[1])) {
                uVar21 = 1;
                uVar20 = (undefined1)
                         ((uint)(byte)param_3[1] * iVar9 + *(byte *)((int)param_3 + 1) * uVar17 +
                          (*param_3 & 0xff) * uVar12 >> 0xf);
              }
              *(undefined1 *)puVar23 = uVar20;
              pbVar1 = (byte *)((int)param_3 + 3);
              param_3 = param_3 + 2;
              *(byte *)((int)puVar23 + 1) = *pbVar1;
              local_18 = local_18 + -1;
              puVar23 = puVar23 + 1;
            } while (local_18 != 0);
          }
        }
      }
      else {
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          bVar4 = (byte)*param_3;
          bVar11 = (byte)*param_3;
          puVar22 = (ushort *)((int)param_3 + 3);
          if ((bVar4 == *(byte *)((int)param_3 + 1)) && (bVar4 == (byte)param_3[1])) {
            if (*(int *)(param_1 + 0x18c) != 0) {
              bVar11 = *(byte *)((uint)bVar4 + *(int *)(param_1 + 0x18c));
            }
          }
          else {
            iVar6 = *(int *)(param_1 + 0x198);
            uVar21 = 1;
            bVar11 = *(byte *)((*(byte *)((uint)bVar4 + iVar6) * uVar12 +
                                (uint)*(byte *)((uint)(byte)param_3[1] + iVar6) * iVar9 +
                                *(byte *)((uint)*(byte *)((int)param_3 + 1) + iVar6) * uVar17 +
                                0x4000 >> 0xf) + *(int *)(param_1 + 0x194));
          }
          *(byte *)puVar23 = bVar11;
          puVar18 = (ushort *)((int)puVar23 + 1);
          if ((bVar3 & 1) != 0) {
            puVar18 = puVar23 + 1;
            *(byte *)((int)puVar23 + 1) = *(byte *)puVar22;
            puVar22 = param_3 + 2;
          }
          param_3 = puVar22;
          puVar23 = puVar18;
        }
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x1a0);
      if ((iVar7 == 0) ||
         (iVar6 = *(int *)(param_1 + 0x19c), iVar8 = iVar5, puVar23 = param_3, iVar6 == 0)) {
        if (iVar5 != 0) {
          puVar23 = param_3;
          local_14 = iVar5;
          if ((bVar3 & 1) == 0) {
            do {
              uVar14 = CONCAT11((char)*param_3,*(undefined1 *)((int)param_3 + 1));
              uVar15 = CONCAT11((char)param_3[1],*(undefined1 *)((int)param_3 + 3));
              uVar16 = CONCAT11((char)param_3[2],*(undefined1 *)((int)param_3 + 5));
              if ((uVar14 != uVar15) || (uVar14 != uVar16)) {
                uVar21 = 1;
              }
              uVar19 = uVar14 * uVar12 + (uint)uVar16 * iVar9 + uVar15 * uVar17 + 0x4000 >> 0xf &
                       0xffff;
              *(char *)puVar23 = (char)(uVar19 >> 8);
              *(char *)((int)puVar23 + 1) = (char)uVar19;
              local_14 = local_14 + -1;
              param_3 = param_3 + 3;
              puVar23 = puVar23 + 1;
            } while (local_14 != 0);
          }
          else {
            do {
              uVar14 = CONCAT11((char)*param_3,*(undefined1 *)((int)param_3 + 1));
              uVar15 = CONCAT11((char)param_3[1],*(undefined1 *)((int)param_3 + 3));
              uVar16 = CONCAT11((char)param_3[2],*(undefined1 *)((int)param_3 + 5));
              if ((uVar14 != uVar15) || (uVar14 != uVar16)) {
                uVar21 = 1;
              }
              uVar19 = uVar14 * uVar12 + (uint)uVar16 * iVar9 + uVar15 * uVar17 + 0x4000 >> 0xf &
                       0xffff;
              *(char *)puVar23 = (char)(uVar19 >> 8);
              *(char *)((int)puVar23 + 1) = (char)uVar19;
              *(char *)(puVar23 + 1) = (char)param_3[3];
              puVar2 = (undefined1 *)((int)param_3 + 7);
              param_3 = param_3 + 4;
              *(undefined1 *)((int)puVar23 + 3) = *puVar2;
              local_14 = local_14 + -1;
              puVar23 = puVar23 + 2;
            } while (local_14 != 0);
          }
        }
      }
      else {
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          bVar4 = (byte)*param_3;
          uVar14 = CONCAT11(bVar4,*(byte *)((int)param_3 + 1));
          uVar15 = CONCAT11((byte)param_3[1],*(byte *)((int)param_3 + 3));
          puVar22 = param_3 + 3;
          uVar16 = CONCAT11((byte)param_3[2],*(byte *)((int)param_3 + 5));
          if ((uVar14 == uVar15) && (uVar14 == uVar16)) {
            if (*(int *)(param_1 + 400) != 0) {
              uVar10 = (uVar14 & 0xff) >> (*(byte *)(param_1 + 0x184) & 0x1f);
              uVar19 = (uint)bVar4;
              iVar13 = *(int *)(param_1 + 400);
              goto LAB_00471b2c;
            }
          }
          else {
            bVar11 = (byte)*(undefined2 *)(param_1 + 0x184);
            uVar19 = *(ushort *)
                      (*(int *)(iVar7 + ((uVar14 & 0xff) >> (bVar11 & 0x1f)) * 4) + (uint)bVar4 * 2)
                     * uVar12 + 0x4000 +
                     *(ushort *)
                      (*(int *)(iVar7 + ((uVar15 & 0xff) >> (bVar11 & 0x1f)) * 4) +
                      (uint)(byte)param_3[1] * 2) * uVar17 +
                     (uint)*(ushort *)
                            (*(int *)(iVar7 + ((uVar16 & 0xff) >> (bVar11 & 0x1f)) * 4) +
                            (uint)(byte)param_3[2] * 2) * iVar9 >> 0xf;
            uVar10 = (uVar19 & 0xff) >> (bVar11 & 0x1f);
            uVar19 = (uVar19 & 0xffff) >> 8;
            uVar21 = 1;
            iVar13 = iVar6;
LAB_00471b2c:
            uVar14 = *(ushort *)(*(int *)(iVar13 + uVar10 * 4) + uVar19 * 2);
          }
          *(byte *)puVar23 = (byte)(uVar14 >> 8);
          *(byte *)((int)puVar23 + 1) = (byte)uVar14;
          puVar18 = puVar23 + 1;
          if ((bVar3 & 1) != 0) {
            *(byte *)puVar18 = (byte)*puVar22;
            *(byte *)((int)puVar23 + 3) = *(byte *)((int)param_3 + 7);
            puVar18 = puVar23 + 2;
            puVar22 = param_3 + 4;
          }
          param_3 = puVar22;
          puVar23 = puVar18;
        }
      }
    }
    *(char *)((int)param_2 + 10) = *(char *)((int)param_2 + 10) + -2;
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfd;
    bVar3 = *(char *)((int)param_2 + 9) * *(char *)((int)param_2 + 10);
    *(byte *)((int)param_2 + 0xb) = bVar3;
    if (7 < bVar3) {
      param_2[1] = (uint)(bVar3 >> 3) * iVar5;
      return uVar21;
    }
    param_2[1] = (uint)bVar3 * iVar5 + 7 >> 3;
  }
  return uVar21;
}


