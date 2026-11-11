// Function: FUN_0041a4dc
// Entry: 0041a4dc
// Size: 613 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041a4dc(HWND param_1,int param_2,int param_3,int param_4,int param_5,HWND param_6)

{
  undefined4 *puVar1;
  int nHeight;
  HWND hWnd;
  HWND pHVar2;
  uint uVar3;
  HWND pHVar4;
  wchar_t *lpClassName;
  HWND pHVar5;
  int iVar6;
  tagRECT local_10;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  iVar6 = 0;
  if (DAT_00542d78 == 0) {
    DAT_00542d78 = 1;
    FUN_004761ec();
    _memset(&DAT_00542cd0,0,0xa8);
    _DAT_00542cd0 = 8;
    _DAT_00542cd4 = 0xa8;
    _DAT_00542cd8 = &LAB_0041a7d4;
    _DAT_00542cdc = &LAB_0041ae0a;
    _DAT_00542ce0 = FUN_0041a867;
    _DAT_00542ce4 = FUN_0041a8fe;
    _DAT_00542cf0 = FUN_0041a961;
    _DAT_00542cf8 = &LAB_0041aae1;
    _DAT_00542cfc = FUN_0041ab63;
    _DAT_00542d04 = &LAB_0041aba7;
    _DAT_00542d00 = &LAB_0041abbf;
    _DAT_00542cec = &LAB_0041ac45;
    _DAT_00542ce8 = &LAB_0041aca7;
    _DAT_00542d14 = &LAB_0041ad24;
    _DAT_00542d10 = FUN_0041a771;
    _DAT_00542d58 = &LAB_0041add4;
    _DAT_00542d5c = &LAB_0041adf0;
    _DAT_00542d70 = &LAB_0041aa2e;
    _DAT_00542d6c = &LAB_0041ae1f;
    _DAT_00542d60 = &LAB_0041ae78;
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  if (((uint)param_6 & 0x10000000) == 0) {
    lpClassName = L"ComboBox";
    if (DAT_00542f98 != 0) {
      nHeight = param_5 + 0x1e;
      goto LAB_0041a613;
    }
  }
  else {
    lpClassName = L"ComboBoxEx32";
    iVar6 = 1;
  }
  nHeight = 0x15e;
LAB_0041a613:
  pHVar5 = param_6;
  if (((uint)param_6 & 2) == 0) {
    pHVar5 = (HWND)((uint)param_6 | 0x10003);
  }
  hWnd = CreateWindowExW(0,lpClassName,(LPCWSTR)0x0,(uint)pHVar5 | 0x50a20000,param_2,param_3,
                         param_4,nHeight,(HWND)*puVar1,(HMENU)0xffffffff,DAT_00542260,(LPVOID)0x0);
  pHVar4 = (HWND)0x0;
  if (hWnd != (HWND)0x0) {
    pHVar2 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    if (((uint)pHVar5 & 2) != 0) {
      if (iVar6 == 0) {
        param_6 = GetWindow(hWnd,5);
      }
      else {
        param_6 = (HWND)SendMessageW(hWnd,0x407,0,0);
      }
      uVar3 = GetWindowLongW(param_6,-0x10);
      SetWindowLongW(param_6,-0x10,uVar3 | 0x10000);
    }
    pHVar2[6].unused = 0;
    pHVar2[4].unused = iVar6;
    pHVar4 = FUN_0047603c(param_1,pHVar2,hWnd,0x542cd0);
    _DAT_0053fb84 = 0xffffffff;
    SendMessageW((HWND)pHVar2->unused,0x153,0xffffffff,0xf);
    GetWindowRect((HWND)pHVar2->unused,&local_10);
    _DAT_0053fb84 = (local_10.bottom - local_10.top) + -0xf;
    SendMessageW((HWND)pHVar2->unused,0x153,0xffffffff,param_5 - _DAT_0053fb84);
    if (((uint)pHVar5 & 0x6000) == 0) {
      FUN_0041a741(pHVar2);
    }
  }
  return pHVar4;
}


