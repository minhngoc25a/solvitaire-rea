// Function: FUN_0049c400
// Entry: 0049c400
// Size: 362 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049c400(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  short *psVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar8 = &local_c;
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xff;
  puVar9 = (undefined4 *)(param_1 + 0xf0);
  do {
    puVar3 = (undefined4 *)*puVar9;
    bVar1 = *(byte *)(param_1 + 0x48 + uVar11);
    *puVar9 = 0;
    while (puVar5 = puVar3, puVar5 != (undefined4 *)0x0) {
      puVar5[1] = puVar8;
      puVar8[2] = puVar5;
      puVar3 = (undefined4 *)*puVar5;
      *(undefined2 *)puVar5 = 0;
      *(ushort *)((int)puVar5 + 2) = (ushort)bVar1;
      puVar8 = puVar5;
    }
    uVar11 = uVar11 + 1;
    puVar9 = puVar9 + 1;
  } while (uVar11 < 0x26);
  local_8 = puVar8;
  local_c._0_2_ = 1;
  puVar8[2] = &local_c;
  if (*(undefined2 **)(param_1 + 0x34) != *(undefined2 **)(param_1 + 0x38)) {
    **(undefined2 **)(param_1 + 0x34) = 1;
  }
  if (puVar8 != &local_c) {
    do {
      psVar4 = (short *)(puVar8 + (uint)*(ushort *)((int)puVar8 + 2) * 3);
      sVar2 = *psVar4;
      for (uVar11 = (uint)*(ushort *)((int)puVar8 + 2) + (uint)(ushort)psVar4[1];
          (sVar2 == 0 && (uVar11 < 0x10000)); uVar11 = uVar11 + (ushort)psVar4[1]) {
        *(undefined4 *)(*(int *)(psVar4 + 4) + 4) = *(undefined4 *)(psVar4 + 2);
        *(undefined4 *)(*(int *)(psVar4 + 2) + 8) = *(undefined4 *)(psVar4 + 4);
        psVar4 = (short *)(puVar8 + uVar11 * 3);
        *(short *)((int)puVar8 + 2) = (short)uVar11;
        sVar2 = *psVar4;
      }
      puVar8 = (undefined4 *)puVar8[1];
    } while (puVar8 != &local_c);
  }
  puVar9 = local_8;
  if (local_8 != &local_c) {
    do {
      uVar11 = (uint)*(ushort *)((int)puVar9 + 2);
      puVar8 = (undefined4 *)puVar9[1];
      if (0x80 < uVar11) {
        iVar7 = (uVar11 - 0x81 >> 7) + 1;
        do {
          uVar11 = uVar11 - 0x80;
          *puVar9 = *(undefined4 *)(param_1 + 0x184);
          *(undefined4 **)(param_1 + 0x184) = puVar9;
          puVar9 = puVar9 + 0x180;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar10 = (uint)*(byte *)(uVar11 + 0x6d + param_1);
      if (*(byte *)(uVar10 + 0x48 + param_1) != uVar11) {
        uVar6 = (uint)*(byte *)(uVar10 + 0x47 + param_1);
        uVar10 = uVar10 - 1;
        iVar7 = uVar11 - uVar6;
        puVar9[uVar6 * 3] = *(undefined4 *)(param_1 + 0xec + iVar7 * 4);
        *(undefined4 **)(param_1 + 0xec + iVar7 * 4) = puVar9 + uVar6 * 3;
      }
      *puVar9 = *(undefined4 *)(param_1 + 0xf0 + uVar10 * 4);
      *(undefined4 **)(param_1 + 0xf0 + uVar10 * 4) = puVar9;
      puVar9 = puVar8;
    } while (puVar8 != &local_c);
  }
  return;
}


