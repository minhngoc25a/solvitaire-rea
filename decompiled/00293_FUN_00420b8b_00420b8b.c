// Function: FUN_00420b8b
// Entry: 00420b8b
// Size: 28 bytes
// Thunk: false
// External: false


undefined4 FUN_00420b8b(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_005434a8,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


