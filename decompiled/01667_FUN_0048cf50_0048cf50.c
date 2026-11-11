// Function: FUN_0048cf50
// Entry: 0048cf50
// Size: 82 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048cf50(int *param_1,undefined2 param_2)

{
  int *piVar1;
  
  piVar1 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] * 2 + 4));
  if (piVar1 == (int *)0x0) {
    FUN_004873c0(1,"Out of memory");
    return (int *)0x0;
  }
  *(undefined2 *)(*param_1 + param_1[1] * 2) = param_2;
  param_1[1] = param_1[1] + 1;
  *(undefined2 *)(*param_1 + param_1[1] * 2) = 0;
  return param_1;
}


