// Function: FUN_0041a771
// Entry: 0041a771
// Size: 99 bytes
// Thunk: false
// External: false


void FUN_0041a771(undefined4 *param_1,WPARAM param_2,undefined4 param_3,int param_4)

{
  LRESULT LVar1;
  short *lParam;
  uint uVar2;
  
  LVar1 = SendMessageW((HWND)*param_1,0x149,param_2,0);
  if (LVar1 == -1) {
    FUN_00469d30(param_4);
  }
  else {
    lParam = (short *)FUN_0044c3e0(LVar1,param_4);
    *lParam = 0;
    SendMessageW((HWND)*param_1,0x148,param_2,(LPARAM)lParam);
    uVar2 = FUN_0044be0a(lParam);
    FUN_0044c470(LVar1 - uVar2);
  }
  return;
}


