// Function: FUN_0045aea0
// Entry: 0045aea0
// Size: 813 bytes
// Thunk: false
// External: false


bool __cdecl FUN_0045aea0(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined8 uVar10;
  ulonglong uVar11;
  uint5 uVar12;
  undefined6 uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  short sVar26;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  longlong lVar53;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 uVar39;
  undefined2 uVar40;
  
  uVar22 = 0;
  do {
    bVar3 = ((byte *)(param_2 + 0x94))[uVar22];
    if (((bVar3 != 0x20) && (bVar3 != 0)) && (7 < (byte)(bVar3 - 0x30))) {
      return false;
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 < 8);
  lVar53 = FUN_0045cc30((byte *)(param_2 + 0x94),8);
  uVar22 = 0;
  iVar49 = 0;
  iVar50 = 0;
  iVar51 = 0;
  iVar52 = 0;
  iVar45 = 0;
  iVar46 = 0;
  iVar47 = 0;
  iVar48 = 0;
  iVar41 = 0;
  iVar42 = 0;
  iVar43 = 0;
  iVar44 = 0;
  do {
    uVar4 = *(uint *)(param_2 + uVar22);
    auVar6[0xc] = (char)(uVar4 >> 0x18);
    auVar6._0_12_ = ZEXT712(0);
    uVar12 = CONCAT32(auVar6._10_3_,(ushort)(byte)(uVar4 >> 0x10));
    auVar18._5_8_ = 0;
    auVar18._0_5_ = uVar12;
    iVar45 = iVar45 + (uVar4 & 0xff);
    iVar46 = iVar46 + (int)CONCAT72(SUB137(auVar18 << 0x40,6),(ushort)(byte)(uVar4 >> 8));
    iVar47 = iVar47 + (int)uVar12;
    iVar48 = iVar48 + (uint)(uint3)(auVar6._10_3_ >> 0x10);
    uVar4 = *(uint *)(param_2 + 4 + uVar22);
    uVar22 = uVar22 + 8;
    auVar7[0xc] = (char)(uVar4 >> 0x18);
    auVar7._0_12_ = ZEXT712(0);
    uVar12 = CONCAT32(auVar7._10_3_,(ushort)(byte)(uVar4 >> 0x10));
    auVar19._5_8_ = 0;
    auVar19._0_5_ = uVar12;
    iVar41 = iVar41 + (uVar4 & 0xff);
    iVar42 = iVar42 + (int)CONCAT72(SUB137(auVar19 << 0x40,6),(ushort)(byte)(uVar4 >> 8));
    iVar43 = iVar43 + (int)uVar12;
    iVar44 = iVar44 + (uint)(uint3)(auVar7._10_3_ >> 0x10);
  } while (uVar22 < 0x90);
  iVar23 = 0;
  iVar41 = iVar41 + iVar45 + iVar43 + iVar47 + iVar42 + iVar46 + iVar44 + iVar48;
  iVar42 = 0;
  if (uVar22 < 0x94) {
    if (0x94 - uVar22 < 2) {
LAB_0045af81:
      iVar41 = iVar41 + (uint)*(byte *)(uVar22 + param_2);
      uVar22 = uVar22 + 1;
    }
    else {
      do {
        iVar23 = iVar23 + (uint)*(byte *)(param_2 + uVar22);
        pbVar1 = (byte *)(param_2 + 1 + uVar22);
        uVar22 = uVar22 + 2;
        iVar42 = iVar42 + (uint)*pbVar1;
      } while (uVar22 < 0x93);
      if (uVar22 < 0x94) goto LAB_0045af81;
    }
    iVar41 = iVar41 + iVar42 + iVar23;
  }
  if (uVar22 < 0x9c) {
    iVar41 = iVar41 + (0x9c - uVar22) * 0x20;
  }
  iVar46 = 0;
  iVar47 = 0;
  iVar48 = 0;
  iVar23 = 0;
  uVar22 = 0x9c;
  iVar42 = 0;
  iVar43 = 0;
  iVar44 = 0;
  iVar45 = 0;
  do {
    uVar4 = *(uint *)(param_2 + uVar22);
    auVar8[0xc] = (char)(uVar4 >> 0x18);
    auVar8._0_12_ = ZEXT712(0);
    uVar12 = CONCAT32(auVar8._10_3_,(ushort)(byte)(uVar4 >> 0x10));
    auVar20._5_8_ = 0;
    auVar20._0_5_ = uVar12;
    iVar46 = iVar46 + (uVar4 & 0xff);
    iVar47 = iVar47 + (int)CONCAT72(SUB137(auVar20 << 0x40,6),(ushort)(byte)(uVar4 >> 8));
    iVar48 = iVar48 + (int)uVar12;
    iVar23 = iVar23 + (uint)(uint3)(auVar8._10_3_ >> 0x10);
    uVar4 = *(uint *)(param_2 + 4 + uVar22);
    uVar22 = uVar22 + 8;
    auVar9[0xc] = (char)(uVar4 >> 0x18);
    auVar9._0_12_ = ZEXT712(0);
    uVar12 = CONCAT32(auVar9._10_3_,(ushort)(byte)(uVar4 >> 0x10));
    auVar21._5_8_ = 0;
    auVar21._0_5_ = uVar12;
    iVar42 = iVar42 + (uVar4 & 0xff);
    iVar43 = iVar43 + (int)CONCAT72(SUB137(auVar21 << 0x40,6),(ushort)(byte)(uVar4 >> 8));
    iVar44 = iVar44 + (int)uVar12;
    iVar45 = iVar45 + (uint)(uint3)(auVar9._10_3_ >> 0x10);
  } while (uVar22 < 0x1fc);
  iVar24 = 0;
  iVar25 = 0;
  iVar41 = iVar41 + iVar42 + iVar46 + iVar44 + iVar48 + iVar43 + iVar47 + iVar45 + iVar23;
  if (uVar22 < 0x200) {
    if (0x200 - uVar22 < 2) {
LAB_0045b041:
      iVar41 = iVar41 + (uint)*(byte *)(uVar22 + param_2);
    }
    else {
      do {
        iVar24 = iVar24 + (uint)*(byte *)(param_2 + uVar22);
        pbVar1 = (byte *)(param_2 + 1 + uVar22);
        uVar22 = uVar22 + 2;
        iVar25 = iVar25 + (uint)*pbVar1;
      } while (uVar22 < 0x1ff);
      if (uVar22 < 0x200) goto LAB_0045b041;
    }
    iVar41 = iVar41 + iVar25 + iVar24;
  }
  if ((int)lVar53 == iVar41) {
    return true;
  }
  iVar45 = 0;
  iVar46 = 0;
  iVar47 = 0;
  iVar48 = 0;
  uVar22 = 0;
  iVar41 = 0;
  iVar42 = 0;
  iVar43 = 0;
  iVar44 = 0;
  do {
    uVar5 = *(undefined4 *)(param_2 + uVar22);
    uVar39 = (undefined1)((uint)uVar5 >> 0x18);
    uVar40 = CONCAT11(uVar39,uVar39);
    uVar39 = (undefined1)((uint)uVar5 >> 0x10);
    uVar10 = CONCAT35(CONCAT21(uVar40,uVar39),CONCAT14(uVar39,uVar5));
    uVar39 = (undefined1)((uint)uVar5 >> 8);
    uVar13 = CONCAT51(CONCAT41((int)((ulonglong)uVar10 >> 0x20),uVar39),uVar39);
    sVar26 = CONCAT11((char)uVar5,(char)uVar5);
    uVar11 = CONCAT62(uVar13,sVar26);
    auVar29._8_4_ = 0;
    auVar29._0_8_ = uVar11;
    auVar29._12_2_ = uVar40;
    auVar29._14_2_ = uVar40;
    uVar40 = (undefined2)((ulonglong)uVar10 >> 0x20);
    auVar28._12_4_ = auVar29._12_4_;
    auVar28._8_2_ = 0;
    auVar28._0_8_ = uVar11;
    auVar28._10_2_ = uVar40;
    auVar27._10_6_ = auVar28._10_6_;
    auVar27._8_2_ = uVar40;
    auVar27._0_8_ = uVar11;
    uVar40 = (undefined2)uVar13;
    auVar14._4_8_ = auVar27._8_8_;
    auVar14._2_2_ = uVar40;
    auVar14._0_2_ = uVar40;
    iVar45 = iVar45 + ((int)sVar26 >> 8);
    iVar46 = iVar46 + (auVar14._0_4_ >> 0x18);
    iVar47 = iVar47 + (auVar27._8_4_ >> 0x18);
    iVar48 = iVar48 + (auVar28._12_4_ >> 0x18);
    uVar5 = *(undefined4 *)(param_2 + 4 + uVar22);
    uVar39 = (undefined1)((uint)uVar5 >> 0x18);
    uVar40 = CONCAT11(uVar39,uVar39);
    uVar39 = (undefined1)((uint)uVar5 >> 0x10);
    uVar10 = CONCAT35(CONCAT21(uVar40,uVar39),CONCAT14(uVar39,uVar5));
    uVar39 = (undefined1)((uint)uVar5 >> 8);
    uVar13 = CONCAT51(CONCAT41((int)((ulonglong)uVar10 >> 0x20),uVar39),uVar39);
    sVar26 = CONCAT11((char)uVar5,(char)uVar5);
    uVar11 = CONCAT62(uVar13,sVar26);
    uVar22 = uVar22 + 8;
    auVar32._8_4_ = 0;
    auVar32._0_8_ = uVar11;
    auVar32._12_2_ = uVar40;
    auVar32._14_2_ = uVar40;
    uVar40 = (undefined2)((ulonglong)uVar10 >> 0x20);
    auVar31._12_4_ = auVar32._12_4_;
    auVar31._8_2_ = 0;
    auVar31._0_8_ = uVar11;
    auVar31._10_2_ = uVar40;
    auVar30._10_6_ = auVar31._10_6_;
    auVar30._8_2_ = uVar40;
    auVar30._0_8_ = uVar11;
    uVar40 = (undefined2)uVar13;
    auVar15._4_8_ = auVar30._8_8_;
    auVar15._2_2_ = uVar40;
    auVar15._0_2_ = uVar40;
    iVar41 = iVar41 + ((int)sVar26 >> 8);
    iVar42 = iVar42 + (auVar15._0_4_ >> 0x18);
    iVar43 = iVar43 + (auVar30._8_4_ >> 0x18);
    iVar44 = iVar44 + (auVar31._12_4_ >> 0x18);
  } while (uVar22 < 0x90);
  iVar23 = 0;
  iVar24 = 0;
  iVar41 = iVar41 + iVar45 + iVar43 + iVar47 + iVar42 + iVar46 + iVar44 + iVar48;
  if (uVar22 < 0x94) {
    if (0x94 - uVar22 < 2) {
LAB_0045b0f1:
      iVar41 = iVar41 + *(char *)(uVar22 + param_2);
      uVar22 = uVar22 + 1;
    }
    else {
      do {
        iVar23 = iVar23 + *(char *)(param_2 + uVar22);
        pcVar2 = (char *)(param_2 + 1 + uVar22);
        uVar22 = uVar22 + 2;
        iVar24 = iVar24 + *pcVar2;
      } while (uVar22 < 0x93);
      if (uVar22 < 0x94) goto LAB_0045b0f1;
    }
    iVar41 = iVar41 + iVar24 + iVar23;
  }
  if (uVar22 < 0x9c) {
    iVar41 = iVar41 + (0x9c - uVar22) * 0x20;
  }
  uVar22 = 0x9c;
  iVar42 = 0;
  iVar43 = 0;
  iVar44 = 0;
  iVar45 = 0;
  do {
    uVar5 = *(undefined4 *)(param_2 + uVar22);
    uVar39 = (undefined1)((uint)uVar5 >> 0x18);
    uVar40 = CONCAT11(uVar39,uVar39);
    uVar39 = (undefined1)((uint)uVar5 >> 0x10);
    uVar10 = CONCAT35(CONCAT21(uVar40,uVar39),CONCAT14(uVar39,uVar5));
    uVar39 = (undefined1)((uint)uVar5 >> 8);
    uVar13 = CONCAT51(CONCAT41((int)((ulonglong)uVar10 >> 0x20),uVar39),uVar39);
    sVar26 = CONCAT11((char)uVar5,(char)uVar5);
    uVar11 = CONCAT62(uVar13,sVar26);
    auVar35._8_4_ = 0;
    auVar35._0_8_ = uVar11;
    auVar35._12_2_ = uVar40;
    auVar35._14_2_ = uVar40;
    uVar40 = (undefined2)((ulonglong)uVar10 >> 0x20);
    auVar34._12_4_ = auVar35._12_4_;
    auVar34._8_2_ = 0;
    auVar34._0_8_ = uVar11;
    auVar34._10_2_ = uVar40;
    auVar33._10_6_ = auVar34._10_6_;
    auVar33._8_2_ = uVar40;
    auVar33._0_8_ = uVar11;
    uVar40 = (undefined2)uVar13;
    auVar16._4_8_ = auVar33._8_8_;
    auVar16._2_2_ = uVar40;
    auVar16._0_2_ = uVar40;
    iVar49 = iVar49 + ((int)sVar26 >> 8);
    iVar50 = iVar50 + (auVar16._0_4_ >> 0x18);
    iVar51 = iVar51 + (auVar33._8_4_ >> 0x18);
    iVar52 = iVar52 + (auVar34._12_4_ >> 0x18);
    uVar5 = *(undefined4 *)(param_2 + 4 + uVar22);
    uVar39 = (undefined1)((uint)uVar5 >> 0x18);
    uVar40 = CONCAT11(uVar39,uVar39);
    uVar39 = (undefined1)((uint)uVar5 >> 0x10);
    uVar10 = CONCAT35(CONCAT21(uVar40,uVar39),CONCAT14(uVar39,uVar5));
    uVar39 = (undefined1)((uint)uVar5 >> 8);
    uVar13 = CONCAT51(CONCAT41((int)((ulonglong)uVar10 >> 0x20),uVar39),uVar39);
    sVar26 = CONCAT11((char)uVar5,(char)uVar5);
    uVar11 = CONCAT62(uVar13,sVar26);
    uVar22 = uVar22 + 8;
    auVar38._8_4_ = 0;
    auVar38._0_8_ = uVar11;
    auVar38._12_2_ = uVar40;
    auVar38._14_2_ = uVar40;
    uVar40 = (undefined2)((ulonglong)uVar10 >> 0x20);
    auVar37._12_4_ = auVar38._12_4_;
    auVar37._8_2_ = 0;
    auVar37._0_8_ = uVar11;
    auVar37._10_2_ = uVar40;
    auVar36._10_6_ = auVar37._10_6_;
    auVar36._8_2_ = uVar40;
    auVar36._0_8_ = uVar11;
    uVar40 = (undefined2)uVar13;
    auVar17._4_8_ = auVar36._8_8_;
    auVar17._2_2_ = uVar40;
    auVar17._0_2_ = uVar40;
    iVar42 = iVar42 + ((int)sVar26 >> 8);
    iVar43 = iVar43 + (auVar17._0_4_ >> 0x18);
    iVar44 = iVar44 + (auVar36._8_4_ >> 0x18);
    iVar45 = iVar45 + (auVar37._12_4_ >> 0x18);
  } while (uVar22 < 0x1fc);
  iVar46 = 0;
  iVar47 = 0;
  iVar41 = iVar41 + iVar42 + iVar49 + iVar44 + iVar51 + iVar43 + iVar50 + iVar45 + iVar52;
  if (0x1ff < uVar22) goto LAB_0045b1ae;
  if (0x200 - uVar22 < 2) {
LAB_0045b1a3:
    iVar41 = iVar41 + *(char *)(uVar22 + param_2);
  }
  else {
    do {
      iVar46 = iVar46 + *(char *)(param_2 + uVar22);
      pcVar2 = (char *)(param_2 + 1 + uVar22);
      uVar22 = uVar22 + 2;
      iVar47 = iVar47 + *pcVar2;
    } while (uVar22 < 0x1ff);
    if (uVar22 < 0x200) goto LAB_0045b1a3;
  }
  iVar41 = iVar41 + iVar47 + iVar46;
LAB_0045b1ae:
  return (int)lVar53 == iVar41;
}


