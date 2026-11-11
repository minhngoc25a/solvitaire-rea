// Function: FUN_00509e90
// Entry: 00509e90
// Size: 115 bytes
// Thunk: false
// External: false


void __cdecl FUN_00509e90(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(int *)(param_1 + 0x38) + 1;
  *(uint *)(param_1 + 0x38) = uVar2;
  if (uVar2 == *(uint *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) == -1) {
    uVar2 = 0;
    uVar4 = ~*(uint *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0x54) != 0) {
      do {
        puVar1 = (uint *)(*(int *)(param_1 + 0x30) + uVar2 * 4);
        uVar3 = *puVar1;
        if (uVar4 < uVar3) {
          uVar3 = uVar3 - uVar4;
        }
        else {
          uVar3 = 0;
        }
        uVar2 = uVar2 + 1;
        *puVar1 = uVar3;
      } while (uVar2 < *(uint *)(param_1 + 0x54));
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      do {
        puVar1 = (uint *)(*(int *)(param_1 + 0x34) + uVar2 * 4);
        uVar3 = *puVar1;
        if (uVar4 < uVar3) {
          uVar3 = uVar3 - uVar4;
        }
        else {
          uVar3 = 0;
        }
        uVar2 = uVar2 + 1;
        *puVar1 = uVar3;
      } while (uVar2 < *(uint *)(param_1 + 0x58));
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar4;
  }
  return;
}


