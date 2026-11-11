// Function: FUN_0041ba0c
// Entry: 0041ba0c
// Size: 233 bytes
// Thunk: false
// External: false


bool __cdecl FUN_0041ba0c(HWND param_1,LPCRECT param_2)

{
  HTHEME hTheme;
  HWND pHVar1;
  HDC hdc;
  HRESULT HVar2;
  int *piVar3;
  bool bVar4;
  tagRECT local_10;
  
  bVar4 = false;
  if ((DAT_00542f98 != 0) && (hTheme = OpenThemeData(param_1,L"edit"), hTheme != (HTHEME)0x0)) {
    _memset(&local_10,0,0x10);
    pHVar1 = GetParent(param_1);
    hdc = GetDC(pHVar1);
    HVar2 = GetThemeBackgroundContentRect(hTheme,hdc,1,1,param_2,&local_10);
    bVar4 = HVar2 == 0;
    if (bVar4) {
      InflateRect(&local_10,-1,-1);
      piVar3 = GetPropW(param_1,L"PB_ClientRect");
      *piVar3 = local_10.left - param_2->left;
      piVar3[1] = local_10.top - param_2->top;
      piVar3[2] = param_2->right - local_10.right;
      piVar3[3] = param_2->bottom - local_10.bottom;
      FUN_0044c490((uint *)param_2,(uint *)&local_10,0x10);
    }
    pHVar1 = GetParent(param_1);
    ReleaseDC(pHVar1,hdc);
    CloseThemeData(hTheme);
  }
  return bVar4;
}


