// Function: FUN_004bc3ff
// Entry: 004bc3ff
// Size: 156 bytes
// Thunk: false
// External: false


void FUN_004bc3ff(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (param_9 != 0) {
    puVar1 = (undefined1 *)(param_6 * 3 + param_3 * param_7 + param_2);
    do {
      puVar2 = (undefined1 *)
               (*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) + param_4 * 4);
      iVar3 = param_8;
      puVar4 = puVar1;
      if (0 < param_8) {
        do {
          puVar2[2] = puVar4[2];
          puVar2[1] = puVar4[1];
          *puVar2 = *puVar4;
          puVar2 = puVar2 + 4;
          iVar3 = iVar3 + -1;
          puVar4 = puVar4 + 3;
        } while (iVar3 != 0);
      }
      param_9 = param_9 + -1;
      param_5 = param_5 + 1;
      iVar3 = param_3;
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar3 = -param_3;
      }
      puVar1 = puVar1 + iVar3;
    } while (param_9 != 0);
  }
  return;
}


