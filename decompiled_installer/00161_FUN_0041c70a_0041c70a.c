// Function: FUN_0041c70a
// Entry: 0041c70a
// Size: 54 bytes
// Thunk: false
// External: false


void FUN_0041c70a(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = FUN_004258d0(DAT_00542fa0,param_1);
  if (uVar2 != 0) {
    pcVar1 = *(code **)(*(int *)(uVar2 + 4) + 0x40);
    if (pcVar1 == (code *)0x0) {
      FUN_00469d30(param_4);
    }
    else {
      (*pcVar1)(uVar2,param_2,param_3);
    }
  }
  return;
}


