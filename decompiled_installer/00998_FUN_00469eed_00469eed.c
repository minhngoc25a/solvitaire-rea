// Function: FUN_00469eed
// Entry: 00469eed
// Size: 452 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [10] __cdecl FUN_00469eed(int param_1,uint param_2,int param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  char extraout_CL;
  byte extraout_CL_00;
  char extraout_CL_01;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  int extraout_ECX_01;
  bool bVar3;
  short in_FPUControlWord;
  ushort in_FPUStatusWord;
  float10 extraout_ST0;
  undefined1 auVar4 [10];
  float10 extraout_ST0_00;
  float10 fVar5;
  float10 extraout_ST0_01;
  float10 fVar6;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar7;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined4 unaff_retaddr;
  double *pdVar8;
  double local_78;
  ushort uStack_6c;
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  
  uVar1 = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    auStack_e._6_4_ = 0x469f01;
    in_EAX = FUN_004a3105();
    uVar1 = extraout_ECX;
  }
  bVar3 = (uVar1 & 0x7ff00000) == 0x7ff00000;
  if (bVar3) {
    if ((in_EAX & 0xfffff) == 0 && param_3 == 0) {
      auStack_e._6_4_ = 0x469fc9;
      __fload_withFB(0,(int)&param_1);
      iVar2 = extraout_ECX_01;
      fVar6 = extraout_ST0_01;
      fVar7 = extraout_ST1_01;
      in_ST6 = in_ST7;
      goto LAB_00469fc9;
    }
    auStack_e._6_4_ = 0x469f8d;
    __fload_withFB(0,(int)&param_1);
    in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
    fVar6 = extraout_ST0_00;
    fVar5 = extraout_ST1_00;
    if (!NAN((float10)1) && !NAN(extraout_ST0_00)) {
      if ((float10)1 == extraout_ST0_00) goto LAB_00469fa3;
      iVar2 = extraout_ECX_00 + 1;
      fVar7 = extraout_ST1_00;
      goto LAB_00469fc9;
    }
  }
  else {
    auStack_e._6_4_ = 0x469f1c;
    uVar1 = __fload_withFB(uVar1 & 0x7ff00000,(int)&param_1);
    if (!bVar3) {
      if (((uVar1 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar6 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          auStack_e._6_4_ = 0x46a093;
          fVar6 = (float10)FUN_0046a0b1();
          fVar6 = -fVar6;
          auVar4 = _DAT_00519220;
          if (extraout_CL_01 == '\0') goto LAB_00469f65;
        }
        log2(fVar6);
        auStack_e._6_4_ = 0x469f41;
        auVar4 = FUN_004a30f0();
        if (extraout_CL == '\x01') {
          auVar4 = (undefined1  [10])-(float10)auVar4;
        }
        if (DAT_005449bc != 0) {
          return auVar4;
        }
        auVar4 = (undefined1  [10])
                 FUN_004a31d9(&DAT_0050d100,0x1d,unaff_retaddr,param_1,param_2,param_3,param_4);
        return auVar4;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        auVar4 = (undefined1  [10])FUN_004a318e();
        return auVar4;
      }
      auStack_e._6_4_ = 0x46a04b;
      FUN_0046a0b1();
      if ((param_4 >> 0x18 & 0x80) == 0) {
        if ((param_2._3_1_ >> 7 & extraout_CL_00) == 0) {
          return (undefined1  [10])(float10)0;
        }
        auVar4 = (undefined1  [10])FUN_004a318e();
        return auVar4;
      }
      auVar4 = _DAT_005191c0;
      if ((param_2._3_1_ >> 7 & extraout_CL_00) != 0) {
        auVar4 = (undefined1  [10])-(float10)_DAT_005191c0;
      }
      goto LAB_00469f65;
    }
    iVar2 = 0;
    fVar6 = extraout_ST0;
    fVar7 = extraout_ST1;
    in_ST6 = in_ST7;
LAB_00469fc9:
    if (((param_2 & 0x7ff00000) != 0x7ff00000) ||
       (fVar5 = fVar7, (param_2 & 0xfffff) == 0 && param_1 == 0)) {
      fVar5 = fVar6;
      if (iVar2 == 0) {
        pdVar8 = &local_78;
        uStack_64 = 0x469ff7;
        uStack_6c = in_FPUStatusWord;
        auStack_e = (undefined1  [10])in_ST6;
        iVar2 = FUN_004a32e4(SUB84((double)fVar6,0),(int)((ulonglong)(double)fVar6 >> 0x20),
                             SUB84((double)fVar7,0),(int)((ulonglong)(double)fVar7 >> 0x20),
                             &local_78);
        auVar4 = (undefined1  [10])(float10)*pdVar8;
        if (iVar2 == 0) {
          return (undefined1  [10])(float10)*pdVar8;
        }
LAB_00469f65:
        if (DAT_005449bc != 0) {
          return auVar4;
        }
        auStack_e._6_4_ = 0x469f82;
        auVar4 = (undefined1  [10])
                 FUN_004a3090(&DAT_0050d100,0x1d,in_FPUControlWord,unaff_retaddr,param_1,param_2,
                              param_3,param_4);
        return auVar4;
      }
      goto LAB_00469fab;
    }
  }
  fVar7 = fVar6;
  if (fVar5 == (float10)0) {
LAB_00469fa3:
    return (undefined1  [10])(float10)1;
  }
LAB_00469fab:
  return (undefined1  [10])(fVar5 + fVar7);
}


