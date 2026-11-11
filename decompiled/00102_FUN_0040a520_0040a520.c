// Function: FUN_0040a520
// Entry: 0040a520
// Size: 497 bytes
// Thunk: false
// External: false


int __cdecl FUN_0040a520(int param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint local_4c;
  uint local_3c;
  int local_2c;
  uint *puVar13;
  
  iVar4 = 0;
  if (*(int *)(param_2 + 0x10) <= *(int *)(param_1 + 0x10)) {
    puVar5 = (uint *)(param_2 + 0x14);
    local_2c = *(int *)(param_2 + 0x10) + -1;
    puVar11 = puVar5 + local_2c;
    puVar1 = (uint *)(param_1 + 0x14);
    puVar9 = puVar1 + local_2c;
    uVar2 = (ulonglong)*puVar9 / (ulonglong)(*puVar11 + 1);
    iVar4 = (int)uVar2;
    if (iVar4 != 0) {
      local_3c = 0;
      local_4c = 0;
      puVar10 = puVar1;
      puVar12 = puVar5;
      do {
        puVar13 = puVar12 + 1;
        lVar3 = uVar2 * *puVar12 + (ulonglong)local_3c;
        uVar6 = (uint)lVar3;
        local_3c = (uint)((ulonglong)lVar3 >> 0x20);
        uVar7 = *puVar10 - uVar6;
        uVar8 = uVar7 - local_4c;
        local_4c = -(uint)(uVar7 < local_4c) - (uint)(*puVar10 < uVar6) & 1;
        *puVar10 = uVar8;
        puVar10 = puVar10 + 1;
        puVar12 = puVar13;
      } while (puVar13 <= puVar11);
      if (*puVar9 == 0) {
        puVar10 = puVar9 + -1;
        if (puVar1 < puVar10) {
          uVar6 = puVar9[-1];
          while (uVar6 == 0) {
            puVar10 = puVar10 + -1;
            local_2c = local_2c + -1;
            if (puVar10 <= puVar1) break;
            uVar6 = *puVar10;
          }
        }
        *(int *)(param_1 + 0x10) = local_2c;
      }
    }
    uVar6 = FUN_0040ae80(param_1,param_2);
    if (-1 < (int)uVar6) {
      iVar4 = iVar4 + 1;
      local_4c = 0;
      puVar9 = puVar1;
      do {
        puVar10 = puVar5 + 1;
        uVar6 = *puVar9 - *puVar5;
        uVar7 = uVar6 - local_4c;
        local_4c = -(uint)(uVar6 < local_4c) - (uint)(*puVar9 < *puVar5) & 1;
        *puVar9 = uVar7;
        puVar9 = puVar9 + 1;
        puVar5 = puVar10;
      } while (puVar10 <= puVar11);
      puVar5 = puVar1 + local_2c;
      if (*puVar5 == 0) {
        puVar9 = puVar5 + -1;
        if (puVar1 < puVar9) {
          uVar6 = puVar5[-1];
          while (uVar6 == 0) {
            puVar9 = puVar9 + -1;
            local_2c = local_2c + -1;
            if (puVar9 <= puVar1) break;
            uVar6 = *puVar9;
          }
        }
        *(int *)(param_1 + 0x10) = local_2c;
      }
    }
  }
  return iVar4;
}


