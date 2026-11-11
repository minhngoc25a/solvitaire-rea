// Function: FUN_00502010
// Entry: 00502010
// Size: 1049 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00502010(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            int *param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int local_4e8;
  int local_4e4;
  int local_4d8;
  int local_4b0 [100];
  int local_320 [100];
  int local_190 [100];
  
  local_4b0[0] = param_5;
  local_320[0] = param_6;
  local_190[0] = param_7;
  uVar18 = 1;
  while( true ) {
    if (0x61 < uVar18) {
      guard_check_icall();
    }
    uVar19 = uVar18 - 1;
    iVar5 = local_4b0[uVar19];
    iVar6 = local_320[uVar19];
    iVar17 = local_190[uVar19];
    if ((0x13 < iVar6 - iVar5) && (iVar17 < 0xf)) break;
    FUN_00501d60(param_1,param_2,param_3,param_4,iVar5,iVar6,iVar17,param_8);
    if (*param_8 < 0) {
      return;
    }
LAB_00502416:
    uVar18 = uVar19;
    if ((int)uVar19 < 1) {
      return;
    }
  }
  bVar1 = *(byte *)(*(int *)(param_1 + (iVar6 + iVar5 >> 1) * 4) + iVar17 + param_2);
  bVar2 = *(byte *)(*(int *)(param_1 + iVar6 * 4) + iVar17 + param_2);
  piVar16 = (int *)(param_1 + iVar5 * 4);
  bVar3 = *(byte *)(*piVar16 + iVar17 + param_2);
  bVar4 = bVar2;
  if (bVar3 <= bVar2) {
    bVar4 = bVar3;
  }
  if (bVar3 <= bVar2) {
    bVar3 = bVar2;
  }
  iVar8 = iVar6;
  iVar20 = iVar5;
  iVar22 = iVar5;
  local_4e8 = iVar6;
  uVar10 = (uint)bVar3;
  if ((bVar1 < bVar3) && (uVar10 = (uint)bVar1, bVar1 < bVar4)) {
    uVar10 = (uint)bVar4;
  }
LAB_00502140:
  for (; iVar20 <= iVar8; iVar20 = iVar20 + 1) {
    while( true ) {
      iVar23 = *(int *)(param_1 + iVar20 * 4);
      uVar11 = (uint)*(byte *)(iVar23 + iVar17 + param_2);
      if (uVar11 != uVar10) break;
      *(undefined4 *)(param_1 + iVar20 * 4) = *(undefined4 *)(param_1 + iVar22 * 4);
      iVar20 = iVar20 + 1;
      *(int *)(param_1 + iVar22 * 4) = iVar23;
      iVar22 = iVar22 + 1;
      if (iVar8 < iVar20) goto LAB_005021cf;
    }
    if (uVar11 != uVar10 && -1 < (int)(uVar11 - uVar10)) {
      do {
        piVar13 = (int *)(param_1 + iVar8 * 4);
        iVar23 = *piVar13;
        iVar8 = iVar8 + -1;
        uVar11 = (uint)*(byte *)(iVar17 + iVar23 + param_2);
        if (uVar11 == uVar10) {
          *piVar13 = *(int *)(param_1 + local_4e8 * 4);
          *(int *)(param_1 + local_4e8 * 4) = iVar23;
          local_4e8 = local_4e8 + -1;
        }
        else if ((int)(uVar11 - uVar10) < 0) goto LAB_005021fd;
        if (iVar8 < iVar20) goto LAB_005021cf;
      } while( true );
    }
  }
LAB_005021cf:
  if (local_4e8 < iVar22) {
    local_4b0[uVar19] = iVar5;
    local_320[uVar19] = iVar6;
    local_190[uVar19] = iVar17 + 1;
    uVar19 = uVar18;
  }
  else {
    iVar12 = iVar20 - iVar22;
    iVar23 = iVar22 - iVar5;
    if (iVar12 <= iVar22 - iVar5) {
      iVar23 = iVar12;
    }
    if (0 < iVar23) {
      piVar13 = (int *)(param_1 + (iVar20 - iVar23) * 4);
      do {
        iVar22 = *piVar16;
        *piVar16 = *piVar13;
        iVar23 = iVar23 + -1;
        *piVar13 = iVar22;
        piVar13 = piVar13 + 1;
        piVar16 = piVar16 + 1;
      } while (0 < iVar23);
    }
    iVar22 = iVar6 - local_4e8;
    if (local_4e8 - iVar8 <= iVar6 - local_4e8) {
      iVar22 = local_4e8 - iVar8;
    }
    if (0 < iVar22) {
      puVar14 = (undefined4 *)(param_1 + 4 + (iVar6 - iVar22) * 4);
      puVar21 = (undefined4 *)(param_1 + iVar20 * 4);
      do {
        uVar7 = *puVar21;
        *puVar21 = *puVar14;
        iVar22 = iVar22 + -1;
        *puVar14 = uVar7;
        puVar14 = puVar14 + 1;
        puVar21 = puVar21 + 1;
      } while (0 < iVar22);
    }
    iVar12 = iVar12 + iVar5;
    iVar22 = (iVar8 - local_4e8) + iVar6;
    iVar8 = iVar12 + -1;
    iVar20 = iVar22 + 1;
    iVar15 = iVar5;
    iVar23 = iVar6;
    if (iVar6 - iVar20 <= iVar8 - iVar5) {
      iVar15 = iVar20;
      iVar23 = iVar8;
      iVar8 = iVar6;
      iVar20 = iVar5;
    }
    iVar24 = iVar12;
    iVar5 = iVar17 + 1;
    local_4d8 = iVar22;
    iVar6 = iVar17;
    if (iVar22 - iVar12 <= iVar8 - iVar15) {
      iVar24 = iVar15;
      iVar5 = iVar17;
      local_4d8 = iVar8;
      iVar6 = iVar17 + 1;
      iVar8 = iVar22;
      iVar15 = iVar12;
    }
    iVar9 = local_4d8 - iVar24;
    iVar22 = iVar17;
    iVar12 = iVar20;
    local_4e4 = iVar23;
    if (iVar23 - iVar20 < iVar9) {
      iVar22 = iVar5;
      iVar12 = iVar24;
      iVar24 = iVar20;
      local_4e4 = local_4d8;
      local_4d8 = iVar23;
    }
    local_4b0[uVar19] = iVar12;
    local_320[uVar19] = local_4e4;
    local_4b0[uVar18] = iVar24;
    local_190[uVar19] = iVar22;
    local_320[uVar18] = local_4d8;
    local_4b0[uVar18 + 1] = iVar15;
    if (iVar9 <= iVar23 - iVar20) {
      iVar17 = iVar5;
    }
    local_320[uVar18 + 1] = iVar8;
    local_190[uVar18] = iVar17;
    local_190[uVar18 + 1] = iVar6;
    uVar19 = uVar18 + 2;
  }
  goto LAB_00502416;
LAB_005021fd:
  iVar12 = *(int *)(param_1 + iVar20 * 4);
  *(int *)(param_1 + iVar20 * 4) = iVar23;
  *piVar13 = iVar12;
  iVar20 = iVar20 + 1;
  goto LAB_00502140;
}


