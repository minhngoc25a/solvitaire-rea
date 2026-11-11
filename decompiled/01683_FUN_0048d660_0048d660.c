// Function: FUN_0048d660
// Entry: 0048d660
// Size: 142 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048d660(int *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar1 = param_2;
  do {
    if ((char)*puVar1 == '\0') break;
    if (*(char *)((int)puVar1 + 1) == '\0') {
      uVar3 = uVar3 + 1;
      break;
    }
    if (*(char *)((int)puVar1 + 2) == '\0') {
      uVar3 = uVar3 + 2;
      break;
    }
    if (*(char *)((int)puVar1 + 3) == '\0') {
      uVar3 = uVar3 + 3;
      break;
    }
    uVar3 = uVar3 + 4;
    puVar1 = puVar1 + 1;
  } while (uVar3 < 0x1000000);
  piVar2 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + 1 + uVar3));
  if (piVar2 != (int *)0x0) {
    if (uVar3 != 0) {
      FUN_0044c490((uint *)(*param_1 + param_1[1]),param_2,uVar3);
    }
    param_1[1] = param_1[1] + uVar3;
    *(undefined1 *)(param_1[1] + *param_1) = 0;
    return param_1;
  }
  FUN_004873c0(1,"Out of memory");
  return (int *)0x0;
}


