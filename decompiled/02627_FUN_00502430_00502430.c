// Function: FUN_00502430
// Entry: 00502430
// Size: 1777 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00502430(int param_1,byte *param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
            int *param_7)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined2 *puVar17;
  int iVar18;
  uint *puVar19;
  int *piVar20;
  uint *puVar21;
  uint local_d34;
  char local_d10 [4];
  int aiStack_d0c [575];
  int aiStack_410 [259];
  
  iVar6 = 0x10000;
  do {
    *(undefined4 *)(param_4 + iVar6 * 4) = 0;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  iVar6 = param_5 - 1;
  uVar12 = (uint)*param_2 << 8;
  iVar18 = iVar6;
  if (2 < iVar6) {
    uVar7 = param_5 >> 2;
    iVar18 = iVar6 + uVar7 * -4;
    pbVar9 = param_2 + (param_5 - 3);
    puVar17 = (undefined2 *)(param_3 + -4 + iVar6 * 2);
    do {
      puVar17[2] = 0;
      uVar12 = (uint)pbVar9[2] << 8 | (int)uVar12 >> 8;
      piVar15 = (int *)(param_4 + uVar12 * 4);
      *piVar15 = *piVar15 + 1;
      puVar17[1] = 0;
      uVar12 = (uint)pbVar9[1] << 8 | (int)uVar12 >> 8;
      piVar15 = (int *)(param_4 + uVar12 * 4);
      *piVar15 = *piVar15 + 1;
      *puVar17 = 0;
      uVar12 = (uint)*pbVar9 << 8 | (int)uVar12 >> 8;
      piVar15 = (int *)(param_4 + uVar12 * 4);
      *piVar15 = *piVar15 + 1;
      puVar17[-1] = 0;
      uVar12 = (uint)pbVar9[-1] << 8 | (int)uVar12 >> 8;
      piVar15 = (int *)(param_4 + uVar12 * 4);
      *piVar15 = *piVar15 + 1;
      uVar7 = uVar7 - 1;
      pbVar9 = pbVar9 + -4;
      puVar17 = puVar17 + -4;
    } while (uVar7 != 0);
  }
  for (; -1 < iVar18; iVar18 = iVar18 + -1) {
    *(undefined2 *)(param_3 + iVar18 * 2) = 0;
    uVar12 = (int)uVar12 >> 8 | (uint)param_2[iVar18] << 8;
    piVar15 = (int *)(param_4 + uVar12 * 4);
    *piVar15 = *piVar15 + 1;
  }
  iVar18 = 0x22;
  pbVar9 = param_2;
  puVar17 = (undefined2 *)(param_3 + param_5 * 2);
  do {
    pbVar9[param_5] = *pbVar9;
    pbVar9 = pbVar9 + 1;
    *puVar17 = 0;
    iVar18 = iVar18 + -1;
    puVar17 = puVar17 + 1;
  } while (iVar18 != 0);
  iVar18 = 0x4000;
  piVar15 = (int *)(param_4 + 8);
  do {
    piVar15[-1] = piVar15[-1] + piVar15[-2];
    iVar8 = piVar15[1] + *piVar15 + piVar15[-1];
    *piVar15 = *piVar15 + piVar15[-1];
    piVar15[2] = piVar15[2] + iVar8;
    piVar15[1] = iVar8;
    iVar18 = iVar18 + -1;
    piVar15 = piVar15 + 4;
  } while (iVar18 != 0);
  local_d34 = (uint)*param_2 << 8;
  iVar18 = iVar6;
  if (2 < iVar6) {
    pbVar9 = param_2 + (param_5 - 3);
    do {
      bVar11 = pbVar9[2];
      uVar12 = (uint)bVar11 << 8 | local_d34 >> 8;
      iVar8 = *(int *)(param_4 + uVar12 * 4) + -1;
      *(int *)(param_4 + uVar12 * 4) = iVar8;
      *(int *)(param_1 + iVar8 * 4) = iVar18;
      bVar3 = pbVar9[1];
      uVar12 = (uint)CONCAT11(bVar3,bVar11);
      iVar8 = *(int *)(param_4 + uVar12 * 4) + -1;
      *(int *)(param_4 + uVar12 * 4) = iVar8;
      *(byte **)(param_1 + iVar8 * 4) = pbVar9 + (1 - (int)param_2);
      bVar11 = *pbVar9;
      uVar12 = (uint)CONCAT11(bVar11,bVar3);
      iVar14 = *(int *)(param_4 + uVar12 * 4) + -1;
      *(int *)(param_4 + uVar12 * 4) = iVar14;
      iVar8 = iVar18 + -2;
      iVar18 = iVar18 + -4;
      *(int *)(param_1 + iVar14 * 4) = iVar8;
      local_d34 = (uint)CONCAT11(pbVar9[-1],bVar11);
      iVar8 = *(int *)(param_4 + local_d34 * 4) + -1;
      *(int *)(param_4 + local_d34 * 4) = iVar8;
      *(byte **)(param_1 + iVar8 * 4) = pbVar9 + ~(uint)param_2;
      pbVar9 = pbVar9 + -4;
    } while (2 < iVar18);
  }
  for (; -1 < iVar18; iVar18 = iVar18 + -1) {
    local_d34 = (uint)(ushort)((ushort)param_2[iVar18] << 8 | (ushort)(local_d34 >> 8));
    iVar8 = *(int *)(param_4 + local_d34 * 4) + -1;
    *(int *)(param_4 + local_d34 * 4) = iVar8;
    *(int *)(param_1 + iVar8 * 4) = iVar18;
  }
  iVar14 = 0;
  iVar18 = 0;
  iVar8 = 0;
  do {
    iVar1 = iVar14 + 4;
    pcVar2 = local_d10 + iVar14;
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    *(int *)((int)aiStack_d0c + iVar8 + 0xfc) = iVar14 + _DAT_0050c3a0;
    *(int *)((int)aiStack_d0c + iVar8 + 0x100) = iVar14 + _UNK_0050c3a4;
    *(int *)((int)aiStack_d0c + iVar8 + 0x104) = iVar14 + _UNK_0050c3a8;
    *(int *)((int)aiStack_d0c + iVar8 + 0x108) = iVar14 + _UNK_0050c3ac;
    *(undefined4 *)((int)aiStack_d0c + iVar14) = 0;
    iVar13 = iVar14 + 8;
    *(undefined4 *)((int)aiStack_d0c + iVar14 + 4) = 0;
    *(int *)((int)aiStack_d0c + iVar18 + 0x10c) = iVar1 + _DAT_0050c3a0;
    *(int *)((int)aiStack_d0c + iVar18 + 0x110) = iVar1 + _UNK_0050c3a4;
    *(int *)((int)aiStack_d0c + iVar18 + 0x114) = iVar1 + _UNK_0050c3a8;
    *(int *)((int)aiStack_d0c + iVar18 + 0x118) = iVar1 + _UNK_0050c3ac;
    *(undefined4 *)((int)aiStack_d0c + iVar14 + 8) = 0;
    aiStack_d0c[iVar14 + 0x47] = iVar13 + _DAT_0050c3a0;
    aiStack_d0c[iVar14 + 0x48] = iVar13 + _UNK_0050c3a4;
    aiStack_d0c[iVar14 + 0x49] = iVar13 + _UNK_0050c3a8;
    aiStack_d0c[iVar14 + 0x4a] = iVar13 + _UNK_0050c3ac;
    iVar1 = iVar14 + 0xc;
    aiStack_d0c[iVar14 + 0x4b] = iVar1 + _DAT_0050c3a0;
    aiStack_d0c[iVar14 + 0x4c] = iVar1 + _UNK_0050c3a4;
    aiStack_d0c[iVar14 + 0x4d] = iVar1 + _UNK_0050c3a8;
    aiStack_d0c[iVar14 + 0x4e] = iVar1 + _UNK_0050c3ac;
    iVar14 = iVar14 + 0x10;
    iVar18 = iVar18 + 0x40;
    iVar8 = iVar8 + 0x40;
  } while (iVar14 < 0x100);
  iVar18 = 1;
  do {
    iVar18 = iVar18 * 3 + 1;
  } while (iVar18 < 0x101);
  do {
    iVar18 = iVar18 / 3;
    if (iVar18 < 0x100) {
      piVar15 = aiStack_d0c + 0x3f;
      iVar8 = iVar18;
      do {
        iVar14 = aiStack_d0c[iVar8 + 0x3f];
        iVar13 = iVar14 * 0x400;
        iVar1 = *(int *)(iVar13 + 0x400 + param_4);
        iVar13 = *(int *)(iVar13 + param_4);
        iVar4 = *piVar15;
        uVar12 = *(int *)(iVar4 * 0x400 + 0x400 + param_4) - *(int *)(iVar4 * 0x400 + param_4);
        iVar10 = iVar8;
        piVar20 = piVar15;
        while ((uint)(iVar1 - iVar13) < uVar12) {
          aiStack_d0c[iVar10 + 0x3f] = iVar4;
          piVar20 = piVar20 + -iVar18;
          iVar10 = iVar10 - iVar18;
          if (iVar10 <= iVar18 + -1) break;
          iVar4 = *piVar20;
          piVar16 = (int *)(param_4 + iVar4 * 0x400);
          uVar12 = piVar16[0x100] - *piVar16;
        }
        aiStack_d0c[iVar10 + 0x3f] = iVar14;
        piVar15 = piVar15 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x100);
    }
    if (iVar18 == 1) {
      local_d34 = 0;
      do {
        iVar18 = aiStack_d0c[local_d34 + 0x3f];
        iVar8 = 0;
        do {
          if (iVar8 != iVar18) {
            iVar14 = iVar18 * 0x100 + iVar8;
            uVar12 = *(uint *)(param_4 + iVar14 * 4);
            puVar19 = (uint *)(param_4 + iVar14 * 4);
            if ((uVar12 & 0x200000) == 0) {
              uVar12 = uVar12 & 0xffdfffff;
              iVar14 = (puVar19[1] & 0xffdfffff) - 1;
              if (((int)uVar12 < iVar14) &&
                 (FUN_00502010(param_1,(int)param_2,param_3,param_5,uVar12,iVar14,2,param_7),
                 *param_7 < 0)) {
                return;
              }
            }
            *puVar19 = *puVar19 | 0x200000;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x100);
        if (local_d10[iVar18] != '\0') {
          guard_check_icall();
        }
        iVar8 = 0;
        puVar19 = (uint *)(iVar18 * 4 + param_4);
        puVar21 = puVar19;
        do {
          *(uint *)((int)aiStack_d0c + iVar8 + 0x4fc) = *puVar21 & 0xffdfffff;
          *(uint *)((int)aiStack_410 + iVar8) = (puVar21[1] & 0xffdfffff) - 1;
          iVar8 = iVar8 + 4;
          puVar21 = puVar21 + 0x100;
        } while (iVar8 < 0x3fd);
        puVar21 = (uint *)(iVar18 * 0x400 + param_4);
        uVar12 = *puVar21 & 0xffdfffff;
        if ((int)uVar12 < aiStack_d0c[iVar18 + 0x13f]) {
          do {
            iVar14 = *(int *)(param_1 + uVar12 * 4);
            iVar8 = iVar14 + -1;
            if (iVar8 < 0) {
              iVar8 = (param_5 - 1) + iVar14;
            }
            uVar7 = (uint)param_2[iVar8];
            if (local_d10[uVar7] == '\0') {
              iVar14 = aiStack_d0c[uVar7 + 0x13f];
              *(int *)(param_1 + iVar14 * 4) = iVar8;
              aiStack_d0c[uVar7 + 0x13f] = iVar14 + 1;
            }
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < aiStack_d0c[iVar18 + 0x13f]);
        }
        iVar8 = aiStack_410[iVar18];
        iVar14 = (puVar21[0x100] & 0xffdfffff) - 1;
        if (iVar8 < iVar14) {
          do {
            iVar1 = *(int *)(param_1 + iVar14 * 4);
            iVar8 = iVar1 + -1;
            if (iVar8 < 0) {
              iVar8 = (param_5 - 1) + iVar1;
            }
            bVar11 = param_2[iVar8];
            if (local_d10[bVar11] == '\0') {
              iVar1 = aiStack_410[bVar11];
              *(int *)(param_1 + iVar1 * 4) = iVar8;
              aiStack_410[bVar11] = iVar1 + -1;
            }
            iVar14 = iVar14 + -1;
            iVar8 = aiStack_410[iVar18];
          } while (iVar8 < iVar14);
        }
        if ((aiStack_d0c[iVar18 + 0x13f] + -1 != iVar8) &&
           ((aiStack_d0c[iVar18 + 0x13f] != 0 || (iVar8 != iVar6)))) {
          guard_check_icall();
        }
        iVar8 = 0x100;
        do {
          *puVar19 = *puVar19 | 0x200000;
          puVar19 = puVar19 + 0x100;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        local_d10[iVar18] = '\x01';
        if ((int)local_d34 < 0xff) {
          bVar11 = 0;
          iVar18 = (puVar21[0x100] & 0xffdfffff) - (*puVar21 & 0xffdfffff);
          iVar8 = iVar18;
          while (0xfffe < iVar8) {
            bVar11 = bVar11 + 1;
            iVar8 = iVar18 >> (bVar11 & 0x1f);
          }
          iVar18 = iVar18 + -1;
          if (-1 < iVar18) {
            piVar15 = (int *)(param_1 + ((*puVar21 & 0xffdfffff) + iVar18) * 4);
            iVar8 = iVar18;
            do {
              iVar14 = *piVar15;
              uVar5 = (undefined2)(iVar8 >> (bVar11 & 0x1f));
              *(undefined2 *)(param_3 + iVar14 * 2) = uVar5;
              if (iVar14 < 0x22) {
                *(undefined2 *)(param_3 + (iVar14 + param_5) * 2) = uVar5;
              }
              piVar15 = piVar15 + -1;
              iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
          }
          if (0xffff < iVar18 >> (bVar11 & 0x1f)) {
            guard_check_icall();
          }
        }
        local_d34 = local_d34 + 1;
      } while ((int)local_d34 < 0x100);
      return;
    }
  } while( true );
}


