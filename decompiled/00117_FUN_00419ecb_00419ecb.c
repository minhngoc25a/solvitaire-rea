// Function: FUN_00419ecb
// Entry: 00419ecb
// Size: 97 bytes
// Thunk: false
// External: false


undefined4 FUN_00419ecb(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_3 == (undefined2 *)0x0) {
    param_3 = &DAT_0052ef5c;
  }
  uVar2 = FUN_004258d0(DAT_00542fa0,param_1);
  if (uVar2 != 0) {
    FUN_00475fd5();
    pcVar1 = *(code **)(*(int *)(uVar2 + 4) + 0x24);
    if (pcVar1 == (code *)0x0) {
      pcVar1 = *(code **)(*(int *)(uVar2 + 4) + 0x20);
      if (pcVar1 != (code *)0x0) {
        uVar3 = (*pcVar1)(uVar2,param_2,param_3,0);
      }
    }
    else {
      uVar3 = (*pcVar1)(uVar2,param_2,param_3,0,0);
    }
    FUN_00475fde();
  }
  return uVar3;
}


