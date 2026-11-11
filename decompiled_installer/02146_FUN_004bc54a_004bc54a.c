// Function: FUN_004bc54a
// Entry: 004bc54a
// Size: 432 bytes
// Thunk: false
// External: false


void FUN_004bc54a(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  iVar2 = 0xff - param_10;
  if (param_9 != 0) {
    pbVar8 = (byte *)(param_6 * 3 + param_3 * param_7 + param_2);
    do {
      pbVar7 = (byte *)(*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) + param_4 * 4);
      if (0 < param_8) {
        iVar4 = param_10 * 0xff;
        param_6 = param_8;
        pbVar3 = pbVar8;
        do {
          uVar6 = (uint)pbVar7[3];
          pbVar1 = pbVar7 + 2;
          if (param_10 == 0) {
            bVar5 = *pbVar1;
          }
          else if (uVar6 == 0) {
            bVar5 = pbVar3[2];
          }
          else {
            bVar5 = (byte)((int)((uint)pbVar3[2] * param_10 * 0xff + (uint)*pbVar1 * iVar2 * uVar6)
                          / (int)(iVar2 * uVar6 + iVar4));
          }
          *pbVar1 = bVar5;
          if (param_10 == 0) {
            bVar5 = pbVar7[1];
          }
          else {
            bVar5 = pbVar3[1];
            if (uVar6 != 0) {
              bVar5 = (byte)((int)((uint)bVar5 * param_10 * 0xff + (uint)pbVar7[1] * iVar2 * uVar6)
                            / (int)(iVar2 * uVar6 + iVar4));
            }
          }
          pbVar7[1] = bVar5;
          if (param_10 == 0) {
            bVar5 = *pbVar7;
          }
          else {
            bVar5 = *pbVar3;
            if (uVar6 != 0) {
              bVar5 = (byte)((int)((uint)bVar5 * param_10 * 0xff + (uint)*pbVar7 * iVar2 * uVar6) /
                            (int)(iVar2 * uVar6 + iVar4));
            }
          }
          *pbVar7 = bVar5;
          pbVar7[3] = (byte)((int)(uVar6 * iVar2 + iVar4) / 0xff);
          pbVar7 = pbVar7 + 4;
          pbVar3 = pbVar3 + 3;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      param_9 = param_9 + -1;
      param_5 = param_5 + 1;
      iVar4 = param_3;
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar4 = -param_3;
      }
      pbVar8 = pbVar8 + iVar4;
    } while (param_9 != 0);
  }
  return;
}


