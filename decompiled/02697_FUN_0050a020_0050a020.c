// Function: FUN_0050a020
// Entry: 0050a020
// Size: 434 bytes
// Thunk: false
// External: false


uint * __cdecl
FUN_0050a020(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7,
            uint param_8,uint *param_9,uint param_10)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *local_1c;
  int *local_18;
  uint *local_14;
  uint local_10;
  uint local_8;
  
  uVar6 = param_2 - param_4;
  local_8 = 0;
  local_10 = 0;
  local_1c = (int *)(param_6 + param_7 * 8);
  local_18 = local_1c + 1;
  if ((param_5 != 0) && (uVar6 < param_8)) {
    local_14 = param_9;
    do {
      param_5 = param_5 + -1;
      piVar8 = (int *)(param_6 + (((-(uint)(param_7 < uVar6) & param_8) - uVar6) + param_7) * 8);
      iVar2 = param_3 + -uVar6;
      uVar4 = local_10;
      if (local_8 < local_10) {
        uVar4 = local_8;
      }
      if (*(char *)(uVar4 + iVar2) == *(char *)(uVar4 + param_3)) {
        uVar7 = uVar4 + 1;
        uVar4 = param_1;
        if (uVar7 < param_1) {
          piVar3 = (int *)(param_3 + uVar7);
          do {
            uVar9 = *(int *)((int)piVar3 + -uVar6) - *piVar3;
            if (uVar9 != 0) {
              uVar5 = uVar7 + 2;
              if ((uVar9 & 0xffff) != 0) {
                uVar5 = uVar7;
              }
              uVar7 = uVar9 >> 0x10;
              if ((uVar9 & 0xffff) != 0) {
                uVar7 = uVar9;
              }
              uVar9 = uVar5 + 1;
              if ((char)uVar7 != '\0') {
                uVar9 = uVar5;
              }
              if (uVar9 < param_1) {
                uVar4 = uVar9;
              }
              break;
            }
            uVar7 = uVar7 + 4;
            piVar3 = piVar3 + 1;
          } while (uVar7 < param_1);
        }
        param_9 = local_14;
        if (param_10 < uVar4) {
          *local_14 = uVar4;
          local_14[1] = uVar6 - 1;
          param_9 = local_14 + 2;
          param_10 = uVar4;
          local_14 = param_9;
          if (uVar4 == param_1) {
            *local_1c = *piVar8;
            *local_18 = piVar8[1];
            return param_9;
          }
        }
      }
      piVar3 = local_18;
      piVar1 = piVar8;
      if (*(byte *)(uVar4 + iVar2) < *(byte *)(uVar4 + param_3)) {
        piVar8 = piVar8 + 1;
        piVar3 = local_1c;
        local_1c = piVar8;
        piVar1 = local_18;
        local_10 = uVar4;
        uVar4 = local_8;
      }
      local_8 = uVar4;
      local_18 = piVar1;
      *piVar3 = param_4;
      param_4 = *piVar8;
      uVar6 = param_2 - param_4;
    } while ((param_5 != 0) && (uVar6 < param_8));
  }
  *local_18 = 0;
  *local_1c = 0;
  return param_9;
}


