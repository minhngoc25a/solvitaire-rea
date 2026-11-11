// Function: FUN_0041c832
// Entry: 0041c832
// Size: 323 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041c832(HWND param_1,int param_2,int param_3,int param_4,int param_5,LPARAM param_6,
                 uint param_7)

{
  undefined4 *puVar1;
  HWND hWnd;
  HWND pHVar2;
  HWND pHVar3;
  DWORD dwExStyle;
  uint uVar4;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  dwExStyle = 0;
  uVar4 = 0;
  if (DAT_00542fd8 == 0) {
    DAT_00542fd8 = 1;
    _memset(&DAT_00542fe0,0,0xa8);
    _DAT_00542fe4 = 0xa8;
    _DAT_00542fe0 = 9;
    _DAT_00542ff0 = &LAB_0041c975;
    _DAT_00542ff4 = FUN_0041c98e;
    _DAT_00542fec = &LAB_0041c9b6;
    _DAT_00543070 = &LAB_0041cdd1;
    DAT_00542fdc = GetSystemMetrics(0x44);
    DAT_00543088 = GetSystemMetrics(0x45);
  }
  if ((param_7 & 0x200) == 0) {
    if ((param_7 & 1) != 0) {
      uVar4 = 0x400000;
    }
  }
  else {
    dwExStyle = 0x200;
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  hWnd = CreateWindowExW(dwExStyle,L"STATIC",(LPCWSTR)0x0,uVar4 | 0x50000100,param_2,param_3,param_4
                         ,param_5,(HWND)*puVar1,(HMENU)0xffffffff,DAT_00542260,(LPVOID)0x0);
  pHVar3 = (HWND)0x0;
  if (hWnd != (HWND)0x0) {
    DAT_0054308c = SetWindowLongW(hWnd,-4,0x41ca31);
    pHVar2 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    pHVar3 = FUN_0047603c(param_1,pHVar2,hWnd,0x542fe0);
    FUN_0041c98e(pHVar2,param_6);
  }
  return pHVar3;
}


