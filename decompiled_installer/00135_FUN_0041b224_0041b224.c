// Function: FUN_0041b224
// Entry: 0041b224
// Size: 43 bytes
// Thunk: false
// External: false


void FUN_0041b224(int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    EnableWindow((HWND)*puVar1,(uint)(param_2 == 0));
  }
  return;
}


