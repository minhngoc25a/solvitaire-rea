// Function: FUN_004102e0
// Entry: 004102e0
// Size: 1551 bytes
// Thunk: false
// External: false


undefined4 FUN_004102e0(void)

{
  byte bVar1;
  short *psVar2;
  LPCWSTR pWVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  HWND pHVar7;
  uint uVar8;
  undefined4 *puVar9;
  HDC pHVar10;
  UINT UVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar17;
  undefined4 extraout_ECX_01;
  undefined4 uVar18;
  undefined4 extraout_EDX;
  int *piVar19;
  undefined8 uVar20;
  int local_54;
  BLENDFUNCTION BStack_30;
  SIZE SStack_2c;
  POINT local_24 [2];
  
  FUN_00423f50();
  if (DAT_00542370 == 1) {
    FUN_004241c0();
    FUN_004241c0();
    FUN_00423ff0(DAT_005423d4);
    FUN_00423ff0(u_isps_dat_005371e0);
    local_24[0].x = FUN_00424280();
    FUN_00423f50();
    FUN_00424040(&local_24[0].x,(short *)local_24[0].x);
    FUN_00419806();
    uVar20 = FUN_00420e07((HICON)0xffffffff,(LPCWSTR)local_24[0].x);
    DAT_0054226c = (int *)uVar20;
    if (DAT_0054226c == (int *)0x0) {
      FUN_00424120(extraout_ECX,(int)((ulonglong)uVar20 >> 0x20),(LPVOID)local_24[0].x);
      FUN_00424220();
      FUN_00416f22(u_Error_00535594,u_Setup_Error__Could_not_load_spla_005369c0,0x10);
      FUN_00405e90();
      FUN_0040f320();
    }
    else {
      uVar20 = FUN_00420b5f(DAT_0054226c);
      piVar19 = DAT_0054226c;
      uVar18 = (undefined4)((ulonglong)uVar20 >> 0x20);
      uVar17 = extraout_ECX_00;
      if ((int)uVar20 == 0x20) {
        puVar9 = FUN_00420c2a(DAT_0054226c);
        FUN_00420698(puVar9);
        FUN_004205ee(0x100);
        for (local_54 = 0; iVar4 = FUN_00420b6d(piVar19), local_54 < iVar4; local_54 = local_54 + 1)
        {
          for (iVar4 = 0; iVar5 = FUN_00420d5d(piVar19), iVar4 < iVar5; iVar4 = iVar4 + 1) {
            iVar5 = FUN_0042064b(iVar4,local_54);
            uVar8 = FUN_00420565(iVar5);
            uVar12 = FUN_00420572(iVar5);
            uVar13 = FUN_00420565(iVar5);
            uVar14 = FUN_00420605(iVar5);
            uVar15 = FUN_00420565(iVar5);
            bVar1 = FUN_00420690((char)iVar5);
            uVar16 = FUN_00420565(iVar5);
            uVar8 = FUN_00420674(((uint)bVar1 * (uVar16 & 0xff)) / 0xff,
                                 ((uVar14 & 0xff) * (uVar15 & 0xff)) / 0xff,
                                 ((uVar12 & 0xff) * (uVar13 & 0xff)) / 0xff,uVar8);
            FUN_0042061e(iVar4,local_54,uVar8);
          }
        }
        FUN_004206fd();
        uVar17 = extraout_ECX_01;
        uVar18 = extraout_EDX;
      }
      FUN_00424120(uVar17,uVar18,(LPVOID)local_24[0].x);
      FUN_00424220();
    }
    FUN_004241c0();
    FUN_004241c0();
    FUN_00423ff0(DAT_005423d4);
    FUN_00423ff0(u_ssps_dat_00536018);
    psVar2 = (short *)FUN_00424280();
    uVar20 = FUN_0041ee68(psVar2);
    iVar5 = (int)((ulonglong)uVar20 >> 0x20);
    FUN_00424220();
    uVar8 = (uint)((int)uVar20 != 0);
    iVar4 = -iVar5;
    piVar19 = (int *)0x0;
    if ((SBORROW4(0,iVar5) != SBORROW4(iVar4,uVar8)) != (int)(iVar4 - uVar8) < 0) {
      FUN_004241c0();
      FUN_004241c0();
      FUN_00423ff0(DAT_005423d4);
      FUN_00423ff0(u_ssps_dat_00536018);
      FUN_00424170();
      pWVar3 = (LPCWSTR)FUN_00424280();
      piVar19 = (int *)FUN_00416b60(-1,pWVar3);
      FUN_00424220();
      if (piVar19 == (int *)0x0) {
        FUN_00416f22(u_Error_00535594,u_Setup_Error__Could_not_load_spla_005359c0,0x10);
        FUN_00405e90();
        FUN_0040f320();
      }
      FUN_00416e40(piVar19);
    }
    uVar20 = FUN_00423480(DAT_005422e8);
    FUN_00423f50();
    SStack_2c.cx = 0;
    SStack_2c.cy = 0;
    local_24[0].x = 0;
    local_24[0].y = 0;
    BStack_30.BlendOp = '\0';
    BStack_30.BlendFlags = '\0';
    BStack_30.SourceConstantAlpha = '\0';
    BStack_30.AlphaFormat = '\0';
    SStack_2c.cx = FUN_00420d5d(DAT_0054226c);
    SStack_2c.cy = FUN_00420b6d(DAT_0054226c);
    BStack_30.SourceConstantAlpha = '\0';
    iVar4 = FUN_00420b5f(DAT_0054226c);
    if (iVar4 == 0x20) {
      BStack_30.AlphaFormat = '\x01';
    }
    else {
      BStack_30 = (BLENDFUNCTION)((uint)BStack_30 & 0xffffff);
    }
    iVar4 = FUN_00420b6d(DAT_0054226c);
    iVar5 = FUN_00420d5d(DAT_0054226c);
    piVar6 = (int *)_OOBECompleteWnfQueryCallback_28
                              ((int *)0xffffffff,-0xffff,-0xffff,iVar5,iVar4,(LPCWSTR)&DAT_00542460,
                               0x90000009);
    FUN_0041e738(piVar6,1);
    pHVar7 = (HWND)FUN_0041e946(piVar6);
    uVar8 = GetWindowLongW(pHVar7,-0x14);
    pHVar7 = (HWND)FUN_0041e946(piVar6);
    SetWindowLongW(pHVar7,-0x14,uVar8 | 0x80000);
    puVar9 = FUN_00420c2a(DAT_0054226c);
    pHVar10 = (HDC)FUN_00420698(puVar9);
    pHVar7 = (HWND)FUN_0041e946(piVar6);
    UpdateLayeredWindow(pHVar7,(HDC)0x0,(POINT *)0x0,&SStack_2c,pHVar10,local_24,0,&BStack_30,2);
    FUN_004206fd();
    FUN_0041e1bb(piVar6,0);
    FUN_00418b60(39.21568627450981,0);
    UVar11 = FUN_00418b30();
    FUN_0041e073(piVar6,0,UVar11);
    do {
      while( true ) {
        do {
          iVar4 = FUN_0041e8c2();
        } while (iVar4 != 0x3336);
        iVar4 = FUN_0041fa4c();
        if (iVar4 != 0) break;
        BStack_30.SourceConstantAlpha = BStack_30.SourceConstantAlpha + '\x05';
        puVar9 = FUN_00420c2a(DAT_0054226c);
        pHVar10 = (HDC)FUN_00420698(puVar9);
        pHVar7 = (HWND)FUN_0041e946(piVar6);
        UpdateLayeredWindow(pHVar7,(HDC)0x0,(POINT *)0x0,&SStack_2c,pHVar10,local_24,0,&BStack_30,2)
        ;
        FUN_004206fd();
        if (BStack_30.SourceConstantAlpha == 0xff) {
          FUN_0041e689(piVar6,0);
          FUN_0041e073(piVar6,1,(int)uVar20 * 1000);
        }
      }
    } while (iVar4 != 1);
    FUN_0041e0c6(piVar6);
    FUN_00420a6d(DAT_0054226c);
    iVar4 = FUN_00416b40(piVar19);
    if (iVar4 != 0) {
      FUN_00416930(piVar19);
    }
  }
  return 0;
}


