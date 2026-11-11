// Function: FUN_0041d52e
// Entry: 0041d52e
// Size: 43 bytes
// Thunk: false
// External: false


void FUN_0041d52e(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = FUN_004258d0(DAT_00542fa0,param_1);
  if ((uVar2 != 0) && (pcVar1 = *(code **)(*(int *)(uVar2 + 4) + 0x78), pcVar1 != (code *)0x0)) {
    (*pcVar1)(uVar2,param_2,param_3);
  }
  return;
}


