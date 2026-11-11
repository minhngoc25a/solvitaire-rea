// Function: FUN_00406e20
// Entry: 00406e20
// Size: 532 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_00406e20(int *param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_EDX;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uStack_40;
  undefined8 uStack_3c;
  uint auStack_34 [2];
  int *local_2c;
  int local_28;
  char *local_20;
  
  uStack_40 = 0x406e55;
  local_2c = in_EAX;
  local_28 = param_2;
  uVar2 = FUN_0040b3d0();
  iVar1 = -uVar2;
  pcVar5 = (char *)((int)&local_2c + iVar1);
  local_20 = pcVar5;
  if ((param_1[1] & 0x80U) != 0) {
    if (param_2 < 0) {
      local_2c = (int *)-(int)in_EAX;
      local_28 = -(param_2 + (uint)(in_EAX != (int *)0x0));
    }
    else {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
  }
  uVar9 = CONCAT44(local_28,local_2c);
  iVar3 = local_28;
  iVar4 = extraout_EDX;
  if (local_28 != 0 || local_2c != (int *)0x0) {
    local_2c = param_1;
    pcVar7 = pcVar5;
    do {
      pcVar5 = pcVar7 + 1;
      *(ulonglong *)((int)&uStack_3c + iVar1) = uVar9;
      *(undefined4 *)((int)auStack_34 + iVar1) = 10;
      *(undefined4 *)((int)auStack_34 + iVar1 + 4) = 0;
      *(undefined4 *)((int)&uStack_40 + iVar1) = 0x406ea5;
      uVar8 = FUN_0040b510(*(uint *)((int)&uStack_3c + iVar1),
                           *(uint *)((int)auStack_34 + iVar1 + -4),
                           *(uint *)((int)auStack_34 + iVar1),*(uint *)((int)auStack_34 + iVar1 + 4)
                          );
      *pcVar7 = (char)uVar8 + '0';
      *(ulonglong *)((int)&uStack_3c + iVar1) = uVar9;
      *(undefined4 *)((int)auStack_34 + iVar1) = 10;
      *(undefined4 *)((int)auStack_34 + iVar1 + 4) = 0;
      *(undefined4 *)((int)&uStack_40 + iVar1) = 0x406ec7;
      uVar9 = FUN_0040b400(*(uint *)((int)&uStack_3c + iVar1),
                           *(uint *)((int)auStack_34 + iVar1 + -4),
                           *(uint *)((int)auStack_34 + iVar1),*(uint *)((int)auStack_34 + iVar1 + 4)
                          );
      pcVar7 = pcVar5;
    } while (uVar9 != 0);
    iVar4 = local_2c[3];
    iVar3 = extraout_ECX;
    param_1 = local_2c;
  }
  pcVar7 = pcVar5;
  if ((0 < iVar4) && (0 < (int)(local_20 + (iVar4 - (int)pcVar5)))) {
    pcVar7 = pcVar5 + (int)(local_20 + (iVar4 - (int)pcVar5));
    do {
      pcVar6 = pcVar5 + 1;
      *pcVar5 = '0';
      pcVar5 = pcVar6;
    } while (pcVar6 != pcVar7);
  }
  if ((pcVar7 == local_20) && (iVar3 = param_1[3], iVar3 != 0)) {
    *pcVar7 = '0';
    pcVar7 = pcVar7 + 1;
  }
  if (0 < param_1[2]) {
    pcVar5 = local_20 + (param_1[2] - (int)pcVar7);
    uVar2 = param_1[1];
    param_1[2] = (int)pcVar5;
    if ((int)pcVar5 < 1) goto LAB_00406f62;
    if ((uVar2 & 0x1c0) != 0) {
      param_1[2] = (int)(pcVar5 + -1);
    }
    if ((param_1[3] < 0) && ((uVar2 & 0x600) == 0x200)) {
      iVar4 = param_1[2];
      iVar3 = iVar4 + -1;
      param_1[2] = iVar3;
      pcVar5 = pcVar7;
      if (iVar4 < 1) goto LAB_00406f62;
      do {
        pcVar7 = pcVar5 + 1;
        *pcVar5 = '0';
        iVar4 = param_1[2];
        param_1[2] = iVar4 + -1;
        pcVar5 = pcVar7;
      } while (0 < iVar4);
    }
    else {
      if ((uVar2 & 0x400) != 0) goto LAB_00406f62;
      iVar4 = param_1[2];
      iVar3 = iVar4 + -1;
      param_1[2] = iVar3;
      if (iVar4 < 1) goto LAB_00406f62;
      do {
        *(undefined4 *)((int)&uStack_40 + iVar1) = 0x406f52;
        FUN_00406ba0(iVar3,param_1);
        iVar4 = param_1[2];
        param_1[2] = iVar4 + -1;
        iVar3 = extraout_ECX_00;
      } while (0 < iVar4);
    }
  }
  uVar2 = param_1[1];
LAB_00406f62:
  pcVar5 = local_20;
  if ((uVar2 & 0x80) == 0) {
    if ((uVar2 & 0x100) == 0) {
      pcVar6 = pcVar7;
      if ((uVar2 & 0x40) != 0) {
        pcVar6 = pcVar7 + 1;
        *pcVar7 = ' ';
      }
    }
    else {
      *pcVar7 = '+';
      pcVar6 = pcVar7 + 1;
    }
  }
  else {
    *pcVar7 = '-';
    pcVar6 = pcVar7 + 1;
  }
  if (pcVar6 <= local_20) goto LAB_00406f9e;
  do {
    pcVar6 = pcVar6 + -1;
    *(undefined4 *)((int)&uStack_40 + iVar1) = 0x406f81;
    FUN_00406ba0(iVar3,param_1);
    iVar3 = extraout_ECX_01;
  } while (pcVar6 != pcVar5);
  iVar4 = param_1[2];
  param_1[2] = iVar4 + -1;
  while (0 < iVar4) {
    *(undefined4 *)((int)&uStack_40 + iVar1) = 0x406f9e;
    FUN_00406ba0(iVar3,param_1);
    iVar3 = extraout_ECX_02;
LAB_00406f9e:
    iVar4 = param_1[2];
    param_1[2] = iVar4 + -1;
  }
  return;
}


