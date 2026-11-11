// Function: FUN_0041d9f9
// Entry: 0041d9f9
// Size: 266 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0041d9f9(HWND param_1,int param_2,int param_3,int param_4,int param_5,LPCWSTR param_6,
                 uint param_7)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND pHVar3;
  LPCWSTR lpWindowName;
  
  puVar1 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  if (DAT_00543350 == 0) {
    DAT_00543350 = 1;
    _memset(&DAT_005432a8,0,0xa8);
    _DAT_005432a8 = 3;
    _DAT_005432ac = 0xa8;
    _DAT_00543338 = &LAB_0041db03;
    _DAT_005432b0 = &LAB_0041dc34;
    _DAT_00543320 = &LAB_00477539;
    _DAT_00543324 = &LAB_0041d33e;
    _DAT_005432b4 = &LAB_00477592;
  }
  lpWindowName = param_6;
  if (param_6 == (LPCWSTR)0x0) {
    lpWindowName = L"";
  }
  FUN_00475fe7(&param_2,&param_3,&param_4,&param_5);
  pHVar2 = CreateWindowExW(param_7 >> 8 & 0x200,L"Static",lpWindowName,param_7 | 0x50020180,param_2,
                           param_3,param_4,param_5,(HWND)*puVar1,(HMENU)0xffffffff,DAT_00542260,
                           (LPVOID)0x0);
  pHVar3 = (HWND)0x0;
  if (pHVar2 != (HWND)0x0) {
    pHVar3 = (HWND)FUN_0042583b(DAT_00542fa0,(int)param_1);
    pHVar3[5].unused = -1;
    pHVar3[4].unused = -1;
    pHVar3 = FUN_0047603c(param_1,pHVar3,pHVar2,0x5432a8);
  }
  return pHVar3;
}


