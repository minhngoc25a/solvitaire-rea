// Function: FUN_0041b967
// Entry: 0041b967
// Size: 108 bytes
// Thunk: false
// External: false


void FUN_0041b967(undefined4 *param_1,int param_2,HANDLE param_3,int param_4)

{
  if (param_2 == 1) {
    SendMessageW((HWND)*param_1,0xcf,(uint)(param_3 != (HANDLE)0x0 || param_4 != 0),0);
  }
  else if (param_2 == 2) {
    SendMessageW((HWND)*param_1,0x448,0,(uint)(param_3 == (HANDLE)0x0 && param_4 == 0));
    SetPropW((HWND)*param_1,L"PB_WordWrap",param_3);
  }
  return;
}


