// Function: FUN_0041c370
// Entry: 0041c370
// Size: 28 bytes
// Thunk: false
// External: false


undefined4 FUN_0041c370(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


