// Function: FUN_0041e738
// Entry: 0041e738
// Size: 95 bytes
// Thunk: false
// External: false


void FUN_0041e738(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  HWND hWndInsertAfter;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054398c,param_1);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[7] == 0)) {
    uVar2 = GetWindowLongW((HWND)*puVar1,-0x14);
    if (param_2 == 0) {
      if ((uVar2 & 8) == 0) {
        return;
      }
      hWndInsertAfter = (HWND)0xfffffffe;
    }
    else {
      if ((uVar2 & 8) != 0) {
        return;
      }
      hWndInsertAfter = (HWND)0xffffffff;
    }
    SetWindowPos((HWND)*puVar1,hWndInsertAfter,0,0,0,0,0x13);
    InvalidateRect((HWND)*puVar1,(RECT *)0x0,0);
  }
  return;
}


