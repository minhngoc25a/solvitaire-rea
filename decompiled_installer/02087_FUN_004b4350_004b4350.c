// Function: FUN_004b4350
// Entry: 004b4350
// Size: 898 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b4350(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_8;
  int iStack_4;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x1c);
  param_1[0x6f] = (int)puVar1;
  *puVar1 = guard_check_icall;
  switch(param_1[10]) {
  case 1:
    if (param_1[9] != 1) {
LAB_004b43b1:
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 2:
  case 3:
  case 6:
  case 7:
    if (param_1[9] != 3) goto LAB_004b43b1;
    break;
  case 4:
  case 5:
    if (param_1[9] != 4) goto LAB_004b43b1;
    break;
  default:
    if (param_1[9] < 1) goto LAB_004b43b1;
  }
  if (((param_1[0x43] != 0) && (param_1[10] != 2)) && (param_1[10] != 6)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1c;
    (**(code **)*param_1)(param_1);
  }
  switch(param_1[0xb]) {
  case 1:
    param_1[0x19] = 1;
    switch(param_1[10]) {
    case 1:
    case 3:
    case 7:
      iVar5 = 1;
      puVar1[1] = &LAB_004b4d20;
      if (1 < param_1[9]) {
        iVar4 = 0x58;
        do {
          iVar4 = iVar4 + 0x58;
          iVar5 = iVar5 + 1;
          *(undefined1 *)(param_1[0x31] + -0x24 + iVar4) = 0;
        } while (iVar5 < param_1[9]);
      }
      break;
    case 2:
      if (param_1[0x43] == 0) {
        puVar1[1] = &LAB_004b4960;
      }
      else if (param_1[0x43] == 1) {
        puVar1[1] = &LAB_004b4b00;
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x1c;
        (**(code **)*param_1)(param_1);
      }
      iVar5 = param_1[0x6f];
      iVar4 = (**(code **)param_1[1])(param_1,1,0xc00);
      *(int *)(iVar5 + 0x18) = iVar4;
      iVar6 = 0;
      iVar7 = 0;
      iVar5 = 0x8000;
      piVar2 = (int *)(iVar4 + 0x800);
      do {
        *piVar2 = iVar5;
        piVar2[-0x200] = iVar7;
        iVar5 = iVar5 + 0x1d2f;
        piVar2[-0x100] = iVar6;
        iVar7 = iVar7 + 0x4c8b;
        iVar6 = iVar6 + 0x9646;
        piVar2 = piVar2 + 1;
      } while (iVar5 < 0x1d91d2);
      break;
    default:
      goto switchD_004b4504_caseD_4;
    }
    goto LAB_004b46b8;
  case 2:
    param_1[0x19] = 3;
    switch(param_1[10]) {
    case 1:
      puVar1[1] = &LAB_004b4d50;
      break;
    case 2:
      goto switchD_004b4504_caseD_2;
    case 3:
      puVar1[1] = &LAB_004b4820;
      FUN_004b4740((int)param_1);
      break;
    default:
      goto switchD_004b4504_caseD_4;
    case 7:
      puVar1[1] = &LAB_004b4820;
      iVar5 = param_1[0x6f];
      uVar3 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar5 + 8) = uVar3;
      uVar3 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar5 + 0xc) = uVar3;
      uVar3 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar5 + 0x10) = uVar3;
      uVar3 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar5 + 0x14) = uVar3;
      iStack_4 = 0x100;
      iVar7 = 0xb6d180;
      iStack_8 = -0x1666980;
      iVar8 = 0x589980;
      iVar4 = 0;
      iVar6 = -0x1c52200;
      do {
        *(int *)(iVar4 + *(int *)(iVar5 + 8)) = iStack_8 >> 0x10;
        *(int *)(iVar4 + *(int *)(iVar5 + 0xc)) = iVar6 >> 0x10;
        *(int *)(iVar4 + *(int *)(iVar5 + 0x10)) = iVar7;
        iVar7 = iVar7 + -0x16da3;
        *(int *)(iVar4 + *(int *)(iVar5 + 0x14)) = iVar8;
        iVar8 = iVar8 + -0xb033;
        iStack_8 = iStack_8 + 0x2cdd3;
        iStack_4 = iStack_4 + -1;
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + 0x38b44;
      } while (iStack_4 != 0);
    }
    goto LAB_004b46b8;
  default:
    if (param_1[0xb] != param_1[10]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1c;
      (**(code **)*param_1)(param_1);
    }
    param_1[0x19] = param_1[9];
    break;
  case 4:
    param_1[0x19] = 4;
    if (param_1[10] != 4) {
      if (param_1[10] == 5) {
        puVar1[1] = &LAB_004b4dc0;
        FUN_004b4740((int)param_1);
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x1c;
        (**(code **)*param_1)();
      }
      goto LAB_004b46b8;
    }
    break;
  case 6:
    param_1[0x19] = 3;
    if (param_1[10] != 6) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1c;
      (**(code **)*param_1)(param_1);
    }
switchD_004b4504_caseD_2:
    if (param_1[0x43] == 0) {
      puVar1[1] = &LAB_004b4bf0;
      goto LAB_004b46b8;
    }
    if (param_1[0x43] == 1) {
      puVar1[1] = &LAB_004b4a40;
      goto LAB_004b46b8;
    }
switchD_004b4504_caseD_4:
    *(undefined4 *)(*param_1 + 0x14) = 0x1c;
    (**(code **)*param_1)(param_1);
    goto LAB_004b46b8;
  }
  puVar1[1] = &LAB_004b4c90;
LAB_004b46b8:
  if (*(char *)((int)param_1 + 0x4a) != '\0') {
    param_1[0x1a] = 1;
    return;
  }
  param_1[0x1a] = param_1[0x19];
  return;
}


