// Function: FUN_004eec50
// Entry: 004eec50
// Size: 301 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004eec50(uint param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6,
            uint param_7,int param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint *local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_14 = (uint *)(param_5 + param_6 * 8);
  local_10 = local_14 + 1;
  local_8 = 0;
  local_c = 0;
  uVar2 = local_8;
  do {
    if (param_2 <= (-(uint)(param_7 < param_3) & param_3 - param_7)) break;
    uVar5 = param_3 - param_2;
    puVar1 = (uint *)(param_5 + (((-(uint)(param_6 < uVar5) & param_7) - uVar5) + param_6) * 8);
    iVar3 = param_4 + -uVar5;
    local_8 = uVar2;
    if (local_c <= uVar2) {
      local_8 = local_c;
    }
    if (*(char *)(local_8 + iVar3) == *(char *)(local_8 + param_4)) {
      local_8 = local_8 + 1;
      if (local_8 == param_1) {
LAB_004eed01:
        *local_14 = *puVar1;
        *local_10 = puVar1[1];
        return;
      }
      pcVar4 = (char *)(param_4 + local_8);
      while (pcVar4[-uVar5] == *pcVar4) {
        local_8 = local_8 + 1;
        pcVar4 = pcVar4 + 1;
        if (local_8 == param_1) goto LAB_004eed01;
      }
    }
    if (*(byte *)(local_8 + iVar3) < *(byte *)(local_8 + param_4)) {
      *local_14 = param_2;
      local_14 = puVar1 + 1;
      param_2 = *local_14;
      local_c = local_8;
      local_8 = uVar2;
    }
    else {
      *local_10 = param_2;
      param_2 = *puVar1;
      local_10 = puVar1;
    }
    param_8 = param_8 + -1;
    uVar2 = local_8;
  } while (param_8 != 0);
  *local_14 = 0;
  *local_10 = 0;
  return;
}


