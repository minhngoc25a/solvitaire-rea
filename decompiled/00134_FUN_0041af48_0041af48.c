// Function: FUN_0041af48
// Entry: 0041af48
// Size: 424 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041af48(HWND param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  undefined4 *puVar1;
  HWND hWnd;
  HWND pHVar2;
  uint uVar3;
  DWORD dwExStyle;
  WNDCLASSEXW local_30;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  uVar3 = 0;
  dwExStyle = 0;
  if (DAT_00542e28 == 0) {
    _memset(&DAT_00542d80,0,0xa8);
    _DAT_00542d84 = 0xa8;
    _DAT_00542d80 = 0xb;
    _DAT_00542d8c = &LAB_0041b1fd;
    _DAT_00542dc8 = &LAB_0041b1ef;
    _DAT_00542df8 = &LAB_0041b17b;
    _DAT_00542dfc = &LAB_0041b1d9;
    _memset(&local_30,0,0x30);
    local_30.cbSize = 0x30;
    local_30.lpfnWndProc = (WNDPROC)&LAB_0041b0f0;
    local_30.hbrBackground = (HBRUSH)0x10;
    local_30.hInstance = DAT_00542260;
    local_30.lpszClassName = L"PureContainer";
    local_30.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    local_30.cbWndExtra = 4;
    RegisterClassExW(&local_30);
    DAT_00542e28 = 1;
  }
  if ((param_6 & 1) == 0) {
    if ((param_6 & 2) == 0) {
      if ((param_6 & 4) == 0) {
        if ((param_6 & 8) != 0) {
          dwExStyle = 0x200;
        }
      }
      else {
        dwExStyle = 0x20000;
      }
    }
    else {
      uVar3 = 0x400000;
    }
  }
  else {
    uVar3 = 0x800000;
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  hWnd = CreateWindowExW(dwExStyle,L"PureContainer",(LPCWSTR)0x0,uVar3 | 0x50000000,param_2,param_3,
                         param_4,param_5,(HWND)*puVar1,(HMENU)0xffffffff,DAT_00542260,(LPVOID)0x0);
  pHVar2 = (HWND)0x0;
  if (hWnd != (HWND)0x0) {
    SetClassLongW(hWnd,-10,0x10);
    pHVar2 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    pHVar2[4].unused = -1;
    SetWindowLongW(hWnd,0,0);
    FUN_00477069(hWnd);
    InvalidateRect(hWnd,(RECT *)0x0,1);
    pHVar2 = FUN_0047603c(param_1,pHVar2,hWnd,0x542d80);
  }
  return pHVar2;
}


