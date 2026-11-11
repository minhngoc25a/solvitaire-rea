// Function: FUN_004a1830
// Entry: 004a1830
// Size: 493 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a1830(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  
  puVar6 = (undefined2 *)(param_1 + 0x1c50);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x78);
  puVar1 = (undefined2 *)(param_1 + 0x1e18);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x1c18) = 0x4000400;
  *(undefined4 *)(param_1 + 0x1c1c) = 0x4000400;
  *(undefined4 *)(param_1 + 0x1c20) = 0x4000400;
  *(undefined4 *)(param_1 + 0x1c24) = 0x4000400;
  *(undefined4 *)(param_1 + 0x1c28) = 0x4000400;
  *(undefined4 *)(param_1 + 0x1c2c) = 0x4000400;
  *(undefined4 *)(param_1 + 0x1c30) = 0x4000400;
  *(undefined4 *)(param_1 + 0x1c34) = 0x4000400;
  iVar7 = 0xc;
  do {
    iVar4 = 0x10;
    do {
      puVar1[-0xc0] = 0x400;
      *puVar1 = 0x400;
      puVar1 = puVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar6[-0xc] = 0x400;
    *puVar6 = 0x400;
    puVar6[0xc] = 0x400;
    puVar6[0x18] = 0x400;
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x1f98);
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = 0x4000400;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x2198);
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = 0x4000400;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 0x300 << ((char)*(undefined4 *)(param_1 + 0x98) + (char)*(undefined4 *)(param_1 + 0x94) &
                   0x1fU);
  if (uVar2 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x50);
    for (uVar5 = uVar2 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0x4000400;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined2 *)puVar3 = 0x400;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    }
  }
  puVar3 = (undefined4 *)(param_1 + 0x2298);
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = 0x4000400;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x2498);
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = 0x4000400;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x2698);
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = 0x4000400;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x2898);
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = 0x4000400;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar3 = (undefined4 *)(param_1 + 0xbaa0);
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar7 = 0x800;
  do {
    *puVar3 = 0x40000000;
    puVar3 = puVar3 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(int *)(param_1 + 0x4c) = (1 << ((byte)*(undefined4 *)(param_1 + 0x9c) & 0x1f)) + -1;
  *(uint *)(param_1 + 0x48) =
       (0x100 << ((byte)*(undefined4 *)(param_1 + 0x98) & 0x1f)) -
       (0x100U >> ((byte)*(undefined4 *)(param_1 + 0x94) & 0x1f));
  return;
}


