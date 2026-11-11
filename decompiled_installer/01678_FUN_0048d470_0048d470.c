// Function: FUN_0048d470
// Entry: 0048d470
// Size: 96 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048d470(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  
  puVar1 = (uint *)*param_2;
  uVar2 = param_2[1];
  piVar3 = FUN_0048d4d0(param_1,(LPVOID)(param_1[1] + 1 + uVar2));
  if (piVar3 != (int *)0x0) {
    if (uVar2 != 0) {
      FUN_0044c490((uint *)(param_1[1] + *param_1),puVar1,uVar2);
    }
    param_1[1] = param_1[1] + uVar2;
    *(undefined1 *)(param_1[1] + *param_1) = 0;
    return;
  }
  FUN_004873c0(1,"Out of memory");
  return;
}


