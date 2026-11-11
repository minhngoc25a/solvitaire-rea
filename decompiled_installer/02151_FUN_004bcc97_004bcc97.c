// Function: FUN_004bcc97
// Entry: 004bcc97
// Size: 178 bytes
// Thunk: false
// External: false


void FUN_004bcc97(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  if (param_9 != 0) {
    pbVar3 = (byte *)(param_3 * param_7 + param_2 + param_6 * 4);
    do {
      pbVar2 = (byte *)(*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) +
                       iVar1 * param_4);
      pbVar4 = pbVar3;
      iVar5 = param_8;
      if (0 < param_8) {
        do {
          pbVar2[2] = pbVar2[2] ^ pbVar4[2];
          pbVar2[1] = pbVar2[1] ^ pbVar4[1];
          *pbVar2 = *pbVar2 ^ *pbVar4;
          pbVar2 = pbVar2 + iVar1;
          iVar5 = iVar5 + -1;
          pbVar4 = pbVar4 + 4;
        } while (iVar5 != 0);
      }
      param_9 = param_9 + -1;
      param_5 = param_5 + 1;
      iVar5 = param_3;
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar5 = -param_3;
      }
      pbVar3 = pbVar3 + iVar5;
    } while (param_9 != 0);
  }
  return;
}


