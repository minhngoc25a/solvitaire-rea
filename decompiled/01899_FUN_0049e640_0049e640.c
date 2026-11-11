// Function: FUN_0049e640
// Entry: 0049e640
// Size: 60 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049e640(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 0x24))
                      (*(undefined4 **)(param_1 + 0x24),*(int *)(param_1 + 0x20),uVar3);
    if (uVar3 != uVar2) {
      *(undefined4 *)(param_1 + 0x30) = 9;
    }
  }
  puVar1 = (uint *)(param_1 + 0x28);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (uint)CARRY4(uVar2,uVar3);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x20);
  return;
}


