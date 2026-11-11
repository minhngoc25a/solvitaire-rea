// Function: FUN_00482d00
// Entry: 00482d00
// Size: 121 bytes
// Thunk: false
// External: false


longlong FUN_00482d00(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  double in_XMM0_Qa;
  undefined8 uVar6;
  uint local_8;
  
  if (((byte)DAT_005407a0 & 0x20) == 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = in_XMM0_Qa;
    auVar5 = vcvttpd2qq_avx512vl(auVar5);
    return auVar5._0_8_;
  }
  local_8 = SUB84(in_XMM0_Qa,0);
  uVar4 = (uint)((ulonglong)in_XMM0_Qa >> 0x20);
  uVar3 = uVar4 & 0x7fffffff;
  if (uVar3 < 0x41e00000) {
    return (longlong)(int)in_XMM0_Qa;
  }
  if (0x43dfffff < uVar3) {
    return -0x8000000000000000;
  }
  if (-1 < (longlong)in_XMM0_Qa) {
    uVar4 = uVar4 & 0x1fffff | 0x100000;
    bVar2 = (char)(uVar3 >> 0x14) - 0x33;
    if (0x432 < uVar3 >> 0x14) {
      return CONCAT44(uVar4 << (bVar2 & 0x1f) | local_8 >> 0x20 - (bVar2 & 0x1f),
                      local_8 << (bVar2 & 0x1f));
    }
    bVar1 = -bVar2 & 0x1f;
    return CONCAT44(uVar4 >> (-bVar2 & 0x1f),local_8 >> bVar1 | uVar4 << 0x20 - bVar1);
  }
  uVar6 = dtol3_getbits();
  return CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
}


