// Function: FUN_00483370
// Entry: 00483370
// Size: 2887 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00483370(undefined4 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  bool bVar11;
  ushort in_FPUControlWord;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 in_XMM0 [16];
  undefined2 in_XMM1_Wa;
  undefined2 in_XMM1_Wb;
  undefined2 in_XMM1_Wc;
  ushort in_XMM1_Wd;
  double dVar15;
  double dVar16;
  ushort uVar20;
  ushort in_XMM1_Wh;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar21;
  ulonglong in_XMM2_Qb;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar26;
  double dVar27;
  undefined1 in_XMM3 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  
  dVar14 = in_XMM0._0_8_;
  uVar7 = in_XMM0._0_4_;
  uVar9 = in_XMM0._4_4_;
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    FUN_00469ee4(param_1,uVar7,uVar9,CONCAT22(in_XMM1_Wb,in_XMM1_Wa),CONCAT22(in_XMM1_Wd,in_XMM1_Wc)
                );
    return;
  }
  dVar12 = (double)((ulonglong)dVar14 >> 0x2c);
  uVar10 = in_XMM0._6_2_;
  uVar3 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
  dVar35 = (double)((ulonglong)DAT_0050e6a0 & (ulonglong)dVar14 | DAT_0050e6b0) *
           *(double *)((int)&DAT_0051c630 + uVar3 * 4);
  dVar13 = *(double *)((int)&DAT_0051c630 + uVar3 * 4);
  dVar34 = *(double *)(&DAT_0051ca40 + uVar3 * 8);
  dVar16 = *(double *)(&UNK_0051ca48 + uVar3 * 8);
  uVar3 = 0x7fef - uVar10;
  if ((uVar10 - 0x10 | uVar3) < 0x80000000) {
    uVar3 = 0;
    uVar8 = 0x3fe7f;
LAB_00483423:
    uVar4 = ((ushort)((ulonglong)dVar35 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar31 = (double)((ulonglong)dVar14 & (ulonglong)DAT_0050e6a0 | DAT_0050e6b0);
    dVar15 = (double)(DAT_0050e6f8 & (ulonglong)dVar31);
    auVar29._8_8_ = in_XMM3._8_8_ >> 0x1f;
    dVar31 = dVar31 - dVar15;
    uVar5 = ((ushort)((ulonglong)(dVar35 * *(double *)(&DAT_0051d250 + uVar4 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar33 = dVar13 * *(double *)(&DAT_0051d250 + uVar4 * 4) *
             *(double *)(&DAT_0051de70 + uVar5 * 4);
    dVar35 = dVar35 * *(double *)(&DAT_0051d250 + uVar4 * 4) *
             *(double *)(&DAT_0051de70 + uVar5 * 4);
    dVar34 = dVar34 + *(double *)(&DAT_0051d660 + uVar4 * 8) +
             (double)(int)((longlong)dVar12 - (ulonglong)uVar8 >> 8) +
             *(double *)(&DAT_0051e680 + uVar5 * 8);
    dVar13 = (double)(DAT_0050e6f8 & (ulonglong)dVar33);
    dVar33 = dVar33 - dVar13;
    dVar36 = DAT_0050e700 + dVar35;
    dVar12 = dVar34 + dVar36;
    dVar14 = (double)CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
    dVar34 = dVar34 - dVar12;
    auVar29._0_8_ = DAT_0050e6f8;
    uVar8 = (uint)(ushort)((ulonglong)dVar12 >> 0x30);
    dVar13 = (((dVar35 - dVar13 * dVar15) - dVar15 * dVar33) - dVar13 * dVar31) - dVar31 * dVar33;
    dVar15 = dVar36 - dVar13;
    dVar35 = dVar12 - dVar13;
    if ((in_XMM1_Wd & 0x7ff0) < 0x7ff0) {
      iVar6 = ((in_XMM1_Wd & 0x7ff0) - 0x3ff0) + (uVar8 & 0x7ff0);
      if ((0x40a0U - iVar6 | iVar6 - 0x3c70U) < 0x80000000) {
LAB_00483575:
        dVar31 = (double)(DAT_0050e6f8 & (ulonglong)dVar14);
        dVar32 = (double)(DAT_0050e6f8 & (ulonglong)dVar35);
        dVar33 = dVar31 * dVar32 * 128.0;
        uVar7 = (uint)ROUND(dVar33);
        if (0 < (int)(0x1ff7f - uVar7 | uVar7 + 0x1e1ff)) {
          return;
        }
        if ((int)uVar7 < 1) {
          if ((int)uVar7 < -0x3fdff) {
LAB_00483dd1:
            iVar6 = 0x19;
            goto LAB_00483b90;
          }
          uVar3 = uVar3 + 0x80;
          uVar9 = (uVar7 & 0xffffff80) + 0x3fe80;
          uVar10 = 0;
        }
        else {
          if (0x3ffff < uVar7) goto LAB_00483df4;
          uVar3 = uVar3 + 0x3ff00;
          uVar9 = uVar7 - 0x80 & 0xffffff80;
          uVar10 = 0x3ff0;
        }
        iVar6 = (uVar7 & 0x7f) * 0x10;
        uVar7 = ((int)-(uVar9 - 0x1ff80) >> 7) + 2;
        auVar19._0_8_ = (double)((ulonglong)uVar9 << 0x2d);
        auVar19._8_4_ = 0;
        auVar19._12_4_ = (int)((ulonglong)auVar19._0_8_ >> 0x20);
        dVar27 = *(double *)(&DAT_0051f6b0 + iVar6) * auVar19._0_8_;
        dVar14 = (dVar33 - ((dVar33 + _DAT_0050e690) - _DAT_0050e690)) * 0.0078125 +
                 dVar31 * (dVar35 - dVar32) + dVar32 * (dVar14 - dVar31) +
                 (dVar35 - dVar32) * (dVar14 - dVar31) +
                 ((_DAT_0051f690 * dVar15 + _DAT_0051f6a0 * dVar15 * dVar15) * dVar15 * dVar15 +
                  _UNK_0051f698 * dVar15 + _UNK_0051f6a8 * dVar15 * dVar15 +
                 dVar16 + *(double *)(&DAT_0051d668 + uVar4 * 8) +
                 *(double *)(&DAT_0051e688 + uVar5 * 8) +
                 ((dVar34 + dVar36) - (dVar13 - (dVar12 - dVar35)))) *
                 (double)CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
        dVar13 = (double)((ulonglong)uVar3 << 0x2d);
        uVar26 = (ulonglong)(uVar7 + (uVar7 & 0x20));
        dVar34 = (double)(-1L << uVar26 & (ulonglong)dVar27);
        dVar14 = dVar14 * dVar14 * dVar27 *
                 (_DAT_0050e6e0 + _DAT_0050e6d0 * dVar14) * dVar14 * dVar14 +
                 *(double *)(&UNK_0051f6b8 + iVar6) * auVar19._8_8_ +
                 (_UNK_0050e6e8 + _UNK_0050e6d8 * dVar14) * dVar14 * dVar14 * dVar27 +
                 DAT_0050e6f0 * dVar14 * dVar27;
        dVar16 = (double)((ulonglong)(dVar34 + dVar14) & -1L << uVar26);
        dVar14 = dVar14 + (dVar34 - dVar16) + (dVar27 - dVar34);
        if ((int)(uVar9 - 0x1ff80) < 1) {
          dVar14 = dVar14 * dVar13 + dVar16 * dVar13;
          dVar14 = dVar14 + (double)((ulonglong)uVar10 << 0x30) * dVar14;
          iVar6 = 0x18;
          if ((((ushort)((ulonglong)dVar14 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (iVar6 = 0x19, ((ulonglong)dVar14 & 0x7ff0000000000000) != 0)) {
            return;
          }
        }
        else {
          dVar13 = (dVar14 + dVar16) * dVar13;
          dVar13 = dVar13 + (double)((ulonglong)uVar10 << 0x30) * dVar13;
          iVar6 = 0x18;
          if ((((ushort)((ulonglong)dVar13 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (iVar6 = 0x19, ((ulonglong)dVar13 & 0x7ff0000000000000) != 0)) {
            return;
          }
        }
      }
      else {
        dVar12 = dVar14 * dVar35;
        uVar7 = (ushort)((ulonglong)dVar12 >> 0x30) & 0x7ff0;
        uVar9 = uVar7 - 0x3c70;
        if ((0x40a0 - uVar7 | uVar9) < 0x80000000) goto LAB_00483575;
        if (0x7fffffff < uVar9) {
          return;
        }
        if (((in_XMM1_Wd ^ (uVar10 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_00483dd1;
LAB_00483df4:
        iVar6 = 0x18;
      }
      goto LAB_00483b90;
    }
    auVar22._2_2_ = in_XMM1_Wb;
    auVar22._0_2_ = in_XMM1_Wa;
    auVar22._4_2_ = in_XMM1_Wc;
    auVar22._6_2_ = in_XMM1_Wd;
    auVar22._8_8_ = in_XMM2_Qb;
    bVar11 = uVar7 == 0;
    uVar7 = uVar8;
    if (bVar11) {
      if (uVar9 == 0x3ff00000) {
        return;
      }
      uVar7 = uVar9;
      if (uVar9 == 0xbff00000) {
        return;
      }
    }
  }
  else {
    uVar2 = CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
    auVar29._8_8_ = in_XMM3._8_8_;
    auVar29._0_8_ = CONCAT44(DAT_0050e6c0._4_4_,(undefined4)DAT_0050e6c0);
    auVar22._8_8_ = in_XMM2_Qb;
    auVar22._0_8_ = uVar2;
    uVar8 = (uint)((ulonglong)uVar2 >> 0x20) & DAT_0050e6c0._4_4_;
    if (uVar8 < 0x7ff00000) {
      if (CONCAT22(in_XMM1_Wb,in_XMM1_Wa) == 0 && uVar8 == 0) {
        iVar6 = 0x1a;
        if (uVar7 != 0 || (uVar9 & 0x7fffffff) != 0) {
          iVar6 = 0x1d;
          if (((uVar9 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar9 & 0x7fffffff) < 0x7ff00000 || (uVar7 == 0)))) {
            return;
          }
        }
        goto LAB_00483b90;
      }
      if ((int)uVar3 < 0) {
        auVar28._0_8_ = CONCAT44(DAT_0050e6c0._4_4_,(undefined4)DAT_0050e6c0) << 0x34;
        auVar28._8_8_ = auVar29._8_8_ << 0x34;
        iVar6 = (uVar8 >> 0x14) - 0x3f3;
        auVar29 = (undefined1  [16])0x0;
        uVar26 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar6) * (short)((uint)iVar6 >> 0x10),
                          (ushort)(-1 < (short)iVar6) * (short)iVar6);
        uVar20 = (in_XMM1_Wh & in_XMM3._14_2_) >> 4;
        lVar21 = SUB168(auVar22 | auVar28,0) << uVar26;
        lVar25 = SUB168(auVar22 | auVar28,8) << uVar26;
        auVar23._0_4_ = -(uint)((int)lVar21 == 0);
        auVar23._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0);
        auVar23._8_4_ = -(uint)((int)lVar25 == 0);
        auVar23._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
        bVar1 = SUB161(auVar23 >> 7,0) & 1 | (SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar23 >> 0x17,0) & 1) << 2 | (SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar23 >> 0x27,0) & 1) << 4 | (SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar23 >> 0x37,0) & 1) << 6 | SUB161(auVar23 >> 0x3f,0) << 7;
        uVar8 = 0x7fef - uVar3 & 0x7fff;
        if (0x7fef < uVar8) {
          auVar17._0_4_ = -(uint)((int)((ulonglong)DAT_0050e6a0 & (ulonglong)dVar14) == 0);
          auVar17._4_4_ = -(uint)((int)(((ulonglong)DAT_0050e6a0 & (ulonglong)dVar14) >> 0x20) == 0)
          ;
          auVar17._8_4_ = 0xffffffff;
          auVar17._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff)
          {
            if ((uVar10 & 0x8000) == 0) {
              if ((in_XMM1_Wd & 0x8000) == 0) {
                return;
              }
              return;
            }
            if ((bVar1 == 0xff) &&
               (lVar21 = CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa))),
               uVar26 = (ulonglong)
                        ((((uint)((ulonglong)lVar21 >> 0x20) & DAT_0050e6c0._4_4_) >> 0x14) - 0x3f4)
               , lVar21 = lVar21 << uVar26, lVar25 = auVar17._8_8_ << uVar26,
               auVar24._0_4_ = -(uint)((int)lVar21 == 0),
               auVar24._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0),
               auVar24._8_4_ = -(uint)((int)lVar25 == 0),
               auVar24._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0),
               (byte)(SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                      (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                      (SUB161(auVar24 >> 0x27,0) & 1) << 4 | (SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                      (SUB161(auVar24 >> 0x37,0) & 1) << 6 | SUB161(auVar24 >> 0x3f,0) << 7) != 0xff
               )) {
              if ((in_XMM1_Wd & 0x8000) != 0) {
                return;
              }
              return;
            }
            if ((in_XMM1_Wd & 0x8000) == 0) {
              return;
            }
            return;
          }
          goto LAB_00483a10;
        }
        if (bVar1 == 0xff) {
          lVar21 = CONCAT26(in_XMM1_Wd,CONCAT24(in_XMM1_Wc,CONCAT22(in_XMM1_Wb,in_XMM1_Wa)));
          uVar26 = (ulonglong)
                   ((((uint)((ulonglong)lVar21 >> 0x20) & DAT_0050e6c0._4_4_) >> 0x14) - 0x3f4);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = DAT_0050e720;
          lVar21 = lVar21 << uVar26;
          lVar25 = (ulonglong)(ushort)((-1 < (short)uVar20) * uVar20) << uVar26;
          auVar22._0_4_ = -(uint)((int)lVar21 == (int)DAT_0050e720);
          auVar22._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == (int)(DAT_0050e720 >> 0x20));
          auVar22._8_4_ = -(uint)((int)lVar25 == 0);
          auVar22._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
          uVar3 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar8) {
            uVar8 = 0xbfe7f;
            in_XMM3._8_8_ = 0;
            in_XMM3._0_8_ = DAT_0050e6a0;
            in_XMM2_Qb = auVar22._8_8_;
            goto LAB_00483423;
          }
          goto LAB_0048382f;
        }
        uVar26 = (ulonglong)dVar14 >> 0x20;
        in_XMM2_Qb = auVar23._8_8_ >> 0x20;
        uVar3 = 0;
        uVar8 = 0;
        if (uVar7 != 0 || (uVar9 & 0x7fffffff) != 0) {
          iVar6 = 0x1c;
          goto LAB_00483b90;
        }
LAB_004838b5:
        in_XMM3 = auVar29;
        dVar14 = dVar12;
        if ((uVar8 & 0x7fffffff) == 0) {
          if ((in_XMM1_Wd & 0x8000) == 0) {
            if ((uVar8 & uVar3 << 0xd) != 0) {
              return;
            }
            return;
          }
          iVar6 = 0x1b;
          goto LAB_00483b90;
        }
      }
      else {
        uVar3 = 0;
LAB_0048382f:
        in_XMM2_Qb = auVar22._8_8_;
        dVar12 = dVar14 * 1.8446744073709552e+19;
        uVar8 = uVar9;
        in_XMM3 = auVar29;
        dVar14 = dVar12;
        dVar35 = DAT_0050e6a0;
        uVar26 = DAT_0050e6b0;
        if (uVar7 == 0) goto LAB_004838b5;
      }
      dVar12 = (double)(((ulonglong)dVar14 & CONCAT44(DAT_0050e6c0._4_4_,(undefined4)DAT_0050e6c0))
                       >> 0x2c);
      uVar8 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
      dVar35 = (double)((ulonglong)dVar35 & (ulonglong)dVar14 | uVar26) *
               *(double *)((int)&DAT_0051c630 + uVar8 * 4);
      dVar13 = *(double *)((int)&DAT_0051c630 + uVar8 * 4);
      dVar34 = *(double *)(&DAT_0051ca40 + uVar8 * 8);
      dVar16 = *(double *)(&UNK_0051ca48 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_00483423;
    }
    uVar3 = uVar9;
    if ((0x7fefffff < (uVar9 & 0x7fffffff)) && ((0x7ff00000 < (uVar9 & 0x7fffffff) || (uVar7 != 0)))
       ) {
LAB_00483a10:
      iVar6 = 0x3ee;
      goto LAB_00483b90;
    }
  }
  uVar26 = (ulonglong)DAT_0050e6a0 & auVar22._0_8_;
  uVar30 = auVar29._8_8_ & auVar22._8_8_;
  auVar18._0_4_ = -(uint)((int)uVar26 == 0);
  auVar18._4_4_ = -(uint)((int)(uVar26 >> 0x20) == 0);
  auVar18._8_4_ = -(uint)((int)uVar30 == 0);
  auVar18._12_4_ = -(uint)((int)(uVar30 >> 0x20) == 0);
  if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
             (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
             (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
             (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) == 0xff) {
    if (uVar7 == 0 && uVar3 == 0xbff00000) {
      return;
    }
    if ((auVar22._6_2_ & 0x8000) == 0) {
      if ((uVar10 & 0x7ff0) < 0x3ff0) {
        return;
      }
    }
    else if (0x3fef < (uVar10 & 0x7ff0)) {
      return;
    }
    return;
  }
  iVar6 = 0x3ee;
LAB_00483b90:
  ___libm_error_support
            ((undefined8 *)&stack0xfffffff0,(undefined8 *)&stack0xfffffff8,
             (undefined8 *)&stack0xffffffe8,iVar6);
  return;
}


