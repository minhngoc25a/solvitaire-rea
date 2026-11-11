// Function: FUN_00454f5c
// Entry: 00454f5c
// Size: 834 bytes
// Thunk: false
// External: false


void __fastcall FUN_00454f5c(__uint64 *param_1)

{
  WCHAR WVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  WCHAR *pWVar11;
  int iVar12;
  int iVar13;
  int local_18;
  int local_14;
  byte local_10 [8];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  iVar12 = 0;
  cVar5 = *(char *)((int)param_1 + 0x2d);
  if (cVar5 < 'e') {
    if (cVar5 == 'd') {
LAB_00455014:
      *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x10;
LAB_00455018:
      uVar9 = FUN_00457dec(param_1,0);
      cVar5 = (char)uVar9;
    }
    else if (cVar5 < 'T') {
      if (cVar5 == 'S') {
LAB_00455041:
        uVar8 = FUN_00455396(param_1);
        cVar5 = (char)uVar8;
      }
      else {
        if (cVar5 != 'A') {
          if (cVar5 == 'C') {
LAB_00454fce:
            uVar8 = FUN_0045529e((undefined6 *)param_1);
            cVar5 = (char)uVar8;
            goto LAB_00455051;
          }
          if (((cVar5 != 'E') && (cVar5 != 'F')) && (cVar5 != 'G')) goto LAB_00455290;
        }
LAB_00454fac:
        uVar8 = FUN_00455408((uint *)param_1);
        cVar5 = (char)uVar8;
      }
    }
    else if (cVar5 == 'X') {
      bVar6 = 1;
LAB_00454fe3:
      uVar9 = FUN_00457ad2(param_1,bVar6);
      cVar5 = (char)uVar9;
    }
    else {
      if (cVar5 != 'Z') {
        if (cVar5 != 'a') {
          if (cVar5 != 'c') goto LAB_00455290;
          goto LAB_00454fce;
        }
        goto LAB_00454fac;
      }
      uVar8 = FUN_00455333(param_1);
      cVar5 = (char)uVar8;
    }
  }
  else if (cVar5 < 'p') {
    if (cVar5 == 'o') {
      cVar5 = FUN_00455599(param_1);
    }
    else {
      if (((cVar5 == 'e') || (cVar5 == 'f')) || (cVar5 == 'g')) goto LAB_00454fac;
      if (cVar5 == 'i') goto LAB_00455014;
      if (cVar5 != 'n') goto LAB_00455290;
      uVar9 = FUN_004555cc((int)param_1);
      cVar5 = (char)uVar9;
    }
  }
  else {
    if (cVar5 != 'p') {
      if (cVar5 == 's') goto LAB_00455041;
      if (cVar5 != 'u') {
        if (cVar5 != 'x') goto LAB_00455290;
        bVar6 = 0;
        goto LAB_00454fe3;
      }
      goto LAB_00455018;
    }
    cVar5 = FUN_004555b6(param_1);
  }
LAB_00455051:
  if ((cVar5 == '\0') || (*(char *)((int)param_1 + 0x2c) != '\0')) goto LAB_00455290;
  uVar9 = *(uint *)((int)param_1 + 0x1c);
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  iVar13 = 0;
  local_14 = 0;
  if ((uVar9 >> 4 & 1) != 0) {
    if ((uVar9 >> 6 & 1) == 0) {
      if ((uVar9 & 1) == 0) {
        if ((uVar9 >> 1 & 1) != 0) {
          local_10[0] = 0x20;
          local_10[1] = 0;
          iVar13 = 1;
          local_14 = 1;
        }
        goto LAB_004550b0;
      }
      local_10[0] = 0x2b;
      local_10[1] = 0;
    }
    else {
      local_10[0] = 0x2d;
      local_10[1] = 0;
    }
    local_14 = 1;
    iVar13 = 1;
  }
LAB_004550b0:
  cVar5 = *(char *)((int)param_1 + 0x2d);
  if (((cVar5 != 'x') && (cVar5 != 'X')) || (bVar7 = true, (uVar9 >> 5 & 1) == 0)) {
    bVar7 = false;
  }
  if ((cVar5 == 'a') || (bVar4 = false, cVar5 == 'A')) {
    bVar4 = true;
  }
  if ((bVar7) || (bVar4)) {
    local_10[iVar13] = 0x30;
    if ((cVar5 == 'X') || (cVar5 == 'A')) {
      bVar6 = 0x58;
    }
    else {
      bVar6 = 0x78;
    }
    local_10[iVar13 + 1] = bVar6;
    iVar13 = iVar13 + 2;
    local_14 = iVar13;
  }
  iVar13 = ((int)param_1[4] - iVar13) - *(int *)((int)param_1 + 0x34);
  if ((uVar9 & 0xc) == 0) {
    piVar2 = *(int **)(param_1 + 1);
    local_18 = 0;
    if (0 < iVar13) {
      while (bVar7 = FUN_00454a75(param_1 + 0x89,0x20,piVar2), bVar7) {
        iVar10 = *(int *)((int)param_1 + 0x14);
        *(int *)((int)param_1 + 0x14) = iVar10 + 1;
        if ((iVar10 == -2) || (local_18 = local_18 + 1, iVar13 <= local_18)) goto LAB_0045515c;
      }
      *(undefined4 *)((int)param_1 + 0x14) = 0xffffffff;
    }
  }
LAB_0045515c:
  piVar2 = (int *)((int)param_1 + 0x14);
  write_string(param_1 + 0x89,local_10,local_14,piVar2,*(int **)(param_1 + 1));
  if (((*(uint *)((int)param_1 + 0x1c) >> 3 & 1) != 0) &&
     ((*(uint *)((int)param_1 + 0x1c) >> 2 & 1) == 0)) {
    piVar3 = *(int **)(param_1 + 1);
    local_18 = 0;
    if (0 < iVar13) {
      while (bVar7 = FUN_00454a75(param_1 + 0x89,0x30,piVar3), bVar7) {
        iVar10 = *piVar2;
        *piVar2 = iVar10 + 1;
        if ((iVar10 == -2) || (local_18 = local_18 + 1, iVar13 <= local_18)) goto LAB_004551ce;
      }
      *piVar2 = -1;
    }
  }
LAB_004551ce:
  if (((char)param_1[7] == '\0') || (*(int *)((int)param_1 + 0x34) < 1)) {
    write_string(param_1 + 0x89,*(byte **)(param_1 + 6),*(int *)((int)param_1 + 0x34),piVar2,
                 *(int **)(param_1 + 1));
  }
  else {
    pWVar11 = *(WCHAR **)(param_1 + 6);
    local_18 = 0;
    do {
      WVar1 = *pWVar11;
      pWVar11 = pWVar11 + 1;
      local_14 = 0;
      iVar10 = FUN_004848ed(&local_14,local_10,6,WVar1,*(int **)(param_1 + 1));
      if ((iVar10 != 0) || (local_14 == 0)) {
        *piVar2 = -1;
        break;
      }
      write_string(param_1 + 0x89,local_10,local_14,piVar2,*(int **)(param_1 + 1));
      local_18 = local_18 + 1;
    } while (local_18 != *(int *)((int)param_1 + 0x34));
  }
  if (((-1 < *piVar2) && ((*(uint *)((int)param_1 + 0x1c) >> 2 & 1) != 0)) &&
     (piVar3 = *(int **)(param_1 + 1), 0 < iVar13)) {
    while (bVar7 = FUN_00454a75(param_1 + 0x89,0x20,piVar3), bVar7) {
      iVar10 = *piVar2;
      *piVar2 = iVar10 + 1;
      if ((iVar10 == -2) || (iVar12 = iVar12 + 1, iVar13 <= iVar12)) goto LAB_00455290;
    }
    *piVar2 = -1;
  }
LAB_00455290:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


