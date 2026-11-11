// Function: FUN_00482db0
// Entry: 00482db0
// Size: 66 bytes
// Thunk: false
// External: false


void __fastcall FUN_00482db0(uint param_1)

{
  if (((byte)DAT_005407a0 & 0x20) == 0) {
    vcvtqq2pd_avx512vl(ZEXT416(param_1));
    return;
  }
  return;
}


