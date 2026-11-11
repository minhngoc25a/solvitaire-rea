// Function: FUN_00418a1f
// Entry: 00418a1f
// Size: 35 bytes
// Thunk: false
// External: false


undefined4 FUN_00418a1f(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_004258d0(DAT_00542930,param_1);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1[1]);
  }
  return uVar2;
}


