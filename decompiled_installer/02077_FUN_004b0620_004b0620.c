// Function: FUN_004b0620
// Entry: 004b0620
// Size: 209 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b0620(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0xdc);
  *(undefined4 **)(param_1 + 0x1b0) = puVar1;
  *puVar1 = &LAB_004b1f60;
  puVar1[2] = &LAB_004b0bc0;
  if (*(char *)(param_1 + 0xc9) == '\0') {
    puVar1[0x15] = 0;
    puVar1[0x11] = 0;
    puVar1[0x16] = 0;
    puVar1[0x12] = 0;
    puVar1[0x17] = 0;
    puVar1[0x13] = 0;
    puVar1[0x18] = 0;
    puVar1[0x14] = 0;
    return;
  }
  puVar2 = (undefined4 *)
           (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
  iVar4 = 0;
  *(undefined4 **)(param_1 + 0x8c) = puVar2;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar4 = iVar4 + 1;
      puVar5 = puVar2;
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      puVar2 = puVar2 + 0x40;
    } while (iVar4 < *(int *)(param_1 + 0x24));
  }
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}


