// Function: FUN_004d1320
// Entry: 004d1320
// Size: 628 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d1320(int param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  short *psVar15;
  int iVar16;
  int iVar17;
  int local_28;
  ushort auStack_20 [16];
  
  iVar4 = param_1;
  iVar12 = -1;
  iVar8 = 0;
  iVar3 = *param_2;
  iVar9 = ((int *)param_2[2])[3];
  iVar17 = *(int *)param_2[2];
  local_28 = -1;
  *(undefined4 *)(param_1 + 0x1450) = 0;
  *(undefined4 *)(param_1 + 0x1454) = 0x23d;
  if (0 < iVar9) {
    do {
      if (*(short *)(iVar3 + iVar8 * 4) == 0) {
        *(undefined2 *)(iVar3 + 2 + iVar8 * 4) = 0;
      }
      else {
        *(int *)(param_1 + 0x1450) = *(int *)(param_1 + 0x1450) + 1;
        *(int *)(param_1 + 0xb5c + *(int *)(param_1 + 0x1450) * 4) = iVar8;
        *(undefined1 *)(iVar8 + 0x1458 + param_1) = 0;
        iVar12 = iVar8;
      }
      iVar8 = iVar8 + 1;
      local_28 = iVar12;
    } while (iVar8 < iVar9);
  }
  iVar12 = *(int *)(param_1 + 0x1450);
  while (iVar12 < 2) {
    iVar16 = local_28 + 1;
    iVar8 = local_28 + 1;
    if (1 < local_28) {
      iVar16 = local_28;
      iVar8 = 0;
    }
    *(int *)(param_1 + 0x1450) = iVar12 + 1;
    *(int *)(param_1 + 0xb5c + (iVar12 + 1) * 4) = iVar8;
    *(undefined2 *)(iVar3 + iVar8 * 4) = 1;
    *(undefined1 *)(iVar8 + 0x1458 + param_1) = 0;
    *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + -1;
    if (iVar17 != 0) {
      *(int *)(param_1 + 0x16ac) =
           *(int *)(param_1 + 0x16ac) - (uint)*(ushort *)(iVar17 + 2 + iVar8 * 4);
    }
    local_28 = iVar16;
    iVar12 = *(int *)(param_1 + 0x1450);
  }
  param_2[1] = local_28;
  for (iVar17 = *(int *)(param_1 + 0x1450) / 2; 0 < iVar17; iVar17 = iVar17 + -1) {
    FUN_004d1030(param_1,iVar3,iVar17);
  }
  iVar17 = *(int *)(param_1 + 0x1450);
  param_1 = iVar9;
  do {
    iVar9 = *(int *)(iVar4 + 0xb60);
    *(undefined4 *)(iVar4 + 0xb60) = *(undefined4 *)(iVar4 + 0xb5c + iVar17 * 4);
    *(int *)(iVar4 + 0x1450) = iVar17 + -1;
    FUN_004d1030(iVar4,iVar3,1);
    *(int *)(iVar4 + 0x1454) = *(int *)(iVar4 + 0x1454) + -1;
    iVar17 = *(int *)(iVar4 + 0xb60);
    psVar15 = (short *)(iVar3 + iVar17 * 4);
    *(int *)(iVar4 + 0xb5c + *(int *)(iVar4 + 0x1454) * 4) = iVar9;
    *(int *)(iVar4 + 0x1454) = *(int *)(iVar4 + 0x1454) + -1;
    *(int *)(iVar4 + 0xb5c + *(int *)(iVar4 + 0x1454) * 4) = iVar17;
    *(short *)(iVar3 + param_1 * 4) = *psVar15 + *(short *)(iVar3 + iVar9 * 4);
    bVar1 = *(byte *)(iVar17 + 0x1458 + iVar4);
    bVar14 = *(byte *)(iVar9 + 0x1458 + iVar4);
    if (bVar14 < bVar1) {
      bVar14 = bVar1;
    }
    *(byte *)(param_1 + 0x1458 + iVar4) = bVar14 + 1;
    psVar15[1] = (short)param_1;
    *(short *)(iVar3 + 2 + iVar9 * 4) = (short)param_1;
    *(int *)(iVar4 + 0xb60) = param_1;
    param_1 = param_1 + 1;
    FUN_004d1030(iVar4,iVar3,1);
    iVar17 = *(int *)(iVar4 + 0x1450);
  } while (1 < iVar17);
  *(int *)(iVar4 + 0x1454) = *(int *)(iVar4 + 0x1454) + -1;
  *(undefined4 *)(iVar4 + 0xb5c + *(int *)(iVar4 + 0x1454) * 4) = *(undefined4 *)(iVar4 + 0xb60);
  FUN_004d1100(iVar4,param_2);
  uVar11 = 0;
  psVar15 = (short *)(iVar4 + 0xb3c);
  iVar9 = 1;
  do {
    sVar2 = *psVar15;
    psVar15 = psVar15 + 1;
    uVar11 = (uVar11 + sVar2) * 2;
    auStack_20[iVar9] = uVar11;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  iVar9 = 0;
  if (-1 < local_28) {
    do {
      uVar13 = (uint)*(ushort *)(iVar3 + 2 + iVar9 * 4);
      if (uVar13 != 0) {
        uVar6 = (uint)auStack_20[uVar13];
        auStack_20[uVar13] = auStack_20[uVar13] + 1;
        uVar5 = 0;
        do {
          uVar7 = uVar5;
          uVar13 = uVar13 - 1;
          uVar10 = uVar6 & 1;
          uVar6 = uVar6 >> 1;
          uVar5 = (uVar7 | uVar10) * 2;
        } while (0 < (int)uVar13);
        *(ushort *)(iVar3 + iVar9 * 4) = (ushort)uVar7 | (ushort)uVar10;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= local_28);
  }
  return;
}


