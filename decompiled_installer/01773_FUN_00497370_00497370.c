// Function: FUN_00497370
// Entry: 00497370
// Size: 75 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00497370(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar3 = thunk_FUN_004d2390(iVar2);
  uVar4 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(iVar2 + 0x14) <= *(uint *)(param_1 + 0x10)) {
    uVar4 = *(uint *)(iVar2 + 0x14);
  }
  if (uVar4 != 0) {
    uVar5 = FUN_0044c490(*(uint **)(param_1 + 0xc),*(uint **)(iVar2 + 0x10),uVar4);
    uVar3 = (undefined4)uVar5;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar4;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + uVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar4;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar4;
    piVar1 = (int *)(iVar2 + 0x14);
    *piVar1 = *piVar1 - uVar4;
    if (*piVar1 == 0) {
      uVar3 = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
    }
  }
  return uVar3;
}


