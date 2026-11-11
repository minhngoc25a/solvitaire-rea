// Function: FUN_004baa89
// Entry: 004baa89
// Size: 1352 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x004bad85) */

void FUN_004baa89(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  longlong lVar19;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  
  local_3c = param_4;
  uVar4 = param_4 * param_4;
  iVar11 = (int)uVar4 >> 0x1f;
  uVar6 = iVar11 << 1 | uVar4 >> 0x1f;
  uVar13 = uVar4 * 2;
  uVar7 = uVar6 << 1 | (uVar4 & 0x7fffffff) >> 0x1e;
  uVar1 = uVar4 * 4;
  uVar5 = param_5 * param_5;
  iVar12 = (int)uVar5 >> 0x1f;
  uVar8 = iVar12 << 1 | uVar5 >> 0x1f;
  uVar2 = uVar5 * 2;
  uVar9 = uVar8 << 1 | (uVar5 & 0x7fffffff) >> 0x1e;
  uVar3 = uVar5 * 4;
  local_38 = (int)param_4 >> 0x1f;
  lVar19 = __allmul(param_4,local_38,uVar2,uVar8);
  iVar10 = (int)((ulonglong)lVar19 >> 0x20);
  uVar17 = (uint)lVar19;
  local_30 = 0;
  local_40 = 0;
  uVar14 = uVar5 >> 1 | iVar12 << 0x1f;
  param_5 = iVar10 << 1 | uVar17 >> 0x1f;
  local_44 = uVar17 * 2;
  uVar15 = uVar14 - uVar17;
  uVar16 = uVar15 + uVar13;
  iVar12 = ((iVar12 - iVar10) - (uint)(uVar14 < uVar17)) + uVar6 + (uint)CARRY4(uVar15,uVar13);
  uVar14 = uVar4 >> 1 | iVar11 << 0x1f;
  uVar17 = uVar14 + uVar17 * -2;
  uVar4 = uVar17 + uVar2;
  iVar11 = ((iVar11 - param_5) - (uint)(uVar14 < local_44)) + uVar8 + (uint)CARRY4(uVar17,uVar2);
  local_34 = 0;
  param_4 = 0;
  if ((*(byte *)(param_1 + 0xd8) & 4) == 0) {
    if (iVar11 < 1) {
      while (iVar11 < 0) {
        FUN_004b9450(param_1,param_2 - local_3c,param_3 + param_4,local_3c * 2 + 1);
        if (param_4 != 0 || local_34 != 0) {
          FUN_004b9450(param_1,param_2 - local_3c,param_3 - param_4,local_3c * 2 + 1);
        }
        bVar18 = 0xfffffffe < param_4;
        param_4 = param_4 + 1;
        local_34 = local_34 + (uint)bVar18;
        bVar18 = CARRY4(local_30,uVar1);
        local_30 = local_30 + uVar1;
        local_40 = local_40 + uVar7 + (uint)bVar18;
        if ((iVar12 < 1) && (iVar12 < 0)) {
          iVar11 = iVar11 + local_40 + (uint)CARRY4(uVar4,local_30);
          uVar17 = local_30;
        }
        else {
          bVar18 = local_3c != 0;
          local_3c = local_3c - 1;
          local_38 = local_38 + -1 + (uint)bVar18;
          bVar18 = local_44 < uVar3;
          local_44 = local_44 + uVar5 * -4;
          param_5 = (param_5 - uVar9) - (uint)bVar18;
          uVar17 = (local_30 - local_44) + uVar2;
          iVar11 = iVar11 + ((local_40 - param_5) - (uint)(local_30 < local_44)) + uVar8 +
                            (uint)CARRY4(local_30 - local_44,uVar2) + (uint)CARRY4(uVar4,uVar17);
          bVar18 = uVar16 < local_44;
          uVar16 = uVar16 - local_44;
          iVar12 = (iVar12 - param_5) - (uint)bVar18;
        }
        uVar4 = uVar4 + uVar17;
        bVar18 = CARRY4(uVar16,local_30);
        uVar17 = uVar16 + local_30;
        uVar16 = uVar17 + uVar13;
        iVar12 = iVar12 + local_40 + (uint)bVar18 + uVar6 + (uint)CARRY4(uVar17,uVar13);
      }
    }
    uVar13 = param_4;
    iVar12 = param_3 + param_4;
    do {
      iVar10 = (param_4 - uVar13) + 1;
      FUN_004b949c(param_1,param_2 + local_3c,iVar12,iVar10);
      FUN_004b949c(param_1,param_2 + local_3c,param_3 - param_4,iVar10);
      if (local_3c != 0 || local_38 != 0) {
        FUN_004b949c(param_1,param_2 - local_3c,iVar12,iVar10);
        FUN_004b949c(param_1,param_2 - local_3c,param_3 - param_4,iVar10);
      }
      bVar18 = local_3c != 0;
      local_3c = local_3c - 1;
      local_38 = local_38 + -1 + (uint)bVar18;
      bVar18 = local_44 < uVar3;
      local_44 = local_44 + uVar5 * -4;
      param_5 = (param_5 - uVar9) - (uint)bVar18;
      uVar16 = uVar4 - local_44;
      iVar10 = (iVar11 - param_5) - (uint)(uVar4 < local_44);
      if ((iVar11 < 1) && (iVar11 < 0)) {
        param_4 = param_4 + 1;
        bVar18 = CARRY4(local_30,uVar1);
        local_30 = local_30 + uVar1;
        local_40 = local_40 + uVar7 + (uint)bVar18;
        bVar18 = CARRY4(uVar16,local_30);
        uVar16 = uVar16 + local_30;
        iVar10 = iVar10 + local_40 + (uint)bVar18;
      }
      uVar4 = uVar16 + uVar2;
      iVar11 = iVar10 + uVar8 + (uint)CARRY4(uVar16,uVar2);
    } while ((0 < local_38) || (-1 < local_38));
  }
  else {
    if (iVar11 < 1) {
      while (iVar11 < 0) {
        FUN_004b8b73(param_1,local_3c + param_2,param_3 + param_4);
        FUN_004b8b73(param_1,param_2 - local_3c,param_3 + param_4);
        if (param_4 != 0 || local_34 != 0) {
          FUN_004b8b73(param_1,local_3c + param_2,param_3 - param_4);
          FUN_004b8b73(param_1,param_2 - local_3c,param_3 - param_4);
        }
        bVar18 = 0xfffffffe < param_4;
        param_4 = param_4 + 1;
        local_34 = local_34 + (uint)bVar18;
        bVar18 = CARRY4(local_30,uVar1);
        local_30 = local_30 + uVar1;
        local_40 = local_40 + uVar7 + (uint)bVar18;
        if ((iVar12 < 1) && (iVar12 < 0)) {
          iVar11 = iVar11 + local_40 + (uint)CARRY4(uVar4,local_30);
          uVar17 = local_30;
        }
        else {
          bVar18 = local_3c != 0;
          local_3c = local_3c - 1;
          local_38 = local_38 + -1 + (uint)bVar18;
          bVar18 = local_44 < uVar3;
          local_44 = local_44 + uVar5 * -4;
          param_5 = (param_5 - uVar9) - (uint)bVar18;
          uVar17 = (local_30 - local_44) + uVar2;
          iVar11 = iVar11 + ((local_40 - param_5) - (uint)(local_30 < local_44)) + uVar8 +
                            (uint)CARRY4(local_30 - local_44,uVar2) + (uint)CARRY4(uVar4,uVar17);
          bVar18 = uVar16 < local_44;
          uVar16 = uVar16 - local_44;
          iVar12 = (iVar12 - param_5) - (uint)bVar18;
        }
        uVar4 = uVar4 + uVar17;
        bVar18 = CARRY4(uVar16,local_30);
        uVar17 = uVar16 + local_30;
        uVar16 = uVar17 + uVar13;
        iVar12 = iVar12 + local_40 + (uint)bVar18 + uVar6 + (uint)CARRY4(uVar17,uVar13);
      }
    }
    do {
      FUN_004b8b73(param_1,param_2 + local_3c,param_3 + param_4);
      FUN_004b8b73(param_1,param_2 + local_3c,param_3 - param_4);
      if (local_3c != 0 || local_38 != 0) {
        FUN_004b8b73(param_1,param_2 - local_3c,param_3 + param_4);
        FUN_004b8b73(param_1,param_2 - local_3c,param_3 - param_4);
      }
      bVar18 = local_3c != 0;
      local_3c = local_3c - 1;
      local_38 = local_38 + -1 + (uint)bVar18;
      bVar18 = local_44 < uVar3;
      local_44 = local_44 + uVar5 * -4;
      param_5 = (param_5 - uVar9) - (uint)bVar18;
      uVar13 = uVar4 - local_44;
      iVar12 = (iVar11 - param_5) - (uint)(uVar4 < local_44);
      if ((iVar11 < 1) && (iVar11 < 0)) {
        param_4 = param_4 + 1;
        bVar18 = CARRY4(local_30,uVar1);
        local_30 = local_30 + uVar1;
        local_40 = local_40 + uVar7 + (uint)bVar18;
        bVar18 = CARRY4(uVar13,local_30);
        uVar13 = uVar13 + local_30;
        iVar12 = iVar12 + local_40 + (uint)bVar18;
      }
      uVar4 = uVar13 + uVar2;
      iVar11 = iVar12 + uVar8 + (uint)CARRY4(uVar13,uVar2);
    } while ((0 < local_38) || (-1 < local_38));
  }
  return;
}


