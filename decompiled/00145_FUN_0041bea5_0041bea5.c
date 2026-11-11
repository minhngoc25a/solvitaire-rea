// Function: FUN_0041bea5
// Entry: 0041bea5
// Size: 346 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041bea5(HWND param_1,int param_2,int param_3,int param_4,int param_5,LPCWSTR param_6,
                 uint param_7)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND pHVar3;
  LONG LVar4;
  LPCWSTR lpWindowName;
  HWND pHVar5;
  uint uVar6;
  DWORD dwExStyle;
  wchar_t *lpClassName;
  DWORD dwStyle;
  
  pHVar5 = (HWND)0x0;
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  uVar6 = param_7 & 0xfffffff7;
  if (DAT_00542f90 == 0) {
    _memset(&DAT_00542ee8,0,0xa8);
    _DAT_00542ee8 = 7;
    _DAT_00542eec = 0xa8;
    _DAT_00542f18 = &LAB_0041c10e;
    _DAT_00542f30 = &LAB_0041c167;
    DAT_00542f90 = 1;
  }
  lpWindowName = param_6;
  if (param_6 == (LPCWSTR)0x0) {
    lpWindowName = L"";
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  if (uVar6 == 0) {
    pHVar2 = (HWND)*puVar1;
    dwStyle = 0x50020007;
    lpClassName = L"Button";
    dwExStyle = 0;
  }
  else {
    dwStyle = 0x50020001;
    if (uVar6 == 1) {
      dwExStyle = 0x200;
    }
    else if (uVar6 == 2) {
      dwExStyle = 0x20000;
    }
    else {
      dwExStyle = 0;
      dwStyle = 0x50820001;
    }
    pHVar2 = (HWND)*puVar1;
    lpWindowName = (LPCWSTR)0x0;
    lpClassName = L"Static";
  }
  pHVar2 = CreateWindowExW(dwExStyle,lpClassName,lpWindowName,dwStyle,param_2,param_3,param_4,
                           param_5,pHVar2,(HMENU)0xffffffff,DAT_00542260,(LPVOID)0x0);
  if (pHVar2 != (HWND)0x0) {
    pHVar3 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    pHVar3[4].unused = param_7;
    if ((param_7 & 8) != 0) {
      FUN_00477069(pHVar2);
    }
    pHVar5 = FUN_0047603c(param_1,pHVar3,pHVar2,0x542ee8);
    LVar4 = SetWindowLongW(pHVar2,-4,0x41bfff);
    pHVar3[5].unused = LVar4;
  }
  return pHVar5;
}


