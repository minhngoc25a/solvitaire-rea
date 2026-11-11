// Function: FUN_00475480
// Entry: 00475480
// Size: 111 bytes
// Thunk: false
// External: false


void __cdecl FUN_00475480(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2b;
    (**(code **)*param_1)(param_1);
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)(**(code **)param_1[1])(param_1,0,0x1c);
    param_1[6] = (int)piVar1;
  }
  piVar1[1] = param_3;
  *piVar1 = param_2;
  piVar1[2] = (int)guard_check_icall;
  piVar1[3] = (int)&LAB_004754f0;
  piVar1[4] = (int)&LAB_00475530;
  piVar1[5] = (int)&LAB_004abbc0;
  piVar1[6] = (int)guard_check_icall;
  return;
}


