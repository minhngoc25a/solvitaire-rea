// Function: FUN_004d0510
// Entry: 004d0510
// Size: 1074 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d0510(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  byte *pbVar25;
  byte *local_38;
  
  iVar2 = param_1[7];
  pbVar15 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[3];
  pbVar11 = pbVar15 + param_1[1] + -5;
  iVar4 = param_1[4];
  uVar24 = *(uint *)(iVar2 + 0x3c);
  uVar19 = *(uint *)(iVar2 + 0x40);
  iVar17 = *(int *)(iVar2 + 0x2c);
  uVar5 = *(uint *)(iVar2 + 0x30);
  uVar6 = *(uint *)(iVar2 + 0x34);
  pbVar7 = *(byte **)(iVar2 + 0x38);
  iVar20 = *(int *)(iVar2 + 0x50);
  iVar8 = *(int *)(iVar2 + 0x54);
  uVar9 = *(undefined4 *)(iVar2 + 0x58);
  uVar10 = *(undefined4 *)(iVar2 + 0x5c);
  pbVar21 = pbVar3;
  local_38 = pbVar15;
LAB_004d05a2:
  if (uVar19 < 0xf) {
    bVar1 = *pbVar15;
    pbVar25 = pbVar15 + 1;
    pbVar15 = pbVar15 + 2;
    uVar24 = uVar24 + ((uint)bVar1 << ((byte)uVar19 & 0x1f)) +
             ((uint)*pbVar25 << ((byte)uVar19 + 8 & 0x1f));
    uVar19 = uVar19 + 0x10;
    local_38 = pbVar15;
  }
  pbVar25 = (byte *)(iVar20 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar24) * 4);
  uVar24 = uVar24 >> (pbVar25[1] & 0x1f);
  uVar19 = uVar19 - pbVar25[1];
  bVar1 = *pbVar25;
  while (bVar1 != 0) {
    pbVar23 = pbVar21;
    if ((bVar1 & 0x10) != 0) {
      uVar18 = (uint)*(ushort *)(pbVar25 + 2);
      uVar13 = bVar1 & 0xf;
      if ((bVar1 & 0xf) != 0) {
        if (uVar19 < uVar13) {
          bVar1 = *local_38;
          local_38 = local_38 + 1;
          uVar24 = uVar24 + ((uint)bVar1 << ((byte)uVar19 & 0x1f));
          uVar19 = uVar19 + 8;
        }
        uVar12 = (1 << (sbyte)uVar13) - 1U & uVar24;
        uVar24 = uVar24 >> (sbyte)uVar13;
        uVar18 = uVar18 + uVar12;
        uVar19 = uVar19 - uVar13;
      }
      if (uVar19 < 0xf) {
        bVar1 = *local_38;
        pbVar15 = local_38 + 1;
        local_38 = local_38 + 2;
        uVar24 = uVar24 + ((uint)bVar1 << ((byte)uVar19 & 0x1f)) +
                 ((uint)*pbVar15 << ((byte)uVar19 + 8 & 0x1f));
        uVar19 = uVar19 + 0x10;
      }
      pbVar15 = (byte *)(iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar24) * 4);
      uVar24 = uVar24 >> (pbVar15[1] & 0x1f);
      uVar19 = uVar19 - pbVar15[1];
      uVar13 = (uint)*pbVar15;
      if ((*pbVar15 & 0x10) == 0) goto LAB_004d06a0;
      goto LAB_004d06d5;
    }
    pbVar15 = local_38;
    if ((bVar1 & 0x40) != 0) {
      if ((bVar1 & 0x20) == 0) {
        param_1[6] = (int)"invalid literal/length code";
        *(undefined4 *)(iVar2 + 4) = 0x3f51;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0x3f3f;
      }
      goto LAB_004d089e;
    }
    iVar16 = ((1 << (bVar1 & 0x1f)) - 1U & uVar24) + (uint)*(ushort *)(pbVar25 + 2);
    bVar1 = *(byte *)(iVar20 + 1 + iVar16 * 4);
    pbVar25 = (byte *)(iVar20 + iVar16 * 4);
    uVar24 = uVar24 >> (bVar1 & 0x1f);
    uVar19 = uVar19 - bVar1;
    bVar1 = *pbVar25;
  }
  *pbVar21 = pbVar25[2];
  pbVar23 = pbVar21 + 1;
  goto LAB_004d0885;
  while( true ) {
    iVar16 = ((1 << ((byte)uVar13 & 0x1f)) - 1U & uVar24) + (uint)*(ushort *)(pbVar15 + 2);
    bVar1 = *(byte *)(iVar8 + 1 + iVar16 * 4);
    pbVar15 = (byte *)(iVar8 + iVar16 * 4);
    uVar24 = uVar24 >> (bVar1 & 0x1f);
    uVar19 = uVar19 - bVar1;
    uVar13 = (uint)*pbVar15;
    if ((*pbVar15 & 0x10) != 0) break;
LAB_004d06a0:
    if ((uVar13 & 0x40) != 0) {
      param_1[6] = (int)"invalid distance code";
      *(undefined4 *)(iVar2 + 4) = 0x3f51;
      pbVar15 = local_38;
      goto LAB_004d089e;
    }
  }
LAB_004d06d5:
  uVar13 = uVar13 & 0xf;
  uVar12 = uVar19;
  pbVar25 = local_38;
  if (uVar19 < uVar13) {
    uVar12 = uVar19 + 8;
    uVar24 = uVar24 + ((uint)*local_38 << ((byte)uVar19 & 0x1f));
    pbVar25 = local_38 + 1;
    if (uVar12 < uVar13) {
      uVar24 = uVar24 + ((uint)local_38[1] << ((byte)uVar12 & 0x1f));
      uVar12 = uVar19 + 0x10;
      pbVar25 = local_38 + 2;
    }
  }
  local_38 = pbVar25;
  uVar19 = uVar12 - uVar13;
  uVar12 = (1 << (sbyte)uVar13) - 1U & uVar24;
  uVar24 = uVar24 >> (sbyte)uVar13;
  uVar12 = *(ushort *)(pbVar15 + 2) + uVar12;
  pbVar15 = local_38;
  if (uVar12 <= (uint)((int)pbVar21 - (int)(pbVar3 + (iVar4 - param_2)))) {
    pbVar25 = pbVar21 + -uVar12;
    do {
      pbVar22 = pbVar21;
      pbVar14 = pbVar25;
      *pbVar22 = *pbVar14;
      uVar18 = uVar18 - 3;
      pbVar22[1] = pbVar14[1];
      pbVar22[2] = pbVar14[2];
      pbVar21 = pbVar22 + 3;
      pbVar25 = pbVar14 + 3;
    } while (2 < uVar18);
    pbVar23 = pbVar21;
    if (uVar18 != 0) {
      *pbVar21 = pbVar14[3];
      pbVar23 = pbVar22 + 4;
      if (1 < uVar18) {
        pbVar22[4] = pbVar14[4];
        pbVar23 = pbVar22 + 5;
      }
    }
    goto LAB_004d0885;
  }
  uVar13 = uVar12 - ((int)pbVar21 - (int)(pbVar3 + (iVar4 - param_2)));
  if ((uVar5 < uVar13) && (*(int *)(iVar2 + 0x1bc4) != 0)) {
    param_1[6] = (int)"invalid distance too far back";
    *(undefined4 *)(iVar2 + 4) = 0x3f51;
LAB_004d089e:
    param_1[3] = (int)pbVar23;
    iVar17 = (int)pbVar15 - (uVar19 >> 3);
    iVar20 = uVar19 + (uVar19 >> 3) * -8;
    *param_1 = iVar17;
    param_1[1] = (int)(pbVar11 + (5 - iVar17));
    param_1[4] = (int)(pbVar3 + iVar4 + -0x101 + (0x101 - (int)pbVar23));
    *(int *)(iVar2 + 0x40) = iVar20;
    *(uint *)(iVar2 + 0x3c) = (1 << ((byte)iVar20 & 0x1f)) - 1U & uVar24;
    return;
  }
  if (uVar6 == 0) {
    pbVar25 = pbVar7 + (iVar17 - uVar13);
    if (uVar13 < uVar18) {
      uVar18 = uVar18 - uVar13;
      do {
        bVar1 = *pbVar25;
        pbVar25 = pbVar25 + 1;
        *pbVar21 = bVar1;
        pbVar21 = pbVar21 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
LAB_004d07d2:
      pbVar25 = pbVar21 + -uVar12;
    }
  }
  else {
    pbVar25 = pbVar7 + (uVar6 - uVar13);
    if (uVar6 < uVar13) {
      pbVar25 = pbVar25 + iVar17;
      uVar13 = uVar13 - uVar6;
      if (uVar13 < uVar18) {
        uVar18 = uVar18 - uVar13;
        iVar16 = (int)pbVar25 - (int)pbVar21;
        do {
          *pbVar21 = pbVar21[iVar16];
          pbVar21 = pbVar21 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        pbVar25 = pbVar7;
        if (uVar6 < uVar18) {
          uVar18 = uVar18 - uVar6;
          uVar13 = uVar6;
          do {
            bVar1 = *pbVar25;
            pbVar25 = pbVar25 + 1;
            *pbVar21 = bVar1;
            pbVar21 = pbVar21 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          goto LAB_004d07d2;
        }
      }
    }
    else if (uVar13 < uVar18) {
      uVar18 = uVar18 - uVar13;
      do {
        bVar1 = *pbVar25;
        pbVar25 = pbVar25 + 1;
        *pbVar21 = bVar1;
        pbVar21 = pbVar21 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      goto LAB_004d07d2;
    }
  }
  if (2 < uVar18) {
    iVar16 = (uVar18 - 3) / 3 + 1;
    do {
      uVar18 = uVar18 - 3;
      *pbVar21 = *pbVar25;
      pbVar21[1] = pbVar25[1];
      pbVar23 = pbVar25 + 2;
      pbVar25 = pbVar25 + 3;
      pbVar21[2] = *pbVar23;
      pbVar21 = pbVar21 + 3;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  pbVar23 = pbVar21;
  if (uVar18 != 0) {
    *pbVar21 = *pbVar25;
    pbVar23 = pbVar21 + 1;
    if (1 < uVar18) {
      pbVar21[1] = pbVar25[1];
      pbVar23 = pbVar21 + 2;
    }
  }
LAB_004d0885:
  if ((pbVar11 <= pbVar15) || (pbVar21 = pbVar23, pbVar3 + iVar4 + -0x101 <= pbVar23))
  goto LAB_004d089e;
  goto LAB_004d05a2;
}


