// Function: FUN_004b4740
// Entry: 004b4740
// Size: 214 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b4740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  param_1 = -0xb2f480;
  iVar6 = 0x5b6900;
  uStack_4 = 0x100;
  iVar4 = 0x2c8c80;
  iVar3 = 0;
  iVar5 = -0xe25100;
  do {
    *(int *)(iVar3 + *(int *)(iVar1 + 8)) = param_1 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0xc)) = iVar5 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x10)) = iVar6;
    iVar6 = iVar6 + -0xb6d2;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x14)) = iVar4;
    iVar4 = iVar4 + -0x5819;
    param_1 = param_1 + 0x166e9;
    uStack_4 = uStack_4 + -1;
    iVar3 = iVar3 + 4;
    iVar5 = iVar5 + 0x1c5a2;
  } while (uStack_4 != 0);
  return;
}


