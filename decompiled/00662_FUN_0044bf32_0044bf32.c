// Function: FUN_0044bf32
// Entry: 0044bf32
// Size: 432 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0044bf32(short *param_1,uint param_2)

{
  undefined1 auVar1 [32];
  int iVar2;
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 auVar7 [16];
  short *psVar3;
  
  psVar3 = param_1;
  if (DAT_00544988 < 5) {
    if (DAT_00544988 < 1) {
      for (; (psVar3 != param_1 + param_2 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
      iVar2 = (int)psVar3 - (int)param_1;
      goto LAB_0044c0da;
    }
    if (((uint)param_1 & 1) == 0) {
      uVar5 = (-(uint)(((uint)param_1 & 0xf) != 0) & 0x10 - ((uint)param_1 & 0xf)) >> 1;
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      for (; (psVar3 != param_1 + uVar5 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
      uVar4 = (int)psVar3 - (int)param_1 >> 1;
      if (uVar4 != uVar5) {
        return uVar4;
      }
      for (psVar3 = param_1 + uVar4; psVar3 != param_1 + (param_2 - uVar5 & 0xfffffff0) + uVar4;
          psVar3 = psVar3 + 8) {
        auVar7._0_2_ = -(ushort)(*psVar3 == 0);
        auVar7._2_2_ = -(ushort)(psVar3[1] == 0);
        auVar7._4_2_ = -(ushort)(psVar3[2] == 0);
        auVar7._6_2_ = -(ushort)(psVar3[3] == 0);
        auVar7._8_2_ = -(ushort)(psVar3[4] == 0);
        auVar7._10_2_ = -(ushort)(psVar3[5] == 0);
        auVar7._12_2_ = -(ushort)(psVar3[6] == 0);
        auVar7._14_2_ = -(ushort)(psVar3[7] == 0);
        if ((((((((((((((((SUB161(auVar7 >> 7,0) & 1) != 0 || (SUB161(auVar7 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar7 >> 0x17,0) & 1) != 0) || (SUB161(auVar7 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar7 >> 0x27,0) & 1) != 0) || (SUB161(auVar7 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar7 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar7 >> 0x3f,0) & 1) != 0) || (SUB161(auVar7 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar7 >> 0x4f,0) & 1) != 0) || (SUB161(auVar7 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar7 >> 0x5f,0) & 1) != 0) || (SUB161(auVar7 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar7 >> 0x6f,0) & 1) != 0) || (auVar7._14_2_ >> 7 & 1) != 0) ||
            (auVar7._14_2_ & 0x8000) != 0) break;
      }
      for (; (psVar3 != param_1 + param_2 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
    }
    else {
      for (; (psVar3 != param_1 + param_2 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
    }
  }
  else {
    if (((uint)param_1 & 1) == 0) {
      uVar5 = (-(uint)(((uint)param_1 & 0x1f) != 0) & 0x20 - ((uint)param_1 & 0x1f)) >> 1;
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      for (; (psVar3 != param_1 + uVar5 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
      }
      uVar4 = (int)psVar3 - (int)param_1 >> 1;
      if (uVar4 != uVar5) {
        return uVar4;
      }
      pauVar6 = (undefined1 (*) [32])(param_1 + uVar4);
      while ((pauVar6 != (undefined1 (*) [32])(param_1 + (param_2 - uVar5 & 0xffffffe0) + uVar4) &&
             (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar6),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar6 = pauVar6 + 1;
      }
      for (; (pauVar6 != (undefined1 (*) [32])(param_1 + param_2) && (*(short *)*pauVar6 != 0));
          pauVar6 = (undefined1 (*) [32])(*pauVar6 + 2)) {
      }
      return (int)pauVar6 - (int)param_1 >> 1;
    }
    for (; (psVar3 != param_1 + param_2 && (*psVar3 != 0)); psVar3 = psVar3 + 1) {
    }
  }
  iVar2 = (int)psVar3 - (int)param_1;
LAB_0044c0da:
  return iVar2 >> 1;
}


