// Function: FUN_004189d4
// Entry: 004189d4
// Size: 34 bytes
// Thunk: false
// External: false


undefined4 FUN_004189d4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_004258d0(DAT_00542930,param_1);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1[1]);
  }
  return uVar2;
}


