// Function: FUN_0046a8d1
// Entry: 0046a8d1
// Size: 41 bytes
// Thunk: false
// External: false


int * FUN_0046a8d1(short *param_1)

{
  int *piVar1;
  
  if (*param_1 == 4) {
    FUN_004a3b33(*(int *)(param_1 + 4));
    piVar1 = FUN_00420ec6(*(int **)(param_1 + 4));
    *(undefined1 *)((int)piVar1 + 3) = *(undefined1 *)((int)param_1 + 3);
  }
  else {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


