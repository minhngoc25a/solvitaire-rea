// Function: FUN_004771b1
// Entry: 004771b1
// Size: 391 bytes
// Thunk: false
// External: false


undefined4 FUN_004771b1(HWND param_1,HWND param_2,UINT param_3,HDC param_4,HWND param_5)

{
  int iVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  HDC hdc;
  HBITMAP hbm;
  HGDIOBJ pvVar4;
  HBRUSH pHVar5;
  undefined4 uVar6;
  tagPOINT local_58;
  tagRECT local_50;
  WCHAR local_40 [32];
  
  uVar6 = 0;
  if (DAT_00542f98 != 0) {
    GetClassNameW(param_5,local_40,0x40);
    iVar1 = __wcsicmp(local_40,L"msctls_trackbar32");
    if (((iVar1 == 0) || (iVar1 = __wcsicmp(local_40,L"static"), iVar1 == 0)) ||
       (iVar1 = __wcsicmp(local_40,L"button"), iVar1 == 0)) {
      LVar2 = DefWindowProcW(param_5,param_3,(WPARAM)param_4,(LPARAM)param_5);
      LVar3 = CallWindowProcW((WNDPROC)&LAB_00476f72,param_2,param_3,(WPARAM)param_4,(LPARAM)param_5
                             );
      if (LVar2 == LVar3) {
        SetBkMode(param_4,1);
        iVar1 = FUN_00423ccb(DAT_00542fa4);
        if (*(int *)(iVar1 + 0x1c) != 0) {
          DeleteObject(*(HGDIOBJ *)(iVar1 + 0x1c));
        }
        GetClientRect(param_5,&local_50);
        hdc = CreateCompatibleDC(param_4);
        if (hdc != (HDC)0x0) {
          hbm = CreateCompatibleBitmap(param_4,local_50.right,local_50.bottom);
          if (hbm != (HBITMAP)0x0) {
            pvVar4 = SelectObject(hdc,hbm);
            MapWindowPoints(param_5,param_1,(LPPOINT)&local_50,2);
            OffsetViewportOrgEx(hdc,-local_50.left,-local_50.top,&local_58);
            SendMessageW(param_1,0x318,(WPARAM)hdc,4);
            SetViewportOrgEx(hdc,local_58.x,local_58.y,(LPPOINT)0x0);
            pHVar5 = CreatePatternBrush(hbm);
            *(HBRUSH *)(iVar1 + 0x1c) = pHVar5;
            pvVar4 = SelectObject(hdc,pvVar4);
            DeleteObject(pvVar4);
          }
          DeleteDC(hdc);
        }
        uVar6 = *(undefined4 *)(iVar1 + 0x1c);
      }
    }
  }
  return uVar6;
}


