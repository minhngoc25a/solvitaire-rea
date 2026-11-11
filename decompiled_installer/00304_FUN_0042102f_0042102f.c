// Function: FUN_0042102f
// Entry: 0042102f
// Size: 59 bytes
// Thunk: false
// External: false


int * FUN_0042102f(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)*param_1;
    param_1[5] = 0;
    param_1[2] = piVar2;
    piVar1 = (int *)0x0;
    piVar3 = piVar2;
    if (piVar2 == (int *)0x0) goto LAB_00421061;
  }
  else {
    piVar2 = (int *)*piVar3;
    piVar1 = (int *)0x0;
    if (piVar2 == (int *)0x0) goto LAB_00421061;
    param_1[5] = param_1[5] + 1;
    param_1[2] = piVar2;
  }
  piVar1 = piVar2 + 2;
  piVar3 = piVar2;
LAB_00421061:
  *(int **)param_1[3] = piVar3;
  return piVar1;
}


