// Function: FUN_004eaa60
// Entry: 004eaa60
// Size: 541 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004eaa60(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if ((((*(uint *)(param_2 + 0xc) < 5) && (*(uint *)(param_2 + 0x10) < 5)) &&
      (*(uint *)(param_2 + 0x10) + *(uint *)(param_2 + 0xc) < 5)) &&
     (((*(uint *)(param_2 + 0x14) < 5 && (*(int *)(param_2 + 0x1c) - 2U < 0x110)) &&
      ((*(int *)(param_2 + 0x18) == 1 || (*(int *)(param_2 + 0x18) == 2)))))) {
    param_1[0x2a8] = (1 << ((byte)*(undefined4 *)(param_2 + 0x14) & 0x1f)) + -1;
    param_1[0x2a9] = *(undefined4 *)(param_2 + 0xc);
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    *param_1 = 0;
    param_1[0x2aa] = (1 << ((byte)uVar1 & 0x1f)) + -1;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = 0xffffffff;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    iVar5 = 1 << ((char)*(undefined4 *)(param_2 + 0x10) + (char)*(undefined4 *)(param_2 + 0xc) &
                 0x1fU);
    if (iVar5 != 0) {
      puVar8 = param_1 + 0x2ab;
      for (uVar7 = (uint)(iVar5 * 0x600) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = 0x4000400;
        puVar8 = puVar8 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined2 *)puVar8 = 0x400;
        puVar8 = (undefined4 *)((int)puVar8 + 2);
      }
    }
    puVar8 = param_1 + 0x1b11;
    iVar5 = 0xc;
    puVar9 = param_1 + 0x1b23;
    do {
      uVar7 = 0;
      puVar6 = puVar9;
      do {
        *(undefined2 *)(puVar6 + -0x78) = 0x400;
        *(undefined2 *)puVar6 = 0x400;
        uVar7 = uVar7 + 1;
        puVar6 = (undefined4 *)((int)puVar6 + 2);
      } while (uVar7 <= (uint)param_1[0x2a8]);
      *(undefined2 *)(puVar8 + -6) = 0x400;
      puVar9 = puVar9 + 8;
      *(undefined2 *)puVar8 = 0x400;
      *(undefined2 *)(puVar8 + 6) = 0x400;
      *(undefined2 *)(puVar8 + 0xc) = 0x400;
      uVar4 = _UNK_00521e3c;
      uVar3 = _UNK_00521e38;
      uVar2 = _UNK_00521e34;
      uVar1 = _DAT_00521e30;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar8 = param_1 + 0x1c03;
    for (iVar5 = 0x39; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0x4000400;
      puVar8 = puVar8 + 1;
    }
    puVar8 = param_1 + 0x1b83;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0x4000400;
      puVar8 = puVar8 + 1;
    }
    param_1[0x1c3c] = uVar1;
    param_1[0x1c3d] = uVar2;
    param_1[0x1c3e] = uVar3;
    param_1[0x1c3f] = uVar4;
    param_1[0x1c40] = uVar1;
    param_1[0x1c41] = uVar2;
    param_1[0x1c42] = uVar3;
    param_1[0x1c43] = uVar4;
    FUN_004eb660((ushort *)(param_1 + 0x1c44),1 << ((byte)*(undefined4 *)(param_2 + 0x14) & 0x1f),
                 *(char *)(param_1 + 0x2a7));
    FUN_004eb660((ushort *)(param_1 + 0x2e56),1 << ((byte)*(undefined4 *)(param_2 + 0x14) & 0x1f),
                 *(char *)(param_1 + 0x2a7));
    param_1[0x4369] = 0x7fffffff;
    param_1[0x437a] = 0x7fffffff;
    param_1[0x437b] = 0;
    param_1[0x437c] = 0;
    return 0;
  }
  return 8;
}


