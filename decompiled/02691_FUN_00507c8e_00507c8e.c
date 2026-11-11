// Function: FUN_00507c8e
// Entry: 00507c8e
// Size: 614 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00507c8e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM0 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar6 = (double)(in_XMM0._0_8_ & (ulonglong)_DAT_005227f0 | (ulonglong)DAT_00522860);
    dVar7 = (double)(in_XMM0._0_8_ & _UNK_005227f8 | _UNK_00522868);
    uVar1 = SUB82(_DAT_00522810 + dVar6,0) & 0x7f0;
    dVar10 = (double)(_UNK_00522828 & (ulonglong)dVar7);
    dVar9 = (double)(_DAT_00522820 & (ulonglong)dVar6) * *(double *)(&DAT_00523090 + uVar1) -
            _DAT_00522800;
    dVar6 = (dVar6 - (double)(_DAT_00522820 & (ulonglong)dVar6)) *
            *(double *)(&DAT_00523090 + uVar1);
    dVar8 = (dVar7 - dVar10) * *(double *)(&UNK_00523098 + uVar1);
    dVar7 = dVar6 + dVar9;
    in_XMM0._8_8_ = dVar8 + (dVar10 * *(double *)(&UNK_00523098 + uVar1) - _UNK_00522808);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar10 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((_UNK_005228b8 * in_XMM0._8_8_ + _UNK_005228c8) * in_XMM0._8_8_ +
                       _UNK_005228d8) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       ((_DAT_005228b0 * dVar7 + _DAT_005228c0) * dVar7 + _DAT_005228d0) *
                       dVar7 * dVar7 * dVar7 * dVar7 * dVar7 + _DAT_005228e0 * dVar7 +
                       *(double *)(&UNK_00522c88 + uVar1) + dVar10 * _UNK_00522838 +
                       (double)((ulonglong)dVar8 & *(ulonglong *)(&UNK_00522848 + iVar5)) +
                      *(double *)(&DAT_00522c80 + uVar1) + dVar9 + dVar10 * _DAT_00522830 +
                      (double)((ulonglong)dVar6 & *(ulonglong *)(&DAT_00522840 + iVar5)));
    }
    local_c = (double)-(ulonglong)(_DAT_00522870 == param_1);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (DAT_00522860 ==
            (double)((ulonglong)param_1 & (ulonglong)_DAT_005227f0 | (ulonglong)DAT_00522860)) {
          return (float10)_DAT_00522898;
        }
        iVar4 = 0x3e9;
        local_c = _DAT_005227f0;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        iVar4 = 9;
      }
      else {
        iVar4 = 0x3e9;
      }
      goto LAB_00507e9a;
    }
    in_XMM0._0_8_ = param_1 * DAT_00522880;
    iVar4 = -0x34;
  }
  iVar4 = 8;
  local_c = DAT_00522890;
LAB_00507e9a:
  ___libm_error_support(&param_1,&param_1,&local_c,iVar4);
  return (float10)local_c;
}


