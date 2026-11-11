// Function: FUN_004ec7e0
// Entry: 004ec7e0
// Size: 5608 bytes
// Thunk: false
// External: false


bool __fastcall FUN_004ec7e0(byte *param_1,uint param_2,byte *param_3)

{
  short *psVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ushort *puVar20;
  char cVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  byte *local_64;
  uint local_60;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_48 = *(uint *)(param_1 + 0x30);
  bVar3 = param_1[2];
  bVar4 = *param_1;
  local_3c = *(uint *)(param_1 + 0x34);
  local_38 = *(uint *)(param_1 + 0x38);
  local_30 = *(uint *)(param_1 + 0x3c);
  bVar5 = param_1[1];
  iVar7 = *(int *)(param_1 + 0xc);
  local_58 = *(uint *)(param_1 + 0x40);
  pbVar25 = *(byte **)(param_1 + 0x1c);
  local_50 = *(uint *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x10);
  uVar9 = *(uint *)(param_1 + 0x14);
  uVar10 = *(uint *)(param_1 + 0x2c);
  local_4c = *(uint *)(param_1 + 0x28);
  uVar24 = *(uint *)(param_1 + 0x20);
  uVar11 = *(uint *)(param_1 + 0x24);
  local_60 = 0;
  local_64 = pbVar25;
  do {
    uVar17 = local_30;
    uVar13 = local_4c & (1 << (bVar3 & 0x1f)) - 1U;
    iVar14 = uVar13 * 0x10;
    iVar15 = iVar14 + local_58;
    uVar6 = *(ushort *)(iVar7 + -0x200 + iVar15 * 2);
    if (uVar24 < 0x1000000) {
      uVar11 = uVar11 << 8 | (uint)*pbVar25;
      uVar24 = uVar24 << 8;
      pbVar25 = pbVar25 + 1;
      local_64 = pbVar25;
    }
    uVar23 = (uVar24 >> 0xb) * (uint)uVar6;
    if (uVar11 < uVar23) {
      *(ushort *)(iVar7 + -0x200 + iVar15 * 2) = (short)(0x800 - uVar6 >> 5) + uVar6;
      iVar14 = iVar7 + 0x280;
      if ((local_4c != 0) || (uVar10 != 0)) {
        uVar24 = local_50;
        if (local_50 == 0) {
          uVar24 = uVar9;
        }
        iVar14 = iVar14 + (((uint)*(byte *)((uVar24 - 1) + iVar8) + local_4c * 0x100 &
                           (0x100 << (bVar5 & 0x1f)) - (0x100U >> (bVar4 & 0x1f))) << (bVar4 & 0x1f)
                          ) * 6;
      }
      local_4c = local_4c + 1;
      if (local_58 < 7) {
        uVar24 = local_58;
        if (3 < local_58) {
          uVar24 = 3;
        }
        uVar6 = *(ushort *)(iVar14 + 2);
        local_58 = local_58 - uVar24;
        if (uVar23 < 0x1000000) {
          uVar23 = uVar23 * 0x100;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar24) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          iVar15 = 4;
          uVar23 = uVar24;
        }
        else {
          uVar23 = uVar23 - uVar24;
          uVar11 = uVar11 - uVar24;
          sVar12 = -(uVar6 >> 5);
          iVar15 = 6;
        }
        *(ushort *)(iVar14 + 2) = sVar12 + uVar6;
        puVar16 = (ushort *)(iVar14 + iVar15);
        uVar6 = *puVar16;
        if (uVar23 < 0x1000000) {
          uVar23 = uVar23 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar24) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar23 = uVar24;
        }
        else {
          uVar23 = uVar23 - uVar24;
          uVar11 = uVar11 - uVar24;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        iVar15 = iVar15 * 2;
        *puVar16 = sVar12 + uVar6;
        puVar16 = (ushort *)(iVar14 + iVar15);
        uVar6 = *puVar16;
        if (uVar23 < 0x1000000) {
          uVar23 = uVar23 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar24) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar23 = uVar24;
        }
        else {
          uVar23 = uVar23 - uVar24;
          uVar11 = uVar11 - uVar24;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        iVar15 = iVar15 * 2;
        *puVar16 = sVar12 + uVar6;
        puVar16 = (ushort *)(iVar14 + iVar15);
        uVar6 = *puVar16;
        if (uVar23 < 0x1000000) {
          uVar23 = uVar23 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar24) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar23 = uVar24;
        }
        else {
          uVar23 = uVar23 - uVar24;
          uVar11 = uVar11 - uVar24;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        iVar15 = iVar15 * 2;
        *puVar16 = sVar12 + uVar6;
        puVar16 = (ushort *)(iVar14 + iVar15);
        uVar6 = *puVar16;
        if (uVar23 < 0x1000000) {
          uVar23 = uVar23 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar24) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar23 = uVar24;
        }
        else {
          uVar23 = uVar23 - uVar24;
          uVar11 = uVar11 - uVar24;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        iVar15 = iVar15 * 2;
        *puVar16 = sVar12 + uVar6;
        puVar16 = (ushort *)(iVar14 + iVar15);
        uVar6 = *puVar16;
        if (uVar23 < 0x1000000) {
          uVar23 = uVar23 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar24) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar23 = uVar24;
        }
        else {
          uVar23 = uVar23 - uVar24;
          uVar11 = uVar11 - uVar24;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        iVar15 = iVar15 * 2;
        *puVar16 = sVar12 + uVar6;
        puVar16 = (ushort *)(iVar14 + iVar15);
        uVar6 = *puVar16;
        if (uVar23 < 0x1000000) {
          uVar23 = uVar23 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar24) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar23 = uVar24;
        }
        else {
          uVar23 = uVar23 - uVar24;
          uVar11 = uVar11 - uVar24;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        *puVar16 = sVar12 + uVar6;
        puVar16 = (ushort *)(iVar14 + iVar15 * 2);
        uVar6 = *puVar16;
        if (uVar23 < 0x1000000) {
          uVar23 = uVar23 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
        cVar21 = (char)(iVar15 * 2);
        if (uVar11 < uVar24) {
          *puVar16 = (short)(0x800 - uVar6 >> 5) + uVar6;
          *(char *)(iVar8 + local_50) = cVar21;
          local_50 = local_50 + 1;
        }
        else {
          uVar11 = uVar11 - uVar24;
          *puVar16 = uVar6 - (uVar6 >> 5);
          *(char *)(iVar8 + local_50) = cVar21 + '\x01';
          local_50 = local_50 + 1;
          uVar24 = uVar23 - uVar24;
        }
      }
      else {
        local_58 = local_58 - ((-(uint)(local_58 < 10) & 0xfffffffd) + 6);
        uVar17 = (uint)*(byte *)(((-(uint)(local_50 < local_48) & uVar9) - local_48) + local_50 +
                                iVar8);
        uVar13 = uVar17 * 2 & 0x100;
        puVar16 = (ushort *)(uVar13 * 2 + 0x202 + iVar14);
        uVar6 = *puVar16;
        if (uVar23 < 0x1000000) {
          uVar23 = uVar23 * 0x100;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar18 = (uVar23 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar18) {
          uVar13 = uVar13 ^ 0x100;
          iVar15 = 2;
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar18;
        }
        else {
          uVar24 = uVar23 - uVar18;
          uVar11 = uVar11 - uVar18;
          iVar15 = 3;
          sVar12 = -(uVar6 >> 5);
        }
        *puVar16 = sVar12 + uVar6;
        uVar23 = uVar13 & uVar17 * 4;
        iVar19 = uVar13 + uVar23 + iVar15;
        uVar6 = *(ushort *)(iVar14 + iVar19 * 2);
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar18 = (uVar24 >> 0xb) * (uint)uVar6;
        local_34 = iVar15 * 2;
        if (uVar11 < uVar18) {
          uVar23 = uVar23 ^ uVar13;
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar18;
        }
        else {
          local_34 = local_34 + 1;
          uVar24 = uVar24 - uVar18;
          uVar11 = uVar11 - uVar18;
          sVar12 = -(uVar6 >> 5);
        }
        *(ushort *)(iVar14 + iVar19 * 2) = sVar12 + uVar6;
        uVar13 = uVar23 & uVar17 * 8;
        iVar15 = uVar23 + uVar13 + local_34;
        uVar6 = *(ushort *)(iVar14 + iVar15 * 2);
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar18 = (uVar24 >> 0xb) * (uint)uVar6;
        local_34 = local_34 * 2;
        if (uVar11 < uVar18) {
          uVar13 = uVar13 ^ uVar23;
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar18;
        }
        else {
          local_34 = local_34 + 1;
          uVar24 = uVar24 - uVar18;
          uVar11 = uVar11 - uVar18;
          sVar12 = -(uVar6 >> 5);
        }
        *(ushort *)(iVar14 + iVar15 * 2) = sVar12 + uVar6;
        uVar23 = uVar13 & uVar17 * 0x10;
        iVar15 = uVar13 + uVar23 + local_34;
        uVar6 = *(ushort *)(iVar14 + iVar15 * 2);
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar18 = (uVar24 >> 0xb) * (uint)uVar6;
        local_34 = local_34 * 2;
        if (uVar11 < uVar18) {
          uVar23 = uVar23 ^ uVar13;
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar18;
        }
        else {
          local_34 = local_34 + 1;
          uVar24 = uVar24 - uVar18;
          uVar11 = uVar11 - uVar18;
          sVar12 = -(uVar6 >> 5);
        }
        *(ushort *)(iVar14 + iVar15 * 2) = sVar12 + uVar6;
        uVar13 = uVar23 & uVar17 * 0x20;
        iVar15 = uVar23 + uVar13 + local_34;
        uVar6 = *(ushort *)(iVar14 + iVar15 * 2);
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar18 = (uVar24 >> 0xb) * (uint)uVar6;
        local_34 = local_34 * 2;
        if (uVar11 < uVar18) {
          uVar13 = uVar13 ^ uVar23;
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar18;
        }
        else {
          local_34 = local_34 + 1;
          uVar24 = uVar24 - uVar18;
          uVar11 = uVar11 - uVar18;
          sVar12 = -(uVar6 >> 5);
        }
        *(ushort *)(iVar14 + iVar15 * 2) = sVar12 + uVar6;
        uVar23 = uVar13 & uVar17 * 0x40;
        iVar15 = uVar13 + uVar23 + local_34;
        uVar6 = *(ushort *)(iVar14 + iVar15 * 2);
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar18 = (uVar24 >> 0xb) * (uint)uVar6;
        local_34 = local_34 * 2;
        if (uVar11 < uVar18) {
          uVar23 = uVar23 ^ uVar13;
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar18;
        }
        else {
          local_34 = local_34 + 1;
          uVar24 = uVar24 - uVar18;
          uVar11 = uVar11 - uVar18;
          sVar12 = -(uVar6 >> 5);
        }
        *(ushort *)(iVar14 + iVar15 * 2) = sVar12 + uVar6;
        uVar13 = uVar23 & uVar17 << 7;
        iVar15 = uVar23 + uVar13 + local_34;
        uVar6 = *(ushort *)(iVar14 + iVar15 * 2);
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar18 = (uVar24 >> 0xb) * (uint)uVar6;
        local_34 = local_34 * 2;
        if (uVar11 < uVar18) {
          uVar13 = uVar13 ^ uVar23;
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar18;
        }
        else {
          local_34 = local_34 + 1;
          uVar24 = uVar24 - uVar18;
          uVar11 = uVar11 - uVar18;
          sVar12 = -(uVar6 >> 5);
        }
        *(ushort *)(iVar14 + iVar15 * 2) = sVar12 + uVar6;
        iVar15 = (uVar17 << 8 & uVar13) + uVar13 + local_34;
        uVar6 = *(ushort *)(iVar14 + iVar15 * 2);
        psVar1 = (short *)(iVar14 + iVar15 * 2);
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        cVar21 = (char)local_34 * '\x02';
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          *psVar1 = (short)(0x800 - uVar6 >> 5) + uVar6;
          *(char *)(iVar8 + local_50) = cVar21;
          local_50 = local_50 + 1;
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          *psVar1 = uVar6 - (uVar6 >> 5);
          *(char *)(iVar8 + local_50) = cVar21 + '\x01';
          local_50 = local_50 + 1;
        }
      }
    }
    else {
      uVar24 = uVar24 - uVar23;
      uVar11 = uVar11 - uVar23;
      *(ushort *)(iVar7 + -0x200 + iVar15 * 2) = uVar6 - (uVar6 >> 5);
      uVar6 = *(ushort *)(iVar7 + 0x20 + local_58 * 2);
      if (uVar24 < 0x1000000) {
        uVar24 = uVar24 * 0x100;
        uVar11 = uVar11 * 0x100 | (uint)*pbVar25;
        pbVar25 = pbVar25 + 1;
        local_64 = pbVar25;
      }
      uVar23 = (uVar24 >> 0xb) * (uint)uVar6;
      if (uVar11 < uVar23) {
        *(ushort *)(iVar7 + 0x20 + local_58 * 2) = (short)(0x800 - uVar6 >> 5) + uVar6;
        local_58 = local_58 + 0xc;
        iVar15 = -0x600;
      }
      else {
        uVar24 = uVar24 - uVar23;
        uVar11 = uVar11 - uVar23;
        *(ushort *)(iVar7 + 0x20 + local_58 * 2) = uVar6 - (uVar6 >> 5);
        uVar6 = *(ushort *)(iVar7 + 0x38 + local_58 * 2);
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 * 0x100;
          uVar11 = uVar11 * 0x100 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar23 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar23) {
          *(ushort *)(iVar7 + 0x38 + local_58 * 2) = (short)(0x800 - uVar6 >> 5) + uVar6;
          uVar6 = *(ushort *)(iVar7 + -0xc00 + iVar15 * 2);
          if (uVar23 < 0x1000000) {
            uVar23 = uVar23 * 0x100;
            uVar11 = uVar11 << 8 | (uint)*pbVar25;
            pbVar25 = pbVar25 + 1;
            local_64 = pbVar25;
          }
          uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
          if (uVar11 < uVar24) {
            *(ushort *)(iVar7 + -0xc00 + iVar15 * 2) = (short)(0x800 - uVar6 >> 5) + uVar6;
            *(undefined1 *)(iVar8 + local_50) =
                 *(undefined1 *)
                  (((-(uint)(local_50 < local_48) & uVar9) - local_48) + local_50 + iVar8);
            local_50 = local_50 + 1;
            local_4c = local_4c + 1;
            local_58 = (-(uint)(local_58 < 7) & 0xfffffffe) + 0xb;
            goto LAB_004edd4b;
          }
          uVar23 = uVar23 - uVar24;
          uVar11 = uVar11 - uVar24;
          *(ushort *)(iVar7 + -0xc00 + iVar15 * 2) = uVar6 - (uVar6 >> 5);
        }
        else {
          uVar24 = uVar24 - uVar23;
          uVar11 = uVar11 - uVar23;
          *(ushort *)(iVar7 + 0x38 + local_58 * 2) = uVar6 - (uVar6 >> 5);
          uVar6 = *(ushort *)(iVar7 + 0x50 + local_58 * 2);
          if (uVar24 < 0x1000000) {
            uVar24 = uVar24 * 0x100;
            uVar11 = uVar11 * 0x100 | (uint)*pbVar25;
            pbVar25 = pbVar25 + 1;
            local_64 = pbVar25;
          }
          uVar23 = (uVar24 >> 0xb) * (uint)uVar6;
          if (uVar11 < uVar23) {
            *(ushort *)(iVar7 + 0x50 + local_58 * 2) = (short)(0x800 - uVar6 >> 5) + uVar6;
            uVar17 = local_3c;
          }
          else {
            uVar24 = uVar24 - uVar23;
            uVar11 = uVar11 - uVar23;
            *(ushort *)(iVar7 + 0x50 + local_58 * 2) = uVar6 - (uVar6 >> 5);
            uVar6 = *(ushort *)(iVar7 + 0x68 + local_58 * 2);
            if (uVar24 < 0x1000000) {
              uVar24 = uVar24 * 0x100;
              uVar11 = uVar11 * 0x100 | (uint)*pbVar25;
              pbVar25 = pbVar25 + 1;
              local_64 = pbVar25;
            }
            uVar18 = (uVar24 >> 0xb) * (uint)uVar6;
            if (uVar11 < uVar18) {
              sVar12 = (short)(0x800 - uVar6 >> 5);
              uVar17 = local_38;
              uVar23 = uVar18;
            }
            else {
              uVar23 = uVar24 - uVar18;
              uVar11 = uVar11 - uVar18;
              sVar12 = -(uVar6 >> 5);
              local_30 = local_38;
            }
            *(ushort *)(iVar7 + 0x68 + local_58 * 2) = sVar12 + uVar6;
            local_38 = local_3c;
          }
          local_3c = local_48;
          local_48 = uVar17;
        }
        iVar15 = -0xa00;
        local_58 = (-(uint)(local_58 < 7) & 0xfffffffd) + 0xb;
      }
      puVar16 = (ushort *)(iVar15 + iVar7);
      uVar6 = *puVar16;
      if (uVar23 < 0x1000000) {
        uVar11 = uVar11 << 8 | (uint)*pbVar25;
        uVar23 = uVar23 << 8;
        pbVar25 = pbVar25 + 1;
        local_64 = pbVar25;
      }
      uVar24 = (uVar23 >> 0xb) * (uint)uVar6;
      if (uVar11 < uVar24) {
        *puVar16 = (short)(0x800 - uVar6 >> 5) + uVar6;
        uVar6 = puVar16[uVar13 * 0x10 + 1];
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 * 0x100;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          iVar14 = 4;
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          sVar12 = -(uVar6 >> 5);
          iVar14 = 6;
        }
        puVar16[uVar13 * 0x10 + 1] = sVar12 + uVar6;
        puVar20 = (ushort *)((int)puVar16 + iVar14 + uVar13 * 0x20);
        uVar6 = *puVar20;
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          iVar14 = iVar14 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        *puVar20 = sVar12 + uVar6;
        puVar16 = puVar16 + uVar13 * 0x10 + iVar14;
        uVar6 = *puVar16;
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          local_60 = iVar14 * 2 - 8;
          *puVar16 = (short)(0x800 - uVar6 >> 5) + uVar6;
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          local_60 = iVar14 * 2 - 7;
          *puVar16 = uVar6 - (uVar6 >> 5);
        }
      }
      else {
        uVar23 = uVar23 - uVar24;
        uVar11 = uVar11 - uVar24;
        *puVar16 = uVar6 - (uVar6 >> 5);
        uVar6 = puVar16[8];
        if (uVar23 < 0x1000000) {
          uVar11 = uVar11 * 0x100 | (uint)*pbVar25;
          uVar23 = uVar23 * 0x100;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar23 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          puVar16[8] = (short)(0x800 - uVar6 >> 5) + uVar6;
          uVar6 = puVar16[iVar14 + 9];
          if (uVar17 < 0x1000000) {
            uVar17 = uVar17 * 0x100;
            uVar11 = uVar11 << 8 | (uint)*pbVar25;
            pbVar25 = pbVar25 + 1;
            local_64 = pbVar25;
          }
          uVar24 = (uVar17 >> 0xb) * (uint)uVar6;
          if (uVar11 < uVar24) {
            sVar12 = (short)(0x800 - uVar6 >> 5);
            iVar15 = 4;
            uVar17 = uVar24;
          }
          else {
            uVar17 = uVar17 - uVar24;
            uVar11 = uVar11 - uVar24;
            sVar12 = -(uVar6 >> 5);
            iVar15 = 6;
          }
          puVar16[iVar14 + 9] = sVar12 + uVar6;
          puVar20 = (ushort *)((int)puVar16 + iVar15 + (iVar14 + 8) * 2);
          uVar6 = *puVar20;
          if (uVar17 < 0x1000000) {
            uVar17 = uVar17 << 8;
            uVar11 = uVar11 << 8 | (uint)*pbVar25;
            pbVar25 = pbVar25 + 1;
            local_64 = pbVar25;
          }
          uVar24 = (uVar17 >> 0xb) * (uint)uVar6;
          if (uVar11 < uVar24) {
            sVar12 = (short)(0x800 - uVar6 >> 5);
            uVar17 = uVar24;
          }
          else {
            uVar17 = uVar17 - uVar24;
            uVar11 = uVar11 - uVar24;
            iVar15 = iVar15 + 1;
            sVar12 = -(uVar6 >> 5);
          }
          *puVar20 = sVar12 + uVar6;
          local_60 = iVar15 * 2;
          puVar16 = puVar16 + iVar14 + 8 + iVar15;
          uVar6 = *puVar16;
          if (uVar17 < 0x1000000) {
            uVar17 = uVar17 << 8;
            uVar11 = uVar11 << 8 | (uint)*pbVar25;
            pbVar25 = pbVar25 + 1;
            local_64 = pbVar25;
          }
          uVar24 = (uVar17 >> 0xb) * (uint)uVar6;
          if (uVar11 < uVar24) {
            *puVar16 = (short)(0x800 - uVar6 >> 5) + uVar6;
          }
          else {
            local_60 = local_60 + 1;
            uVar11 = uVar11 - uVar24;
            *puVar16 = uVar6 - (uVar6 >> 5);
            uVar24 = uVar17 - uVar24;
          }
        }
        else {
          uVar24 = uVar23 - uVar17;
          uVar11 = uVar11 - uVar17;
          puVar16[8] = uVar6 - (uVar6 >> 5);
          local_60 = 1;
          do {
            uVar6 = puVar16[local_60 + 0x100];
            iVar14 = local_60 + 0x100;
            if (uVar24 < 0x1000000) {
              uVar24 = uVar24 << 8;
              uVar11 = uVar11 << 8 | (uint)*pbVar25;
              pbVar25 = pbVar25 + 1;
            }
            uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
            if (uVar11 < uVar17) {
              sVar12 = (short)(0x800 - uVar6 >> 5);
              uVar24 = uVar17;
              local_60 = local_60 * 2;
            }
            else {
              local_60 = local_60 * 2 + 1;
              uVar24 = uVar24 - uVar17;
              uVar11 = uVar11 - uVar17;
              sVar12 = -(uVar6 >> 5);
            }
            puVar16[iVar14] = sVar12 + uVar6;
          } while (local_60 < 0x100);
          local_60 = local_60 - 0xf0;
          local_64 = pbVar25;
        }
      }
      if (0xb < local_58) {
        uVar17 = local_60;
        if (3 < local_60) {
          uVar17 = 3;
        }
        iVar14 = (uVar17 + 1) * 0x80 + iVar7;
        uVar6 = *(ushort *)(iVar14 + 2);
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          iVar15 = 4;
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          sVar12 = -(uVar6 >> 5);
          iVar15 = 6;
        }
        puVar16 = (ushort *)(iVar15 + iVar14);
        *(ushort *)(iVar14 + 2) = sVar12 + uVar6;
        uVar6 = *puVar16;
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        iVar15 = iVar15 * 2;
        puVar20 = (ushort *)(iVar15 + iVar14);
        *puVar16 = sVar12 + uVar6;
        uVar6 = *puVar20;
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        iVar15 = iVar15 * 2;
        puVar16 = (ushort *)(iVar15 + iVar14);
        *puVar20 = sVar12 + uVar6;
        uVar6 = *puVar16;
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        iVar15 = iVar15 * 2;
        puVar20 = (ushort *)(iVar15 + iVar14);
        *puVar16 = sVar12 + uVar6;
        uVar6 = *puVar20;
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        *puVar20 = sVar12 + uVar6;
        iVar15 = iVar15 * 2;
        puVar16 = (ushort *)(iVar15 + iVar14);
        uVar6 = *puVar16;
        if (uVar24 < 0x1000000) {
          uVar24 = uVar24 << 8;
          uVar11 = uVar11 << 8 | (uint)*pbVar25;
          pbVar25 = pbVar25 + 1;
          local_64 = pbVar25;
        }
        uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
        if (uVar11 < uVar17) {
          sVar12 = (short)(0x800 - uVar6 >> 5);
          uVar24 = uVar17;
        }
        else {
          uVar24 = uVar24 - uVar17;
          uVar11 = uVar11 - uVar17;
          iVar15 = iVar15 + 1;
          sVar12 = -(uVar6 >> 5);
        }
        local_34 = iVar15 - 0x40;
        *puVar16 = sVar12 + uVar6;
        if (3 < local_34) {
          local_2c = (local_34 >> 1) - 1;
          uVar17 = local_34 & 1 | 2;
          if (local_34 < 0xe) {
            local_30 = 1;
            iVar14 = (uVar17 << ((byte)local_2c & 0x1f)) + 1;
            uVar17 = local_30;
            do {
              local_30 = uVar17;
              puVar16 = (ushort *)(iVar7 + iVar14 * 2 + -0xd00);
              uVar6 = *puVar16;
              if (uVar24 < 0x1000000) {
                uVar24 = uVar24 << 8;
                uVar11 = uVar11 << 8 | (uint)*pbVar25;
                pbVar25 = pbVar25 + 1;
              }
              uVar17 = (uVar24 >> 0xb) * (uint)uVar6;
              if (uVar11 < uVar17) {
                sVar12 = (short)(0x800 - uVar6 >> 5);
                uVar13 = local_30;
                uVar24 = uVar17;
              }
              else {
                uVar24 = uVar24 - uVar17;
                uVar11 = uVar11 - uVar17;
                sVar12 = -(uVar6 >> 5);
                uVar13 = local_30 * 2;
              }
              iVar14 = iVar14 + uVar13;
              local_2c = local_2c + -1;
              *puVar16 = sVar12 + uVar6;
              uVar17 = local_30 * 2;
            } while (local_2c != 0);
            local_34 = iVar14 + local_30 * -2;
            local_64 = pbVar25;
          }
          else {
            iVar14 = (local_34 >> 1) - 5;
            do {
              if (uVar24 < 0x1000000) {
                uVar24 = uVar24 << 8;
                uVar11 = uVar11 << 8 | (uint)*pbVar25;
                pbVar25 = pbVar25 + 1;
              }
              uVar24 = uVar24 >> 1;
              uVar13 = (int)(uVar11 - uVar24) >> 0x1f;
              uVar17 = uVar17 * 2 + 1 + uVar13;
              uVar11 = (uVar11 - uVar24) + (uVar13 & uVar24);
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            uVar6 = *(ushort *)(iVar7 + 2);
            if (uVar24 < 0x1000000) {
              uVar24 = uVar24 << 8;
              uVar11 = uVar11 * 0x100 | (uint)*pbVar25;
              pbVar25 = pbVar25 + 1;
            }
            uVar13 = (uVar24 >> 0xb) * (uint)uVar6;
            if (uVar11 < uVar13) {
              local_2c = 6;
              local_34 = 4;
              iVar14 = 4;
              sVar12 = (short)(0x800 - uVar6 >> 5);
              uVar24 = uVar13;
            }
            else {
              uVar24 = uVar24 - uVar13;
              uVar11 = uVar11 - uVar13;
              local_2c = 7;
              sVar12 = -(uVar6 >> 5);
              local_34 = 5;
              iVar14 = 6;
            }
            *(ushort *)(iVar7 + 2) = sVar12 + uVar6;
            uVar6 = *(ushort *)(iVar14 + iVar7);
            local_64 = pbVar25;
            if (uVar24 < 0x1000000) {
              uVar24 = uVar24 << 8;
              uVar11 = uVar11 << 8 | (uint)*pbVar25;
              local_64 = pbVar25 + 1;
            }
            uVar13 = (uVar24 >> 0xb) * (uint)uVar6;
            if (uVar11 < uVar13) {
              sVar12 = (short)(0x800 - uVar6 >> 5);
              uVar24 = uVar13;
            }
            else {
              uVar24 = uVar24 - uVar13;
              uVar11 = uVar11 - uVar13;
              sVar12 = -(uVar6 >> 5);
              local_34 = local_2c;
            }
            *(ushort *)(iVar14 + iVar7) = sVar12 + uVar6;
            uVar6 = *(ushort *)(iVar7 + local_34 * 2);
            if (uVar24 < 0x1000000) {
              uVar24 = uVar24 << 8;
              uVar11 = uVar11 << 8 | (uint)*local_64;
              local_64 = local_64 + 1;
            }
            uVar13 = (uVar24 >> 0xb) * (uint)uVar6;
            if (uVar11 < uVar13) {
              sVar12 = (short)(0x800 - uVar6 >> 5);
              iVar14 = 4;
              uVar24 = uVar13;
            }
            else {
              uVar24 = uVar24 - uVar13;
              uVar11 = uVar11 - uVar13;
              sVar12 = -(uVar6 >> 5);
              iVar14 = 8;
            }
            uVar13 = iVar14 + local_34;
            *(ushort *)(iVar7 + local_34 * 2) = sVar12 + uVar6;
            uVar6 = *(ushort *)(iVar7 + uVar13 * 2);
            if (uVar24 < 0x1000000) {
              uVar24 = uVar24 << 8;
              uVar11 = uVar11 << 8 | (uint)*local_64;
              local_64 = local_64 + 1;
            }
            uVar23 = (uVar24 >> 0xb) * (uint)uVar6;
            if (uVar11 < uVar23) {
              sVar12 = (short)(0x800 - uVar6 >> 5);
              uVar24 = uVar23;
              local_34 = uVar13 - 8;
            }
            else {
              uVar24 = uVar24 - uVar23;
              uVar11 = uVar11 - uVar23;
              sVar12 = -(uVar6 >> 5);
              local_34 = uVar13;
            }
            local_34 = uVar17 * 0x10 | local_34;
            *(ushort *)(iVar7 + uVar13 * 2) = sVar12 + uVar6;
            pbVar25 = local_64;
            if (local_34 == 0xffffffff) {
              local_60 = 0x112;
              local_58 = local_58 - 0xc;
LAB_004edd76:
              if (uVar24 < 0x1000000) {
                uVar24 = uVar24 << 8;
                uVar11 = uVar11 << 8 | (uint)*pbVar25;
                pbVar25 = pbVar25 + 1;
              }
              *(uint *)(param_1 + 0x18) = local_50;
              *(uint *)(param_1 + 0x24) = uVar11;
              *(uint *)(param_1 + 0x34) = local_3c;
              *(byte **)(param_1 + 0x1c) = pbVar25;
              *(uint *)(param_1 + 0x28) = local_4c;
              *(uint *)(param_1 + 0x20) = uVar24;
              *(uint *)(param_1 + 0x38) = local_38;
              *(uint *)(param_1 + 0x30) = local_48;
              *(uint *)(param_1 + 0x40) = local_58;
              *(uint *)(param_1 + 0x44) = local_60;
              *(uint *)(param_1 + 0x3c) = local_30;
              return (bool)('\x01' - (local_60 < 0x200));
            }
          }
        }
        local_30 = local_38;
        local_38 = local_3c;
        local_58 = (-(uint)(local_58 < 0x13) & 0xfffffffd) + 10;
        local_3c = local_48;
        uVar17 = uVar10;
        if (uVar10 == 0) {
          uVar17 = local_4c;
        }
        local_48 = local_34 + 1;
        if (uVar17 <= local_34) {
          local_60 = local_60 + 0x202;
          goto LAB_004edd76;
        }
      }
      local_60 = local_60 + 2;
      uVar17 = param_2 - local_50;
      if (uVar17 == 0) goto LAB_004edd76;
      if (local_60 <= uVar17) {
        uVar17 = local_60;
      }
      local_4c = local_4c + uVar17;
      local_60 = local_60 - uVar17;
      iVar14 = (-(uint)(local_50 < local_48) & uVar9) - local_48;
      uVar13 = local_50 + iVar14;
      if (uVar9 - uVar13 < uVar17) {
        do {
          *(undefined1 *)(iVar8 + local_50) = *(undefined1 *)(uVar13 + iVar8);
          local_50 = local_50 + 1;
          uVar13 = -(uint)(uVar13 + 1 != uVar9) & uVar13 + 1;
          uVar17 = uVar17 - 1;
          pbVar25 = local_64;
        } while (uVar17 != 0);
      }
      else {
        puVar22 = (undefined1 *)(iVar8 + local_50);
        local_50 = local_50 + uVar17;
        puVar2 = puVar22 + uVar17;
        do {
          *puVar22 = puVar22[iVar14];
          puVar22 = puVar22 + 1;
        } while (puVar22 != puVar2);
      }
    }
LAB_004edd4b:
    if ((param_2 <= local_50) || (param_3 <= pbVar25)) goto LAB_004edd76;
  } while( true );
}


