// Function: FUN_0041d032
// Entry: 0041d032
// Size: 283 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041d032(HWND param_1,int param_2,int param_3,int param_4,int param_5,WPARAM param_6,
                 LPARAM param_7,uint param_8)

{
  undefined4 *puVar1;
  HWND hWnd;
  HWND pHVar2;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  if (DAT_005431f0 == 0) {
    _memset(&DAT_00543148,0,0xa8);
    _DAT_0054314c = 0xa8;
    _DAT_00543148 = 0xe;
    _DAT_00543158 = &LAB_0041d14d;
    _DAT_0054315c = &LAB_0041d172;
    _DAT_005431b0 = &LAB_0041d2a8;
    _DAT_005431b4 = &LAB_0041d252;
    _DAT_005431c4 = &LAB_0041d33e;
    _DAT_005431c0 = &LAB_0041d2db;
    DAT_005431f0 = 1;
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  hWnd = CreateWindowExW(0,L"msctls_progress32",(LPCWSTR)0x0,param_8 | 0x50000000,param_2,param_3,
                         param_4,param_5,(HWND)*puVar1,(HMENU)0x0,DAT_00542260,(LPVOID)0x0);
  pHVar2 = (HWND)0x0;
  if (hWnd != (HWND)0x0) {
    SendMessageW(hWnd,0x406,param_6,param_7);
    pHVar2 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    pHVar2[5].unused = -1;
    pHVar2[4].unused = -1;
    pHVar2[6].unused = 0;
    pHVar2 = FUN_0047603c(param_1,pHVar2,hWnd,0x543148);
  }
  return pHVar2;
}


