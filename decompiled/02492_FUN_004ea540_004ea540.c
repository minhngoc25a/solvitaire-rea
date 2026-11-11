// Function: FUN_004ea540
// Entry: 004ea540
// Size: 68 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ea540(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 1;
  do {
    uVar3 = param_4 & 1;
    iVar1 = iVar2 * 2;
    param_4 = param_4 >> 1;
    iVar2 = iVar1 + uVar3;
    *(uint *)(param_1 + 0x20 + *(int *)(param_1 + 0x18) * 4) = uVar3;
    *(int *)(param_1 + 0x108 + *(int *)(param_1 + 0x18) * 4) = param_2 + iVar1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


