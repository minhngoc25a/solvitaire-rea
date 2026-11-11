// Function: FUN_00475080
// Entry: 00475080
// Size: 263 bytes
// Thunk: false
// External: false


int __cdecl FUN_00475080(int *param_1,char param_2)

{
  int iVar1;
  
  if ((param_1[5] != 200) && (param_1[5] != 0xc9)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  switch(param_1[5]) {
  case 200:
    (**(code **)(param_1[0x6a] + 4))(param_1);
    (**(code **)(param_1[6] + 8))(param_1);
    param_1[5] = 0xc9;
  case 0xc9:
    iVar1 = (**(code **)param_1[0x6a])(param_1);
    if (iVar1 == 1) {
      FUN_00475280(param_1);
      param_1[5] = 0xca;
    }
    break;
  case 0xca:
    goto switchD_004750ca_caseD_ca;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar1 = (**(code **)param_1[0x6a])(param_1);
    break;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (param_2 != '\0') {
        *(undefined4 *)(*param_1 + 0x14) = 0x35;
        (**(code **)*param_1)(param_1);
      }
      FUN_004aad10((int)param_1);
      return 2;
    }
    return iVar1;
  }
switchD_004750ca_caseD_ca:
  return 1;
}


