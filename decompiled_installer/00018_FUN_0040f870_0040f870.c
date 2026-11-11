// Function: FUN_0040f870
// Entry: 0040f870
// Size: 2662 bytes
// Thunk: false
// External: false


void FUN_0040f870(void)

{
  short *psVar1;
  short *psVar2;
  LPCWSTR pWVar3;
  LPCWSTR pWVar4;
  short *psVar5;
  LPCWSTR pWVar6;
  int iVar7;
  undefined4 uVar8;
  ushort *puVar9;
  int *piVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  
  FUN_00423f50();
  FUN_004241c0();
  FUN_004241c0();
  FUN_00423ff0(DAT_005423d4);
  FUN_00423ff0(u_SC_dat_00536ba0);
  pWVar6 = (LPCWSTR)FUN_00424280();
  iVar7 = FUN_00417cd6(pWVar6);
  FUN_00424220();
  if (iVar7 == 0) {
    FUN_00416f22(u_Error_00535594,u_Setup_Error__Could_not_initializ_005353c0,0x10);
    FUN_00405e90();
    FUN_0040f320();
  }
  else {
    FUN_00417ce6(u_SetupArchive_005356c4);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_SetupArchiveCRCHash_00536100,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_00542418,iVar7);
    DAT_00542270 = FUN_00417e1d(u_CompressionAlgorithm_00535680);
    FUN_00417e6d(u_NumberOfSetupArchiveChunks_005374a0,0,0);
    uVar11 = FUN_00417e6d(u_SetupArchiveFilesUncompressedSiz_00535ca0,0,0);
    DAT_0054227c = (undefined4)((ulonglong)uVar11 >> 0x20);
    DAT_00542278 = (undefined4)uVar11;
    FUN_00417ce6(u_Setup_00537a20);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_Appname_005380e8,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_00542288,iVar7);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_Version_005372ec,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_0054228c,iVar7);
    DAT_00542320 = FUN_00417e50(u_Licence_00537e94,0);
    DAT_00542348 = FUN_00417e50(u_ChangeApplicationFolder_00535360,0);
    DAT_005422f0 = FUN_00417e50(u_ChangeStartMenuFolder_00537400,0);
    DAT_0054241c = FUN_00417e50(u_Desktopicon_00537760,0);
    DAT_005423fc = FUN_00417e50(u_Allow_Desktopicons_005357c0,0);
    DAT_00542408 = FUN_00417e50(u_Allow_StartMenuFolder_005363a0,0);
    DAT_00542280 = FUN_00417e50(u_label_005370a8,0);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_InstallDir_00536814,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_0054235c,iVar7);
    DAT_005423e4 = FUN_00417e50(u_StartMenuFolder_00537b40,0);
    DAT_00542274 = FUN_00417e50(u_Registry_00537a2c,0);
    DAT_00542398 = FUN_00417e50(u_Addition_005368a4,0);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_ProgramRun_00535b14,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_0054234c,iVar7);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_ProgramRunArguments_00535de0,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_0054239c,iVar7);
    DAT_00542324 = FUN_00417e50(u_Languages_005355dc,1);
    FUN_00417e50((LPCWSTR)&DAT_00536498,0);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09((LPCWSTR)&DAT_005363e8,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40((undefined4 *)&DAT_00542364,iVar7);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_UrlFileName_00537940,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40((undefined4 *)&DAT_005422ac,iVar7);
    FUN_00417e50((LPCWSTR)&DAT_00535920,0);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_ShortcutFolder_00537ad8,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_0054232c,iVar7);
    DAT_00542368 = FUN_00417e50(u_Uninstaller_00536c80,0);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_UninstallerFilename_00535300,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_00542328,iVar7);
    DAT_00542354 = FUN_00417e1d(u_UninstallerUseCustomDisplayIcon_00536c40);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_UninstallerCustomDisplayIcon_005368c0,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_005423f4,iVar7);
    DAT_005423dc = FUN_00417e50(u_Uninstaller_VW_005351d4,0);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_Website_005375c0,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_00542330,iVar7);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_Serials_00536f48,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_00542284,iVar7);
    FUN_004241c0();
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_Serialcheck_00536150,(short *)&DAT_00542460,iVar7);
    puVar9 = (ushort *)FUN_00424280();
    uVar11 = FUN_00423480(puVar9);
    FUN_00424220();
    DAT_00542350 = (int)uVar11;
    DAT_00542370 = FUN_00417e50(u_SplashScreen_005358a8,0);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_SPS_Time_00535600,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_005422e8,iVar7);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_Company_00537880,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_005422f4,iVar7);
    FUN_004241c0();
    FUN_004241c0();
    iVar7 = FUN_004241e0();
    FUN_00417f09(u_Website1_00536740,(short *)&DAT_00542460,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_005422c0,iVar7);
    DAT_0054236c = FUN_00417e50((LPCWSTR)&DAT_00537b60,0);
    DAT_005423ac = FUN_00417e50((LPCWSTR)&DAT_005352a4,0);
    if (DAT_0054241c == 0) {
      DAT_005423fc = 0;
    }
    if (DAT_005423e4 == 0) {
      DAT_00542408 = 0;
    }
    FUN_00417157(u_IF_APPLICATION_NAME_00536da0,DAT_00542288);
    FUN_00417157(u_IF_APPLICATION_VERSION_00536ec0,DAT_0054228c);
    FUN_00417157(u_IF_COMPANY_NAME_00536e40,DAT_005422f4);
    if (DAT_0054236c == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar8 = FUN_004241e0();
      FUN_00409270(u_CommonPrograms_00536128,0,uVar8);
      iVar7 = FUN_004241e0();
      FUN_00423e40(&DAT_00542400,iVar7);
      DAT_00542404 = 0x17;
    }
    else {
      FUN_004241c0();
      FUN_004241c0();
      uVar8 = FUN_004241e0();
      FUN_00409270(u_Programs_00537540,0,uVar8);
      iVar7 = FUN_004241e0();
      FUN_00423e40(&DAT_00542400,iVar7);
      DAT_00542404 = 2;
    }
    if (DAT_005423ac == 1) {
      FUN_004241c0();
      FUN_004241c0();
      uVar8 = FUN_004241e0();
      pwVar12 = u_CommonDesktopDirectory_00535740;
    }
    else {
      FUN_004241c0();
      FUN_004241c0();
      uVar8 = FUN_004241e0();
      pwVar12 = u_Desktop_005354bc;
    }
    FUN_00409270(pwVar12,0,uVar8);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_005422a8,iVar7);
    FUN_00417860();
  }
  FUN_004241c0();
  FUN_004241c0();
  psVar2 = DAT_0054232c;
  pWVar4 = DAT_005422f4;
  psVar1 = DAT_005422c0;
  pWVar3 = DAT_0054228c;
  pWVar6 = DAT_00542288;
  uVar8 = FUN_004241e0();
  FUN_00409eb0(psVar2,pWVar6,pWVar3,pWVar4,psVar1,(short *)&DAT_00542460,uVar8);
  iVar7 = FUN_004241e0();
  FUN_00423e40(&DAT_0054232c,iVar7);
  FUN_004241c0();
  FUN_004241c0();
  psVar2 = DAT_0054235c;
  pWVar4 = DAT_005422f4;
  psVar1 = DAT_005422c0;
  pWVar3 = DAT_0054228c;
  pWVar6 = DAT_00542288;
  uVar8 = FUN_004241e0();
  FUN_00409eb0(psVar2,pWVar6,pWVar3,pWVar4,psVar1,(short *)&DAT_00542460,uVar8);
  iVar7 = FUN_004241e0();
  FUN_00423e40(&DAT_0054235c,iVar7);
  FUN_0042106a((int)DAT_00542450);
  while( true ) {
    piVar10 = FUN_0042102f(DAT_00542450);
    if (piVar10 == (int *)0x0) break;
    FUN_004241c0();
    FUN_004241c0();
    psVar5 = DAT_0054235c;
    psVar1 = *(short **)(DAT_00542454 + 8);
    psVar2 = *(short **)(DAT_00542454 + 0x20);
    iVar7 = FUN_004241e0();
    FUN_00422e00(psVar5,psVar1,psVar2,1,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_0054235c,iVar7);
    FUN_004241c0();
    FUN_004241c0();
    psVar5 = DAT_0054232c;
    psVar1 = *(short **)(DAT_00542454 + 8);
    psVar2 = *(short **)(DAT_00542454 + 0x20);
    iVar7 = FUN_004241e0();
    FUN_00422e00(psVar5,psVar1,psVar2,1,iVar7);
    iVar7 = FUN_004241e0();
    FUN_00423e40(&DAT_0054232c,iVar7);
  }
  return;
}


