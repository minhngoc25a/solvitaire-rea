// Function: FUN_00485ed0
// Entry: 00485ed0
// Size: 116 bytes
// Thunk: false
// External: false


undefined4 FUN_00485ed0(int param_1)

{
  int *piVar1;
  
  if (((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) &&
     (*piVar1 == param_1)) {
    if (piVar1[4] != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),piVar1[4]);
    }
    if (piVar1[5] != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),piVar1[5]);
    }
    if (piVar1[6] != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),piVar1[6]);
    }
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 0;
  }
  return 0xfffffffe;
}


