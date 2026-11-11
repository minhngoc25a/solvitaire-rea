// Function: FUN_00416ea9
// Entry: 00416ea9
// Size: 121 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_00416ea9(LPCWSTR param_1,WCHAR *param_2,UINT param_3,HWND param_4)

{
  uint uVar1;
  int iVar2;
  WCHAR aWStack_20004 [65536];
  
  if (param_4 == (HWND)0x0) {
    param_4 = (HWND)FUN_0044c244();
  }
  if (param_2 != (WCHAR *)0x0) {
    uVar1 = FUN_0044be0a(param_2);
    if (0xffff < uVar1) {
      FUN_0044c204(aWStack_20004,(int)param_2,0xfffe);
      param_2 = aWStack_20004;
    }
  }
  FUN_0044c278(1);
  iVar2 = MessageBoxW(param_4,param_2,param_1,param_3);
  FUN_0044c278(0);
  return iVar2;
}


