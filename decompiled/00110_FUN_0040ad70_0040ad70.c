// Function: FUN_0040ad70
// Entry: 0040ad70
// Size: 263 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0040ad70(undefined4 *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  sbyte sVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte local_2c;
  
  iVar8 = param_1[1];
  iVar2 = param_1[4];
  iVar11 = (int)param_2 >> 5;
  iVar12 = iVar2 + iVar11 + 1;
  for (iVar3 = param_1[2]; iVar3 < iVar12; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  puVar5 = FUN_0040a840(iVar8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar10 = puVar5 + 5;
    if (0 < iVar11) {
      iVar8 = 0;
      do {
        puVar10[iVar8] = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar11);
      puVar10 = puVar10 + iVar8;
    }
    puVar7 = param_1 + 5;
    puVar1 = puVar7 + param_1[4];
    if ((param_2 & 0x1f) == 0) {
      do {
        puVar6 = puVar7 + 1;
        *puVar10 = *puVar7;
        puVar7 = puVar6;
        puVar10 = puVar10 + 1;
      } while (puVar6 < puVar1);
    }
    else {
      sVar4 = (sbyte)(param_2 & 0x1f);
      local_2c = 0x20 - sVar4;
      uVar13 = 0;
      do {
        puVar9 = puVar10;
        puVar6 = puVar7 + 1;
        *puVar9 = *puVar7 << sVar4 | uVar13;
        uVar13 = *puVar7 >> (local_2c & 0x1f);
        puVar7 = puVar6;
        puVar10 = puVar9 + 1;
      } while (puVar6 < puVar1);
      puVar9[1] = uVar13;
      if (uVar13 != 0) {
        iVar12 = iVar2 + iVar11 + 2;
      }
    }
    puVar5[4] = iVar12 + -1;
    FUN_0040a910(param_1);
  }
  return puVar5;
}


