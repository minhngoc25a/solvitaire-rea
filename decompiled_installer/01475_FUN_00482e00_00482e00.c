// Function: FUN_00482e00
// Entry: 00482e00
// Size: 693 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482e00(void)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort in_FPUControlWord;
  double in_XMM0_Qa;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uStack_10;
  ushort uStack_c;
  undefined2 local_a;
  
  uVar3 = (uint)((ulonglong)in_XMM0_Qa >> 0x20);
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    uStack_c = 0x30ca;
    local_a = 0x48;
    FUN_004c6ddb(SUB84(in_XMM0_Qa,0),uVar3);
    return;
  }
  uVar2 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar2 | uVar2 - 0x3c90) < 0x80000000) {
    dVar6 = _DAT_0050e500 * in_XMM0_Qa + _DAT_0050e4e0;
    dVar7 = (_UNK_0050e508 * in_XMM0_Qa + _UNK_0050e4e8) - _UNK_0050e4e8;
    uVar3 = SUB84(dVar6,0);
    iVar4 = (uVar3 & 0x3f) * 0x10;
    dVar5 = (in_XMM0_Qa - _DAT_0050e510 * (dVar6 - _DAT_0050e4e0)) -
            _DAT_0050e520 * (dVar6 - _DAT_0050e4e0);
    dVar7 = (in_XMM0_Qa - _UNK_0050e518 * dVar7) - _UNK_0050e528 * dVar7;
    if (((int)uVar3 >> 6) + 0x37eU < 0x77d) {
      return;
    }
    uVar1 = ~_DAT_0050e4b0 &
            (*(ulonglong *)(&UNK_0051ba08 + iVar4) |
            ((ulonglong)dVar6 & _DAT_0050e4c0) + _DAT_0050e4d0 << 0x2e);
    uStack_c = (ushort)(uVar1 >> 0x30) |
               (ushort)(((ulonglong)(((int)uVar3 >> 7) + 0x3ff) << 0x34) >> 0x30);
    dVar6 = (double)CONCAT26(uStack_c,(int6)uVar1);
    dVar5 = (double)((ulonglong)((((int)uVar3 >> 6) - ((int)uVar3 >> 7)) + 0x3ff) << 0x34) *
            (dVar6 + (dVar7 * dVar7 * (_UNK_0050e548 + _UNK_0050e538 * dVar7) +
                     dVar5 + *(double *)(&DAT_0051ba00 + iVar4) +
                     dVar5 * dVar5 * dVar5 * dVar5 * (_DAT_0050e540 + _DAT_0050e530 * dVar5)) *
                     dVar6);
    if (((ushort)((ulonglong)dVar5 >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)dVar5 & 0x7ff0000000000000) != 0) {
        return;
      }
      iVar4 = 0xf;
    }
    else {
      iVar4 = 0xe;
    }
  }
  else {
    uVar2 = uVar3 & 0x7fffffff;
    if (uVar2 < 0x40900000) {
      return;
    }
    if (0x7fefffff < uVar2) {
      if ((uVar2 < 0x7ff00001) && (SUB84(in_XMM0_Qa,0) == 0)) {
        if (uVar3 == 0x7ff00000) {
          return;
        }
        return;
      }
      return;
    }
    if (uVar3 < 0x80000000) {
      dVar5 = DAT_0050e588 * DAT_0050e588;
      iVar4 = 0xe;
    }
    else {
      dVar5 = DAT_0050e590 * DAT_0050e590;
      iVar4 = 0xf;
    }
  }
  uStack_10 = SUB84(dVar5,0);
  uStack_c = (ushort)((ulonglong)dVar5 >> 0x20);
  local_a = (undefined2)((ulonglong)dVar5 >> 0x30);
  ___libm_error_support
            ((undefined8 *)&stack0xfffffff8,(undefined8 *)&stack0xfffffff8,(undefined8 *)&uStack_10,
             iVar4);
  return;
}


