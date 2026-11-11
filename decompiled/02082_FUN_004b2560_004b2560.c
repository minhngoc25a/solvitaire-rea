// Function: FUN_004b2560
// Entry: 004b2560
// Size: 156 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b2560(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0xc0);
  *(undefined4 **)(param_1 + 0x1b0) = puVar1;
  iVar4 = 0x10;
  *puVar1 = &LAB_004b3290;
  puVar1[2] = guard_check_icall;
  puVar2 = puVar1 + 0x1f;
  do {
    puVar2[-0x10] = 0;
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0);
  *(undefined1 *)(puVar1 + 0x2f) = 0x71;
  if (*(char *)(param_1 + 0xc9) != '\0') {
    puVar2 = (undefined4 *)
             (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
    iVar4 = 0;
    *(undefined4 **)(param_1 + 0x8c) = puVar2;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        iVar4 = iVar4 + 1;
        puVar1 = puVar2;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        }
        puVar2 = puVar2 + 0x40;
      } while (iVar4 < *(int *)(param_1 + 0x24));
    }
  }
  return;
}


