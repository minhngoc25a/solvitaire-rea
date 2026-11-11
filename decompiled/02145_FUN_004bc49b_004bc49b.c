// Function: FUN_004bc49b
// Entry: 004bc49b
// Size: 175 bytes
// Thunk: false
// External: false


void FUN_004bc49b(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,undefined1 param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (param_9 != 0) {
    puVar1 = (undefined1 *)(param_6 * 3 + param_3 * param_7 + param_2);
    do {
      puVar2 = (undefined1 *)
               (*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) + param_4 * 4);
      puVar3 = puVar1;
      iVar4 = param_8;
      if (0 < param_8) {
        do {
          puVar2[2] = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[3] = param_10;
          iVar4 = iVar4 + -1;
          puVar2 = puVar2 + 4;
          puVar3 = puVar3 + 3;
        } while (iVar4 != 0);
      }
      param_9 = param_9 + -1;
      param_5 = param_5 + 1;
      iVar4 = param_3;
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar4 = -param_3;
      }
      puVar1 = puVar1 + iVar4;
    } while (param_9 != 0);
  }
  return;
}


