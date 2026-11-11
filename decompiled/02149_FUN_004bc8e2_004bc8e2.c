// Function: FUN_004bc8e2
// Entry: 004bc8e2
// Size: 418 bytes
// Thunk: false
// External: false


void FUN_004bc8e2(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  iVar1 = param_1;
  if (param_9 != 0) {
    pbVar8 = (byte *)(param_6 * 3 + param_3 * param_7 + param_2);
    do {
      iVar4 = *(int *)(iVar1 + 0xd4);
      pbVar7 = (byte *)(iVar4 * param_4 + *(int *)(iVar1 + 0xcc) * param_5 + *(int *)(iVar1 + 200));
      if (0 < param_8) {
        param_2 = param_8;
        pbVar9 = pbVar8;
        param_1 = param_4;
        do {
          uVar6 = (((uint)*pbVar9 | param_10 << 8) << 8 | (uint)pbVar9[1]) << 8 | (uint)pbVar9[2];
          param_6 = param_5;
          if (iVar4 == 4) {
            if (*(int *)(iVar1 + 0xe8) != 0) {
              param_6 = (*(int *)(iVar1 + 0x84) - param_5) + -1;
            }
            uVar2 = (**(code **)(iVar1 + 0xb8))
                              (param_1,param_6,uVar6,
                               CONCAT31(CONCAT21(CONCAT11(pbVar7[3],*pbVar7),pbVar7[1]),pbVar7[2]));
            bVar5 = (byte)((uint)uVar2 >> 8);
            pbVar7[3] = (byte)((uint)uVar2 >> 0x18);
            bVar3 = (byte)((uint)uVar2 >> 0x10);
          }
          else {
            if (*(int *)(iVar1 + 0xe8) != 0) {
              param_6 = (*(int *)(iVar1 + 0x84) - param_5) + -1;
            }
            uVar2 = (**(code **)(iVar1 + 0xb8))
                              (param_1,param_6,uVar6,
                               ((*pbVar7 | 0xffffff00) << 8 | (uint)pbVar7[1]) << 8 |
                               (uint)pbVar7[2]);
            bVar5 = (byte)((uint)uVar2 >> 8);
            bVar3 = (byte)((uint)uVar2 >> 0x10);
          }
          pbVar7[2] = (byte)uVar2;
          pbVar9 = pbVar9 + 3;
          pbVar7[1] = bVar5;
          *pbVar7 = bVar3;
          iVar4 = *(int *)(iVar1 + 0xd4);
          pbVar7 = pbVar7 + iVar4;
          param_1 = param_1 + 1;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      param_9 = param_9 + -1;
      param_5 = param_5 + 1;
      iVar4 = param_3;
      if (*(int *)(iVar1 + 0xe8) == 0) {
        iVar4 = -param_3;
      }
      pbVar8 = pbVar8 + iVar4;
    } while (param_9 != 0);
  }
  return;
}


