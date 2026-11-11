// Function: FUN_0041ce20
// Entry: 0041ce20
// Size: 268 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041ce20(HWND param_1,int param_2,int param_3,int param_4,int param_5,LPCWSTR param_6)

{
  int iVar1;
  undefined4 *puVar2;
  HWND hWnd;
  HWND pHVar3;
  LPCWSTR lpWindowName;
  
  puVar2 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  if (DAT_00543140 == 0) {
    _memset(&DAT_00543098,0,0xa8);
    _DAT_00543098 = 5;
    _DAT_0054309c = 0xa8;
    _DAT_005430a8 = &LAB_0041a038;
    _DAT_005430ac = &LAB_0041cf92;
    _DAT_00543128 = &LAB_0041a331;
    DAT_00543140 = 1;
  }
  lpWindowName = param_6;
  if (param_6 == (LPCWSTR)0x0) {
    lpWindowName = L"";
  }
  iVar1 = puVar2[1];
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  hWnd = CreateWindowExW(0,L"Button",lpWindowName,(-(uint)(iVar1 != 0) & 0xfffe0000) + 0x50030009,
                         param_2,param_3,param_4,param_5,(HWND)*puVar2,(HMENU)0xffffffff,
                         DAT_00542260,(LPVOID)0x0);
  pHVar3 = (HWND)0x0;
  if (hWnd != (HWND)0x0) {
    DAT_00543144 = SetWindowLongW(hWnd,-4,0x41cfbe);
    pHVar3 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    pHVar3 = FUN_0047603c(param_1,pHVar3,hWnd,0x543098);
    puVar2[1] = 1;
  }
  return pHVar3;
}


