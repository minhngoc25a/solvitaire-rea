// Function: FUN_00420f64
// Entry: 00420f64
// Size: 26 bytes
// Thunk: false
// External: false


void FUN_00420f64(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(int *)(param_1 + 8) = param_2 + -8;
  **(int **)(param_1 + 0xc) = param_2 + -8;
  return;
}


