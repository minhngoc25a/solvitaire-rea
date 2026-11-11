// Function: FUN_004bc6fa
// Entry: 004bc6fa
// Size: 405 bytes
// Thunk: false
// External: false


void FUN_004bc6fa(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (param_9 != 0) {
    pbVar4 = (byte *)(param_6 * 3 + param_3 * param_7 + param_2);
    do {
      pbVar6 = (byte *)(*(int *)(param_1 + 0xcc) * param_5 + param_4 * 4 + *(int *)(param_1 + 200));
      if (0 < param_8) {
        param_6 = param_8;
        pbVar5 = pbVar4;
        do {
          uVar3 = (uint)pbVar6[3];
          if (param_10 == 0) {
            bVar2 = pbVar6[2];
          }
          else {
            bVar2 = pbVar5[2];
            if (uVar3 != 0) {
              bVar2 = (byte)((int)((uint)pbVar6[2] * (0xff - param_10) * uVar3 +
                                  (uint)bVar2 * param_10 * 0xff) /
                            (int)((0xff - param_10) * uVar3 + param_10 * 0xff));
            }
          }
          pbVar6[2] = bVar2;
          if (param_10 == 0) {
            bVar2 = pbVar6[1];
          }
          else if (uVar3 == 0) {
            bVar2 = pbVar5[1];
          }
          else {
            bVar2 = (byte)((int)((uint)pbVar6[1] * (0xff - param_10) * uVar3 +
                                (uint)pbVar5[1] * param_10 * 0xff) /
                          (int)((0xff - param_10) * uVar3 + param_10 * 0xff));
          }
          pbVar6[1] = bVar2;
          if (param_10 == 0) {
            bVar2 = *pbVar6;
          }
          else if (uVar3 == 0) {
            bVar2 = *pbVar5;
          }
          else {
            bVar2 = (byte)((int)((uint)*pbVar6 * (0xff - param_10) * uVar3 +
                                (uint)*pbVar5 * param_10 * 0xff) /
                          (int)((0xff - param_10) * uVar3 + param_10 * 0xff));
          }
          *pbVar6 = bVar2;
          pbVar5 = pbVar5 + 3;
          pbVar6 = pbVar6 + 4;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      param_9 = param_9 + -1;
      param_5 = param_5 + 1;
      iVar1 = param_3;
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar1 = -param_3;
      }
      pbVar4 = pbVar4 + iVar1;
    } while (param_9 != 0);
  }
  return;
}


