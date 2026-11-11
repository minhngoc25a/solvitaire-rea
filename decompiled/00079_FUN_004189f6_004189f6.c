// Function: FUN_004189f6
// Entry: 004189f6
// Size: 41 bytes
// Thunk: false
// External: false


void FUN_004189f6(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004258d0(DAT_00542930,param_1);
  if (piVar1 == (int *)0x0) {
    FUN_00469d30(param_2);
  }
  else {
    (**(code **)(*piVar1 + 0x24))(piVar1[1]);
  }
  return;
}


