// Function: FUN_004638e0
// Entry: 004638e0
// Size: 402 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004638e0(uint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  byte local_1a;
  int local_14;
  uint local_10;
  uint local_c;
  undefined8 local_8;
  
  puVar7 = FUN_00463150(param_1,1);
  if (puVar7 == (uint *)0x0) {
    return 0xffffffff;
  }
  uVar6 = *puVar7;
  local_8 = 0;
  local_c = 0;
  local_1a = 0x80;
  *param_2 = 0;
  param_2[1] = 0;
  cVar5 = '\0';
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    if (((byte)uVar6 & local_1a) == 0) {
      lVar9 = __allshl(cVar5 * '\b',0);
      *(longlong *)param_2 = lVar9 + CONCAT44(local_c,local_10);
      return 0;
    }
    iVar4 = *(int *)param_1[0x110];
    if ((*(int *)(iVar4 + 0x54) == 0) && (*(int *)(iVar4 + 0x50) == 0)) {
      return 0xffffffff;
    }
    if (*(int *)(iVar4 + 0xe0) != 0) {
      FUN_00465320((int)param_1);
    }
    if (*(int *)(iVar4 + 0x4c) == 0) {
      puVar7 = (uint *)FUN_00488710((int)param_1,1,(uint *)0x0);
      if (puVar7 == (uint *)0x0) {
        return 0xffffffff;
      }
      piVar1 = (int *)(iVar4 + 0x50);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(undefined4 *)(iVar4 + 0xe0) = 1;
      *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + -1 + (uint)(iVar2 != 0);
    }
    else {
      uVar8 = FUN_00465370((uint)param_1,(undefined4 *)&local_8,1,1);
      if ((int)uVar8 < 1) {
        return 0xffffffff;
      }
      puVar7 = (uint *)(iVar4 + 0x50);
      uVar3 = *puVar7;
      *puVar7 = *puVar7 - uVar8;
      *(int *)(iVar4 + 0x54) =
           (*(int *)(iVar4 + 0x54) - ((int)uVar8 >> 0x1f)) - (uint)(uVar3 < uVar8);
      puVar7 = (uint *)local_8;
    }
    uVar8 = thunk_FUN_0048b320(*(uint *)(iVar4 + 0x58),puVar7,1);
    *(uint *)(iVar4 + 0x58) = uVar8;
    if (puVar7 == (uint *)0x0) break;
    lVar9 = __allshl((byte)local_14,0);
    *param_2 = *param_2 | (uint)lVar9;
    local_14 = local_14 + 8;
    param_2[1] = param_2[1] | (uint)((ulonglong)lVar9 >> 0x20);
    cVar5 = cVar5 + '\x01';
    local_10 = *param_2;
    local_c = param_2[1];
    local_1a = local_1a >> 1;
    if (0x3f < local_14) {
      return 0;
    }
  }
  return 0xffffffff;
}


