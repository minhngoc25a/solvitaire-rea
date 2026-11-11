// Function: FUN_004eb660
// Entry: 004eb660
// Size: 553 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004eb660(ushort *param_1,uint param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  puVar9 = param_1;
  param_1[0] = 0x400;
  uVar8 = _UNK_00521e3c;
  uVar7 = _UNK_00521e38;
  uVar6 = _UNK_00521e34;
  uVar5 = _DAT_00521e30;
  param_1[1] = 0x400;
  if (param_2 != 0) {
    puVar10 = param_1 + 0x82;
    uVar13 = param_2;
    do {
      *(undefined4 *)(puVar10 + -0x80) = uVar5;
      *(undefined4 *)(puVar10 + -0x7e) = uVar6;
      *(undefined4 *)(puVar10 + -0x7c) = uVar7;
      *(undefined4 *)(puVar10 + -0x7a) = uVar8;
      *(undefined4 *)puVar10 = uVar5;
      *(undefined4 *)(puVar10 + 2) = uVar6;
      *(undefined4 *)(puVar10 + 4) = uVar7;
      *(undefined4 *)(puVar10 + 6) = uVar8;
      uVar13 = uVar13 - 1;
      puVar10 = puVar10 + 8;
    } while (uVar13 != 0);
  }
  puVar10 = param_1 + 0x102;
  for (iVar14 = 0x80; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar10[0] = 0x400;
    puVar10[1] = 0x400;
    puVar10 = puVar10 + 2;
  }
  if ((param_3 != '\0') || (_param_3 = 0, param_2 == 0)) {
    return;
  }
  puVar11 = (uint *)(param_1 + 0x2404);
  param_1 = param_1 + 0x202;
LAB_004eb6e6:
  uVar13 = *(uint *)(puVar9 + 0x2402);
  uVar16 = 0;
  *puVar11 = uVar13;
  bVar1 = (&DAT_00522710)[*puVar9 >> 4];
  bVar2 = (&DAT_00522710)[(*puVar9 ^ 0x7f0) >> 4];
  bVar3 = (&DAT_00522710)[puVar9[1] >> 4];
  bVar4 = (&DAT_00522710)[(puVar9[1] ^ 0x7f0) >> 4];
  if (uVar13 != 0) {
    do {
      if (7 < uVar16) {
        if (uVar16 < uVar13) goto LAB_004eb7b8;
        break;
      }
      iVar14 = 0;
      uVar12 = uVar16 + 8;
      do {
        uVar15 = uVar12 >> 1;
        iVar14 = iVar14 + (uint)(byte)(&DAT_00522710)
                                      [(uint)(puVar9[uVar15 + _param_3 * 8 + 2] >> 4) ^
                                       -(uVar12 & 1) >> 4 & 0x7f];
        uVar12 = uVar15;
      } while (uVar15 != 1);
      *(uint *)(param_1 + uVar16 * 2) = (uint)bVar1 + iVar14;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar13);
  }
  goto LAB_004eb85f;
  while( true ) {
    iVar14 = 0;
    uVar12 = uVar16;
    do {
      uVar15 = uVar12 >> 1;
      iVar14 = iVar14 + (uint)(byte)(&DAT_00522710)
                                    [(uint)(puVar9[uVar15 + _param_3 * 8 + 0x82] >> 4) ^
                                     -(uVar12 & 1) >> 4 & 0x7f];
      uVar12 = uVar15;
    } while (uVar15 != 1);
    *(uint *)(param_1 + uVar16 * 2) = (uint)bVar3 + (uint)bVar2 + iVar14;
    uVar16 = uVar16 + 1;
    if (uVar13 <= uVar16) break;
LAB_004eb7b8:
    if (0xf < uVar16) goto LAB_004eb813;
  }
LAB_004eb85f:
  _param_3 = _param_3 + 1;
  param_1 = param_1 + 0x220;
  puVar11 = puVar11 + 1;
  if (param_2 <= _param_3) {
    return;
  }
  goto LAB_004eb6e6;
LAB_004eb813:
  do {
    iVar14 = 0;
    uVar12 = uVar16 + 0xf0;
    do {
      uVar15 = uVar12 >> 1;
      iVar14 = iVar14 + (uint)(byte)(&DAT_00522710)
                                    [(uint)(puVar9[uVar15 + 0x102] >> 4) ^ -(uVar12 & 1) >> 4 & 0x7f
                                    ];
      uVar12 = uVar15;
    } while (uVar15 != 1);
    *(uint *)(param_1 + uVar16 * 2) = (uint)bVar4 + (uint)bVar2 + iVar14;
    uVar16 = uVar16 + 1;
  } while (uVar16 < uVar13);
  goto LAB_004eb85f;
}


