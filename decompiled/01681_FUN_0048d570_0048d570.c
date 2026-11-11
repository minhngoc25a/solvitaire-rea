// Function: FUN_0048d570
// Entry: 0048d570
// Size: 111 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048d570(int *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      if (*(char *)(uVar2 + (int)param_2) == '\0') break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  piVar1 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + 1 + uVar2));
  if (piVar1 == (int *)0x0) {
    FUN_004873c0(1,"Out of memory");
    return (int *)0x0;
  }
  if (uVar2 != 0) {
    FUN_0044c490((uint *)(*param_1 + param_1[1]),param_2,uVar2);
  }
  param_1[1] = param_1[1] + uVar2;
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  return param_1;
}


