// Function: FUN_0041c55e
// Entry: 0041c55e
// Size: 321 bytes
// Thunk: false
// External: false


undefined4 FUN_0041c55e(void)

{
  HWND hWnd;
  HWND pHVar1;
  undefined4 uVar2;
  WCHAR *pWVar3;
  int iVar4;
  WCHAR local_64 [50];
  
  hWnd = GetFocus();
  if (hWnd == (HWND)0x0) {
    return 0xffffffff;
  }
  pWVar3 = local_64;
  iVar4 = 0x32;
  pHVar1 = GetParent(hWnd);
  GetClassNameW(pHVar1,pWVar3,iVar4);
  iVar4 = _wcscmp(local_64,L"Shell DocObject View");
  if (((iVar4 == 0) || (iVar4 = _wcscmp(local_64,L"Shell Embedding"), iVar4 == 0)) ||
     (iVar4 = _wcscmp(local_64,L"PureWeb"), iVar4 == 0)) {
    while ((iVar4 = _wcscmp(local_64,L"Shell DocObject View"), iVar4 == 0 ||
           (iVar4 = _wcscmp(local_64,L"Shell Embedding"), iVar4 == 0))) {
      hWnd = GetParent(hWnd);
      GetClassNameW(hWnd,local_64,0x32);
    }
    iVar4 = _wcscmp(local_64,L"PureWeb");
    hWnd = (HWND)((uint)hWnd & ~-(uint)(iVar4 != 0));
    goto LAB_0041c68c;
  }
  iVar4 = _wcscmp(local_64,L"SysIPAddress32");
  if ((iVar4 != 0) && (iVar4 = _wcscmp(local_64,L"ComboBoxEx32"), iVar4 != 0)) {
    iVar4 = _wcscmp(local_64,L"ComboBox");
    if (iVar4 != 0) goto LAB_0041c68c;
    hWnd = GetParent(hWnd);
    pWVar3 = local_64;
    iVar4 = 0x32;
    pHVar1 = GetParent(hWnd);
    GetClassNameW(pHVar1,pWVar3,iVar4);
    iVar4 = _wcscmp(local_64,L"ComboBoxEx32");
    if (iVar4 != 0) goto LAB_0041c68c;
  }
  hWnd = GetParent(hWnd);
LAB_0041c68c:
  uVar2 = FUN_004773b8(hWnd);
  return uVar2;
}


