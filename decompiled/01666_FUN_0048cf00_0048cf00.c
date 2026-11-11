// Function: FUN_0048cf00
// Entry: 0048cf00
// Size: 74 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048cf00(int *param_1,undefined1 param_2)

{
  int *piVar1;
  
  piVar1 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + 2));
  if (piVar1 == (int *)0x0) {
    FUN_004873c0(1,"Out of memory");
    return (int *)0x0;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2;
  param_1[1] = param_1[1] + 1;
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  return param_1;
}


