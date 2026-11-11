// Function: FUN_0049db70
// Entry: 0049db70
// Size: 115 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0049db70(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_3 ^ 1;
  if (param_2 == 0) {
    uVar3 = *param_1;
    if (uVar3 != 0) {
      for (uVar1 = *(uint *)(uVar3 + param_3 * 4); uVar1 != 0;
          uVar1 = *(uint *)(uVar1 + param_3 * 4)) {
        uVar3 = uVar1;
      }
      return uVar3;
    }
  }
  else {
    uVar1 = *(uint *)(param_2 + param_3 * 4);
    if (uVar1 != 0) {
      for (uVar2 = *(uint *)(uVar1 + uVar3 * 4); uVar2 != 0; uVar2 = *(uint *)(uVar2 + uVar3 * 4)) {
        uVar1 = uVar2;
      }
      return uVar1;
    }
    while (*param_1 != param_2) {
      uVar1 = *(uint *)(param_2 + 8);
      if (uVar3 == (uVar1 >> 1 & 1)) {
        return uVar1 & 0xfffffffc;
      }
      param_2 = uVar1 & 0xfffffffc;
    }
  }
  return 0;
}


