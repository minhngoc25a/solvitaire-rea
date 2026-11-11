// Function: FUN_00418af2
// Entry: 00418af2
// Size: 43 bytes
// Thunk: false
// External: false


undefined4 FUN_00418af2(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_004258d0(DAT_00542930,param_1);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x28))(piVar1[1],param_2,param_3);
  }
  return uVar2;
}


