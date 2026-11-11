// Function: FUN_00460cf3
// Entry: 00460cf3
// Size: 40 bytes
// Thunk: false
// External: false


bool FUN_00460cf3(int *param_1)

{
  if (param_1[7] != 0) {
    param_1 = FUN_004612e4(param_1);
  }
  if (param_1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[7] = 1;
  }
  return param_1 != (int *)0x0;
}


