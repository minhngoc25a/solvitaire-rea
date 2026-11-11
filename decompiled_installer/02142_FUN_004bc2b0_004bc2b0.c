// Function: FUN_004bc2b0
// Entry: 004bc2b0
// Size: 119 bytes
// Thunk: false
// External: false


void FUN_004bc2b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)(param_6 * 3 + param_3 * param_7 + param_2);
  puVar3 = (uint *)(*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) + param_4 * 3);
  while (param_9 != 0) {
    FUN_0044c490(puVar3,puVar2,param_8 * 3);
    puVar3 = (uint *)((int)puVar3 + *(int *)(param_1 + 0xcc));
    param_9 = param_9 + -1;
    iVar1 = param_3;
    if (*(int *)(param_1 + 0xe8) == 0) {
      iVar1 = -param_3;
    }
    puVar2 = (uint *)((int)puVar2 + iVar1);
  }
  return;
}


