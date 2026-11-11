// Function: FUN_0048afb0
// Entry: 0048afb0
// Size: 160 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048afb0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
      ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)))) &&
     (piVar1[1] - 0x3f34U < 0x20)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if ((int)param_2 < 0) {
      iVar4 = 0;
      param_2 = -param_2;
    }
    else {
      iVar4 = (param_2 >> 4) + 5;
      if ((int)param_2 < 0x30) {
        param_2 = param_2 & 0xf;
      }
    }
    if ((param_2 == 0) || ((7 < (int)param_2 && ((int)param_2 < 0x10)))) {
      if ((*(int *)(iVar2 + 0x38) != 0) && (*(uint *)(iVar2 + 0x28) != param_2)) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar2 + 0x38));
        *(undefined4 *)(iVar2 + 0x38) = 0;
      }
      *(int *)(iVar2 + 0xc) = iVar4;
      *(uint *)(iVar2 + 0x28) = param_2;
      uVar3 = FUN_0048ae80(param_1);
      return uVar3;
    }
  }
  return 0xfffffffe;
}


