// Function: FUN_0042d830
// Entry: 0042d830
// Size: 361 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0042d830(uint param_1,uint param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  undefined8 *puVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  
  dVar12 = _UNK_0050c3c8;
  dVar11 = _DAT_0050c3c0;
  auVar13 = _DAT_0050c3b0;
  uVar14 = 0;
  if ((param_4 != 0) || ((param_3 != 0 && (3 < param_3)))) {
    uVar14 = 0;
    if ((param_2 + (param_3 - 1) * 4 < param_1) || (param_3 * 4 + -4 + param_1 < param_2)) {
      uVar3 = (uint)DAT_0050c410;
      uVar4 = DAT_0050c410._4_4_;
      dVar27 = (double)DAT_0050c410;
      uVar5 = DAT_0050c410._8_4_;
      uVar6 = DAT_0050c410._12_4_;
      dVar28 = DAT_0050c410._8_8_;
      puVar15 = (undefined8 *)(param_1 + 8);
      do {
        do {
          uVar2 = *(undefined8 *)(param_2 + uVar14 * 4);
          dVar19 = (double)(float)uVar2;
          dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
          uVar14 = uVar14 + 4;
          puVar1 = puVar15 + 2;
          lVar17 = -(ulonglong)(dVar19 < dVar27);
          lVar18 = -(ulonglong)(dVar8 < dVar28);
          uVar23 = (uint)lVar17;
          uVar24 = (uint)((ulonglong)lVar17 >> 0x20);
          uVar25 = (uint)lVar18;
          uVar26 = (uint)((ulonglong)lVar18 >> 0x20);
          auVar20._8_4_ = SUB84(dVar8,0);
          auVar20._0_8_ = dVar19;
          auVar20._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          auVar20 = minpd(auVar13,auVar20);
          auVar21._0_4_ = ~uVar23 & auVar20._0_4_;
          auVar21._4_4_ = ~uVar24 & auVar20._4_4_;
          auVar21._8_4_ = ~uVar25 & auVar20._8_4_;
          auVar21._12_4_ = ~uVar26 & auVar20._12_4_;
          auVar9._4_4_ = uVar24 & uVar4;
          auVar9._0_4_ = uVar23 & uVar3;
          auVar9._8_4_ = uVar25 & uVar5;
          auVar9._12_4_ = uVar26 & uVar6;
          puVar15[-1] = CONCAT44((int)(SUB168(auVar21 | auVar9,8) * dVar12),
                                 (int)(SUB168(auVar21 | auVar9,0) * dVar11));
          uVar2 = *(undefined8 *)((int)puVar15 + (param_2 - param_1));
          dVar19 = (double)(float)uVar2;
          dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
          lVar17 = -(ulonglong)(dVar19 < dVar27);
          lVar18 = -(ulonglong)(dVar8 < dVar28);
          uVar23 = (uint)lVar17;
          uVar24 = (uint)((ulonglong)lVar17 >> 0x20);
          uVar25 = (uint)lVar18;
          uVar26 = (uint)((ulonglong)lVar18 >> 0x20);
          auVar7._8_4_ = SUB84(dVar8,0);
          auVar7._0_8_ = dVar19;
          auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          auVar20 = minpd(auVar13,auVar7);
          auVar22._0_4_ = ~uVar23 & auVar20._0_4_;
          auVar22._4_4_ = ~uVar24 & auVar20._4_4_;
          auVar22._8_4_ = ~uVar25 & auVar20._8_4_;
          auVar22._12_4_ = ~uVar26 & auVar20._12_4_;
          auVar10._4_4_ = uVar24 & uVar4;
          auVar10._0_4_ = uVar23 & uVar3;
          auVar10._8_4_ = uVar25 & uVar5;
          auVar10._12_4_ = uVar26 & uVar6;
          *puVar15 = CONCAT44((int)(SUB168(auVar22 | auVar10,8) * dVar12),
                              (int)(SUB168(auVar22 | auVar10,0) * dVar11));
          puVar15 = puVar1;
        } while (param_4 != 0);
      } while (uVar14 < (param_3 & 0xfffffffc));
    }
  }
  dVar27 = DAT_0050c360;
  dVar12 = DAT_0050c098;
  dVar11 = DAT_0050c078;
  if ((param_4 != 0) || (uVar14 < param_3)) {
    piVar16 = (int *)(uVar14 * 4 + param_1);
    do {
      dVar28 = (double)*(float *)((int)piVar16 + (param_2 - param_1));
      dVar19 = dVar11;
      if ((dVar11 <= dVar28) && (dVar19 = dVar12, dVar28 <= dVar12)) {
        dVar19 = dVar28;
      }
      uVar14 = uVar14 + 1;
      *piVar16 = (int)(dVar19 * dVar27);
      piVar16 = piVar16 + 1;
    } while ((param_4 != 0) || (uVar14 < param_3));
  }
  return;
}


