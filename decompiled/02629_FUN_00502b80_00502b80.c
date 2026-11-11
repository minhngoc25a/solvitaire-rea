// Function: FUN_00502b80
// Entry: 00502b80
// Size: 1260 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00502b80(int param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_1448;
  uint local_1430 [260];
  uint local_1020 [516];
  uint local_810 [515];
  undefined4 uStack_4;
  
  uStack_4 = 0x502b8a;
  iVar10 = 0;
  if (0 < (int)param_3) {
    if (7 < param_3) {
      puVar7 = param_2;
      do {
        uVar17 = puVar7[1];
        uVar19 = puVar7[2];
        uVar21 = puVar7[3];
        puVar1 = puVar7 + 8;
        iVar10 = iVar10 + 8;
        uVar16 = -(uint)(*puVar7 == 0);
        uVar18 = -(uint)(uVar17 == 0);
        uVar20 = -(uint)(uVar19 == 0);
        uVar22 = -(uint)(uVar21 == 0);
        uVar3 = puVar7[4];
        uVar4 = puVar7[5];
        uVar5 = puVar7[6];
        uVar6 = puVar7[7];
        piVar2 = (int *)((int)local_1430 + (0x3f4 - (int)param_2) + (int)puVar1);
        *piVar2 = (_DAT_00519300 & uVar16 | ~uVar16 & *puVar7) << 8;
        piVar2[1] = (_UNK_00519304 & uVar18 | ~uVar18 & uVar17) << 8;
        piVar2[2] = (_UNK_00519308 & uVar20 | ~uVar20 & uVar19) << 8;
        piVar2[3] = (_UNK_0051930c & uVar22 | ~uVar22 & uVar21) << 8;
        uVar17 = -(uint)(uVar3 == 0);
        uVar19 = -(uint)(uVar4 == 0);
        uVar21 = -(uint)(uVar5 == 0);
        uVar16 = -(uint)(uVar6 == 0);
        piVar2 = (int *)((int)local_1430 + (0x404 - (int)param_2) + (int)puVar1);
        *piVar2 = (_DAT_00519300 & uVar17 | ~uVar17 & uVar3) << 8;
        piVar2[1] = (_UNK_00519304 & uVar19 | ~uVar19 & uVar4) << 8;
        piVar2[2] = (_UNK_00519308 & uVar21 | ~uVar21 & uVar5) << 8;
        piVar2[3] = (_UNK_0051930c & uVar16 | ~uVar16 & uVar6) << 8;
        puVar7 = puVar1;
      } while (iVar10 < (int)(param_3 & 0xfffffff8));
      if ((int)param_3 <= iVar10) goto LAB_00502c50;
    }
    do {
      uVar17 = param_2[iVar10];
      if (uVar17 == 0) {
        uVar17 = 1;
      }
      local_1020[iVar10 + 1] = uVar17 << 8;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)param_3);
  }
LAB_00502c50:
  local_1430[0] = 0;
  local_1020[0] = 0;
  local_810[0] = 0xfffffffe;
  local_1448 = param_3;
  if ((int)param_3 < 1) goto LAB_00502e78;
  do {
    local_810[0] = 0xfffffffe;
    local_1020[0] = 0;
    local_1430[0] = 0;
    uVar19 = 1;
    iVar10 = 0;
    puVar7 = local_810;
    for (uVar17 = param_3; puVar7 = puVar7 + 1, uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar7 = 0xffffffff;
    }
    do {
      uVar21 = local_1020[uVar19];
      iVar10 = iVar10 + 1;
      local_1430[iVar10] = uVar19;
      uVar3 = local_1430[iVar10 >> 1];
      uVar17 = local_1020[uVar3];
      iVar11 = iVar10;
      iVar8 = iVar10 >> 1;
      while ((int)uVar21 < (int)uVar17) {
        local_1430[iVar11] = uVar3;
        uVar3 = local_1430[iVar8 >> 1];
        iVar11 = iVar8;
        iVar8 = iVar8 >> 1;
        uVar17 = local_1020[uVar3];
      }
      local_1430[iVar11] = uVar19;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 <= (int)param_3);
    uVar17 = local_1430[1];
    if (0x103 < iVar10) {
      guard_check_icall();
      uVar17 = local_1430[1];
    }
    while (local_1430[1] = uVar17, 1 < iVar10) {
      iVar8 = 2;
      uVar19 = local_1430[iVar10];
      iVar12 = iVar10 + -1;
      local_1430[1] = uVar19;
      bVar13 = SBORROW4(2,iVar12);
      iVar11 = 2 - iVar12;
      iVar15 = 1;
      if (1 < iVar12) {
        uVar21 = local_1020[uVar19];
        do {
          iVar9 = iVar8;
          if ((bVar13 != iVar11 < 0) &&
             ((int)local_1020[local_1430[iVar8 + 1]] < (int)local_1020[local_1430[iVar8]])) {
            iVar9 = iVar8 + 1;
          }
          if ((int)uVar21 < (int)local_1020[local_1430[iVar9]]) break;
          local_1430[iVar15] = local_1430[iVar9];
          iVar8 = iVar9 * 2;
          bVar13 = SBORROW4(iVar8,iVar12);
          iVar11 = iVar8 - iVar12;
          iVar15 = iVar9;
        } while (iVar8 <= iVar12);
      }
      local_1430[iVar15] = uVar19;
      uVar21 = local_1430[1];
      iVar10 = iVar10 + -2;
      uVar19 = local_1430[iVar12];
      iVar8 = 2;
      local_1430[1] = uVar19;
      bVar13 = SBORROW4(2,iVar10);
      iVar11 = 2 - iVar10;
      iVar15 = 1;
      if (1 < iVar10) {
        uVar3 = local_1020[uVar19];
        do {
          iVar9 = iVar8;
          if ((bVar13 != iVar11 < 0) &&
             ((int)local_1020[local_1430[iVar8 + 1]] < (int)local_1020[local_1430[iVar8]])) {
            iVar9 = iVar8 + 1;
          }
          if ((int)uVar3 < (int)local_1020[local_1430[iVar9]]) break;
          local_1430[iVar15] = local_1430[iVar9];
          iVar8 = iVar9 * 2;
          bVar13 = SBORROW4(iVar8,iVar10);
          iVar11 = iVar8 - iVar10;
          iVar15 = iVar9;
        } while (iVar8 <= iVar10);
      }
      uVar3 = local_1020[uVar21];
      local_1448 = local_1448 + 1;
      local_1430[iVar15] = uVar19;
      local_810[uVar21] = local_1448;
      local_810[uVar17] = local_1448;
      uVar19 = local_1020[uVar17];
      uVar21 = local_1020[uVar17];
      if ((byte)local_1020[uVar17] <= (byte)uVar3) {
        uVar21 = uVar3;
      }
      local_810[local_1448] = 0xffffffff;
      uVar21 = (uVar21 & 0xff) + 1 | (uVar19 & 0xffffff00) + (uVar3 & 0xffffff00);
      local_1020[local_1448] = uVar21;
      local_1430[iVar12] = local_1448;
      uVar19 = local_1430[iVar12 >> 1];
      uVar17 = local_1020[uVar19];
      iVar10 = iVar12;
      iVar11 = iVar12 >> 1;
      while ((int)uVar21 < (int)uVar17) {
        local_1430[iVar10] = uVar19;
        uVar19 = local_1430[iVar11 >> 1];
        iVar10 = iVar11;
        iVar11 = iVar11 >> 1;
        uVar17 = local_1020[uVar19];
      }
      local_1430[iVar10] = local_1448;
      iVar10 = iVar12;
      uVar17 = local_1430[1];
    }
LAB_00502e78:
    if (0x203 < (int)local_1448) {
      guard_check_icall();
    }
    iVar10 = 1;
    bVar13 = false;
    if ((int)param_3 < 1) {
      return;
    }
    puVar7 = local_810;
    do {
      puVar7 = puVar7 + 1;
      iVar11 = 0;
      for (uVar17 = *puVar7; -1 < (int)uVar17; uVar17 = local_810[uVar17]) {
        iVar11 = iVar11 + 1;
      }
      *(char *)(iVar10 + -1 + param_1) = (char)iVar11;
      if (param_4 < iVar11) {
        bVar13 = true;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 <= (int)param_3);
    if (!bVar13) {
      return;
    }
    iVar10 = 1;
    if (param_3 < 0x10) goto LAB_00503010;
    iVar11 = 4;
    iVar8 = 4;
    do {
      piVar2 = (int *)((int)local_1020 + iVar11);
      iVar15 = iVar11 + 4;
      iVar12 = iVar11 + 8;
      iVar9 = iVar11 + 0xc;
      iVar11 = iVar11 + 0x40;
      iVar14 = *piVar2 >> 8;
      iVar15 = *(int *)((int)local_1020 + iVar15) >> 8;
      iVar12 = *(int *)((int)local_1020 + iVar12) >> 8;
      iVar9 = *(int *)((int)local_1020 + iVar9) >> 8;
      *(int *)((int)local_1020 + iVar8) =
           ((int)((-(uint)(iVar14 < 0) & _DAT_00519300) + iVar14) >> 1) * 0x100 + _DAT_00519310;
      *(int *)((int)local_1020 + iVar8 + 4) =
           ((int)((-(uint)(iVar15 < 0) & _UNK_00519304) + iVar15) >> 1) * 0x100 + _UNK_00519314;
      *(int *)((int)local_1020 + iVar8 + 8) =
           ((int)((-(uint)(iVar12 < 0) & _UNK_00519308) + iVar12) >> 1) * 0x100 + _UNK_00519318;
      *(int *)((int)local_1020 + iVar8 + 0xc) =
           ((int)((-(uint)(iVar9 < 0) & _UNK_0051930c) + iVar9) >> 1) * 0x100 + _UNK_0051931c;
      local_1020[iVar10 + 4] =
           ((int)((-(uint)((int)local_1020[iVar10 + 4] >> 8 < 0) & _DAT_00519300) +
                 ((int)local_1020[iVar10 + 4] >> 8)) >> 1) * 0x100 + _DAT_00519310;
      local_1020[iVar10 + 5] =
           ((int)((-(uint)((int)local_1020[iVar10 + 5] >> 8 < 0) & _UNK_00519304) +
                 ((int)local_1020[iVar10 + 5] >> 8)) >> 1) * 0x100 + _UNK_00519314;
      local_1020[iVar10 + 6] =
           ((int)((-(uint)((int)local_1020[iVar10 + 6] >> 8 < 0) & _UNK_00519308) +
                 ((int)local_1020[iVar10 + 6] >> 8)) >> 1) * 0x100 + _UNK_00519318;
      local_1020[iVar10 + 7] =
           ((int)((-(uint)((int)local_1020[iVar10 + 7] >> 8 < 0) & _UNK_0051930c) +
                 ((int)local_1020[iVar10 + 7] >> 8)) >> 1) * 0x100 + _UNK_0051931c;
      local_1020[iVar10 + 8] =
           ((int)((-(uint)((int)local_1020[iVar10 + 8] >> 8 < 0) & _DAT_00519300) +
                 ((int)local_1020[iVar10 + 8] >> 8)) >> 1) * 0x100 + _DAT_00519310;
      local_1020[iVar10 + 9] =
           ((int)((-(uint)((int)local_1020[iVar10 + 9] >> 8 < 0) & _UNK_00519304) +
                 ((int)local_1020[iVar10 + 9] >> 8)) >> 1) * 0x100 + _UNK_00519314;
      local_1020[iVar10 + 10] =
           ((int)((-(uint)((int)local_1020[iVar10 + 10] >> 8 < 0) & _UNK_00519308) +
                 ((int)local_1020[iVar10 + 10] >> 8)) >> 1) * 0x100 + _UNK_00519318;
      local_1020[iVar10 + 0xb] =
           ((int)((-(uint)((int)local_1020[iVar10 + 0xb] >> 8 < 0) & _UNK_0051930c) +
                 ((int)local_1020[iVar10 + 0xb] >> 8)) >> 1) * 0x100 + _UNK_0051931c;
      local_1020[iVar10 + 0xc] =
           ((int)((-(uint)((int)local_1020[iVar10 + 0xc] >> 8 < 0) & _DAT_00519300) +
                 ((int)local_1020[iVar10 + 0xc] >> 8)) >> 1) * 0x100 + _DAT_00519310;
      local_1020[iVar10 + 0xd] =
           ((int)((-(uint)((int)local_1020[iVar10 + 0xd] >> 8 < 0) & _UNK_00519304) +
                 ((int)local_1020[iVar10 + 0xd] >> 8)) >> 1) * 0x100 + _UNK_00519314;
      local_1020[iVar10 + 0xe] =
           ((int)((-(uint)((int)local_1020[iVar10 + 0xe] >> 8 < 0) & _UNK_00519308) +
                 ((int)local_1020[iVar10 + 0xe] >> 8)) >> 1) * 0x100 + _UNK_00519318;
      local_1020[iVar10 + 0xf] =
           ((int)((-(uint)((int)local_1020[iVar10 + 0xf] >> 8 < 0) & _UNK_0051930c) +
                 ((int)local_1020[iVar10 + 0xf] >> 8)) >> 1) * 0x100 + _UNK_0051931c;
      iVar10 = iVar10 + 0x10;
      iVar8 = iVar8 + 0x40;
    } while (iVar10 <= (int)(param_3 & 0xfffffff0));
    for (; iVar10 <= (int)param_3; iVar10 = iVar10 + 1) {
LAB_00503010:
      local_1020[iVar10] = (((int)local_1020[iVar10] >> 8) / 2 + 1) * 0x100;
    }
    local_1448 = param_3;
    local_1430[0] = 0;
    local_1020[0] = 0;
    local_810[0] = 0xfffffffe;
  } while( true );
}


