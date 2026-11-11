// Function: FUN_0041c6d8
// Entry: 0041c6d8
// Size: 50 bytes
// Thunk: false
// External: false


undefined4 FUN_0041c6d8(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  uVar2 = FUN_004258d0(DAT_00542fa0,param_1);
  if ((uVar2 != 0) && (pcVar1 = *(code **)(*(int *)(uVar2 + 4) + 0x7c), pcVar1 != (code *)0x0)) {
    uVar3 = (*pcVar1)(uVar2,param_2);
  }
  return uVar3;
}


