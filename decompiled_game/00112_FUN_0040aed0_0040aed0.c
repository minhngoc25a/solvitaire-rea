// Function: FUN_0040aed0
// Entry: 0040aed0
// Size: 380 bytes
// Thunk: false
// External: false


/* WARNING: Type propagation algorithm not settling */

undefined4 * __cdecl FUN_0040aed0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  uint local_34;
  uint *puVar9;
  
  uVar4 = FUN_0040ae80(param_1,param_2);
  if (uVar4 == 0) {
    puVar5 = FUN_0040a840(0);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[4] = 1;
      puVar5[5] = 0;
      return puVar5;
    }
  }
  else {
    iVar7 = param_1;
    if ((int)uVar4 >= 0) {
      iVar7 = param_2;
      param_2 = param_1;
    }
    puVar5 = FUN_0040a840(*(int *)(param_2 + 4));
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[3] = (uint)((int)uVar4 < 0);
      iVar2 = *(int *)(param_2 + 0x10);
      local_34 = 0;
      puVar1 = (uint *)(param_2 + 0x14) + iVar2;
      iVar3 = *(int *)(iVar7 + 0x10);
      puVar8 = (uint *)(iVar7 + 0x14);
      puVar10 = (uint *)(param_2 + 0x14);
      piVar13 = puVar5 + 5;
      do {
        piVar12 = piVar13;
        puVar9 = puVar8 + 1;
        puVar11 = puVar10 + 1;
        uVar4 = *puVar10 - *puVar8;
        iVar6 = uVar4 - local_34;
        piVar13 = piVar12 + 1;
        local_34 = -(uint)(uVar4 < local_34) - (uint)(*puVar10 < *puVar8) & 1;
        *piVar12 = iVar6;
        puVar8 = puVar9;
        puVar10 = puVar11;
      } while (puVar9 < (uint *)(iVar7 + 0x14) + iVar3);
      puVar8 = puVar11;
      iVar7 = iVar2;
      if (puVar11 < puVar1) {
        do {
          puVar10 = puVar8 + 1;
          iVar6 = *puVar8 - local_34;
          local_34 = -(uint)(*puVar8 < local_34) & 1;
          *piVar13 = iVar6;
          puVar8 = puVar10;
          piVar13 = piVar13 + 1;
        } while (puVar10 < puVar1);
        piVar13 = (int *)((int)piVar12 + (~(uint)puVar11 + (int)puVar1 & 0xfffffffc) + 8);
      }
      while (iVar6 == 0) {
        iVar6 = piVar13[(iVar7 + -2) - iVar2];
        iVar7 = iVar7 + -1;
      }
      puVar5[4] = iVar7;
      return puVar5;
    }
  }
  return (undefined4 *)0x0;
}


