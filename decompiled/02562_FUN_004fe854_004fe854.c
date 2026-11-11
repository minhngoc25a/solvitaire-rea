// Function: FUN_004fe854
// Entry: 004fe854
// Size: 534 bytes
// Thunk: false
// External: false


void __thiscall FUN_004fe854(void *this,int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *this_00;
  void *this_01;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  uint uVar10;
  double *pdVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  longlong lVar15;
  double dVar16;
  undefined4 *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_20 [8];
  
  uVar3 = *(uint *)(param_1 + 0x3508);
  local_40 = (undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x3510);
  if (uVar3 == 0) {
    uVar7 = 0;
    uVar5 = 0;
  }
  else {
    pdVar11 = (double *)(param_1 + 0x18);
    puVar9 = (undefined1 *)(param_1 + 0x3d1a);
    local_38 = uVar3;
    do {
      FUN_004ff00e(this,uVar2,pdVar11[1]);
      lVar15 = FUN_00469de0();
      puVar9[-2] = (char)lVar15;
      FUN_004ff00e(this_00,uVar2,*pdVar11);
      lVar15 = FUN_00469de0();
      puVar9[-1] = (char)lVar15;
      FUN_004ff00e(this_01,uVar2,pdVar11[-1]);
      lVar15 = FUN_00469de0();
      *puVar9 = (char)lVar15;
      dVar16 = pdVar11[-2];
      uVar4 = FUN_004ff076(dVar16);
      pdVar11 = pdVar11 + 4;
      puVar9[1] = (char)uVar4;
      local_38 = local_38 - 1;
      this = (void *)((ulonglong)dVar16 >> 0x20);
      puVar9 = puVar9 + 4;
    } while (local_38 != 0);
    uVar7 = 0;
    uVar5 = 0;
    local_30 = 0;
    local_38 = 0;
    uVar10 = 0;
    do {
      local_34 = (uint)*(byte *)(param_1 + 0x3d19 + uVar10 * 4);
      uVar1 = uVar10 + 1;
      if (uVar1 < uVar3) {
        pbVar8 = (byte *)(param_1 + 0x3d1d + uVar10 * 4);
        uVar5 = uVar1;
        local_3c = uVar10;
        do {
          if (*pbVar8 < local_34) {
            local_34 = (uint)*pbVar8;
            local_3c = uVar5;
          }
          uVar5 = uVar5 + 1;
          pbVar8 = pbVar8 + 4;
        } while (uVar5 < uVar3);
        uVar5 = local_38;
        uVar7 = local_30;
        if (uVar10 != local_3c) {
          puVar12 = (undefined4 *)(param_1 + 8 + local_3c * 0x20);
          puVar13 = local_20;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar12 = local_40;
          puVar13 = (undefined4 *)(local_3c * 0x20 + 8 + param_1);
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar12 = local_20;
          puVar13 = local_40;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          uVar4 = *(undefined4 *)(param_1 + 0x3d18 + local_3c * 4);
          *(undefined4 *)(param_1 + 0x3d18 + local_3c * 4) =
               *(undefined4 *)(param_1 + 0x3d18 + uVar10 * 4);
          *(undefined4 *)(param_1 + 0x3d18 + uVar10 * 4) = uVar4;
        }
      }
      if (local_34 != uVar5) {
        *(uint *)(param_1 + 0x2008 + uVar5 * 4) = uVar7 + uVar10 >> 1;
        if (uVar5 + 1 < local_34) {
          puVar14 = (uint *)(param_1 + (uVar5 + 0x803) * 4);
          for (iVar6 = local_34 - (uVar5 + 1); iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar14 = uVar10;
            puVar14 = puVar14 + 1;
          }
        }
        local_38 = local_34;
        uVar5 = local_34;
        uVar7 = uVar10;
        local_30 = uVar10;
      }
      local_40 = local_40 + 8;
      uVar10 = uVar1;
    } while (uVar1 < uVar3);
  }
  *(uint *)(param_1 + 0x2008 + uVar5 * 4) = uVar7 + 0xff >> 1;
  if (uVar5 + 1 < 0x100) {
    puVar12 = (undefined4 *)(param_1 + (uVar5 + 0x803) * 4);
    for (iVar6 = 0x100 - (uVar5 + 1); iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = 0xff;
      puVar12 = puVar12 + 1;
    }
  }
  return;
}


