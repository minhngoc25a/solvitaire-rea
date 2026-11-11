// Function: FUN_0041e946
// Entry: 0041e946
// Size: 28 bytes
// Thunk: false
// External: false


undefined4 FUN_0041e946(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_0054398c,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


