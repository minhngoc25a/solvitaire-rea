// Function: FUN_004fec63
// Entry: 004fec63
// Size: 920 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x004fecfe) */
/* WARNING: Removing unreachable block (ram,0x004fee4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004fec63(double *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float10 fVar17;
  float10 extraout_ST0;
  longlong lVar18;
  int local_48;
  int local_40;
  uint local_34;
  uint local_2c;
  double local_20;
  
  uVar2 = *(uint *)((int)param_1 + 4);
  uVar16 = *(uint *)param_1;
  iVar11 = (param_2 - 1) / 3 + 0x1e;
  dVar4 = (double)iVar11;
  if (iVar11 < 0) {
    dVar4 = dVar4 + _DAT_005223b0;
  }
  uVar1 = uVar2 + uVar16;
  uVar15 = 0;
  uVar3 = (ulonglong)uVar2 / (ulonglong)(param_2 << 2);
  uVar12 = (uint)uVar3;
  local_34 = (uint)(uVar3 / 100);
  local_20 = _DAT_005223a0;
  uVar14 = 0x20;
  if (local_34 == 0) {
    local_34 = 1;
  }
  do {
    fVar17 = FUN_0046a200(_DAT_005223a0 * (double)((0x400 - uVar15 * uVar15 & 0xffffff) >> 2));
    param_1[uVar15 + 0x681] = (double)fVar17;
    uVar15 = uVar15 + 1;
  } while (uVar15 < 0x20);
  if (uVar2 % 499 == 0) {
    if (uVar2 % 0x1eb == 0) {
      iVar11 = (-(uint)(uVar2 % 0x1e7 != 0) & 0xffffffc0) + 0x7dc;
    }
    else {
      iVar11 = 0x7ac;
    }
  }
  else {
    iVar11 = 0x7cc;
  }
  param_2 = 0;
  if (uVar12 != 0) {
    do {
      bVar10 = *(byte *)(uVar16 + 3);
      if (bVar10 == 0) {
        local_40 = 0;
        iVar13 = 0;
        local_48 = 0;
        bVar10 = 0;
      }
      else {
        lVar18 = FUN_00469de0();
        local_40 = (int)lVar18;
        lVar18 = FUN_00469de0();
        local_48 = (int)lVar18;
        lVar18 = FUN_00469de0();
        iVar13 = (int)lVar18;
      }
      dVar5 = (double)iVar13;
      if (iVar13 < 0) {
        dVar5 = dVar5 + _DAT_005223b0;
      }
      dVar6 = (double)local_48;
      if (local_48 < 0) {
        dVar6 = dVar6 + _DAT_005223b0;
      }
      dVar7 = (double)local_40;
      if (local_40 < 0) {
        dVar7 = dVar7 + _DAT_005223b0;
      }
      dVar8 = (double)bVar10;
      uVar15 = FUN_004ff0c0(param_1,dVar8,dVar7,dVar6,dVar5);
      dVar9 = local_20 * _DAT_00522388;
      param_1[uVar15 * 4 + 1] = param_1[uVar15 * 4 + 1] - (param_1[uVar15 * 4 + 1] - dVar8) * dVar9;
      param_1[uVar15 * 4 + 2] = param_1[uVar15 * 4 + 2] - (param_1[uVar15 * 4 + 2] - dVar7) * dVar9;
      param_1[uVar15 * 4 + 3] = param_1[uVar15 * 4 + 3] - (param_1[uVar15 * 4 + 3] - dVar6) * dVar9;
      param_1[uVar15 * 4 + 4] = param_1[uVar15 * 4 + 4] - (param_1[uVar15 * 4 + 4] - dVar5) * dVar9;
      if (uVar14 != 0) {
        FUN_004ff211((int)param_1,uVar14,uVar15,dVar8,dVar7,dVar6,dVar5);
      }
      for (uVar16 = uVar16 + iVar11; uVar1 <= uVar16; uVar16 = uVar16 - uVar2) {
      }
      param_2 = param_2 + 1;
      if (param_2 % local_34 == 0) {
        local_20 = local_20 - local_20 / dVar4;
        lVar18 = FUN_00469de0();
        uVar14 = -(uint)(1 < (uint)lVar18) & (uint)lVar18;
        if (uVar14 != 0) {
          local_2c = 0;
          fVar17 = extraout_ST0;
          do {
            uVar15 = ((uVar14 * uVar14 - local_2c * local_2c) * 0x100) / (uVar14 * uVar14);
            dVar5 = (double)(int)uVar15;
            if ((int)uVar15 < 0) {
              dVar5 = dVar5 + _DAT_005223b0;
            }
            fVar17 = FUN_0046a200((double)(fVar17 * (float10)dVar5));
            param_1[local_2c + 0x681] = (double)fVar17;
            fVar17 = (float10)local_20;
            local_2c = local_2c + 1;
          } while (local_2c < uVar14);
        }
      }
    } while (param_2 < uVar12);
  }
  return;
}


