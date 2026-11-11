// Function: FUN_00469de0
// Entry: 00469de0
// Size: 171 bytes
// Thunk: false
// External: false


longlong FUN_00469de0(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  float10 in_ST0;
  undefined8 local_20;
  undefined2 uStack_18;
  
  if (1 < DAT_00544988) {
    return (longlong)in_ST0;
  }
  local_20._0_4_ = SUB104(in_ST0,0);
  uVar2 = (uint)local_20;
  local_20._4_4_ = (uint)((unkuint10)in_ST0 >> 0x20);
  uVar1 = local_20._4_4_;
  local_20 = SUB108(in_ST0,0);
  uStack_18 = (ushort)((unkuint10)in_ST0 >> 0x40);
  uVar4 = uStack_18 & 0x7fff;
  if (uVar4 < 0x3fff) {
    return 0;
  }
  if ((int)uVar1 < 0) {
    if (uVar4 < 0x403e) {
      bVar3 = 0x3e - (char)uVar4;
      uVar5 = uVar1;
      if (0x1f < bVar3) {
        uVar5 = 0;
        uVar2 = uVar1;
      }
      uVar2 = uVar2 >> (bVar3 & 0x1f) | uVar5 << 0x20 - (bVar3 & 0x1f);
      uVar5 = uVar5 >> (bVar3 & 0x1f);
      if ((short)uStack_18 < 0) {
        bVar6 = uVar2 != 0;
        uVar2 = -uVar2;
        uVar5 = -(uVar5 + bVar6);
      }
      return CONCAT44(uVar5,uVar2);
    }
    if (((uVar4 < 0x403f) && ((uVar1 & 0x7fffffff) == 0 && uVar2 == 0)) && ((short)uStack_18 < 0)) {
      return local_20;
    }
  }
  return -0x8000000000000000;
}


