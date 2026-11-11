// Function: FUN_00465320
// Entry: 00465320
// Size: 66 bytes
// Thunk: false
// External: false


void __cdecl FUN_00465320(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = **(int **)(param_1 + 0x440);
  if (*(uint *)(iVar3 + 0xe0) != 0) {
    FUN_00488f20(param_1,(ulonglong)*(uint *)(iVar3 + 0xe0));
    uVar4 = *(uint *)(iVar3 + 0xe0);
    puVar1 = (uint *)(iVar3 + 0xb8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(undefined4 *)(iVar3 + 0xe0) = 0;
    *(int *)(iVar3 + 0xbc) = *(int *)(iVar3 + 0xbc) + (uint)CARRY4(uVar2,uVar4);
  }
  return;
}


