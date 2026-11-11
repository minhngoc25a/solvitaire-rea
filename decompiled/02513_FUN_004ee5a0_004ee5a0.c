// Function: FUN_004ee5a0
// Entry: 004ee5a0
// Size: 593 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004ee5a0(int param_1,uint param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = param_3 + 1 + param_2;
  *(uint *)(param_1 + 0x40) = uVar4;
  uVar6 = param_5 + param_4;
  if ((uint)(param_5 + param_4) < *(uint *)(param_1 + 0x48)) {
    uVar6 = *(uint *)(param_1 + 0x48);
  }
  *(uint *)(param_1 + 0x44) = uVar6;
  if (*(char *)(param_1 + 0x1f) == '\0') {
    uVar6 = uVar6 + uVar4;
    if ((uVar4 < param_2) || (uVar6 < uVar4)) goto LAB_004ee7c0;
    uVar4 = (uVar6 >> (2U - (uVar6 < 0x40000000) & 0x1f)) + 0x11080;
    if ((0xfffeffff < uVar6) || (-uVar6 - 0x10000 < 0x1000000)) goto LAB_004ee7c0;
    if (uVar4 < -uVar6 - 0x10000) {
      uVar6 = uVar4 + uVar6 & 0xffff0000;
    }
    else {
      uVar6 = 0xffff0000;
    }
    if (uVar6 == 0) goto LAB_004ee7c0;
    iVar3 = *(int *)(param_1 + 0x34);
    if ((iVar3 == 0) || (*(uint *)(param_1 + 0x3c) != uVar6)) {
      (*(code *)param_6[1])(param_6,iVar3);
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(uint *)(param_1 + 0x3c) = uVar6;
      iVar3 = (*(code *)*param_6)(param_6,uVar6);
      *(int *)(param_1 + 0x34) = iVar3;
    }
    if (iVar3 == 0) goto LAB_004ee7c0;
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  iVar3 = param_2 + 1;
  uVar6 = *(uint *)(param_1 + 0x48);
  *(int *)(param_1 + 0x20) = param_4;
  uVar4 = 0xffff;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (uVar6 == 2) {
LAB_004ee720:
    iVar5 = 0;
    *(uint *)(param_1 + 0x2c) = uVar4;
    if (2 < uVar6) goto LAB_004ee72a;
  }
  else {
    uVar4 = param_2;
    if ((*(int *)(param_1 + 0x46c) == 0) && (*(uint *)(param_1 + 0x468) < param_2)) {
      uVar4 = *(uint *)(param_1 + 0x468);
    }
    if (uVar4 != 0) {
      uVar4 = uVar4 - 1;
    }
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 >> 8 | uVar4;
    uVar2 = uVar4 >> 1;
    if (uVar2 < 0x1000000) {
LAB_004ee706:
      uVar4 = uVar2 | 0xffff;
      if (uVar6 < 5) goto LAB_004ee720;
      uVar4 = uVar2 | 0x3ffff;
      *(uint *)(param_1 + 0x2c) = uVar4;
    }
    else {
      if (uVar6 != 3) {
        uVar2 = uVar4 >> 2;
        goto LAB_004ee706;
      }
      uVar4 = 0xffffff;
      *(undefined4 *)(param_1 + 0x2c) = 0xffffff;
    }
LAB_004ee72a:
    *(undefined4 *)(param_1 + 0x54) = 0x400;
    iVar5 = 0x400;
  }
  if (3 < uVar6) {
    iVar5 = iVar5 + 0x10000;
    *(int *)(param_1 + 0x54) = iVar5;
  }
  *(int *)(param_1 + 0x18) = iVar3;
  iVar5 = uVar4 + iVar5 + 1;
  *(uint *)(param_1 + 0x50) = param_2;
  *(int *)(param_1 + 0x58) = iVar5;
  if (*(char *)(param_1 + 0x1d) != '\0') {
    iVar3 = iVar3 * 2;
  }
  piVar1 = (int *)(param_1 + 0x24);
  uVar6 = iVar3 + iVar5 + 0xf;
  uVar4 = uVar6 & 0xfffffff0;
  if ((*piVar1 != 0) && (*(uint *)(param_1 + 0x460) == uVar4)) {
    return 1;
  }
  (*(code *)param_6[1])(param_6,*piVar1);
  *piVar1 = 0;
  *(uint *)(param_1 + 0x460) = uVar4;
  if ((uVar6 & 0x3ffffff0) == uVar4) {
    iVar3 = (*(code *)*param_6)(param_6,uVar4 * 4);
    *piVar1 = iVar3;
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x28) = iVar3 + *(int *)(param_1 + 0x58) * 4;
      return 1;
    }
  }
LAB_004ee7c0:
  (*(code *)param_6[1])(param_6,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_1 + 0x1f) == '\0') {
    (*(code *)param_6[1])(param_6,*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return 0;
}


