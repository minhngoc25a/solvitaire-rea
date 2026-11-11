// Function: FUN_004a6570
// Entry: 004a6570
// Size: 1107 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a6570(uint *param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  bool bVar18;
  byte *local_24;
  uint local_20;
  uint local_18;
  byte *local_14;
  uint local_c [2];
  uint local_4;
  
  uVar10 = param_2;
  if ((param_2 != 0) && (param_1 != (uint *)0x0)) {
    iVar2 = *(int *)(&DAT_00519498 + param_3 * 4);
    bVar1 = *(byte *)((int)param_1 + 0xb);
    uVar5 = *param_1;
    local_4 = uVar5 * *(int *)(&DAT_00519498 + param_3 * 4);
    uVar14 = local_4 - 1;
    if (bVar1 == 1) {
      uVar16 = param_4 & 0x10000;
      local_18 = 0;
      pbVar7 = (byte *)((uVar5 - 1 >> 3) + param_2);
      uVar10 = uVar5 - 1 & 7;
      pbVar17 = (byte *)((uVar14 >> 3) + param_2);
      uVar8 = 0;
      iVar6 = (uint)(uVar16 == 0) * 2 + -1;
      if (uVar16 == 0) {
        uVar8 = 7;
      }
      uVar11 = -(uint)(uVar16 != 0) & 7;
      if (uVar5 != 0) {
        if (uVar16 == 0) {
          uVar10 = 7 - uVar10;
        }
        uVar15 = uVar14 & 7;
        if (uVar16 == 0) {
          uVar15 = 7 - (uVar14 & 7);
        }
        do {
          bVar1 = *pbVar7;
          iVar13 = iVar2;
          pbVar4 = pbVar17;
          if (0 < iVar2) {
            do {
              *pbVar17 = (byte)(0x7f7f >> (7 - (byte)uVar15 & 0x1f)) & *pbVar17 |
                         (bVar1 >> ((byte)uVar10 & 0x1f) & 1) << ((byte)uVar15 & 0x1f);
              pbVar4 = pbVar17 + -1;
              uVar14 = uVar11;
              if (uVar15 != uVar8) {
                pbVar4 = pbVar17;
                uVar14 = uVar15 + iVar6;
              }
              uVar15 = uVar14;
              iVar13 = iVar13 + -1;
              pbVar17 = pbVar4;
            } while (iVar13 != 0);
            uVar5 = *param_1;
          }
          pbVar17 = pbVar7 + -1;
          uVar14 = uVar11;
          if (uVar10 != uVar8) {
            pbVar17 = pbVar7;
            uVar14 = uVar10 + iVar6;
          }
          uVar10 = uVar14;
          local_18 = local_18 + 1;
          pbVar7 = pbVar17;
          pbVar17 = pbVar4;
        } while (local_18 < uVar5);
      }
    }
    else {
      uVar8 = uVar5 - 1;
      if (bVar1 == 2) {
        uVar10 = uVar8 & 3;
        local_24 = (byte *)((uVar8 >> 2) + param_2);
        pbVar7 = (byte *)((uVar14 >> 2) + param_2);
        uVar14 = uVar14 & 3;
        if ((param_4 & 0x10000) == 0) {
          local_18 = 0;
          local_14 = (byte *)0x2;
          uVar10 = 3 - uVar10;
          uVar14 = 3 - uVar14;
          iVar6 = 6;
        }
        else {
          local_18 = 6;
          local_14 = (byte *)0xfffffffe;
          iVar6 = 0;
        }
        uVar14 = uVar14 * 2;
        uVar10 = uVar10 * 2;
        local_20 = 0;
        if (uVar5 != 0) {
          do {
            bVar1 = *local_24;
            pbVar17 = pbVar7;
            iVar13 = iVar2;
            if (0 < iVar2) {
              do {
                iVar3 = (int)local_14 + uVar14;
                *pbVar7 = (byte)(0x3f3f >> (6 - (byte)uVar14 & 0x1f)) & *pbVar7 |
                          (bVar1 >> ((byte)uVar10 & 0x1f) & 3) << ((byte)uVar14 & 0x1f);
                bVar18 = uVar14 != iVar6;
                pbVar17 = pbVar7 + -1;
                uVar14 = local_18;
                if (bVar18) {
                  pbVar17 = pbVar7;
                  uVar14 = iVar3;
                }
                iVar13 = iVar13 + -1;
                pbVar7 = pbVar17;
              } while (iVar13 != 0);
              uVar5 = *param_1;
            }
            local_20 = local_20 + 1;
            pbVar4 = local_24 + -1;
            if (uVar10 != iVar6) {
              pbVar4 = local_24;
            }
            iVar13 = (int)local_14 + uVar10;
            bVar18 = uVar10 != iVar6;
            uVar10 = local_18;
            if (bVar18) {
              uVar10 = iVar13;
            }
            pbVar7 = pbVar17;
            local_24 = pbVar4;
          } while (local_20 < uVar5);
        }
      }
      else if (bVar1 == 4) {
        uVar10 = uVar8 & 1;
        uVar16 = uVar14 & 1;
        if ((param_4 & 0x10000) == 0) {
          local_20 = 0;
          uVar16 = 1 - uVar16;
          uVar10 = 1 - uVar10;
          iVar6 = 4;
          local_24 = (byte *)0x4;
        }
        else {
          local_20 = 4;
          local_24 = (byte *)0xfffffffc;
          iVar6 = 0;
        }
        uVar16 = uVar16 * 4;
        uVar10 = uVar10 * 4;
        local_18 = 0;
        pbVar7 = (byte *)((uVar14 >> 1) + param_2);
        local_14 = (byte *)((uVar8 >> 1) + param_2);
        if (uVar5 != 0) {
          do {
            bVar1 = *local_14;
            pbVar17 = pbVar7;
            iVar13 = iVar2;
            if (0 < iVar2) {
              do {
                iVar3 = (int)local_24 + uVar16;
                *pbVar7 = (byte)(0xf0f >> (4 - (byte)uVar16 & 0x1f)) & *pbVar7 |
                          (bVar1 >> ((byte)uVar10 & 0x1f) & 0xf) << ((byte)uVar16 & 0x1f);
                bVar18 = uVar16 != iVar6;
                pbVar17 = pbVar7 + -1;
                uVar16 = local_20;
                if (bVar18) {
                  pbVar17 = pbVar7;
                  uVar16 = iVar3;
                }
                iVar13 = iVar13 + -1;
                pbVar7 = pbVar17;
              } while (iVar13 != 0);
              uVar5 = *param_1;
            }
            local_18 = local_18 + 1;
            pbVar4 = local_14 + -1;
            if (uVar10 != iVar6) {
              pbVar4 = local_14;
            }
            iVar13 = (int)local_24 + uVar10;
            bVar18 = uVar10 != iVar6;
            uVar10 = local_20;
            if (bVar18) {
              uVar10 = iVar13;
            }
            pbVar7 = pbVar17;
            local_14 = pbVar4;
          } while (local_18 < uVar5);
        }
      }
      else {
        uVar16 = (uint)(bVar1 >> 3);
        param_2 = 0;
        puVar9 = (uint *)(uVar8 * uVar16 + uVar10);
        puVar12 = (uint *)(uVar14 * uVar16 + uVar10);
        if (uVar5 != 0) {
          do {
            FUN_0044c490(local_c,puVar9,uVar16);
            iVar6 = iVar2;
            if (0 < iVar2) {
              do {
                FUN_0044c490(puVar12,local_c,uVar16);
                puVar12 = (uint *)((int)puVar12 - uVar16);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            param_2 = param_2 + 1;
            puVar9 = (uint *)((int)puVar9 - uVar16);
          } while (param_2 < *param_1);
        }
      }
    }
    *param_1 = local_4;
    if (7 < *(byte *)((int)param_1 + 0xb)) {
      param_1[1] = (*(byte *)((int)param_1 + 0xb) >> 3) * local_4;
      return;
    }
    param_1[1] = *(byte *)((int)param_1 + 0xb) * local_4 + 7 >> 3;
  }
  return;
}


