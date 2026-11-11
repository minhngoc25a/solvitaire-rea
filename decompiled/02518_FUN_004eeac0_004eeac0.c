// Function: FUN_004eeac0
// Entry: 004eeac0
// Size: 96 bytes
// Thunk: false
// External: false


void __cdecl FUN_004eeac0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar5 = -iVar1;
  if (uVar5 == 0) {
    uVar5 = 0xffffffff;
  }
  uVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  if (uVar2 < uVar5) {
    uVar5 = uVar2;
  }
  uVar3 = *(int *)(param_1 + 0xc) - iVar1;
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x44) < uVar3) {
    uVar4 = uVar3 - *(uint *)(param_1 + 0x44);
    uVar3 = uVar2;
  }
  else if (uVar3 < uVar2) {
    uVar4 = uVar3;
    if (uVar3 != 0) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = uVar3 + (1 - uVar2);
    uVar3 = uVar2;
  }
  *(uint *)(param_1 + 0x10) = uVar3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  *(uint *)(param_1 + 8) = iVar1 + uVar4;
  return;
}


