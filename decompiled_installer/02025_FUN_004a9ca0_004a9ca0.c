// Function: FUN_004a9ca0
// Entry: 004a9ca0
// Size: 383 bytes
// Thunk: false
// External: false


int __cdecl
FUN_004a9ca0(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,int param_6,
            int *param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 local_400 [1024];
  
  if (*(int *)(param_1 + 0x80) != param_2) {
    *(char **)(param_1 + 0x9c) = "zstream unclaimed";
    return -2;
  }
  *(undefined4 *)(param_1 + 0x84) = param_4;
  iVar5 = *param_5;
  iVar7 = *param_7;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (param_6 != 0) {
    *(int *)(param_1 + 0x90) = param_6;
  }
  do {
    uVar4 = iVar5 + *(int *)(param_1 + 0x88);
    uVar3 = 0xffffffff;
    if (uVar4 != 0xffffffff) {
      uVar3 = uVar4;
    }
    uVar6 = iVar7 + *(int *)(param_1 + 0x94);
    iVar5 = uVar4 - uVar3;
    *(uint *)(param_1 + 0x88) = uVar3;
    uVar4 = 0xffffffff;
    if (param_6 == 0) {
      uVar4 = 0x400;
      *(undefined1 **)(param_1 + 0x90) = local_400;
    }
    uVar1 = uVar6;
    if (uVar4 <= uVar6) {
      uVar1 = uVar4;
    }
    *(uint *)(param_1 + 0x94) = uVar1;
    iVar7 = uVar6 - uVar1;
    if (iVar7 == 0) {
      iVar2 = (uint)(param_3 != 0) * 2 + 2;
    }
    else {
      iVar2 = 0;
    }
    if ((*(char *)(param_1 + 0x158) != '\0') && (uVar3 != 0)) {
      if (0x70 < (**(byte **)(param_1 + 0x84) & 0xf0)) {
        *(char **)(param_1 + 0x9c) = "invalid window size (libpng)";
        iVar2 = -3;
        break;
      }
      *(undefined1 *)(param_1 + 0x158) = 0;
    }
    uVar8 = FUN_00489550(iVar2,uVar3,(int *)(param_1 + 0x84),iVar2);
    iVar2 = (int)uVar8;
  } while (iVar2 == 0);
  if (param_6 == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  iVar5 = iVar5 + *(int *)(param_1 + 0x88);
  iVar7 = iVar7 + *(int *)(param_1 + 0x94);
  if (iVar7 != 0) {
    *param_7 = *param_7 - iVar7;
  }
  if (iVar5 != 0) {
    *param_5 = *param_5 - iVar5;
  }
  FUN_0046ba30(param_1,iVar2);
  return iVar2;
}


