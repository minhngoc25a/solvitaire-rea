// Function: FUN_0041a487
// Entry: 0041a487
// Size: 52 bytes
// Thunk: false
// External: false


void FUN_0041a487(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004258d0(DAT_00542fa0,param_1);
  if ((uVar1 != 0) && (*(int *)(*(int *)(uVar1 + 4) + 0x2c) != 0)) {
    FUN_00475fd5();
    (**(code **)(*(int *)(uVar1 + 4) + 0x2c))(uVar1);
    FUN_00475fde();
  }
  return;
}


