// Function: FUN_004a4c70
// Entry: 004a4c70
// Size: 624 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004a4c70(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  
  uVar3 = param_1 & 0xffff;
  uVar21 = param_1 >> 0x10;
  if (param_3 == 1) {
    uVar3 = *param_2 + uVar3;
    uVar20 = uVar3 - 0xfff1;
    if (uVar3 < 0xfff1) {
      uVar20 = uVar3;
    }
    uVar21 = uVar20 + uVar21;
    uVar3 = uVar21 - 0xfff1;
    if (uVar21 < 0xfff1) {
      uVar3 = uVar21;
    }
    return uVar3 << 0x10 | uVar20;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 + bVar2;
      uVar21 = uVar21 + uVar3;
    }
    uVar20 = uVar3 - 0xfff1;
    if (uVar3 < 0xfff1) {
      uVar20 = uVar3;
    }
    return ((uVar21 / 0xfff1) * 0xf + uVar21) * 0x10000 | uVar20;
  }
  if (0x15af < param_3) {
    uVar20 = param_3 / 0x15b0;
    do {
      param_3 = param_3 - 0x15b0;
      iVar19 = 0x15b;
      do {
        iVar4 = uVar3 + *param_2;
        iVar5 = iVar4 + (uint)param_2[1];
        iVar6 = iVar5 + (uint)param_2[2];
        iVar7 = iVar6 + (uint)param_2[3];
        iVar8 = iVar7 + (uint)param_2[4];
        iVar9 = iVar8 + (uint)param_2[5];
        iVar10 = iVar9 + (uint)param_2[6];
        iVar11 = iVar10 + (uint)param_2[7];
        iVar12 = iVar11 + (uint)param_2[8];
        iVar13 = iVar12 + (uint)param_2[9];
        iVar14 = iVar13 + (uint)param_2[10];
        iVar15 = iVar14 + (uint)param_2[0xb];
        iVar16 = iVar15 + (uint)param_2[0xc];
        iVar17 = iVar16 + (uint)param_2[0xd];
        iVar18 = iVar17 + (uint)param_2[0xe];
        pbVar1 = param_2 + 0xf;
        param_2 = param_2 + 0x10;
        uVar3 = iVar18 + (uint)*pbVar1;
        uVar21 = uVar21 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 +
                 iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      uVar3 = uVar3 % 0xfff1;
      uVar21 = uVar21 % 0xfff1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    if (param_3 == 0) goto LAB_004a4ed5;
    if (param_3 < 0x10) goto LAB_004a4ea2;
  }
  uVar20 = param_3 >> 4;
  do {
    param_3 = param_3 - 0x10;
    iVar19 = uVar3 + *param_2;
    iVar4 = iVar19 + (uint)param_2[1];
    iVar5 = iVar4 + (uint)param_2[2];
    iVar6 = iVar5 + (uint)param_2[3];
    iVar7 = iVar6 + (uint)param_2[4];
    iVar8 = iVar7 + (uint)param_2[5];
    iVar9 = iVar8 + (uint)param_2[6];
    iVar10 = iVar9 + (uint)param_2[7];
    iVar11 = iVar10 + (uint)param_2[8];
    iVar12 = iVar11 + (uint)param_2[9];
    iVar13 = iVar12 + (uint)param_2[10];
    iVar14 = iVar13 + (uint)param_2[0xb];
    iVar15 = iVar14 + (uint)param_2[0xc];
    iVar16 = iVar15 + (uint)param_2[0xd];
    iVar17 = iVar16 + (uint)param_2[0xe];
    pbVar1 = param_2 + 0xf;
    param_2 = param_2 + 0x10;
    uVar3 = iVar17 + (uint)*pbVar1;
    uVar21 = uVar21 + iVar19 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
             iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
    uVar20 = uVar20 - 1;
  } while (uVar20 != 0);
  for (; param_3 != 0; param_3 = param_3 - 1) {
LAB_004a4ea2:
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar3 + bVar2;
    uVar21 = uVar21 + uVar3;
  }
  uVar3 = uVar3 % 0xfff1;
  uVar21 = uVar21 % 0xfff1;
LAB_004a4ed5:
  return uVar21 << 0x10 | uVar3;
}


