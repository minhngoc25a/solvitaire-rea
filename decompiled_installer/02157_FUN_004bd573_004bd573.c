// Function: FUN_004bd573
// Entry: 004bd573
// Size: 899 bytes
// Thunk: false
// External: false


void FUN_004bd573(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_9 != 0) {
    if (param_10 == 0xff) {
      pbVar8 = (byte *)(param_3 * param_7 + param_2 + param_6 * 4);
      iVar4 = param_5;
      do {
        pbVar10 = (byte *)(*(int *)(param_1 + 0xcc) * iVar4 + param_4 * 4 + *(int *)(param_1 + 200))
        ;
        if (0 < param_8) {
          param_5 = param_8;
          pbVar9 = pbVar8;
          do {
            bVar3 = pbVar9[3];
            uVar6 = (uint)pbVar10[3];
            uVar5 = (uint)bVar3;
            pbVar1 = pbVar10 + 2;
            if (uVar5 == 0) {
              bVar7 = *pbVar1;
            }
            else if (uVar6 == 0) {
              bVar7 = pbVar9[2];
            }
            else {
              bVar7 = (byte)((int)((uint)*pbVar1 * (0xff - uVar5) * uVar6 + pbVar9[2] * uVar5 * 0xff
                                  ) / (int)((0xff - uVar5) * uVar6 + uVar5 * 0xff));
            }
            *pbVar1 = bVar7;
            if (bVar3 == 0) {
              bVar7 = pbVar10[1];
            }
            else if (uVar6 == 0) {
              bVar7 = pbVar9[1];
            }
            else {
              bVar7 = (byte)((int)((uint)pbVar10[1] * (0xff - uVar5) * uVar6 +
                                  pbVar9[1] * uVar5 * 0xff) /
                            (int)((0xff - uVar5) * uVar6 + uVar5 * 0xff));
            }
            pbVar10[1] = bVar7;
            if (bVar3 == 0) {
              bVar3 = *pbVar10;
            }
            else if (uVar6 == 0) {
              bVar3 = *pbVar9;
            }
            else {
              bVar3 = (byte)((int)((uint)*pbVar10 * (0xff - uVar5) * uVar6 + *pbVar9 * uVar5 * 0xff)
                            / (int)((0xff - uVar5) * uVar6 + uVar5 * 0xff));
            }
            *pbVar10 = bVar3;
            pbVar9 = pbVar9 + 4;
            pbVar10 = pbVar10 + 4;
            param_5 = param_5 + -1;
          } while (param_5 != 0);
        }
        param_9 = param_9 + -1;
        iVar4 = iVar4 + 1;
        iVar2 = param_3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          iVar2 = -param_3;
        }
        pbVar8 = pbVar8 + iVar2;
      } while (param_9 != 0);
    }
    else {
      pbVar8 = (byte *)(param_3 * param_7 + param_2 + param_6 * 4);
      do {
        pbVar10 = (byte *)(*(int *)(param_1 + 0xcc) * param_5 + param_4 * 4 +
                          *(int *)(param_1 + 200));
        if (0 < param_8) {
          param_6 = param_8;
          pbVar9 = pbVar8;
          do {
            uVar5 = (uint)pbVar10[3];
            iVar4 = (int)((uint)pbVar9[3] * param_10) / 0xff;
            pbVar1 = pbVar10 + 2;
            if (iVar4 == 0) {
              bVar3 = *pbVar1;
            }
            else if (uVar5 == 0) {
              bVar3 = pbVar9[2];
            }
            else {
              bVar3 = (byte)((int)((uint)*pbVar1 * (0xff - iVar4) * uVar5 +
                                  (uint)pbVar9[2] * iVar4 * 0xff) /
                            (int)((0xff - iVar4) * uVar5 + iVar4 * 0xff));
            }
            *pbVar1 = bVar3;
            if (iVar4 == 0) {
              bVar3 = pbVar10[1];
            }
            else if (uVar5 == 0) {
              bVar3 = pbVar9[1];
            }
            else {
              bVar3 = (byte)((int)((uint)pbVar10[1] * (0xff - iVar4) * uVar5 +
                                  (uint)pbVar9[1] * iVar4 * 0xff) /
                            (int)((0xff - iVar4) * uVar5 + iVar4 * 0xff));
            }
            pbVar10[1] = bVar3;
            if (iVar4 == 0) {
              bVar3 = *pbVar10;
            }
            else if (uVar5 == 0) {
              bVar3 = *pbVar9;
            }
            else {
              bVar3 = (byte)((int)((uint)*pbVar10 * (0xff - iVar4) * uVar5 +
                                  (uint)*pbVar9 * iVar4 * 0xff) /
                            (int)((0xff - iVar4) * uVar5 + iVar4 * 0xff));
            }
            *pbVar10 = bVar3;
            pbVar9 = pbVar9 + 4;
            pbVar10 = pbVar10 + 4;
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
  }
  return;
}


