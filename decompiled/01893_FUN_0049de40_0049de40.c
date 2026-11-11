// Function: FUN_0049de40
// Entry: 0049de40
// Size: 157 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049de40(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 ^ 1;
  uVar2 = *(uint *)(param_1 + 8) & 0xfffffffc;
  uVar3 = *(uint *)(param_1 + param_2 * 4);
  if (uVar3 != 0) {
    *(uint *)(uVar2 + (*(uint *)(param_1 + 8) >> 1 & 1) * 4) = uVar3;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(uVar3 + uVar4 * 4);
    *(uint *)(uVar3 + uVar4 * 4) = param_1;
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) & 3 | uVar2;
    uVar2 = *(uint *)(param_1 + 8) & 3 | uVar3;
    *(uint *)(param_1 + 8) = uVar2;
    uVar2 = (*(uint *)(uVar3 + 8) ^ uVar2) & 3;
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) ^ uVar2;
    uVar2 = *(uint *)(param_1 + 8) ^ uVar2;
    uVar3 = uVar2 | 2;
    if (uVar4 == 0) {
      uVar3 = uVar2 & 0xfffffffd;
    }
    *(uint *)(param_1 + 8) = uVar3;
    iVar1 = *(int *)(param_1 + param_2 * 4);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 3 | param_1;
      iVar1 = *(int *)(param_1 + param_2 * 4);
      if (param_2 != 0) {
        *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 2;
        return;
      }
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffd;
    }
  }
  return;
}


