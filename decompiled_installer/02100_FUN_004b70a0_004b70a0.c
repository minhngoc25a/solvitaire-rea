// Function: FUN_004b70a0
// Entry: 004b70a0
// Size: 506 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b70a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  *(undefined4 **)(param_1 + 0x1b8) = puVar1;
  *puVar1 = &LAB_004b72a0;
  *(undefined1 *)(puVar1 + 2) = 0;
  iVar3 = *(int *)(param_1 + 100) * *(int *)(param_1 + 0x5c);
  puVar1[10] = iVar3;
  if (*(int *)(param_1 + 0x11c) == 2) {
    puVar1[1] = &LAB_004b72c0;
    puVar1[3] = &LAB_004b7530;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar3);
  }
  else {
    puVar1[1] = &LAB_004b7380;
    uVar2 = 0;
    puVar1[3] = &LAB_004b73c0;
  }
  puVar1[8] = uVar2;
  iVar3 = *(int *)(param_1 + 0x1b8);
  if (*(int *)(param_1 + 0x28) == 7) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
    *(undefined4 *)(iVar3 + 0x14) = uVar2;
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
    *(undefined4 *)(iVar3 + 0x18) = uVar2;
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
    *(undefined4 *)(iVar3 + 0x1c) = uVar2;
    iStack_4 = 0x100;
    iVar7 = 0xb6d180;
    param_1 = -0x1666980;
    iVar5 = 0x589980;
    iVar4 = 0;
    iVar6 = -0x1c52200;
    do {
      *(int *)(iVar4 + *(int *)(iVar3 + 0x10)) = param_1 >> 0x10;
      *(int *)(iVar4 + *(int *)(iVar3 + 0x14)) = iVar6 >> 0x10;
      *(int *)(iVar4 + *(int *)(iVar3 + 0x18)) = iVar7;
      iVar7 = iVar7 + -0x16da3;
      *(int *)(iVar4 + *(int *)(iVar3 + 0x1c)) = iVar5;
      iVar5 = iVar5 + -0xb033;
      param_1 = param_1 + 0x2cdd3;
      iStack_4 = iStack_4 + -1;
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + 0x38b44;
    } while (iStack_4 != 0);
    return;
  }
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar3 + 0x10) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar3 + 0x14) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar3 + 0x18) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar3 + 0x1c) = uVar2;
  iStack_4 = 0x100;
  iVar7 = 0x5b6900;
  param_1 = -0xb2f480;
  iVar5 = 0x2c8c80;
  iVar4 = 0;
  iVar6 = -0xe25100;
  do {
    *(int *)(iVar4 + *(int *)(iVar3 + 0x10)) = param_1 >> 0x10;
    *(int *)(iVar4 + *(int *)(iVar3 + 0x14)) = iVar6 >> 0x10;
    *(int *)(iVar4 + *(int *)(iVar3 + 0x18)) = iVar7;
    iVar7 = iVar7 + -0xb6d2;
    *(int *)(iVar4 + *(int *)(iVar3 + 0x1c)) = iVar5;
    iVar5 = iVar5 + -0x5819;
    param_1 = param_1 + 0x166e9;
    iStack_4 = iStack_4 + -1;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x1c5a2;
  } while (iStack_4 != 0);
  return;
}


