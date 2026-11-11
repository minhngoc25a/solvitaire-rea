// Function: FUN_004a9e20
// Entry: 004a9e20
// Size: 595 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a9e20(int param_1,int param_2,uint param_3,uint *param_4,int param_5)

{
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  SIZE_T _Size;
  
  puVar5 = param_4;
  uVar3 = param_3;
  iVar2 = param_1;
  uVar7 = *(uint *)(param_1 + 0x284);
  uVar6 = 0xffffffff;
  if ((uVar7 != 0) && (uVar7 != 0xffffffff)) {
    uVar6 = uVar7;
  }
  uVar7 = (uint)(param_5 != 0);
  if (uVar6 < uVar7 + param_3) {
    FUN_0046ba30(param_1,0xfffffffc);
    return -4;
  }
  uVar6 = uVar6 - (uVar7 + param_3);
  if (uVar6 < *param_4) {
    *param_4 = uVar6;
  }
  iVar4 = FUN_004a9b90(param_1,*(undefined4 *)(param_1 + 0x11c));
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      iVar4 = -7;
    }
    return iVar4;
  }
  param_1 = param_2 - uVar3;
  iVar4 = FUN_004a9ca0(iVar2,*(int *)(iVar2 + 0x11c),1,*(int *)(iVar2 + 0x2a0) + uVar3,&param_1,0,
                       (int *)puVar5);
  if (iVar4 != 1) {
    if (iVar4 == 0) {
      iVar4 = -7;
    }
    goto LAB_004aa03a;
  }
  iVar4 = FUN_0048ae80(iVar2 + 0x84);
  if (iVar4 != 0) {
    FUN_0046ba30(iVar2,1);
    *(undefined4 *)(iVar2 + 0x80) = 0;
    return -7;
  }
  param_3 = *puVar5;
  _Size = uVar7 + param_3 + uVar3;
  puVar5 = (uint *)FUN_004a4910(iVar2,_Size);
  if (puVar5 == (uint *)0x0) {
    FUN_0046ba30(iVar2,0xfffffffc);
    *(undefined4 *)(iVar2 + 0x80) = 0;
    return -4;
  }
  _memset(puVar5,0,_Size);
  iVar4 = FUN_004a9ca0(iVar2,*(int *)(iVar2 + 0x11c),1,*(int *)(iVar2 + 0x2a0) + uVar3,&param_1,
                       uVar3 + (int)puVar5,(int *)param_4);
  if (iVar4 == 1) {
    if (param_3 != *param_4) {
      iVar4 = -7;
      goto LAB_004a9f85;
    }
    if (param_5 != 0) {
      *(undefined1 *)((int)puVar5 + uVar3 + *param_4) = 0;
    }
    if (uVar3 != 0) {
      FUN_0044c490(puVar5,*(uint **)(iVar2 + 0x2a0),uVar3);
    }
    pvVar1 = *(LPVOID *)(iVar2 + 0x2a0);
    *(uint **)(iVar2 + 0x2a0) = puVar5;
    *(SIZE_T *)(iVar2 + 0x2a4) = _Size;
    FUN_004a48e0(iVar2,pvVar1);
  }
  else {
    if (iVar4 == 0) {
      FUN_004a48e0(iVar2,puVar5);
      *(undefined4 *)(iVar2 + 0x80) = 0;
      return -7;
    }
LAB_004a9f85:
    FUN_004a48e0(iVar2,puVar5);
    if (iVar4 != 1) goto LAB_004aa03a;
  }
  if (param_2 - uVar3 != param_1) {
    FUN_0046f3d0(iVar2,0x528978);
    *(undefined4 *)(iVar2 + 0x80) = 0;
    return iVar4;
  }
LAB_004aa03a:
  *(undefined4 *)(iVar2 + 0x80) = 0;
  return iVar4;
}


