// Function: FUN_004bda1a
// Entry: 004bda1a
// Size: 442 bytes
// Thunk: false
// External: false


void FUN_004bda1a(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  
  if (param_9 != 0) {
    pbVar6 = (byte *)(param_3 * param_7 + param_2 + param_6 * 4);
    do {
      iVar7 = *(int *)(param_1 + 0xd4);
      pbVar8 = (byte *)(iVar7 * param_4 + *(int *)(param_1 + 0xcc) * param_5 +
                       *(int *)(param_1 + 200));
      if (0 < param_8) {
        param_6 = param_8;
        pbVar2 = pbVar6;
        param_7 = param_4;
        do {
          uVar5 = (uint)pbVar2[3];
          if (param_10 != 0xff) {
            uVar5 = (int)(uVar5 * param_10) / 0xff;
          }
          uVar5 = ((uVar5 << 8 | (uint)*pbVar2) << 8 | (uint)pbVar2[1]) << 8 | (uint)pbVar2[2];
          if (iVar7 == 4) {
            iVar7 = param_5;
            if (*(int *)(param_1 + 0xe8) != 0) {
              iVar7 = (*(int *)(param_1 + 0x84) - param_5) + -1;
            }
            uVar1 = (**(code **)(param_1 + 0xb8))
                              (param_7,iVar7,uVar5,
                               CONCAT31(CONCAT21(CONCAT11(pbVar8[3],*pbVar8),pbVar8[1]),pbVar8[2]));
            bVar4 = (byte)((uint)uVar1 >> 8);
            pbVar8[3] = (byte)((uint)uVar1 >> 0x18);
            bVar3 = (byte)((uint)uVar1 >> 0x10);
          }
          else {
            iVar7 = param_5;
            if (*(int *)(param_1 + 0xe8) != 0) {
              iVar7 = (*(int *)(param_1 + 0x84) - param_5) + -1;
            }
            uVar1 = (**(code **)(param_1 + 0xb8))
                              (param_7,iVar7,uVar5,
                               ((*pbVar8 | 0xffffff00) << 8 | (uint)pbVar8[1]) << 8 |
                               (uint)pbVar8[2]);
            bVar4 = (byte)((uint)uVar1 >> 8);
            bVar3 = (byte)((uint)uVar1 >> 0x10);
          }
          pbVar8[2] = (byte)uVar1;
          pbVar8[1] = bVar4;
          pbVar2 = pbVar2 + 4;
          *pbVar8 = bVar3;
          iVar7 = *(int *)(param_1 + 0xd4);
          pbVar8 = pbVar8 + iVar7;
          param_7 = param_7 + 1;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      param_9 = param_9 + -1;
      param_5 = param_5 + 1;
      iVar7 = param_3;
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar7 = -param_3;
      }
      pbVar6 = pbVar6 + iVar7;
    } while (param_9 != 0);
  }
  return;
}


