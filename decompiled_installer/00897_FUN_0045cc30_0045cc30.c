// Function: FUN_0045cc30
// Entry: 0045cc30
// Size: 243 bytes
// Thunk: false
// External: false


longlong __cdecl FUN_0045cc30(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  longlong lVar6;
  uint local_8;
  uint uStack_4;
  
  bVar2 = *param_1;
  if (-1 < (char)bVar2) {
    lVar6 = FUN_0045d790((char *)param_1,param_2,8);
    return lVar6;
  }
  bVar5 = bVar2 & 0x40;
  if (bVar5 == 0) {
    uStack_4 = 0;
    local_8 = 0;
  }
  else {
    local_8 = 0xffffffff;
    uStack_4 = 0xffffffff;
  }
  bVar3 = bVar2 | 0x80;
  if (bVar5 == 0) {
    bVar3 = bVar2 & 0x7f;
  }
  while (8 < param_2) {
    param_2 = param_2 - 1;
    if (bVar3 != -(bVar5 != 0)) goto LAB_0045cce3;
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar3 = *pbVar1;
  }
  if (-1 < (char)(-(bVar5 != 0) ^ bVar3)) {
    while( true ) {
      param_2 = param_2 - 1;
      uVar4 = (uint)bVar3;
      if (param_2 == 0) break;
      uStack_4 = uStack_4 << 8 | local_8 >> 0x18;
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      local_8 = local_8 << 8 | uVar4;
    }
    return CONCAT44(uStack_4 << 8 | local_8 >> 0x18,local_8 << 8 | uVar4);
  }
LAB_0045cce3:
  if (bVar5 != 0) {
    return -0x8000000000000000;
  }
  return 0x7fffffffffffffff;
}


