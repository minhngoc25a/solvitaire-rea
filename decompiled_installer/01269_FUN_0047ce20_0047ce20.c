// Function: FUN_0047ce20
// Entry: 0047ce20
// Size: 610 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] __cdecl FUN_0047ce20(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  ushort uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  short sVar13;
  short sVar14;
  int local_c;
  
  uVar1 = *(ushort *)*param_2;
  if (uVar1 != 0) {
    if (1 < DAT_00544988) {
      if (((uint)param_2 & 0xfff) < 0xff1) {
        auVar7 = *param_2;
      }
      else {
        auVar8._2_2_ = _UNK_0050e112;
        auVar8._0_2_ = _DAT_0050e110;
        auVar8._4_2_ = _UNK_0050e114;
        auVar8._6_2_ = _UNK_0050e116;
        auVar8._8_2_ = _UNK_0050e118;
        auVar8._10_2_ = _UNK_0050e11a;
        auVar8._12_2_ = _UNK_0050e11c;
        auVar8._14_2_ = _UNK_0050e11e;
        iVar3 = 8;
        pauVar4 = param_2;
        uVar5 = uVar1;
        do {
          auVar7._0_8_ = auVar8._2_8_;
          auVar7._8_8_ = auVar8._8_8_ >> 0x10 | (ulonglong)uVar5 << 0x30;
          if (uVar5 != 0) {
            pauVar4 = (undefined1 (*) [16])(*pauVar4 + 2);
            uVar5 = *(ushort *)*pauVar4;
          }
          iVar3 = iVar3 + -1;
          auVar8 = auVar7;
        } while (iVar3 != 0);
      }
LAB_0047ce99:
      while( true ) {
        while( true ) {
          uVar2 = (uint)param_1 & 0xfff;
          pauVar4 = param_2;
          if (uVar2 < 0xff1) break;
          if (*(ushort *)*param_1 == 0) goto LAB_0047d078;
          pauVar6 = param_1;
          if (*(ushort *)*param_1 == uVar1) goto LAB_0047cecb;
          param_1 = (undefined1 (*) [16])(*param_1 + 2);
        }
        pcmpistri(auVar7,*param_1,0xd);
        if (uVar2 < 0xff1) break;
        param_1 = param_1 + 1;
      }
      if (uVar2 < 0xff0) {
        iVar3 = pcmpistri(auVar7,*param_1,0xd);
        param_1 = (undefined1 (*) [16])(*param_1 + iVar3 * 2);
        pauVar6 = param_1;
LAB_0047cecb:
        do {
          for (; 0xff0 < ((uint)param_1 & 0xfff); param_1 = (undefined1 (*) [16])(*param_1 + 2)) {
LAB_0047cf20:
            if (*(short *)*pauVar4 == 0) {
              return pauVar6;
            }
            if (*(short *)*param_1 != *(short *)*pauVar4) goto LAB_0047cf3c;
            pauVar4 = (undefined1 (*) [16])(*pauVar4 + 2);
          }
          uVar2 = (uint)pauVar4 & 0xfff;
          if (0xff0 < uVar2) goto LAB_0047cf20;
          pcmpistri(*pauVar4,*param_1,0xd);
          if (!SBORROW4(uVar2,0xff0)) goto LAB_0047cf3c;
          if ((int)(uVar2 - 0xff0) < 0) {
            return pauVar6;
          }
          param_1 = param_1 + 1;
          pauVar4 = pauVar4 + 1;
        } while( true );
      }
      goto LAB_0047d078;
    }
    if (DAT_00544988 == 1) {
      auVar8 = pshuflw(ZEXT216(uVar1),ZEXT216(uVar1),0);
LAB_0047cf67:
      for (; ((uint)param_1 & 0xfff) < 0xff1; param_1 = param_1 + 1) {
        auVar9._0_2_ = -(ushort)(_DAT_0050e110 == *(short *)*param_1);
        auVar9._2_2_ = -(ushort)(_UNK_0050e112 == *(short *)(*param_1 + 2));
        auVar9._4_2_ = -(ushort)(_UNK_0050e114 == *(short *)(*param_1 + 4));
        auVar9._6_2_ = -(ushort)(_UNK_0050e116 == *(short *)(*param_1 + 6));
        auVar9._8_2_ = -(ushort)(_UNK_0050e118 == *(short *)(*param_1 + 8));
        auVar9._10_2_ = -(ushort)(_UNK_0050e11a == *(short *)(*param_1 + 10));
        auVar9._12_2_ = -(ushort)(_UNK_0050e11c == *(short *)(*param_1 + 0xc));
        auVar9._14_2_ = -(ushort)(_UNK_0050e11e == *(short *)(*param_1 + 0xe));
        sVar13 = auVar8._0_2_;
        auVar11._0_2_ = -(ushort)(*(short *)*param_1 == sVar13);
        sVar14 = auVar8._2_2_;
        auVar11._2_2_ = -(ushort)(*(short *)(*param_1 + 2) == sVar14);
        auVar11._4_2_ = -(ushort)(*(short *)(*param_1 + 4) == sVar13);
        auVar11._6_2_ = -(ushort)(*(short *)(*param_1 + 6) == sVar14);
        auVar11._8_2_ = -(ushort)(*(short *)(*param_1 + 8) == sVar13);
        auVar11._10_2_ = -(ushort)(*(short *)(*param_1 + 10) == sVar14);
        auVar11._12_2_ = -(ushort)(*(short *)(*param_1 + 0xc) == sVar13);
        auVar11._14_2_ = -(ushort)(*(short *)(*param_1 + 0xe) == sVar14);
        auVar9 = auVar9 | auVar11;
        uVar5 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar9[0xf] >> 7) << 0xf;
        if (uVar5 != 0) {
          uVar2 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
            }
          }
          param_1 = (undefined1 (*) [16])(*param_1 + (uVar2 & 0xfffffffe));
          break;
        }
      }
      if (*(ushort *)*param_1 != 0) {
        pauVar4 = param_1;
        pauVar6 = param_2;
        if (uVar1 == *(ushort *)*param_1) {
LAB_0047cfb4:
          for (; (((uint)pauVar6 & 0xfff) < 0xff1 && (((uint)pauVar4 & 0xfff) < 0xff1));
              pauVar4 = pauVar4 + 1) {
            auVar10._0_2_ = -(ushort)(_DAT_0050e110 == *(short *)*pauVar6);
            auVar10._2_2_ = -(ushort)(_UNK_0050e112 == *(short *)(*pauVar6 + 2));
            auVar10._4_2_ = -(ushort)(_UNK_0050e114 == *(short *)(*pauVar6 + 4));
            auVar10._6_2_ = -(ushort)(_UNK_0050e116 == *(short *)(*pauVar6 + 6));
            auVar10._8_2_ = -(ushort)(_UNK_0050e118 == *(short *)(*pauVar6 + 8));
            auVar10._10_2_ = -(ushort)(_UNK_0050e11a == *(short *)(*pauVar6 + 10));
            auVar10._12_2_ = -(ushort)(_UNK_0050e11c == *(short *)(*pauVar6 + 0xc));
            auVar10._14_2_ = -(ushort)(_UNK_0050e11e == *(short *)(*pauVar6 + 0xe));
            auVar12._0_2_ =
                 -(ushort)((ushort)-(ushort)(*(short *)*pauVar4 == *(short *)*pauVar6) ==
                          _DAT_0050e110);
            auVar12._2_2_ =
                 -(ushort)((ushort)-(ushort)(*(short *)(*pauVar4 + 2) == *(short *)(*pauVar6 + 2))
                          == _UNK_0050e112);
            auVar12._4_2_ =
                 -(ushort)((ushort)-(ushort)(*(short *)(*pauVar4 + 4) == *(short *)(*pauVar6 + 4))
                          == _UNK_0050e114);
            auVar12._6_2_ =
                 -(ushort)((ushort)-(ushort)(*(short *)(*pauVar4 + 6) == *(short *)(*pauVar6 + 6))
                          == _UNK_0050e116);
            auVar12._8_2_ =
                 -(ushort)((ushort)-(ushort)(*(short *)(*pauVar4 + 8) == *(short *)(*pauVar6 + 8))
                          == _UNK_0050e118);
            auVar12._10_2_ =
                 -(ushort)((ushort)-(ushort)(*(short *)(*pauVar4 + 10) == *(short *)(*pauVar6 + 10))
                          == _UNK_0050e11a);
            auVar12._12_2_ =
                 -(ushort)((ushort)-(ushort)(*(short *)(*pauVar4 + 0xc) ==
                                            *(short *)(*pauVar6 + 0xc)) == _UNK_0050e11c);
            auVar12._14_2_ =
                 -(ushort)((ushort)-(ushort)(*(short *)(*pauVar4 + 0xe) ==
                                            *(short *)(*pauVar6 + 0xe)) == _UNK_0050e11e);
            auVar12 = auVar12 | auVar10;
            uVar5 = (ushort)(SUB161(auVar12 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar12[0xf] >> 7) << 0xf;
            if (uVar5 != 0) {
              uVar2 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                }
              }
              pauVar4 = (undefined1 (*) [16])(*pauVar4 + (uVar2 & 0xfffffffe));
              pauVar6 = (undefined1 (*) [16])(*pauVar6 + (uVar2 & 0xfffffffe));
              break;
            }
            pauVar6 = pauVar6 + 1;
          }
          if (*(short *)*pauVar6 == 0) {
            return param_1;
          }
          if (*(short *)*pauVar4 == *(short *)*pauVar6) {
            pauVar4 = (undefined1 (*) [16])(*pauVar4 + 2);
            pauVar6 = (undefined1 (*) [16])(*pauVar6 + 2);
            goto LAB_0047cfb4;
          }
        }
        param_1 = (undefined1 (*) [16])(*param_1 + 2);
        goto LAB_0047cf67;
      }
    }
    else if (*(short *)*param_1 != 0) {
      local_c = (int)param_1 - (int)param_2;
      pauVar4 = param_2;
      do {
        do {
          if (*(short *)*pauVar4 == 0) {
            return param_1;
          }
        } while ((*(short *)(*pauVar4 + local_c) == *(short *)*pauVar4) &&
                (pauVar4 = (undefined1 (*) [16])(*pauVar4 + 2), *(short *)(*pauVar4 + local_c) != 0)
                );
        if (*(short *)*pauVar4 == 0) {
          return param_1;
        }
        param_1 = (undefined1 (*) [16])(*param_1 + 2);
        local_c = local_c + 2;
        pauVar4 = param_2;
      } while (*(short *)*param_1 != 0);
    }
LAB_0047d078:
    param_1 = (undefined1 (*) [16])0x0;
  }
  return param_1;
LAB_0047cf3c:
  param_1 = (undefined1 (*) [16])(*pauVar6 + 2);
  goto LAB_0047ce99;
}


