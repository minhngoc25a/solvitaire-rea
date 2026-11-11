// Function: FUN_004ab390
// Entry: 004ab390
// Size: 1033 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ab390(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((0xffdc < param_1[8]) || (0xffdc < param_1[7])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2a;
    *(undefined4 *)(*param_1 + 0x18) = 0xffdc;
    (**(code **)*param_1)(param_1);
  }
  if ((param_1[0x30] < 8) || (0xc < param_1[0x30])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x30];
    (**(code **)*param_1)(param_1);
  }
  if (10 < param_1[9]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    *(int *)(*param_1 + 0x18) = param_1[9];
    *(undefined4 *)(*param_1 + 0x1c) = 10;
    (**(code **)*param_1)(param_1);
  }
  iVar4 = 0;
  param_1[0x46] = 1;
  param_1[0x47] = 1;
  if (0 < param_1[9]) {
    iVar3 = param_1[9];
    iVar2 = 1;
    piVar5 = (int *)(param_1[0x31] + 0xc);
    do {
      if (((3 < piVar5[-1] - 1U) || (*piVar5 < 1)) || (4 < *piVar5)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x13;
        (**(code **)*param_1)(param_1);
        iVar2 = param_1[0x47];
        iVar3 = param_1[9];
      }
      iVar1 = param_1[0x46];
      if (param_1[0x46] <= piVar5[-1]) {
        iVar1 = piVar5[-1];
      }
      param_1[0x46] = iVar1;
      if (iVar2 <= *piVar5) {
        iVar2 = *piVar5;
      }
      iVar4 = iVar4 + 1;
      param_1[0x47] = iVar2;
      piVar5 = piVar5 + 0x16;
    } while (iVar4 < iVar3);
  }
  if (((char)param_1[0x32] != '\0') ||
     ((*(char *)((int)param_1 + 0xc9) != '\0' && (param_1[0x4c] != 0)))) {
switchD_004ab4f1_caseD_3f:
    param_1[0x62] = 8;
    goto LAB_004ab67b;
  }
  iVar4 = param_1[0x5f];
  if (0xff < iVar4) {
switchD_004ab4f1_caseD_1:
    *(undefined4 *)(*param_1 + 0x14) = 0x11;
    *(int *)(*param_1 + 0x18) = param_1[0x5e];
    *(int *)(*param_1 + 0x1c) = param_1[0x5f];
    *(int *)(*param_1 + 0x20) = param_1[0x60];
    *(int *)(*param_1 + 0x24) = param_1[0x61];
    (**(code **)*param_1)(param_1);
    goto LAB_004ab68f;
  }
  if (iVar4 == 0xff) {
    param_1[0x62] = 0x10;
    goto LAB_004ab67b;
  }
  switch(iVar4) {
  case 0:
    param_1[0x62] = 1;
    param_1[100] = iVar4;
    goto LAB_004ab685;
  default:
    goto switchD_004ab4f1_caseD_1;
  case 3:
    param_1[0x62] = 2;
    param_1[99] = (int)&DAT_0051a0e8;
    param_1[100] = iVar4;
    goto LAB_004ab68f;
  case 8:
    param_1[0x62] = 3;
    param_1[99] = (int)&DAT_0051a080;
    param_1[100] = iVar4;
    goto LAB_004ab68f;
  case 0xf:
    param_1[0x62] = 4;
    param_1[99] = (int)&DAT_0051a000;
    param_1[100] = iVar4;
    goto LAB_004ab68f;
  case 0x18:
    param_1[0x62] = 5;
    param_1[99] = (int)&DAT_00519f58;
    param_1[100] = iVar4;
    goto LAB_004ab68f;
  case 0x23:
    param_1[0x62] = 6;
    param_1[99] = (int)&DAT_00519e88;
    param_1[100] = iVar4;
    goto LAB_004ab68f;
  case 0x30:
    param_1[0x62] = 7;
    param_1[99] = (int)&DAT_00519d80;
    param_1[100] = iVar4;
    goto LAB_004ab68f;
  case 0x3f:
    goto switchD_004ab4f1_caseD_3f;
  case 0x50:
    param_1[0x62] = 9;
    break;
  case 99:
    param_1[0x62] = 10;
    break;
  case 0x78:
    param_1[0x62] = 0xb;
    break;
  case 0x8f:
    param_1[0x62] = 0xc;
    break;
  case 0xa8:
    param_1[0x62] = 0xd;
    break;
  case 0xc3:
    param_1[0x62] = 0xe;
    break;
  case 0xe0:
    param_1[0x62] = 0xf;
  }
LAB_004ab67b:
  param_1[100] = 0x3f;
LAB_004ab685:
  param_1[99] = (int)&DAT_00519c40;
LAB_004ab68f:
  iVar4 = 0;
  param_1[0x48] = param_1[0x62];
  param_1[0x49] = param_1[0x62];
  if (0 < param_1[9]) {
    piVar5 = (int *)(param_1[0x31] + 0x28);
    do {
      piVar5[-1] = param_1[0x62];
      *piVar5 = param_1[0x62];
      iVar2 = FUN_004b7740(piVar5[-8] * param_1[7],param_1[0x62] * param_1[0x46]);
      piVar5[-3] = iVar2;
      iVar2 = FUN_004b7740(param_1[8] * piVar5[-7],param_1[0x47] * param_1[0x62]);
      piVar5[-2] = iVar2;
      iVar2 = FUN_004b7740(piVar5[-8] * param_1[7],param_1[0x46]);
      piVar5[1] = iVar2;
      iVar2 = FUN_004b7740(param_1[8] * piVar5[-7],param_1[0x47]);
      piVar5[2] = iVar2;
      *(undefined1 *)(piVar5 + 3) = 1;
      iVar4 = iVar4 + 1;
      piVar5[10] = 0;
      piVar5 = piVar5 + 0x16;
    } while (iVar4 < param_1[9]);
  }
  iVar4 = FUN_004b7740(param_1[8],param_1[0x47] * param_1[0x62]);
  param_1[0x4a] = iVar4;
  if ((param_1[9] <= param_1[0x4c]) && (*(char *)((int)param_1 + 0xc9) == '\0')) {
    *(undefined1 *)(param_1[0x6a] + 0x10) = 0;
    return;
  }
  *(undefined1 *)(param_1[0x6a] + 0x10) = 1;
  return;
}


