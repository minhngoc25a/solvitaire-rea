// Function: FUN_0040f350
// Entry: 0040f350
// Size: 1303 bytes
// Thunk: false
// External: false


undefined4 FUN_0040f350(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  LPCWSTR pWVar4;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined4 uVar7;
  ushort *puVar8;
  undefined3 extraout_var_11;
  
  FUN_00423f50();
  FUN_004241c0();
  FUN_004241c0();
  FUN_00423ff0(DAT_005423d4);
  FUN_00423ff0(u_OS_dat_005375d0);
  pWVar4 = (LPCWSTR)FUN_00424280();
  iVar5 = FUN_00417cd6(pWVar4);
  FUN_00424220();
  if (iVar5 == 0) {
LAB_0040f39e:
    FUN_00416f22(u_Error_00535594,u_Your_operating_system_is_not_sup_00535140,0x10);
    FUN_00405e90();
    FUN_0040f320();
  }
  else {
    uVar6 = FUN_00417e50(u_Windows_2000_005375a4,0);
    bVar3 = false;
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar3 = FUN_004242e0((ushort *)u_Windows_2000_005375a4,puVar8);
      bVar3 = CONCAT31(extraout_var,bVar3) != 0;
    }
    uVar6 = FUN_00417e50(u_Windows_XP_00535328,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_XP_00535328,puVar8);
      bVar1 = true;
      if (CONCAT31(extraout_var_00,bVar2) == 0) goto LAB_0040f405;
    }
    else {
LAB_0040f405:
      bVar1 = bVar3;
    }
    uVar6 = FUN_00417e50(u_Windows_Server_2003_00536540,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_Server_2003_00536540,puVar8);
      bVar3 = true;
      if (CONCAT31(extraout_var_01,bVar2) == 0) goto LAB_0040f498;
    }
    else {
LAB_0040f498:
      bVar3 = bVar1;
    }
    uVar6 = FUN_00417e50(u_Windows_Vista_00537958,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_Vista_00537958,puVar8);
      bVar1 = true;
      if (CONCAT31(extraout_var_02,bVar2) == 0) goto LAB_0040f4ed;
    }
    else {
LAB_0040f4ed:
      bVar1 = bVar3;
    }
    uVar6 = FUN_00417e50(u_Windows_Server_2008_005364a0,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_Server_2008_005364a0,puVar8);
      bVar3 = true;
      if (CONCAT31(extraout_var_03,bVar2) == 0) goto LAB_0040f542;
    }
    else {
LAB_0040f542:
      bVar3 = bVar1;
    }
    uVar6 = FUN_00417e50(u_Windows_7_00535bc0,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_7_00535bc0,puVar8);
      bVar1 = true;
      if (CONCAT31(extraout_var_04,bVar2) == 0) goto LAB_0040f597;
    }
    else {
LAB_0040f597:
      bVar1 = bVar3;
    }
    uVar6 = FUN_00417e50(u_Windows_8_00535bac,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_8_00535bac,puVar8);
      bVar3 = true;
      if (CONCAT31(extraout_var_05,bVar2) == 0) goto LAB_0040f5ec;
    }
    else {
LAB_0040f5ec:
      bVar3 = bVar1;
    }
    uVar6 = FUN_00417e50(u_Windows_10_005366cc,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_10_005366cc,puVar8);
      bVar1 = true;
      if (CONCAT31(extraout_var_06,bVar2) == 0) goto LAB_0040f641;
    }
    else {
LAB_0040f641:
      bVar1 = bVar3;
    }
    uVar6 = FUN_00417e50(u_Windows_Server_2016_005362e0,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_Server_2016_005362e0,puVar8);
      bVar3 = true;
      if (CONCAT31(extraout_var_07,bVar2) == 0) goto LAB_0040f696;
    }
    else {
LAB_0040f696:
      bVar3 = bVar1;
    }
    uVar6 = FUN_00417e50(u_Windows_Server_2019_00536280,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_Server_2019_00536280,puVar8);
      bVar1 = true;
      if (CONCAT31(extraout_var_08,bVar2) == 0) goto LAB_0040f6eb;
    }
    else {
LAB_0040f6eb:
      bVar1 = bVar3;
    }
    uVar6 = FUN_00417e50(u_Windows_Server_2022_005360c0,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_Server_2022_005360c0,puVar8);
      bVar3 = true;
      if (CONCAT31(extraout_var_09,bVar2) == 0) goto LAB_0040f740;
    }
    else {
LAB_0040f740:
      bVar3 = bVar1;
    }
    uVar6 = FUN_00417e50(u_Windows_11_005366b4,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar2 = FUN_004242e0((ushort *)u_Windows_11_005366b4,puVar8);
      bVar1 = true;
      if (CONCAT31(extraout_var_10,bVar2) == 0) goto LAB_0040f795;
    }
    else {
LAB_0040f795:
      bVar1 = bVar3;
    }
    uVar6 = FUN_00417e50(u_Windows_Server_2025_00536080,0);
    if (uVar6 == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar7 = FUN_004241e0();
      FUN_004052b0(uVar7);
      FUN_00424170();
      puVar8 = (ushort *)FUN_00424250();
      bVar3 = FUN_004242e0((ushort *)u_Windows_Server_2025_00536080,puVar8);
      if (CONCAT31(extraout_var_11,bVar3) == 0) goto LAB_0040f7e8;
      FUN_00417e50(u_NoOSCheck_005373a0,0);
    }
    else {
LAB_0040f7e8:
      uVar6 = FUN_00417e50(u_NoOSCheck_005373a0,0);
      if (uVar6 != 1) {
        FUN_00417860();
        if (bVar1) {
          return 0;
        }
        goto LAB_0040f39e;
      }
    }
    FUN_00417860();
  }
  return 0;
}


