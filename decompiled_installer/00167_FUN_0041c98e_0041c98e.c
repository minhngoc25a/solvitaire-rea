// Function: FUN_0041c98e
// Entry: 0041c98e
// Size: 40 bytes
// Thunk: false
// External: false


void FUN_0041c98e(undefined4 *param_1,LPARAM param_2)

{
  SendMessageW((HWND)*param_1,0x172,0,param_2);
  InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
  return;
}


