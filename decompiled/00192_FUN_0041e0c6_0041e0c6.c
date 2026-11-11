// Function: FUN_0041e0c6
// Entry: 0041e0c6
// Size: 122 bytes
// Thunk: false
// External: false


void FUN_0041e0c6(int *param_1)

{
  WPARAM *pWVar1;
  HWND hWnd;
  
  if (param_1 == (int *)0xffffffff) {
    FUN_00425a07(DAT_0054398c);
    return;
  }
  pWVar1 = (WPARAM *)FUN_004258d0(DAT_0054398c,param_1);
  if (pWVar1 == (WPARAM *)0x0) {
    return;
  }
  FUN_004775f1((int)param_1);
  hWnd = GetWindow((HWND)*pWVar1,4);
  if (hWnd == (HWND)0x0) {
LAB_0041e114:
    if (pWVar1[7] == 0) {
      DestroyWindow((HWND)*pWVar1);
      goto LAB_0041e136;
    }
  }
  else if (pWVar1[7] == 0) {
    SetActiveWindow(hWnd);
    goto LAB_0041e114;
  }
  SendMessageW((HWND)pWVar1[7],0x221,*pWVar1,0);
LAB_0041e136:
  FUN_004775a7((int)param_1);
  return;
}


