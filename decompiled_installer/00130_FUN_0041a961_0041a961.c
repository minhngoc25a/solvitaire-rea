// Function: FUN_0041a961
// Entry: 0041a961
// Size: 205 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041a961(undefined4 *param_1,WPARAM param_2,LPARAM param_3,HBITMAP param_4)

{
  int iVar1;
  LRESULT LVar2;
  uint local_38;
  WPARAM local_34;
  LPARAM local_30;
  tagRECT local_14;
  
  GetWindowRect((HWND)*param_1,&local_14);
  if (param_1[4] == 0) {
    if ((int)param_2 < -1) {
      return 1;
    }
    SendMessageW((HWND)*param_1,0x14a,param_2,param_3);
    LVar2 = SendMessageW((HWND)*param_1,0x157,0,0);
    if (LVar2 == 0) {
      return 1;
    }
    iVar1 = (local_14.bottom - _DAT_0053fb84) - local_14.top;
  }
  else {
    if ((int)param_2 < 0) {
      param_2 = SendMessageW((HWND)*param_1,0x146,0,0);
    }
    local_38 = 1;
    local_30 = param_3;
    local_34 = param_2;
    if ((param_4 != (HBITMAP)0x0) &&
       (iVar1 = FUN_0041a918(param_1,param_4,(int)&local_38), iVar1 != 0)) {
      local_38 = local_38 | 6;
    }
    SendMessageW((HWND)*param_1,0x40b,0,(LPARAM)&local_38);
    iVar1 = (local_14.bottom - _DAT_0053fb84) - local_14.top;
  }
  SendMessageW((HWND)*param_1,0x153,0xffffffff,iVar1);
  return 1;
}


