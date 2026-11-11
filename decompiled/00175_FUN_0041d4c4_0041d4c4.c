// Function: FUN_0041d4c4
// Entry: 0041d4c4
// Size: 59 bytes
// Thunk: false
// External: false


void FUN_0041d4c4(int *param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  
  if (param_1 == (int *)0xffffffff) {
    hWnd = (HWND)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if (*(code **)(puVar1[1] + 0x94) != (code *)0x0) {
      (**(code **)(puVar1[1] + 0x94))(puVar1);
      return;
    }
    hWnd = (HWND)*puVar1;
  }
  SetFocus(hWnd);
  return;
}


