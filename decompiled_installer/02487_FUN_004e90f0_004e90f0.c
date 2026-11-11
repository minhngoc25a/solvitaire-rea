// Function: FUN_004e90f0
// Entry: 004e90f0
// Size: 496 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004e90f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  param_1[0x1ba3] = (1 << ((byte)*(undefined4 *)(param_2 + 0x14) & 0x1f)) + -1;
  iVar5 = 1 << ((char)*(undefined4 *)(param_2 + 0xc) + (char)*(undefined4 *)(param_2 + 0x10) & 0x1fU
               );
  if (iVar5 != 0) {
    puVar7 = param_1;
    for (uVar8 = (uint)(iVar5 * 0x600) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = 0x4000400;
      puVar7 = puVar7 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined2 *)puVar7 = 0x400;
      puVar7 = (undefined4 *)((int)puVar7 + 2);
    }
  }
  puVar7 = param_1 + 0x1878;
  param_1[0x1ba4] = *(undefined4 *)(param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  param_1[0x1b9e] = 0;
  param_1[0x1ba5] = (1 << ((byte)uVar1 & 0x1f)) + -1;
  param_1[0x1b9f] = 0;
  param_1[0x1ba0] = 0;
  param_1[0x1ba1] = 0;
  param_1[0x1ba2] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  iVar5 = 0xc;
  param_1[0x1b9b] = 0xffffffff;
  param_1[0x1ba3] = (1 << ((byte)uVar1 & 0x1f)) + -1;
  puVar9 = param_1 + 0x1866;
  param_1[0x1b9c] = 0;
  param_1[0x1b9d] = 5;
  do {
    uVar8 = 0;
    puVar6 = puVar7;
    do {
      *(undefined2 *)(puVar6 + -0x78) = 0x400;
      *(undefined2 *)puVar6 = 0x400;
      uVar8 = uVar8 + 1;
      puVar6 = (undefined4 *)((int)puVar6 + 2);
    } while (uVar8 <= (uint)param_1[0x1ba3]);
    *(undefined2 *)(puVar9 + -6) = 0x400;
    puVar7 = puVar7 + 8;
    *(undefined2 *)puVar9 = 0x400;
    *(undefined2 *)(puVar9 + 6) = 0x400;
    *(undefined2 *)(puVar9 + 0xc) = 0x400;
    uVar4 = _UNK_00521e3c;
    uVar3 = _UNK_00521e38;
    uVar2 = _UNK_00521e34;
    uVar1 = _DAT_00521e30;
    puVar9 = (undefined4 *)((int)puVar9 + 2);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar7 = param_1 + 0x18d8;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0x4000400;
    puVar7 = puVar7 + 1;
  }
  puVar7 = param_1 + 0x1958;
  for (iVar5 = 0x39; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0x4000400;
    puVar7 = puVar7 + 1;
  }
  param_1[0x1991] = uVar1;
  param_1[0x1992] = uVar2;
  param_1[0x1993] = uVar3;
  param_1[0x1994] = uVar4;
  param_1[0x1995] = uVar1;
  param_1[0x1996] = uVar2;
  param_1[0x1997] = uVar3;
  param_1[0x1998] = uVar4;
  iVar5 = 1 << ((byte)*(undefined4 *)(param_2 + 0x14) & 0x1f);
  param_1[0x1999] = 0x4000400;
  param_1[0x1a9a] = 0x4000400;
  if (iVar5 != 0) {
    puVar7 = param_1 + 0x19da;
    do {
      puVar7[-0x40] = uVar1;
      puVar7[-0x3f] = uVar2;
      puVar7[-0x3e] = uVar3;
      puVar7[-0x3d] = uVar4;
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7[0xc1] = uVar1;
      puVar7[0xc2] = uVar2;
      puVar7[0xc3] = uVar3;
      puVar7[0xc4] = uVar4;
      puVar7[0x101] = uVar1;
      puVar7[0x102] = uVar2;
      puVar7[0x103] = uVar3;
      puVar7[0x104] = uVar4;
      iVar5 = iVar5 + -1;
      puVar7 = puVar7 + 4;
    } while (iVar5 != 0);
  }
  puVar7 = param_1 + 0x1a1a;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0x4000400;
    puVar7 = puVar7 + 1;
  }
  puVar7 = param_1 + 0x1b1b;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0x4000400;
    puVar7 = puVar7 + 1;
  }
  param_1[0x1ba8] = 1;
  param_1[0x1ba9] = 0;
  param_1[0x1baa] = 0;
  param_1[0x1bab] = 0;
  param_1[0x1bac] = 0;
  param_1[0x1bad] = 0;
  return;
}


