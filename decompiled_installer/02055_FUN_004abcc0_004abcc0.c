// Function: FUN_004abcc0
// Entry: 004abcc0
// Size: 174 bytes
// Thunk: false
// External: false


void __cdecl FUN_004abcc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0xa8);
  *(undefined4 **)(param_1 + 0x1ac) = puVar1;
  iVar2 = 0x10;
  *puVar1 = &LAB_004ade20;
  puVar1[1] = &LAB_004ad830;
  puVar1[2] = &LAB_004add90;
  puVar1[6] = FUN_004ad650;
  puVar1[0x17] = 0;
  puVar3 = puVar1 + 0x18;
  do {
    puVar3[-0x11] = FUN_004ad650;
    *puVar3 = 0;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0);
  puVar1[7] = &LAB_004ad500;
  puVar1[0x15] = &LAB_004ad500;
  iVar2 = *(int *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined2 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  return;
}


