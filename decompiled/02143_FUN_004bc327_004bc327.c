// Function: FUN_004bc327
// Entry: 004bc327
// Size: 216 bytes
// Thunk: false
// External: false


void FUN_004bc327(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  if (param_9 != 0) {
    pbVar3 = (byte *)(param_6 * 3 + param_3 * param_7 + param_2);
    do {
      pbVar5 = (byte *)(*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) + param_4 * 3);
      if (0 < param_8 * 3) {
        pbVar2 = pbVar3;
        iVar4 = param_8 * 3;
        do {
          bVar1 = *pbVar2;
          pbVar2 = pbVar2 + 1;
          *pbVar5 = (byte)((int)((uint)bVar1 * param_10 + (uint)*pbVar5 * (0xff - param_10)) / 0xff)
          ;
          pbVar5 = pbVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_9 = param_9 + -1;
      param_5 = param_5 + 1;
      iVar4 = param_3;
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar4 = -param_3;
      }
      pbVar3 = pbVar3 + iVar4;
    } while (param_9 != 0);
  }
  return;
}


