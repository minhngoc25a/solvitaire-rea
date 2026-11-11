// Function: FUN_00401803
// Entry: 00401803
// Size: 1106 bytes
// Thunk: false
// External: false


int FUN_00401803(HINSTANCE param_1,undefined4 param_2,char *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  HWND hWnd;
  undefined3 extraout_var;
  char *pcVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  HANDLE lParam;
  int iVar4;
  UINT_PTR UVar5;
  BOOL BVar6;
  uint uVar7;
  char local_42 [10];
  tagMSG local_38;
  
  iVar2 = FUN_00404890(param_3,0);
  if (iVar2 == 0xb7) {
    hWnd = FUN_0040173c();
    ShowWindow(hWnd,5);
    SetForegroundWindow(hWnd);
    FUN_00401d21();
    return 2;
  }
  if (iVar2 == 1) {
    bVar1 = FUN_00402168(4);
    uVar7 = 0;
    if (CONCAT31(extraout_var,bVar1) != 0) {
      pcVar3 = strstr(param_3,"--l4j-no-splash");
      uVar7 = (uint)(pcVar3 == (char *)0x0);
    }
    DAT_0041000c = uVar7;
    bVar1 = FUN_00402168(0x1f);
    DAT_00410008 = CONCAT31(extraout_var_00,bVar1);
    uVar7 = 1;
    if (DAT_00410008 == 0) {
      bVar1 = FUN_00402168(0xb);
      uVar7 = 0;
      if (CONCAT31(extraout_var_01,bVar1) != 0) {
        pcVar3 = strstr(param_3,"--l4j-dont-wait");
        uVar7 = (uint)(pcVar3 == (char *)0x0);
      }
    }
    DAT_00410010 = uVar7;
    if (((DAT_0041000c != 0) || (uVar7 != 0)) &&
       (DAT_00410a24 = CreateWindowExA(0x80,"STATIC","",0x8000000e,0,0,-0x80000000,-0x80000000,
                                       (HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0), DAT_0041000c != 0)
       ) {
      pcVar3 = local_42;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pcVar3 = '\0';
        pcVar3 = pcVar3 + 1;
      }
      iVar2 = FUN_0040206e(6,local_42);
      if (iVar2 != 0) {
        iVar2 = atoi(local_42);
        DAT_0040c000 = 0x3c;
        if (iVar2 - 1U < 900) {
          DAT_0040c000 = iVar2;
        }
      }
      DAT_0040c000 = DAT_0040c000 * 1000;
      bVar1 = FUN_00402168(7);
      uVar7 = 0;
      if (CONCAT31(extraout_var_02,bVar1) != 0) {
        pcVar3 = strstr(param_3,"--l4j-no-splash-err");
        uVar7 = (uint)(pcVar3 == (char *)0x0);
      }
      DAT_00410a28 = uVar7;
      bVar1 = FUN_00402168(5);
      DAT_00410a20 = CONCAT31(extraout_var_03,bVar1);
      lParam = LoadImageA(param_1,(LPCSTR)0x1,0,0,0,0x40);
      if (lParam == (HANDLE)0x0) goto LAB_00401b35;
      SendMessageA(DAT_00410a24,0x172,0,(LPARAM)lParam);
      GetWindowRect(DAT_00410a24,(LPRECT)&local_38);
      iVar2 = GetSystemMetrics(0);
      iVar4 = GetSystemMetrics(1);
      SetWindowPos(DAT_00410a24,(HWND)0x0,(int)((int)local_38.hwnd + (iVar2 - local_38.wParam)) / 2,
                   (int)((iVar4 + local_38.message) - local_38.lParam) / 2,0,0,1);
      ShowWindow(DAT_00410a24,param_4);
      UpdateWindow(DAT_00410a24);
    }
    do {
      if ((((DAT_0041000c != 0) || (DAT_00410010 != 0)) &&
          (UVar5 = SetTimer(DAT_00410a24,1,100,FUN_004015d0), UVar5 == 0)) ||
         (iVar2 = FUN_00403a11(0,&DAT_00410014), iVar2 == 0)) goto LAB_00401b35;
      if ((DAT_0041000c == 0) && (DAT_00410010 == 0)) {
        if (DAT_00410a2c != (FILE *)0x0) {
          fputs("Exit code:\t0\n",DAT_00410a2c);
        }
        FUN_004039ed();
        FUN_00401d21();
        return 0;
      }
      while (BVar6 = GetMessageA(&local_38,(HWND)0x0,0,0), BVar6 != 0) {
        TranslateMessage(&local_38);
        DispatchMessageA(&local_38);
      }
      if (((DAT_00410008 != 0) && (DAT_00410014 != 0)) && (DAT_00410a2c != (FILE *)0x0)) {
        fprintf(DAT_00410a2c,"Exit code:\t%d, restarting the application!\n",DAT_00410014);
      }
      FUN_004039ed();
    } while ((DAT_00410008 != 0) && (DAT_00410014 != 0));
    if (DAT_00410a2c != (FILE *)0x0) {
      fprintf(DAT_00410a2c,"Exit code:\t%d\n",DAT_00410014);
    }
    FUN_00401d21();
    iVar2 = DAT_00410014;
  }
  else {
LAB_00401b35:
    FUN_00401f36();
    iVar2 = 1;
  }
  return iVar2;
}


