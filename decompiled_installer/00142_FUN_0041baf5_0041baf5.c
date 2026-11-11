// Function: FUN_0041baf5
// Entry: 0041baf5
// Size: 308 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0041baf5(HWND param_1)

{
  HTHEME hTheme;
  HDC hdc;
  int *piVar1;
  BOOL BVar2;
  uint uVar3;
  int iStateId;
  undefined4 uVar4;
  tagRECT local_20;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar4 = 0;
  if ((DAT_00542f98 != 0) && (hTheme = OpenThemeData(param_1,L"edit"), hTheme != (HTHEME)0x0)) {
    hdc = GetWindowDC(param_1);
    GetWindowRect(param_1,&local_20);
    local_20.right = local_20.right - local_20.left;
    local_20.bottom = local_20.bottom - local_20.top;
    local_20.left = 0;
    local_20.top = 0;
    piVar1 = GetPropW(param_1,L"PB_ClientRect");
    FUN_0044c490(&local_10,(uint *)&local_20,0x10);
    local_10 = local_10 + *piVar1;
    local_c = local_c + piVar1[1];
    local_8 = local_8 - piVar1[2];
    local_4 = local_4 - piVar1[3];
    ExcludeClipRect(hdc,local_10,local_c,local_8,local_4);
    BVar2 = IsThemeBackgroundPartiallyTransparent(hTheme,1,1);
    if (BVar2 != 0) {
      DrawThemeParentBackground(param_1,hdc,&local_20);
    }
    BVar2 = IsWindowEnabled(param_1);
    if (BVar2 == 0) {
      iStateId = 4;
    }
    else {
      uVar3 = SendMessageW(param_1,0x44e,0,0);
      iStateId = (-(uint)((uVar3 & 0x800) != 0) & 5) + 1;
    }
    DrawThemeBackground(hTheme,hdc,1,iStateId,&local_20,(LPCRECT)0x0);
    CloseThemeData(hTheme);
    ReleaseDC(param_1,hdc);
    uVar4 = 1;
  }
  return uVar4;
}


