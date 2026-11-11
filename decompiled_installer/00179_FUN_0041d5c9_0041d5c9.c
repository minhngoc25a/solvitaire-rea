// Function: FUN_0041d5c9
// Entry: 0041d5c9
// Size: 60 bytes
// Thunk: false
// External: false


void FUN_0041d5c9(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_004258d0(DAT_00542fa0,param_1);
  if ((uVar1 != 0) && (*(int *)(*(int *)(uVar1 + 4) + 0x14) != 0)) {
    FUN_00475fd5();
    (**(code **)(*(int *)(uVar1 + 4) + 0x14))(uVar1,param_2,param_3);
    FUN_00475fde();
  }
  return;
}


