// Function: FUN_0048d5e0
// Entry: 0048d5e0
// Size: 128 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0048d5e0(int *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar1 = param_2;
  if (param_3 != 0) {
    do {
      if ((short)*puVar1 == 0) break;
      uVar3 = uVar3 + 1;
      puVar1 = (uint *)((int)puVar1 + 2);
    } while (uVar3 < param_3);
  }
  piVar2 = FUN_0048d4d0(param_1,(LPVOID)((param_1[1] + uVar3) * 2 + 2));
  if (piVar2 == (int *)0x0) {
    FUN_004873c0(1,"Out of memory");
    return (int *)0x0;
  }
  if (uVar3 != 0) {
    FUN_0044c490((uint *)(*param_1 + param_1[1] * 2),param_2,uVar3 * 2);
  }
  param_1[1] = param_1[1] + uVar3;
  *(undefined2 *)(*param_1 + param_1[1] * 2) = 0;
  return param_1;
}


