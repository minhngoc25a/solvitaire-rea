// Function: FUN_004a0910
// Entry: 004a0910
// Size: 821 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a0910(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_1614 [5084];
  uint local_220;
  ushort *local_21c;
  int local_218;
  int *local_214;
  uint local_210;
  undefined1 *local_208;
  int aiStack_200 [128];
  
  local_21c = (ushort *)0x2;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  do {
    bVar3 = *(byte *)(param_1 + 0x2a98 + (int)local_21c);
    iVar8 = 0;
    iVar15 = (bVar3 >> 1) - 1;
    bVar7 = (byte)iVar15;
    iVar10 = (bVar3 & 1 | 2) << (bVar7 & 0x1f);
    iVar11 = iVar10 + (int)local_21c;
    iVar5 = param_1 + iVar10 * 4 + 0x2198;
    iVar10 = 1;
    if (iVar15 != 0) {
      iVar8 = 0;
      puVar9 = local_21c;
      do {
        uVar13 = (uint)puVar9 & 1;
        puVar9 = (ushort *)((uint)puVar9 >> 1);
        iVar8 = iVar8 + *(int *)(param_1 + 0x548 +
                                ((uint)(*(ushort *)(iVar10 * 2 + iVar5) >> 4) ^ -uVar13 >> 4 & 0x7f)
                                * 4);
        iVar10 = iVar10 * 2 + uVar13;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_21c = (ushort *)((int)local_21c + 1);
    uVar4 = *(ushort *)(iVar5 + iVar10 * 2);
    iVar10 = *(int *)(param_1 + 0x548 + ((uVar4 ^ 0x7f0) >> 4) * 4);
    aiStack_200[iVar11] = *(int *)(param_1 + 0x548 + (uint)(uVar4 >> 4) * 4) + iVar8;
    aiStack_200[(1 << (bVar7 & 0x1f)) + iVar11] = iVar10 + iVar8;
  } while (local_21c < 0x40);
  local_218 = 4;
  iVar10 = param_1 + 0x1f98;
  piVar12 = (int *)(param_1 + 0x1018);
  piVar14 = (int *)(param_1 + 0x1420);
  local_208 = auStack_1614 + -param_1;
  do {
    uVar13 = *(int *)(param_1 + 200) + 1U >> 1;
    if (uVar13 != 0) {
      local_21c = (ushort *)(iVar10 + 0x40);
      local_220 = 0x20;
      local_214 = piVar12;
      local_210 = uVar13;
      do {
        uVar16 = local_220 >> 4;
        uVar4 = *local_21c;
        iVar5 = *(int *)(param_1 + 0x548 +
                        ((uint)(*(ushort *)(iVar10 + (local_220 >> 1) * 2) >> 4) ^
                        -(local_220 & 1) >> 4 & 0x7f) * 4) +
                *(int *)(param_1 + 0x548 +
                        ((uint)(*(ushort *)(iVar10 + (local_220 >> 2) * 2) >> 4) ^
                        -(local_220 >> 1 & 1) >> 4 & 0x7f) * 4) +
                *(int *)(param_1 + 0x548 +
                        ((uint)(*(ushort *)(iVar10 + (local_220 >> 3) * 2) >> 4) ^
                        -(local_220 >> 2 & 1) >> 4 & 0x7f) * 4) +
                *(int *)(param_1 + 0x548 +
                        ((uint)(*(ushort *)(iVar10 + (uVar16 & 0xfffffffe)) >> 4) ^
                        -(uVar16 & 1) >> 4 & 0x7f) * 4) +
                *(int *)(param_1 + 0x548 +
                        ((uint)(*(ushort *)(iVar10 + uVar16 * 2) >> 4) ^
                        -(local_220 >> 3 & 1) >> 4 & 0x7f) * 4);
        local_21c = local_21c + 1;
        *local_214 = *(int *)(param_1 + 0x548 + (uint)(uVar4 >> 4) * 4) + iVar5;
        local_214[1] = *(int *)(param_1 + 0x548 + ((uVar4 ^ 0x7f0) >> 4) * 4) + iVar5;
        local_214 = local_214 + 2;
        local_220 = local_220 + 1;
        local_210 = local_210 - 1;
      } while (local_210 != 0);
    }
    uVar16 = 7;
    iVar5 = 0x20;
    if (7 < uVar13) {
      do {
        piVar12[uVar16 * 2] = piVar12[uVar16 * 2] + iVar5;
        piVar12[uVar16 * 2 + 1] = piVar12[uVar16 * 2 + 1] + iVar5;
        uVar16 = uVar16 + 1;
        iVar5 = iVar5 + 0x10;
      } while (uVar16 < uVar13);
    }
    piVar14[-2] = *piVar12;
    piVar14[-1] = piVar12[1];
    *piVar14 = piVar12[2];
    piVar14[1] = piVar12[3];
    uVar13 = 4;
    piVar6 = piVar14 + 2;
    do {
      pbVar2 = (byte *)(param_1 + 0x2a98 + uVar13);
      piVar1 = piVar6 + 2;
      uVar13 = uVar13 + 2;
      iVar5 = piVar12[*pbVar2];
      *piVar6 = *(int *)(local_208 + -0xc + (int)piVar1) + iVar5;
      piVar6[1] = *(int *)(local_208 + -8 + (int)piVar1) + iVar5;
      piVar6 = piVar1;
    } while (uVar13 < 0x80);
    piVar12 = piVar12 + 0x40;
    iVar10 = iVar10 + 0x80;
    piVar14 = piVar14 + 0x80;
    local_208 = local_208 + -0x200;
    local_218 = local_218 + -1;
  } while (local_218 != 0);
  return;
}


