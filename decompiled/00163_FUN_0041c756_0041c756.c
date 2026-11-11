// Function: FUN_0041c756
// Entry: 0041c756
// Size: 53 bytes
// Thunk: false
// External: false


undefined8 FUN_0041c756(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_004258d0(DAT_00542fa0,param_1);
  uVar3 = 0;
  if ((uVar2 != 0) &&
     (pcVar1 = *(code **)(*(int *)(uVar2 + 4) + 0x10), uVar3 = 0, pcVar1 != (code *)0x0)) {
    uVar3 = (*pcVar1)(uVar2);
  }
  return uVar3;
}


