// Function: FUN_004ff320
// Entry: 004ff320
// Size: 64 bytes
// Thunk: false
// External: false


undefined4 * FUN_004ff320(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1[1] + (param_2 % (int)param_1[9]) * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (puVar1[1] == param_2) break;
    param_1[2] = puVar1;
    puVar1 = (undefined4 *)*puVar1;
  }
  *param_1 = puVar1;
  param_1[5] = param_2 % (int)param_1[9];
  return puVar1 + 2;
}


