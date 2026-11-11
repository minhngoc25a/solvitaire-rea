// Function: FUN_0041c17b
// Entry: 0041c17b
// Size: 50 bytes
// Thunk: false
// External: false


void FUN_0041c17b(int *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (int *)0xffffffff) {
    FUN_00425a07(DAT_00542fa0);
  }
  else {
    puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      DestroyWindow((HWND)*puVar1);
    }
  }
  return;
}


