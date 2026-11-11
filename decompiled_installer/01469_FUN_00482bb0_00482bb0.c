// Function: FUN_00482bb0
// Entry: 00482bb0
// Size: 105 bytes
// Thunk: false
// External: false


longlong FUN_00482bb0(void)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  float in_XMM0_Da;
  
  if (((byte)DAT_005407a0 & 0x20) == 0) {
    auVar5._4_4_ = in_XMM0_Da;
    auVar5._0_4_ = in_XMM0_Da;
    auVar5._8_4_ = in_XMM0_Da;
    auVar5._12_4_ = in_XMM0_Da;
    auVar5 = vcvttps2qq_avx512vl(auVar5);
    return auVar5._0_8_;
  }
  uVar4 = (int)in_XMM0_Da >> 0x1f;
  uVar2 = (int)in_XMM0_Da * 2;
  if (0x9dffffff < uVar2) {
    if (0xbdffffff < uVar2) {
      return -0x8000000000000000;
    }
    bVar3 = (char)(uVar2 >> 0x18) + 0x42;
    uVar2 = ((uVar2 | 0x1000000) << 7 ^ uVar4) - uVar4;
    bVar1 = bVar3 & 0x1f;
    return CONCAT44(uVar4 << bVar1 | uVar2 >> 0x20 - bVar1,uVar2 << (bVar3 & 0x1f));
  }
  return (longlong)(int)in_XMM0_Da;
}


