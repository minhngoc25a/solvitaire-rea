// Function: FUN_004bd093
// Entry: 004bd093
// Size: 315 bytes
// Thunk: false
// External: false


void FUN_004bd093(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (param_9 != 0) {
    if (param_10 == 0xff) {
      puVar3 = (uint *)(param_3 * param_7 + param_2 + param_6 * 4);
      do {
        FUN_0044c490((uint *)(*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) +
                             param_4 * 4),puVar3,param_8 << 2);
        param_9 = param_9 + -1;
        param_5 = param_5 + 1;
        iVar5 = param_3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          iVar5 = -param_3;
        }
        puVar3 = (uint *)((int)puVar3 + iVar5);
      } while (param_9 != 0);
    }
    else {
      puVar4 = (undefined1 *)(param_3 * param_7 + param_2 + param_6 * 4);
      do {
        puVar1 = (undefined1 *)
                 (*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) + param_4 * 4);
        puVar2 = puVar4;
        iVar5 = param_8;
        if (0 < param_8) {
          do {
            puVar1[2] = puVar2[2];
            puVar1[1] = puVar2[1];
            *puVar1 = *puVar2;
            puVar1[3] = (char)((int)((uint)(byte)puVar2[3] * param_10) / 0xff);
            iVar5 = iVar5 + -1;
            puVar1 = puVar1 + 4;
            puVar2 = puVar2 + 4;
          } while (iVar5 != 0);
        }
        param_9 = param_9 + -1;
        param_5 = param_5 + 1;
        iVar5 = param_3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          iVar5 = -param_3;
        }
        puVar4 = puVar4 + iVar5;
      } while (param_9 != 0);
    }
  }
  return;
}


