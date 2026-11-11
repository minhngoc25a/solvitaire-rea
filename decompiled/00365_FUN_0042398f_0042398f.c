// Function: FUN_0042398f
// Entry: 0042398f
// Size: 28 bytes
// Thunk: false
// External: false


undefined4 FUN_0042398f(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00543570,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


