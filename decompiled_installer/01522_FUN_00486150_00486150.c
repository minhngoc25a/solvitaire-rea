// Function: FUN_00486150
// Entry: 00486150
// Size: 125 bytes
// Thunk: false
// External: false


undefined4 FUN_00486150(int param_1)

{
  int *piVar1;
  
  if (((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) &&
     (*piVar1 == param_1)) {
    if (piVar1[0x313] != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),piVar1[0x313]);
    }
    if (piVar1[0x314] != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),piVar1[0x314]);
    }
    if (piVar1[0x315] != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),piVar1[0x315]);
    }
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 0;
  }
  return 0xfffffffe;
}


