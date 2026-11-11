// Function: FUN_005014a0
// Entry: 005014a0
// Size: 825 bytes
// Thunk: false
// External: false


void __cdecl FUN_005014a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_348;
  uint local_344;
  int local_33c;
  uint local_330;
  int local_320 [100];
  int local_190 [100];
  
  local_320[0] = param_3;
  local_330 = 0;
  local_190[0] = param_4;
  local_344 = 1;
  while( true ) {
    if (0x62 < local_344) {
      guard_check_icall();
    }
    uVar6 = local_344 - 1;
    iVar1 = local_320[uVar6];
    iVar2 = local_190[uVar6];
    if (9 < iVar2 - iVar1) break;
    if (iVar1 != iVar2) {
      iVar9 = iVar2;
      if (3 < iVar2 - iVar1) {
        for (iVar8 = iVar2 + -4; iVar1 <= iVar8; iVar8 = iVar8 + -1) {
          iVar12 = *(int *)(param_1 + iVar8 * 4);
          uVar3 = *(uint *)(param_2 + iVar12 * 4);
          iVar7 = iVar8;
          while ((iVar7 = iVar7 + 4, iVar7 <= iVar2 &&
                 (iVar4 = *(int *)(param_1 + iVar7 * 4), *(uint *)(param_2 + iVar4 * 4) < uVar3))) {
            *(int *)(param_1 + -0x10 + iVar7 * 4) = iVar4;
          }
          *(int *)(param_1 + -0x10 + iVar7 * 4) = iVar12;
        }
      }
      while (iVar9 = iVar9 + -1, iVar1 <= iVar9) {
        iVar8 = *(int *)(param_1 + iVar9 * 4);
        uVar3 = *(uint *)(param_2 + iVar8 * 4);
        iVar12 = iVar9;
        while ((iVar12 = iVar12 + 1, iVar12 <= iVar2 &&
               (iVar7 = *(int *)(param_1 + iVar12 * 4), *(uint *)(param_2 + iVar7 * 4) < uVar3))) {
          *(int *)(param_1 + -4 + iVar12 * 4) = iVar7;
        }
        *(int *)(param_1 + -4 + iVar12 * 4) = iVar8;
      }
    }
LAB_005015c5:
    local_344 = uVar6;
    if ((int)local_344 < 1) {
      return;
    }
  }
  local_330 = local_330 * 0x1dc5 + 1 & 0x7fff;
  if (local_330 == (local_330 / 3) * 3) {
    iVar9 = *(int *)(param_1 + iVar1 * 4);
  }
  else if (local_330 % 3 == 1) {
    iVar9 = *(int *)(param_1 + (iVar1 + iVar2 >> 1) * 4);
  }
  else {
    iVar9 = *(int *)(param_1 + iVar2 * 4);
  }
  iVar8 = *(int *)(param_2 + iVar9 * 4);
  iVar12 = iVar1;
  local_348 = iVar1;
  local_33c = iVar2;
  iVar9 = iVar2;
LAB_00501630:
  for (; iVar12 <= iVar9; iVar12 = iVar12 + 1) {
    while( true ) {
      iVar7 = *(int *)(param_1 + iVar12 * 4);
      iVar4 = *(int *)(param_2 + iVar7 * 4);
      if (iVar4 != iVar8) break;
      *(undefined4 *)(param_1 + iVar12 * 4) = *(undefined4 *)(param_1 + local_348 * 4);
      iVar12 = iVar12 + 1;
      *(int *)(param_1 + local_348 * 4) = iVar7;
      local_348 = local_348 + 1;
      if (iVar9 < iVar12) goto LAB_005016a1;
    }
    if (iVar4 != iVar8 && -1 < iVar4 - iVar8) {
      do {
        iVar7 = *(int *)(param_1 + iVar9 * 4);
        puVar10 = (undefined4 *)(param_1 + iVar9 * 4);
        iVar9 = iVar9 + -1;
        iVar4 = *(int *)(param_2 + iVar7 * 4);
        if (iVar4 == iVar8) {
          *puVar10 = *(undefined4 *)(param_1 + local_33c * 4);
          *(int *)(param_1 + local_33c * 4) = iVar7;
          local_33c = local_33c + -1;
        }
        else if (iVar4 - iVar8 < 0) goto LAB_005017a2;
        if (iVar9 < iVar12) goto LAB_005016a1;
      } while( true );
    }
  }
LAB_005016a1:
  if (local_348 <= local_33c) {
    iVar7 = iVar12 - local_348;
    iVar8 = local_348 - iVar1;
    if (iVar7 <= local_348 - iVar1) {
      iVar8 = iVar7;
    }
    if (0 < iVar8) {
      puVar10 = (undefined4 *)(param_1 + iVar1 * 4);
      puVar11 = (undefined4 *)(param_1 + (iVar12 - iVar8) * 4);
      do {
        uVar5 = *puVar10;
        *puVar10 = *puVar11;
        iVar8 = iVar8 + -1;
        *puVar11 = uVar5;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (0 < iVar8);
    }
    iVar8 = iVar2 - local_33c;
    if (local_33c - iVar9 <= iVar2 - local_33c) {
      iVar8 = local_33c - iVar9;
    }
    if (0 < iVar8) {
      puVar10 = (undefined4 *)(param_1 + iVar12 * 4);
      puVar11 = (undefined4 *)(param_1 + 4 + (iVar2 - iVar8) * 4);
      do {
        uVar5 = *puVar10;
        *puVar10 = *puVar11;
        iVar8 = iVar8 + -1;
        *puVar11 = uVar5;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (0 < iVar8);
    }
    iVar8 = iVar1 + iVar7 + -1;
    iVar9 = (iVar9 - local_33c) + 1 + iVar2;
    if (iVar2 - iVar9 < iVar8 - iVar1) {
      local_320[uVar6] = iVar1;
      local_320[local_344] = iVar9;
      local_190[uVar6] = iVar8;
      local_190[local_344] = iVar2;
      uVar6 = local_344 + 1;
    }
    else {
      local_320[uVar6] = iVar9;
      local_190[uVar6] = iVar2;
      local_320[local_344] = iVar1;
      local_190[local_344] = iVar8;
      uVar6 = local_344 + 1;
    }
  }
  goto LAB_005015c5;
LAB_005017a2:
  uVar5 = *(undefined4 *)(param_1 + iVar12 * 4);
  *(int *)(param_1 + iVar12 * 4) = iVar7;
  iVar12 = iVar12 + 1;
  *puVar10 = uVar5;
  goto LAB_00501630;
}


