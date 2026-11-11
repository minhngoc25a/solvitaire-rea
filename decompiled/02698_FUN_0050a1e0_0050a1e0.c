// Function: FUN_0050a1e0
// Entry: 0050a1e0
// Size: 367 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0050a1e0(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7,
            uint param_8)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_14 = (int *)(param_6 + param_7 * 8);
  local_8 = 0;
  local_c = 0;
  piVar2 = local_14 + 1;
  uVar3 = local_8;
  do {
    if ((param_5 == 0) || (uVar1 = param_2 - param_4, param_8 <= uVar1)) {
      *piVar2 = 0;
      *local_14 = 0;
      return;
    }
    param_5 = param_5 + -1;
    piVar7 = (int *)(param_6 + (((-(uint)(param_7 < uVar1) & param_8) - uVar1) + param_7) * 8);
    iVar5 = param_3 + -uVar1;
    local_8 = local_c;
    if (uVar3 < local_c) {
      local_8 = uVar3;
    }
    if (*(char *)(local_8 + iVar5) == *(char *)(local_8 + param_3)) {
      local_8 = local_8 + 1;
      if (param_1 <= local_8) {
LAB_0050a291:
        *local_14 = *piVar7;
        *piVar2 = piVar7[1];
        return;
      }
      piVar6 = (int *)(param_3 + local_8);
      while (uVar8 = *(int *)(-uVar1 + (int)piVar6) - *piVar6, uVar8 == 0) {
        local_8 = local_8 + 4;
        piVar6 = piVar6 + 1;
        if (param_1 <= local_8) goto LAB_0050a291;
      }
      cVar4 = (char)(uVar8 >> 0x10);
      uVar1 = local_8 + 2;
      if ((uVar8 & 0xffff) != 0) {
        cVar4 = (char)uVar8;
        uVar1 = local_8;
      }
      uVar8 = uVar1 + 1;
      if (cVar4 != '\0') {
        uVar8 = uVar1;
      }
      local_8 = param_1;
      if (uVar8 < param_1) {
        local_8 = uVar8;
      }
      if (local_8 == param_1) goto LAB_0050a291;
    }
    piVar6 = piVar2;
    local_10 = piVar7;
    if (*(byte *)(local_8 + iVar5) < *(byte *)(local_8 + param_3)) {
      piVar7 = piVar7 + 1;
      piVar6 = local_14;
      local_14 = piVar7;
      local_10 = piVar2;
      local_c = local_8;
      local_8 = uVar3;
    }
    *piVar6 = param_4;
    param_4 = *piVar7;
    piVar2 = local_10;
    uVar3 = local_8;
  } while( true );
}


