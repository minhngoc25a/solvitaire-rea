// Function: FUN_0048b070
// Entry: 0048b070
// Size: 331 bytes
// Thunk: false
// External: false


int __cdecl FUN_0048b070(int param_1,uint param_2,char *param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return -6;
  }
  if (param_1 == 0) {
    return -2;
  }
  pcVar2 = *(code **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (pcVar2 == (code *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar5 = 0;
    *(code **)(param_1 + 0x20) = FUN_00486210;
    pcVar2 = FUN_00486210;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(code **)(param_1 + 0x24) = FUN_004694c0;
  }
  piVar3 = (int *)(*pcVar2)(uVar5,1,0x1bd0);
  if (piVar3 == (int *)0x0) {
    return -4;
  }
  *(int **)(param_1 + 0x1c) = piVar3;
  *piVar3 = param_1;
  piVar3[0xe] = 0;
  piVar3[1] = 0x3f34;
  if (((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x24) != 0)) &&
     ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 &&
      ((*piVar1 == param_1 && (piVar1[1] - 0x3f34U < 0x20)))))) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if ((int)param_2 < 0) {
      iVar6 = 0;
      param_2 = -param_2;
    }
    else {
      iVar6 = (param_2 >> 4) + 5;
      if ((int)param_2 < 0x30) {
        param_2 = param_2 & 0xf;
      }
    }
    if ((param_2 == 0) || ((7 < (int)param_2 && ((int)param_2 < 0x10)))) {
      if ((*(int *)(iVar4 + 0x38) != 0) && (*(uint *)(iVar4 + 0x28) != param_2)) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar4 + 0x38));
        *(undefined4 *)(iVar4 + 0x38) = 0;
      }
      *(int *)(iVar4 + 0xc) = iVar6;
      *(uint *)(iVar4 + 0x28) = param_2;
      iVar4 = FUN_0048ae80(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      goto LAB_0048b194;
    }
  }
  iVar4 = -2;
LAB_0048b194:
  (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar3);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return iVar4;
}


