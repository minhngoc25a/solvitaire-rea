// Function: FUN_0041cf2c
// Entry: 0041cf2c
// Size: 102 bytes
// Thunk: false
// External: false


void __cdecl FUN_0041cf2c(HWND param_1)

{
  uint uVar1;
  LONG LVar2;
  HWND hWnd;
  
  hWnd = param_1;
  while( true ) {
    uVar1 = GetWindowLongW(hWnd,-0x10);
    if ((uVar1 >> 0x11 & 1) != 0) break;
    hWnd = GetWindow(hWnd,3);
  }
  LVar2 = GetWindowLongW(hWnd,-0x10);
  while (((byte)LVar2 & 9) == 9) {
    SendMessageW(hWnd,0xf1,0,0);
    hWnd = GetWindow(hWnd,2);
    LVar2 = GetWindowLongW(hWnd,-0x10);
  }
  SendMessageW(param_1,0xf1,1,0);
  return;
}


