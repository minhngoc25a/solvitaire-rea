// Function: FUN_00475b90
// Entry: 00475b90
// Size: 703 bytes
// Thunk: false
// External: false


void __cdecl FUN_00475b90(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = param_1;
  iVar3 = param_1[0x66];
  if (param_1[0x30] != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x30];
    (**(code **)*param_1)(param_1);
  }
  FUN_004757d0(param_1);
  _Dst = (void *)(**(code **)param_1[1])(param_1,1,0x500);
  _memset(_Dst,0,0x200);
  iVar7 = (int)_Dst + 0x200;
  param_1[0x4b] = iVar7;
  iVar6 = 0;
  do {
    *(char *)(iVar7 + iVar6) = (char)iVar6;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x100);
  _memset((void *)(iVar6 + iVar7),0xff,0x300 - iVar6);
  if (((param_1[0x18] == 0) || (param_1[0x17] == 0)) || (param_1[0x19] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x21;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  uVar5 = FUN_00475ae0((int)param_1);
  *(char *)(iVar3 + 0x10) = (char)uVar5;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  if ((*(char *)((int)param_1 + 0x4a) == '\0') || ((char)param_1[0x10] == '\0')) {
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined1 *)((int)param_1 + 0x59) = 0;
    *(undefined1 *)((int)param_1 + 0x5a) = 0;
    if (*(char *)((int)param_1 + 0x4a) == '\0') goto LAB_00475d18;
  }
  if (*(char *)((int)param_1 + 0x41) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0x19] == 3) {
    if (param_1[0x1d] == 0) {
      if ((char)param_1[0x14] == '\0') goto LAB_00475cdb;
      *(undefined1 *)((int)param_1 + 0x5a) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x59) = 1;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x59) = 0;
    param_1[0x1d] = 0;
    *(undefined1 *)((int)param_1 + 0x5a) = 0;
LAB_00475cdb:
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  if ((char)param_1[0x16] != '\0') {
    FUN_004b4f30(param_1);
    *(int *)(iVar3 + 0x14) = param_1[0x70];
  }
  if ((*(char *)((int)param_1 + 0x5a) != '\0') || (*(char *)((int)param_1 + 0x59) != '\0')) {
    FUN_004b5ae0(param_1);
    *(int *)(iVar3 + 0x18) = param_1[0x70];
  }
LAB_00475d18:
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    if (*(char *)(iVar3 + 0x10) == '\0') {
      FUN_004b4350(param_1);
      FUN_004b3ef0(param_1);
    }
    else {
      FUN_004b70a0((int)param_1);
    }
    FUN_004b02b0((int)param_1,*(char *)((int)param_1 + 0x5a));
  }
  FUN_004b3650((int)param_1);
  if (*(char *)((int)param_1 + 0xca) == '\0') {
    FUN_004b0620((int)param_1);
  }
  else {
    FUN_004b2560((int)param_1);
  }
  piVar2 = param_1 + 0x6a;
  piVar1 = param_1 + 0x10;
  if ((*(char *)(param_1[0x6a] + 0x10) != '\0') || (param_1._0_1_ = '\0', (char)*piVar1 != '\0')) {
    param_1._0_1_ = '\x01';
  }
  FUN_004af260(piVar4,(char)param_1);
  if (*(char *)((int)piVar4 + 0x41) == '\0') {
    FUN_004aeb80(piVar4,'\0');
  }
  param_1 = piVar4 + 0x6a;
  (**(code **)(piVar4[1] + 0x18))(piVar4);
  (**(code **)(*piVar2 + 8))(piVar4);
  if (((piVar4[2] != 0) && ((char)*piVar1 == '\0')) && (*(char *)(*param_1 + 0x10) != '\0')) {
    iVar6 = piVar4[9];
    if (*(char *)((int)piVar4 + 0xc9) != '\0') {
      iVar6 = iVar6 * 3 + 2;
    }
    *(undefined4 *)(piVar4[2] + 4) = 0;
    *(int *)(piVar4[2] + 8) = piVar4[0x4a] * iVar6;
    *(undefined4 *)(piVar4[2] + 0xc) = 0;
    *(uint *)(piVar4[2] + 0x10) = (*(char *)((int)piVar4 + 0x5a) != '\0') + 2;
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  return;
}


