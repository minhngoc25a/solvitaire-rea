// Function: FUN_005077f0
// Entry: 005077f0
// Size: 67 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [10] __thiscall
FUN_005077f0(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  char extraout_CL;
  byte extraout_CL_00;
  char extraout_CL_01;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  bool bVar4;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar5;
  float10 extraout_ST0_01;
  float10 fVar6;
  undefined1 auVar7 [10];
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar8;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined4 unaff_retaddr;
  double *pdVar9;
  double dStack_78;
  ushort uStack_6c;
  undefined4 uStack_64;
  undefined1 auStack_e [6];
  undefined4 local_8;
  
  if (DAT_005449b8 != 0) {
    bVar4 = (MXCSR & 0x7f80) == 0x1f80;
    if (bVar4) {
      _auStack_e = CONCAT26(in_FPUControlWord,auStack_e);
    }
    if (bVar4 && (in_FPUControlWord & 0x7f) == 0x7f) {
      auVar7 = (undefined1  [10])FUN_004a2119((double)CONCAT44(param_3,param_2),param_4,param_5);
      return auVar7;
    }
  }
  uVar1 = __fload_withFB(param_1,(int)&param_4);
  uVar2 = uVar1;
  if (in_FPUControlWord != 0x27f) {
    _auStack_e = CONCAT46(0x469f01,auStack_e);
    uVar1 = FUN_004a3105();
    uVar2 = extraout_ECX;
  }
  bVar4 = (uVar2 & 0x7ff00000) == 0x7ff00000;
  if (bVar4) {
    if ((uVar1 & 0xfffff) == 0 && param_4 == 0) {
      _auStack_e = CONCAT46(0x469fc9,auStack_e);
      __fload_withFB(0,(int)&param_2);
      iVar3 = extraout_ECX_01;
      fVar6 = extraout_ST0_01;
      fVar8 = extraout_ST1_01;
      in_ST6 = in_ST7;
      goto LAB_00469fc9;
    }
    _auStack_e = CONCAT46(0x469f8d,auStack_e);
    __fload_withFB(0,(int)&param_2);
    in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
    fVar6 = extraout_ST0_00;
    fVar5 = extraout_ST1_00;
    if (!NAN((float10)1) && !NAN(extraout_ST0_00)) {
      if ((float10)1 == extraout_ST0_00) goto LAB_00469fa3;
      iVar3 = extraout_ECX_00 + 1;
      fVar8 = extraout_ST1_00;
      goto LAB_00469fc9;
    }
  }
  else {
    _auStack_e = CONCAT46(0x469f1c,auStack_e);
    uVar2 = __fload_withFB(uVar2 & 0x7ff00000,(int)&param_2);
    if (!bVar4) {
      if (((uVar2 & 0x7ff00000) != 0) || ((param_3 & 0xfffff) != 0 || param_2 != 0)) {
        fVar6 = extraout_ST0;
        if ((param_3 & 0x80000000) != 0) {
          _auStack_e = CONCAT46(0x46a093,auStack_e);
          fVar6 = (float10)FUN_0046a0b1();
          fVar6 = -fVar6;
          auVar7 = _DAT_00519220;
          if (extraout_CL_01 == '\0') goto LAB_00469f65;
        }
        log2(fVar6);
        _auStack_e = CONCAT46(0x469f41,auStack_e);
        auVar7 = FUN_004a30f0();
        if (extraout_CL == '\x01') {
          auVar7 = (undefined1  [10])-(float10)auVar7;
        }
        if (DAT_005449bc != 0) {
          return auVar7;
        }
        auVar7 = (undefined1  [10])
                 FUN_004a31d9(&DAT_0050d100,0x1d,unaff_retaddr,param_2,param_3,param_4,param_5);
        return auVar7;
      }
      if ((param_5 & 0x7fffffff) == 0 && param_4 == 0) {
        auVar7 = (undefined1  [10])FUN_004a318e();
        return auVar7;
      }
      _auStack_e = CONCAT46(0x46a04b,auStack_e);
      FUN_0046a0b1();
      if ((param_5 >> 0x18 & 0x80) == 0) {
        if ((param_3._3_1_ >> 7 & extraout_CL_00) == 0) {
          return (undefined1  [10])(float10)0;
        }
        auVar7 = (undefined1  [10])FUN_004a318e();
        return auVar7;
      }
      auVar7 = _DAT_005191c0;
      if ((param_3._3_1_ >> 7 & extraout_CL_00) != 0) {
        auVar7 = (undefined1  [10])-(float10)_DAT_005191c0;
      }
      goto LAB_00469f65;
    }
    iVar3 = 0;
    fVar6 = extraout_ST0;
    fVar8 = extraout_ST1;
    in_ST6 = in_ST7;
LAB_00469fc9:
    if (((param_3 & 0x7ff00000) != 0x7ff00000) ||
       (fVar5 = fVar8, (param_3 & 0xfffff) == 0 && param_2 == 0)) {
      fVar5 = fVar6;
      if (iVar3 == 0) {
        pdVar9 = &dStack_78;
        uStack_64 = 0x469ff7;
        uStack_6c = in_FPUStatusWord;
        _auStack_e = in_ST6;
        iVar3 = FUN_004a32e4(SUB84((double)fVar6,0),(int)((ulonglong)(double)fVar6 >> 0x20),
                             SUB84((double)fVar8,0),(int)((ulonglong)(double)fVar8 >> 0x20),
                             &dStack_78);
        auVar7 = (undefined1  [10])(float10)*pdVar9;
        if (iVar3 == 0) {
          return (undefined1  [10])(float10)*pdVar9;
        }
LAB_00469f65:
        if (DAT_005449bc != 0) {
          return auVar7;
        }
        _auStack_e = CONCAT46(0x469f82,auStack_e);
        auVar7 = (undefined1  [10])
                 FUN_004a3090(&DAT_0050d100,0x1d,in_FPUControlWord,unaff_retaddr,param_2,param_3,
                              param_4,param_5);
        return auVar7;
      }
      goto LAB_00469fab;
    }
  }
  fVar8 = fVar6;
  if (fVar5 == (float10)0) {
LAB_00469fa3:
    return (undefined1  [10])(float10)1;
  }
LAB_00469fab:
  return (undefined1  [10])(fVar5 + fVar8);
}


