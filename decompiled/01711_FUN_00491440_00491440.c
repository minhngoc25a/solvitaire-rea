// Function: FUN_00491440
// Entry: 00491440
// Size: 73 bytes
// Thunk: false
// External: false


int * __cdecl FUN_00491440(int *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  
  piVar1 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + 1 + param_3));
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  if (param_3 != 0) {
    FUN_0044c490((uint *)(*param_1 + param_1[1]),param_2,param_3);
  }
  param_1[1] = param_1[1] + param_3;
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  return param_1;
}


