// Function: FUN_0048c3e0
// Entry: 0048c3e0
// Size: 97 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048c3e0(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = param_4 / 1000000000;
  iVar3 = param_2 + uVar1;
  iVar4 = param_3 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(param_2,uVar1);
  iVar2 = param_4 % 1000000000;
  if (iVar2 < 0) {
    bVar5 = iVar3 != 0;
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + -1 + (uint)bVar5;
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 8;
  *(int *)(param_1 + 0x24) = iVar4;
  *(int *)(param_1 + 0x20) = iVar3;
  iVar3 = iVar2 + 1000000000;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0x28) = iVar3;
  return;
}


