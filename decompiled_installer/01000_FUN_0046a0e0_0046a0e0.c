// Function: FUN_0046a0e0
// Entry: 0046a0e0
// Size: 475 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0046a0e0(double param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var;
  ushort in_FPUControlWord;
  float10 fVar5;
  double dVar6;
  longlong lVar7;
  int iVar4;
  
  if ((DAT_005449b8 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x20);
    uVar2 = uVar3 >> 0x14;
    lVar7 = CONCAT44(_UNK_0050d124,_DAT_0050d120 - (uVar3 >> 0x14 & _DAT_0050d140));
    if ((uVar2 & 0x800) == 0) {
      dVar6 = (double)(((ulonglong)param_1 >> lVar7) << lVar7);
      if (uVar2 < 0x3ff) {
        return (float10)(double)(-(ulonglong)(_DAT_0050d130 < param_1) & _DAT_0050d110);
      }
      if (uVar2 < 0x433) {
        return (float10)(dVar6 + (double)(-(ulonglong)(dVar6 < param_1) & _DAT_0050d110));
      }
    }
    else {
      if (uVar2 < 0xbff) {
        return (float10)_DAT_0050d150;
      }
      if (uVar2 < 0xc33) {
        return (float10)(double)(((ulonglong)param_1 >> lVar7) << lVar7);
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ec);
    }
    return (float10)param_1;
  }
  uVar3 = __ctrlfp();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    bVar1 = FUN_004bfd19(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
    iVar4 = CONCAT31(extraout_var,bVar1);
    if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
      __ctrlfp();
LAB_004a36bb:
      return (float10)param_1;
    }
    dVar6 = DAT_0050c098 + param_1;
    uVar2 = 8;
  }
  else {
    fVar5 = __frnd(param_1);
    if (((float10)param_1 == fVar5) || ((uVar3 & 0x20) != 0)) {
      dVar6 = (double)fVar5;
      __ctrlfp();
      param_1 = dVar6;
      goto LAB_004a36bb;
    }
    dVar6 = (double)fVar5;
    uVar2 = 0x10;
  }
  fVar5 = (float10)__except1(uVar2,0xc,param_1,dVar6,uVar3);
  return fVar5;
}


