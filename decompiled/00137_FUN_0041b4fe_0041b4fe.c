// Function: FUN_0041b4fe
// Entry: 0041b4fe
// Size: 43 bytes
// Thunk: false
// External: false


void FUN_0041b4fe(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = GetWindowTextLengthW((HWND)*param_1);
  if ((iVar1 != 0) || (param_1[4] != 0)) {
    SendMessageW((HWND)*param_1,0xba,0,0);
  }
  return;
}


