// Function: FUN_0048ae10
// Entry: 0048ae10
// Size: 99 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048ae10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)) &&
      (piVar1[1] - 0x3f34U < 0x20)))) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
    if (iVar2 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}


