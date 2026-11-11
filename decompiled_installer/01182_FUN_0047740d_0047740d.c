// Function: FUN_0047740d
// Entry: 0047740d
// Size: 266 bytes
// Thunk: false
// External: false


HRGN FUN_0047740d(HDC param_1,HWND param_2)

{
  HWND pHVar1;
  HRGN hrgn;
  BOOL BVar2;
  int iVar3;
  HRGN hrgn_00;
  WCHAR local_58 [32];
  undefined1 local_18 [16];
  int local_8;
  
  pHVar1 = GetParent(param_2);
  GetClientRect(pHVar1,(LPRECT)local_18);
  hrgn = CreateRectRgnIndirect((RECT *)local_18);
  local_8 = GetClipRgn(param_1,hrgn);
  for (pHVar1 = GetWindow(pHVar1,5); pHVar1 != (HWND)0x0; pHVar1 = GetWindow(pHVar1,2)) {
    BVar2 = IsWindowVisible(pHVar1);
    if (BVar2 != 0) {
      local_58[0] = L'\0';
      GetClassNameW(pHVar1,local_58,0x3f);
      iVar3 = __wcsicmp(local_58,L"ToolbarWindow32");
      if ((iVar3 == 0) || (iVar3 = __wcsicmp(local_58,L"msctls_statusbar32"), iVar3 == 0)) {
        GetWindowRect(pHVar1,(LPRECT)local_18);
        ScreenToClient(param_2,(LPPOINT)local_18);
        ScreenToClient(param_2,(LPPOINT)(local_18 + 8));
        hrgn_00 = CreateRectRgnIndirect((RECT *)local_18);
        if (hrgn_00 != (HRGN)0x0) {
          ExtSelectClipRgn(param_1,hrgn_00,4);
          DeleteObject(hrgn_00);
        }
      }
    }
  }
  if (local_8 < 1) {
    DeleteObject(hrgn);
    hrgn = (HRGN)0x0;
  }
  return hrgn;
}


