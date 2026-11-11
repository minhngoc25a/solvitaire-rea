// Function: FUN_0044be0a
// Entry: 0044be0a
// Size: 296 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0044be0a(short *param_1)

{
  undefined1 auVar1 [32];
  int iVar2;
  uint uVar3;
  undefined1 (*pauVar4) [32];
  short *psVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  psVar5 = param_1;
  if (DAT_00544988 < 5) {
    if (DAT_00544988 < 1) {
      for (; *psVar5 != 0; psVar5 = psVar5 + 1) {
      }
    }
    else {
      if (((uint)param_1 & 1) != 0) {
        for (; *psVar5 != 0; psVar5 = psVar5 + 1) {
        }
        goto LAB_0044be34;
      }
      uVar6 = (-(uint)(((uint)param_1 & 0xf) != 0) & 0x10 - ((uint)param_1 & 0xf)) >> 1;
      for (psVar5 = param_1; (psVar5 != param_1 + uVar6 && (*psVar5 != 0)); psVar5 = psVar5 + 1) {
      }
      uVar3 = (int)psVar5 - (int)param_1 >> 1;
      if (uVar3 != uVar6) {
        return uVar3;
      }
      psVar5 = param_1 + uVar3;
      while( true ) {
        auVar7._0_2_ = -(ushort)(*psVar5 == 0);
        auVar7._2_2_ = -(ushort)(psVar5[1] == 0);
        auVar7._4_2_ = -(ushort)(psVar5[2] == 0);
        auVar7._6_2_ = -(ushort)(psVar5[3] == 0);
        auVar7._8_2_ = -(ushort)(psVar5[4] == 0);
        auVar7._10_2_ = -(ushort)(psVar5[5] == 0);
        auVar7._12_2_ = -(ushort)(psVar5[6] == 0);
        auVar7._14_2_ = -(ushort)(psVar5[7] == 0);
        if ((((((((((((((((SUB161(auVar7 >> 7,0) & 1) != 0 || (SUB161(auVar7 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar7 >> 0x17,0) & 1) != 0) || (SUB161(auVar7 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar7 >> 0x27,0) & 1) != 0) || (SUB161(auVar7 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar7 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar7 >> 0x3f,0) & 1) != 0) || (SUB161(auVar7 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar7 >> 0x4f,0) & 1) != 0) || (SUB161(auVar7 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar7 >> 0x5f,0) & 1) != 0) || (SUB161(auVar7 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar7 >> 0x6f,0) & 1) != 0) || (auVar7._14_2_ >> 7 & 1) != 0) ||
            (auVar7._14_2_ & 0x8000) != 0) break;
        psVar5 = psVar5 + 8;
      }
      for (; *psVar5 != 0; psVar5 = psVar5 + 1) {
      }
    }
    iVar2 = (int)psVar5 - (int)param_1;
  }
  else {
    if (((uint)param_1 & 1) == 0) {
      uVar6 = (-(uint)(((uint)param_1 & 0x1f) != 0) & 0x20 - ((uint)param_1 & 0x1f)) >> 1;
      for (; (psVar5 != param_1 + uVar6 && (*psVar5 != 0)); psVar5 = psVar5 + 1) {
      }
      uVar3 = (int)psVar5 - (int)param_1 >> 1;
      if (uVar3 != uVar6) {
        return uVar3;
      }
      pauVar4 = (undefined1 (*) [32])(param_1 + uVar3);
      while (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar4),
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
                            (SUB321(auVar1 >> 0x77,0) & 1) == 0) && SUB321(auVar1 >> 0x7f,0) == '\0'
                           ) && (SUB321(auVar1 >> 0x87,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x8f,0) & 1) == 0) && (SUB321(auVar1 >> 0x97,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xa7,0) & 1) == 0) && (SUB321(auVar1 >> 0xaf,0) & 1) == 0)
                    && (SUB321(auVar1 >> 0xb7,0) & 1) == 0) && SUB321(auVar1 >> 0xbf,0) == '\0') &&
                  (SUB321(auVar1 >> 199,0) & 1) == 0) && (SUB321(auVar1 >> 0xcf,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xd7,0) & 1) == 0) && (SUB321(auVar1 >> 0xdf,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xe7,0) & 1) == 0) && (SUB321(auVar1 >> 0xef,0) & 1) == 0) &&
            (SUB321(auVar1 >> 0xf7,0) & 1) == 0) && -1 < auVar1[0x1f]) {
        pauVar4 = pauVar4 + 1;
      }
      for (; *(short *)*pauVar4 != 0; pauVar4 = (undefined1 (*) [32])(*pauVar4 + 2)) {
      }
      return (int)pauVar4 - (int)param_1 >> 1;
    }
    for (; *psVar5 != 0; psVar5 = psVar5 + 1) {
    }
LAB_0044be34:
    iVar2 = (int)psVar5 - (int)param_1;
  }
  return iVar2 >> 1;
}


