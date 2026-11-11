// Function: FUN_00419f2c
// Entry: 00419f2c
// Size: 229 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00419f2c(HWND param_1,int param_2,int param_3,int param_4,int param_5,LPCWSTR param_6,
                 uint param_7)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND pHVar3;
  LPCWSTR lpWindowName;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  if (DAT_00542c18 == 0) {
    _memset(&DAT_00542b70,0,0xa8);
    _DAT_00542b74 = 0xa8;
    _DAT_00542b80 = &LAB_0041a038;
    _DAT_00542b84 = &LAB_0041a011;
    _DAT_00542b70 = 1;
    _DAT_00542c00 = &LAB_0041a055;
    DAT_00542c18 = 1;
  }
  lpWindowName = param_6;
  if (param_6 == (LPCWSTR)0x0) {
    lpWindowName = L"";
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  pHVar2 = CreateWindowExW(0,L"Button",lpWindowName,param_7 | 0x50030000,param_2,param_3,param_4,
                           param_5,(HWND)*puVar1,(HMENU)0xffffffff,DAT_00542260,(LPVOID)0x0);
  pHVar3 = (HWND)0x0;
  if (pHVar2 != (HWND)0x0) {
    pHVar3 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    pHVar3 = FUN_0047603c(param_1,pHVar3,pHVar2,0x542b70);
  }
  return pHVar3;
}


