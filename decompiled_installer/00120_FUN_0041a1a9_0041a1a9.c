// Function: FUN_0041a1a9
// Entry: 0041a1a9
// Size: 275 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041a1a9(HWND param_1,int param_2,int param_3,int param_4,int param_5,LPCWSTR param_6,
                 uint param_7)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND pHVar3;
  uint uVar4;
  LPCWSTR lpWindowName;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  if (DAT_00542cc8 == 0) {
    _memset(&DAT_00542c20,0,0xa8);
    _DAT_00542c20 = 4;
    _DAT_00542c24 = 0xa8;
    _DAT_00542c28 = &LAB_0041a415;
    _DAT_00542c30 = &LAB_0041a2ff;
    _DAT_00542c34 = &LAB_0041a2bc;
    _DAT_00542cb0 = &LAB_0041a331;
    DAT_00542cc8 = 1;
  }
  lpWindowName = param_6;
  if (param_6 == (LPCWSTR)0x0) {
    lpWindowName = L"";
  }
  uVar4 = param_7;
  if (((byte)param_7 & 5) != 5) {
    uVar4 = param_7 | 3;
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  pHVar2 = CreateWindowExW(0,L"Button",lpWindowName,uVar4 | 0x50030000,param_2,param_3,param_4,
                           param_5,(HWND)*puVar1,(HMENU)0xffffffff,DAT_00542260,(LPVOID)0x0);
  pHVar3 = (HWND)0x0;
  if (pHVar2 != (HWND)0x0) {
    pHVar3 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    if (((byte)uVar4 & 5) == 5) {
      pHVar3[4].unused = 1;
    }
    pHVar3 = FUN_0047603c(param_1,pHVar3,pHVar2,0x542c20);
  }
  return pHVar3;
}


