// Function: FUN_0048f0c0
// Entry: 0048f0c0
// Size: 183 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048f0c0(uint *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_4;
  
  local_4 = 0;
  iVar2 = FUN_0048ee80(&local_4,param_2,param_3);
  uVar1 = local_4;
  if (iVar2 == 3) {
    uVar3 = 3;
    if (local_4 - 0xd800 < 0x400) {
      local_4 = 0;
      if (2 < param_3 - 3U) {
        uVar3 = FUN_0048ee80(&local_4,param_2 + 3,param_3 - 3U);
        if ((uVar3 == 3) && (local_4 - 0xdc00 < 0x400)) {
          iVar2 = 6;
          local_4 = (uVar1 - 0xd7f7) * 0x400 + local_4;
          goto LAB_0048f145;
        }
      }
    }
    else if (0x3ff < local_4 - 0xdc00) goto LAB_0048f145;
    *param_1 = 0xfffd;
    return -((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f));
  }
LAB_0048f145:
  *param_1 = local_4;
  return iVar2;
}


