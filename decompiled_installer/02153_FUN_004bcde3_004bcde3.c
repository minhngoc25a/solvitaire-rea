// Function: FUN_004bcde3
// Entry: 004bcde3
// Size: 532 bytes
// Thunk: false
// External: false


void FUN_004bcde3(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  if (param_9 != 0) {
    iVar2 = param_3 * param_7 + param_2;
    if (param_10 == 0xff) {
      pbVar5 = (byte *)(iVar2 + param_6 * 4);
      do {
        pbVar3 = (byte *)(*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) + param_4 * 3
                         );
        if (0 < param_8) {
          param_7 = param_8;
          pbVar4 = pbVar5;
          do {
            uVar7 = (uint)pbVar4[3];
            iVar2 = 0xff - uVar7;
            pbVar3[2] = (byte)((int)(pbVar4[2] * uVar7 + (uint)pbVar3[2] * iVar2) / 0xff);
            pbVar3[1] = (byte)((int)(pbVar4[1] * uVar7 + (uint)pbVar3[1] * iVar2) / 0xff);
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 4;
            param_7 = param_7 + -1;
            *pbVar3 = (byte)((int)((uint)*pbVar3 * iVar2 + bVar1 * uVar7) / 0xff);
            pbVar3 = pbVar3 + 3;
          } while (param_7 != 0);
        }
        param_9 = param_9 + -1;
        param_5 = param_5 + 1;
        iVar2 = param_3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          iVar2 = -param_3;
        }
        pbVar5 = pbVar5 + iVar2;
      } while (param_9 != 0);
    }
    else {
      pbVar5 = (byte *)(iVar2 + param_6 * 4);
      do {
        pbVar3 = (byte *)(*(int *)(param_1 + 0xcc) * param_5 + *(int *)(param_1 + 200) + param_4 * 3
                         );
        if (0 < param_8) {
          param_7 = param_8;
          pbVar4 = pbVar5;
          do {
            iVar2 = (int)((uint)pbVar4[3] * param_10) / 0xff;
            iVar6 = 0xff - iVar2;
            pbVar3[2] = (byte)((int)((uint)pbVar4[2] * iVar2 + (uint)pbVar3[2] * iVar6) / 0xff);
            pbVar3[1] = (byte)((int)((uint)pbVar4[1] * iVar2 + (uint)pbVar3[1] * iVar6) / 0xff);
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 4;
            param_7 = param_7 + -1;
            *pbVar3 = (byte)((int)((uint)*pbVar3 * iVar6 + (uint)bVar1 * iVar2) / 0xff);
            pbVar3 = pbVar3 + 3;
          } while (param_7 != 0);
        }
        param_9 = param_9 + -1;
        param_5 = param_5 + 1;
        iVar2 = param_3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          iVar2 = -param_3;
        }
        pbVar5 = pbVar5 + iVar2;
      } while (param_9 != 0);
    }
  }
  return;
}


