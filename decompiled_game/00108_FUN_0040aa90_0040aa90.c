// Function: FUN_0040aa90
// Entry: 0040aa90
// Size: 334 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0040aa90(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar14;
  uint local_44;
  int local_2c;
  uint *puVar13;
  
  iVar11 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar9 = iVar2;
  iVar10 = param_2;
  if (iVar11 < iVar2) {
    iVar9 = iVar11;
    iVar10 = param_1;
    iVar11 = iVar2;
    param_1 = param_2;
  }
  iVar2 = iVar11 + iVar9;
  puVar7 = FUN_0040a840((uint)(*(int *)(param_1 + 8) < iVar2) + *(int *)(param_1 + 4));
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar7 + 5;
    puVar1 = puVar5 + iVar2;
    for (puVar8 = puVar5; puVar8 < puVar1; puVar8 = puVar8 + 1) {
      *puVar8 = 0;
    }
    puVar8 = (uint *)(iVar10 + 0x14);
    while (puVar8 < (uint *)(iVar10 + 0x14) + iVar9) {
      uVar3 = *puVar8;
      if (uVar3 != 0) {
        local_44 = 0;
        puVar12 = (uint *)(param_1 + 0x14);
        puVar6 = puVar5;
        do {
          puVar14 = puVar6;
          puVar13 = puVar12 + 1;
          lVar4 = (ulonglong)uVar3 * (ulonglong)*puVar12 + (ulonglong)*puVar14 + (ulonglong)local_44
          ;
          local_44 = (uint)((ulonglong)lVar4 >> 0x20);
          *puVar14 = (uint)lVar4;
          puVar12 = puVar13;
          puVar6 = puVar14 + 1;
        } while (puVar13 < (uint *)(param_1 + 0x14) + iVar11);
        puVar14[1] = local_44;
      }
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    local_2c = iVar2;
    if (0 < iVar2) {
      uVar3 = puVar1[-1];
      iVar11 = iVar2;
      while ((local_2c = iVar11, uVar3 == 0 && (local_2c = iVar11 + -1, local_2c != 0))) {
        uVar3 = puVar1[(iVar11 + -2) - iVar2];
        iVar11 = local_2c;
      }
    }
    puVar7[4] = local_2c;
  }
  return puVar7;
}


