// Function: FUN_0041e797
// Entry: 0041e797
// Size: 299 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UINT FUN_0041e797(DWORD param_1)

{
  WPARAM *pWVar1;
  UINT UVar2;
  BOOL BVar3;
  DWORD DVar4;
  HWND hWnd;
  HACCEL hAccTable;
  int iVar5;
  tagMSG local_1c;
  
  pWVar1 = (WPARAM *)FUN_00423ccb(DAT_00543990);
  _DAT_00543988 = 1;
  UVar2 = FUN_00477b36();
  if (UVar2 == 0) {
    if (param_1 == 0xffffffff) {
      GetMessageW(&local_1c,(HWND)0x0,0,0);
    }
    else {
      BVar3 = PeekMessageW(&local_1c,(HWND)0x0,0,0,3);
      if ((BVar3 == 0) &&
         (((param_1 == 0 ||
           (DVar4 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,param_1,0x5ff), DVar4 == 0x102)) ||
          (BVar3 = PeekMessageW(&local_1c,(HWND)0x0,0,0,3), BVar3 == 0)))) {
        _DAT_00543988 = 0;
        return 0;
      }
    }
    hWnd = GetActiveWindow();
    hAccTable = (HACCEL)FUN_00477d39(hWnd);
    if ((DAT_00542fac == (code *)0x0) ||
       (iVar5 = (*DAT_00542fac)(local_1c.message,local_1c.wParam,local_1c.lParam), iVar5 == 0)) {
      if ((hAccTable == (HACCEL)0x0) ||
         (iVar5 = TranslateAcceleratorW(hWnd,hAccTable,&local_1c), iVar5 == 0)) {
        TranslateMessage(&local_1c);
        DispatchMessageW(&local_1c);
      }
      else if (hWnd != (HWND)0x0) {
        FUN_00477fda(hWnd,1);
      }
    }
    *pWVar1 = local_1c.wParam;
    pWVar1[1] = local_1c.lParam;
  }
  else {
    *pWVar1 = 0;
    local_1c.wParam = 0;
    pWVar1[1] = 0;
    local_1c.lParam = 0;
    local_1c.message = UVar2;
  }
  pWVar1[2] = local_1c.wParam;
  pWVar1[3] = local_1c.lParam;
  _DAT_00543988 = 0;
  return local_1c.message;
}


