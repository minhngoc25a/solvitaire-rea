// Function: FUN_00407310
// Entry: 00407310
// Size: 797 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_00407310(int param_1,char *param_2,int *param_3)

{
  char *in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  lconv *plVar5;
  int iVar6;
  int extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  char *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  char *pcVar7;
  char *extraout_ECX_06;
  char *extraout_ECX_07;
  char *extraout_ECX_08;
  char *extraout_ECX_09;
  char *extraout_ECX_10;
  char *extraout_ECX_11;
  char *extraout_ECX_12;
  undefined4 extraout_EDX;
  char *pcVar8;
  undefined4 uStackY_50;
  char acStack_3c [4];
  int local_38;
  char *local_34;
  char *local_30;
  WCHAR local_22;
  undefined4 local_20 [4];
  
  iVar1 = param_3[2];
  local_30 = in_EAX;
  if (param_1 < 1) {
    if (iVar1 < 1) goto LAB_0040733b;
    iVar1 = iVar1 + -1;
    param_3[2] = iVar1;
LAB_00407343:
    iVar6 = param_3[3];
    if (iVar1 <= iVar6) goto LAB_00407470;
    iVar1 = iVar1 - iVar6;
    param_3[2] = iVar1;
    if (iVar1 < 1) goto LAB_00407477;
    if ((0 < iVar6) || ((*(byte *)((int)param_3 + 5) & 8) != 0)) {
      iVar1 = iVar1 + -1;
      param_3[2] = iVar1;
      if (iVar1 == 0) goto LAB_00407477;
    }
    if ((in_EAX != (char *)0x0) || (uVar2 = param_3[1], (uVar2 & 0x1c0) != 0)) {
      param_3[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) goto LAB_00407477;
      uVar2 = param_3[1];
    }
    iVar1 = param_1;
    if ((uVar2 & 0x600) != 0) goto LAB_00407477;
    while (iVar6 = param_3[2], param_3[2] = iVar6 + -1, 0 < iVar6) {
      uStackY_50 = 0x4073a2;
      FUN_00406ba0(iVar1,param_3);
      iVar1 = extraout_ECX;
    }
    if (local_30 == (char *)0x0) goto LAB_00407482;
LAB_004073ba:
    uStackY_50 = 0x4073c6;
    FUN_00406ba0(local_30,param_3);
    pcVar7 = extraout_ECX_00;
  }
  else {
    if (param_1 < iVar1) {
      iVar1 = iVar1 - param_1;
      param_3[2] = iVar1;
LAB_0040733b:
      if (-1 < iVar1) goto LAB_00407343;
    }
LAB_00407470:
    param_3[2] = -1;
LAB_00407477:
    if (in_EAX != (char *)0x0) goto LAB_004073ba;
LAB_00407482:
    if ((param_3[1] & 0x100U) == 0) {
      pcVar7 = local_30;
      if ((param_3[1] & 0x40U) != 0) {
        uStackY_50 = 0x4074a2;
        FUN_00406ba0(local_30,param_3);
        pcVar7 = extraout_ECX_04;
      }
    }
    else {
      uStackY_50 = 0x4075cc;
      FUN_00406ba0(local_30,param_3);
      pcVar7 = extraout_ECX_09;
    }
  }
  if ((param_3[2] < 1) || ((param_3[1] & 0x600U) != 0x200)) {
    if (0 < param_1) goto LAB_004073e8;
LAB_004075f8:
    uStackY_50 = 0x407604;
    FUN_00406ba0(pcVar7,param_3);
    pcVar7 = extraout_ECX_11;
    iVar1 = param_1;
  }
  else {
    param_3[2] = param_3[2] + -1;
    do {
      uStackY_50 = 0x4075e3;
      FUN_00406ba0(pcVar7,param_3);
      iVar1 = param_3[2];
      param_3[2] = iVar1 + -1;
      pcVar7 = extraout_ECX_10;
    } while (0 < iVar1);
    if (param_1 < 1) goto LAB_004075f8;
LAB_004073e8:
    do {
      if (*param_2 != '\0') {
        param_2 = param_2 + 1;
      }
      uStackY_50 = 0x407401;
      FUN_00406ba0(pcVar7,param_3);
      param_1 = param_1 + -1;
      pcVar7 = extraout_ECX_01;
      iVar1 = 0;
    } while (param_1 != 0);
  }
  iVar6 = param_3[3];
  if (iVar6 < 1) {
    if ((*(byte *)((int)param_3 + 5) & 8) == 0) goto joined_r0x00407512;
    iVar6 = param_3[4];
  }
  else {
    iVar6 = param_3[4];
  }
  if (iVar6 == -3) {
    local_20[0] = 0;
    uStackY_50 = 0x407570;
    plVar5 = localeconv();
    uStackY_50 = 0x407590;
    iVar6 = FUN_0040a1d0(&local_22,(byte *)plVar5->decimal_point,0x10,(byte *)local_20);
    if (iVar6 < 1) {
      local_22 = *(WCHAR *)(param_3 + 5);
    }
    else {
      *(WCHAR *)(param_3 + 5) = local_22;
    }
    param_3[4] = iVar6;
    pcVar7 = extraout_ECX_08;
  }
  else {
    local_22 = *(WCHAR *)(param_3 + 5);
  }
  if (local_22 == L'\0') {
    uStackY_50 = 0x407434;
    FUN_00406ba0(pcVar7,param_3);
    iVar6 = param_3[3];
    pcVar7 = extraout_ECX_02;
  }
  else {
    uStackY_50 = 0x4074b8;
    local_30 = &stack0xffffffb4;
    uVar2 = FUN_0040b3d0();
    iVar6 = -uVar2;
    local_20[0] = 0;
    *(undefined4 **)(&stack0xffffffbc + iVar6) = local_20;
    *(undefined4 *)(&stack0xffffffb8 + iVar6) = extraout_EDX;
    *(char **)(&stack0xffffffb4 + iVar6) = acStack_3c + iVar6;
    local_34 = acStack_3c + iVar6;
    *(undefined4 *)((int)&uStackY_50 + iVar6) = 0x4074db;
    iVar3 = FUN_00409e80(*(LPSTR *)(&stack0xffffffb4 + iVar6),*(WCHAR *)(&stack0xffffffb8 + iVar6));
    if (iVar3 < 1) {
      *(undefined4 *)((int)&uStackY_50 + iVar6) = 0x407631;
      FUN_00406ba0(extraout_ECX_05,param_3);
      pcVar7 = extraout_ECX_12;
    }
    else {
      pcVar4 = local_34 + iVar3;
      pcVar7 = local_34;
      pcVar8 = local_34;
      local_38 = iVar1;
      local_34 = param_2;
      do {
        pcVar8 = pcVar8 + 1;
        *(undefined4 *)((int)&uStackY_50 + iVar6) = 0x407500;
        FUN_00406ba0(pcVar7,param_3);
        pcVar7 = extraout_ECX_06;
        iVar1 = local_38;
        param_2 = local_34;
      } while (pcVar8 != pcVar4);
    }
    iVar6 = param_3[3];
  }
joined_r0x00407512:
  if (iVar1 == 0) goto LAB_0040745c;
  param_3[3] = iVar6 + iVar1;
  do {
    uStackY_50 = 0x40752c;
    FUN_00406ba0(pcVar7,param_3);
    iVar1 = iVar1 + 1;
    pcVar7 = extraout_ECX_07;
  } while (iVar1 < 0);
  while( true ) {
    iVar6 = param_3[3];
LAB_0040745c:
    param_3[3] = iVar6 + -1;
    if (iVar6 < 1) break;
    if (*param_2 != '\0') {
      param_2 = param_2 + 1;
    }
    uStackY_50 = 0x407459;
    FUN_00406ba0(pcVar7,param_3);
    pcVar7 = extraout_ECX_03;
  }
  return;
}


