// Function: FUN_0041d650
// Entry: 0041d650
// Size: 344 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041d650(HWND param_1,int param_2,int param_3,int param_4,int param_5,LPCWSTR param_6,
                 uint param_7)

{
  undefined4 *puVar1;
  HWND hWnd;
  HWND pHVar2;
  LPCWSTR lpString;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  if (DAT_005432a0 == 0) {
    _memset(&DAT_005431f8,0,0xa8);
    _DAT_005431f8 = 2;
    _DAT_005431fc = 0xa8;
    _DAT_00543200 = &LAB_0041d7a8;
    _DAT_00543270 = &LAB_00477539;
    _DAT_00543274 = &LAB_0041d33e;
    _DAT_00543204 = &LAB_00477592;
    _DAT_00543264 = &LAB_0041d8f3;
    _DAT_00543260 = &LAB_0041d8cd;
    _DAT_00543288 = &LAB_0041d92b;
    DAT_005432a0 = 1;
  }
  lpString = param_6;
  if (param_6 == (LPCWSTR)0x0) {
    lpString = L"";
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  hWnd = CreateWindowExW(~(param_7 >> 8) & 0x200,L"Edit",(LPCWSTR)0x0,param_7 | 0x50030080,param_2,
                         param_3,param_4,param_5,(HWND)*puVar1,(HMENU)0xffffffff,DAT_00542260,
                         (LPVOID)0x0);
  pHVar2 = (HWND)0x0;
  if (hWnd != (HWND)0x0) {
    SendMessageW(hWnd,0xc5,0x100000,0);
    SetWindowTextW(hWnd,lpString);
    pHVar2 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    DAT_005432a4 = SetWindowLongW(hWnd,-4,0x41d843);
    pHVar2[5].unused = -1;
    pHVar2[4].unused = -1;
    pHVar2 = FUN_0047603c(param_1,pHVar2,hWnd,0x5431f8);
  }
  return pHVar2;
}


