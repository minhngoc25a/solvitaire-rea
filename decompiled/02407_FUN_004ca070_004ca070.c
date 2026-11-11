// Function: FUN_004ca070
// Entry: 004ca070
// Size: 492 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ca070(int param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int local_110;
  char local_100 [256];
  
  iVar13 = 0x40;
  iVar16 = *(int *)(param_1 + 0x20);
  puVar9 = (undefined1 *)(param_1 + 0x158);
  iVar4 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x54) = 0;
  do {
    if (puVar9[-0x100] != '\0') {
      *puVar9 = *(undefined1 *)(param_1 + 0x54);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    if (puVar9[-0xff] != '\0') {
      puVar9[1] = *(undefined1 *)(param_1 + 0x54);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    if (puVar9[-0xfe] != '\0') {
      puVar9[2] = *(undefined1 *)(param_1 + 0x54);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    if (puVar9[-0xfd] != '\0') {
      puVar9[3] = *(undefined1 *)(param_1 + 0x54);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    puVar9 = puVar9 + 4;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  iVar13 = *(int *)(param_1 + 0x54) + 1;
  if (-1 < iVar13) {
    puVar17 = (undefined4 *)(param_1 + 0x278);
    for (iVar10 = *(int *)(param_1 + 0x54) + 2; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar17 = 0;
      puVar17 = puVar17 + 1;
    }
  }
  iVar10 = *(int *)(param_1 + 0x54);
  iVar18 = 0;
  iVar11 = 0;
  iVar8 = 0;
  if (0 < iVar10) {
    do {
      local_100[iVar8] = (char)iVar8;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar10);
  }
  iVar10 = *(int *)(param_1 + 0x44);
  local_110 = 0;
  if (0 < iVar10) {
    do {
      cVar3 = local_100[1];
      iVar6 = *(int *)(iVar16 + local_110 * 4);
      iVar8 = iVar6 + -1;
      if (iVar8 < 0) {
        iVar8 = iVar6 + -1 + iVar10;
      }
      cVar2 = *(char *)(*(byte *)(iVar8 + iVar5) + 0x158 + param_1);
      if (local_100[0] == cVar2) {
        iVar11 = iVar11 + 1;
      }
      else {
        if (0 < iVar11) {
          uVar12 = iVar11 - 1;
          while( true ) {
            if ((uVar12 & 1) == 0) {
              *(undefined2 *)(iVar4 + iVar18 * 2) = 0;
              *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
            }
            else {
              *(undefined2 *)(iVar4 + iVar18 * 2) = 1;
              *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
            }
            iVar18 = iVar18 + 1;
            if ((int)uVar12 < 2) break;
            uVar12 = (int)(uVar12 - 2) / 2;
          }
          iVar11 = 0;
        }
        uVar15 = (uint)CONCAT11(cVar2,local_100[1]);
        pcVar14 = local_100 + 1;
        local_100[1] = local_100[0];
        uVar12 = uVar15;
        if (cVar2 != cVar3) {
          do {
            pcVar14 = pcVar14 + 1;
            cVar3 = *pcVar14;
            uVar15 = CONCAT31((int3)(uVar12 >> 8),cVar3);
            *pcVar14 = (char)uVar12;
            uVar7 = uVar12 >> 8;
            uVar12 = uVar15;
          } while ((char)uVar7 != cVar3);
        }
        local_100[0] = (char)uVar15;
        *(short *)(iVar4 + iVar18 * 2) = (short)((int)pcVar14 - (int)local_100) + 1;
        iVar18 = iVar18 + 1;
        piVar1 = (int *)(param_1 + 0x27c + ((int)pcVar14 - (int)local_100) * 4);
        *piVar1 = *piVar1 + 1;
      }
      iVar10 = *(int *)(param_1 + 0x44);
      local_110 = local_110 + 1;
    } while (local_110 < iVar10);
    if (0 < iVar11) {
      uVar12 = iVar11 - 1;
      iVar16 = iVar18 * 2;
      while( true ) {
        if ((uVar12 & 1) == 0) {
          *(undefined2 *)(iVar16 + iVar4) = 0;
          *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
        }
        else {
          *(undefined2 *)(iVar16 + iVar4) = 1;
          *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
        }
        iVar18 = iVar18 + 1;
        if ((int)uVar12 < 2) break;
        uVar12 = (int)(uVar12 - 2) / 2;
        iVar16 = iVar16 + 2;
      }
    }
  }
  *(short *)(iVar4 + iVar18 * 2) = (short)iVar13;
  piVar1 = (int *)(param_1 + 0x278 + iVar13 * 4);
  *piVar1 = *piVar1 + 1;
  *(int *)(param_1 + 0x274) = iVar18 + 1;
  return;
}


