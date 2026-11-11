// Function: FUN_004bc1fe
// Entry: 004bc1fe
// Size: 178 bytes
// Thunk: false
// External: false


void FUN_004bc1fe(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  if (param_9 != 0) {
    pbVar2 = (byte *)(param_6 * 3 + param_3 * param_7 + param_2);
    do {
      pbVar3 = (byte *)(*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) +
                       iVar1 * param_4);
      pbVar4 = pbVar2;
      iVar5 = param_8;
      if (0 < param_8) {
        do {
          pbVar3[2] = pbVar3[2] ^ pbVar4[2];
          pbVar3[1] = pbVar3[1] ^ pbVar4[1];
          *pbVar3 = *pbVar3 ^ *pbVar4;
          pbVar3 = pbVar3 + iVar1;
          iVar5 = iVar5 + -1;
          pbVar4 = pbVar4 + 3;
        } while (iVar5 != 0);
      }
      param_9 = param_9 + -1;
      param_5 = param_5 + 1;
      iVar5 = param_3;
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar5 = -param_3;
      }
      pbVar2 = pbVar2 + iVar5;
    } while (param_9 != 0);
  }
  return;
}


