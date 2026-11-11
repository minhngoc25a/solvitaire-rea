// Function: FUN_0046e5f0
// Entry: 0046e5f0
// Size: 400 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046e5f0(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  int iVar18;
  undefined4 *puVar19;
  uint extraout_ECX;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  float10 fVar24;
  short sVar25;
  uint uVar26;
  uint uVar30;
  double dVar29;
  uint uVar31;
  uint uVar32;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar27;
  undefined6 uVar28;
  
  iVar18 = FUN_004a47f0(param_1,0x100);
  *param_2 = iVar18;
  uVar16 = _UNK_0050db4c;
  uVar15 = _UNK_0050db48;
  uVar14 = _UNK_0050db44;
  uVar22 = _DAT_0050db40;
  iVar13 = _UNK_0050c3ac;
  iVar12 = _UNK_0050c3a8;
  iVar11 = _UNK_0050c3a4;
  iVar10 = _DAT_0050c3a0;
  uVar26 = param_3 - 95000;
  if (uVar26 < 0x2711) {
    iVar23 = -4 - iVar18;
    iVar21 = 4 - iVar18;
    iVar20 = -8 - iVar18;
    puVar19 = (undefined4 *)(iVar18 + 8);
    iVar18 = 8;
    do {
      uVar26 = (int)puVar19 + iVar10 + iVar20 & uVar22;
      uVar30 = (int)puVar19 + iVar11 + iVar20 & uVar14;
      uVar31 = (int)puVar19 + iVar12 + iVar20 & uVar15;
      uVar32 = (int)puVar19 + iVar13 + iVar20 & uVar16;
      sVar3 = (short)uVar26;
      cVar6 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar26 - (0xff < sVar3);
      sVar3 = (short)(uVar26 >> 0x10);
      sVar25 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar3),
                        cVar6);
      sVar3 = (short)uVar30;
      cVar7 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar30 - (0xff < sVar3);
      sVar3 = (short)(uVar30 >> 0x10);
      uVar27 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar3),
                        CONCAT12(cVar7,sVar25));
      sVar3 = (short)uVar31;
      cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar31 - (0xff < sVar3);
      sVar3 = (short)(uVar31 >> 0x10);
      uVar28 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar31 >> 0x10) - (0xff < sVar3),
                        CONCAT14(cVar8,uVar27));
      sVar3 = (short)uVar32;
      cVar9 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar32 - (0xff < sVar3);
      sVar5 = (short)(uVar32 >> 0x10);
      sVar3 = (short)((uint)uVar27 >> 0x10);
      sVar4 = (short)((uint6)uVar28 >> 0x20);
      sVar5 = (short)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar32 >> 0x10) -
                               (0xff < sVar5),CONCAT16(cVar9,uVar28)) >> 0x30);
      puVar19[-2] = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar9 - (0xff < sVar5),
                             CONCAT12((0 < sVar4) * (sVar4 < 0x100) * cVar8 - (0xff < sVar4),
                                      CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar7 -
                                               (0xff < sVar3),
                                               (0 < sVar25) * (sVar25 < 0x100) * cVar6 -
                                               (0xff < sVar25))));
      puVar1 = puVar19 + 4;
      uVar26 = (int)puVar19 + iVar10 + iVar23 & uVar22;
      uVar30 = (int)puVar19 + iVar11 + iVar23 & uVar14;
      uVar31 = (int)puVar19 + iVar12 + iVar23 & uVar15;
      uVar32 = (int)puVar19 + iVar13 + iVar23 & uVar16;
      sVar3 = (short)uVar26;
      cVar6 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar26 - (0xff < sVar3);
      sVar3 = (short)(uVar26 >> 0x10);
      sVar25 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar3),
                        cVar6);
      sVar3 = (short)uVar30;
      cVar7 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar30 - (0xff < sVar3);
      sVar3 = (short)(uVar30 >> 0x10);
      uVar27 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar3),
                        CONCAT12(cVar7,sVar25));
      sVar3 = (short)uVar31;
      cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar31 - (0xff < sVar3);
      sVar3 = (short)(uVar31 >> 0x10);
      uVar28 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar31 >> 0x10) - (0xff < sVar3),
                        CONCAT14(cVar8,uVar27));
      sVar3 = (short)uVar32;
      cVar9 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar32 - (0xff < sVar3);
      sVar5 = (short)(uVar32 >> 0x10);
      sVar3 = (short)((uint)uVar27 >> 0x10);
      sVar4 = (short)((uint6)uVar28 >> 0x20);
      sVar5 = (short)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar32 >> 0x10) -
                               (0xff < sVar5),CONCAT16(cVar9,uVar28)) >> 0x30);
      puVar19[-1] = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar9 - (0xff < sVar5),
                             CONCAT12((0 < sVar4) * (sVar4 < 0x100) * cVar8 - (0xff < sVar4),
                                      CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar7 -
                                               (0xff < sVar3),
                                               (0 < sVar25) * (sVar25 < 0x100) * cVar6 -
                                               (0xff < sVar25))));
      uVar26 = iVar18 + iVar10 & uVar22;
      uVar30 = iVar18 + iVar11 & uVar14;
      uVar31 = iVar18 + iVar12 & uVar15;
      uVar32 = iVar18 + iVar13 & uVar16;
      sVar3 = (short)uVar26;
      cVar6 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar26 - (0xff < sVar3);
      sVar3 = (short)(uVar26 >> 0x10);
      sVar25 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar3),
                        cVar6);
      sVar3 = (short)uVar30;
      cVar7 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar30 - (0xff < sVar3);
      sVar3 = (short)(uVar30 >> 0x10);
      uVar27 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar3),
                        CONCAT12(cVar7,sVar25));
      sVar3 = (short)uVar31;
      cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar31 - (0xff < sVar3);
      sVar3 = (short)(uVar31 >> 0x10);
      uVar28 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar31 >> 0x10) - (0xff < sVar3),
                        CONCAT14(cVar8,uVar27));
      sVar3 = (short)uVar32;
      cVar9 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar32 - (0xff < sVar3);
      sVar5 = (short)(uVar32 >> 0x10);
      sVar3 = (short)((uint)uVar27 >> 0x10);
      sVar4 = (short)((uint6)uVar28 >> 0x20);
      sVar5 = (short)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar32 >> 0x10) -
                               (0xff < sVar5),CONCAT16(cVar9,uVar28)) >> 0x30);
      *puVar19 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar9 - (0xff < sVar5),
                          CONCAT12((0 < sVar4) * (sVar4 < 0x100) * cVar8 - (0xff < sVar4),
                                   CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar7 - (0xff < sVar3),
                                            (0 < sVar25) * (sVar25 < 0x100) * cVar6 -
                                            (0xff < sVar25))));
      uVar26 = (int)puVar19 + iVar10 + iVar21 & uVar22;
      uVar30 = (int)puVar19 + iVar11 + iVar21 & uVar14;
      uVar31 = (int)puVar19 + iVar12 + iVar21 & uVar15;
      uVar32 = (int)puVar19 + iVar13 + iVar21 & uVar16;
      sVar3 = (short)uVar26;
      cVar6 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar26 - (0xff < sVar3);
      sVar3 = (short)(uVar26 >> 0x10);
      sVar25 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar3),
                        cVar6);
      sVar3 = (short)uVar30;
      cVar7 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar30 - (0xff < sVar3);
      sVar3 = (short)(uVar30 >> 0x10);
      uVar27 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar3),
                        CONCAT12(cVar7,sVar25));
      sVar3 = (short)uVar31;
      cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar31 - (0xff < sVar3);
      sVar3 = (short)(uVar31 >> 0x10);
      uVar28 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar31 >> 0x10) - (0xff < sVar3),
                        CONCAT14(cVar8,uVar27));
      sVar3 = (short)uVar32;
      cVar9 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar32 - (0xff < sVar3);
      sVar5 = (short)(uVar32 >> 0x10);
      sVar3 = (short)((uint)uVar27 >> 0x10);
      sVar4 = (short)((uint6)uVar28 >> 0x20);
      sVar5 = (short)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar32 >> 0x10) -
                               (0xff < sVar5),CONCAT16(cVar9,uVar28)) >> 0x30);
      puVar19[1] = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar9 - (0xff < sVar5),
                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) * cVar8 - (0xff < sVar4),
                                     CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar7 - (0xff < sVar3)
                                              ,(0 < sVar25) * (sVar25 < 0x100) * cVar6 -
                                               (0xff < sVar25))));
      puVar19 = puVar1;
      iVar18 = iVar18 + 0x10;
    } while ((uint)(iVar20 + (int)puVar1) < 0x100);
    return;
  }
  uVar22 = 0;
  do {
    puVar2 = (undefined1 *)(uVar22 + iVar18);
    if (puVar2 + (-1 - iVar18) < (undefined1 *)0xfe) {
      dVar29 = (double)(int)uVar22 / _DAT_0050c0a8;
      FUN_00483370(uVar26);
      fVar24 = FUN_0046a200(dVar29 * _DAT_0050c0a8 + DAT_0050c088);
      uVar17 = (undefined1)(int)fVar24;
      uVar26 = extraout_ECX;
    }
    else {
      uVar17 = (undefined1)uVar22;
    }
    uVar22 = uVar22 + 1;
    *puVar2 = uVar17;
  } while (uVar22 < 0x100);
  return;
}


