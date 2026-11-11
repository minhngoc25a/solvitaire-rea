// Function: FUN_0046a200
// Entry: 0046a200
// Size: 443 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0046a200(double param_1)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  longlong lVar6;
  uint uVar7;
  int iVar3;
  
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  if ((DAT_005449b8 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = uVar7 >> 0x14;
    lVar6 = CONCAT44(_UNK_0050d174,_DAT_0050d170 - (uVar7 >> 0x14 & _DAT_0050d1a0));
    if ((uVar2 & 0x800) == 0) {
      if (uVar2 < 0x3ff) {
        return (float10)0;
      }
      if (uVar2 < 0x433) {
        return (float10)(double)(((ulonglong)param_1 >> lVar6) << lVar6);
      }
    }
    else {
      dVar5 = (double)(((ulonglong)param_1 >> lVar6) << lVar6);
      if (!NAN(param_1)) {
        if (uVar2 < 0xbff) {
          return (float10)(double)((-(ulonglong)(param_1 < _DAT_0050d190) | (ulonglong)_DAT_0050d190
                                   ) & _DAT_0050d180);
        }
        if (uVar2 < 0xc33) {
          return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & _DAT_0050d160));
        }
      }
    }
    return (float10)param_1;
  }
  uVar2 = __ctrlfp();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    bVar1 = FUN_004bfd19(SUB84(param_1,0),uVar7);
    iVar3 = CONCAT31(extraout_var,bVar1);
    if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) {
      __ctrlfp();
      dVar5 = param_1;
LAB_004a3779:
      return (float10)dVar5;
    }
    dVar5 = DAT_0050c098 + param_1;
    uVar7 = 8;
  }
  else {
    fVar4 = __frnd(param_1);
    dVar5 = (double)fVar4;
    if (((float10)param_1 == fVar4) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp();
      goto LAB_004a3779;
    }
    dVar5 = (double)fVar4;
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xb,param_1,dVar5,uVar2);
  return fVar4;
}


