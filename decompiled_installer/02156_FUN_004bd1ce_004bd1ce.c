// Function: FUN_004bd1ce
// Entry: 004bd1ce
// Size: 933 bytes
// Thunk: false
// External: false


void FUN_004bd1ce(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_9 != 0) {
    if (param_10 == 0xff) {
      pbVar8 = (byte *)(param_3 * param_7 + param_2 + param_6 * 4);
      iVar5 = param_5;
      do {
        pbVar10 = (byte *)(*(int *)(param_1 + 0xcc) * iVar5 + param_4 * 4 + *(int *)(param_1 + 200))
        ;
        if (0 < param_8) {
          param_5 = param_8;
          pbVar9 = pbVar8;
          do {
            bVar3 = pbVar9[3];
            pbVar1 = pbVar10 + 2;
            uVar6 = (uint)pbVar10[3];
            uVar4 = (uint)bVar3;
            if (uVar4 == 0) {
              bVar7 = *pbVar1;
            }
            else if (uVar6 == 0) {
              bVar7 = pbVar9[2];
            }
            else {
              bVar7 = (byte)((int)((uint)*pbVar1 * (0xff - uVar4) * uVar6 + pbVar9[2] * uVar4 * 0xff
                                  ) / (int)((0xff - uVar4) * uVar6 + uVar4 * 0xff));
            }
            *pbVar1 = bVar7;
            if (bVar3 == 0) {
              bVar7 = pbVar10[1];
            }
            else if (uVar6 == 0) {
              bVar7 = pbVar9[1];
            }
            else {
              bVar7 = (byte)((int)((uint)pbVar10[1] * (0xff - uVar4) * uVar6 +
                                  pbVar9[1] * uVar4 * 0xff) /
                            (int)((0xff - uVar4) * uVar6 + uVar4 * 0xff));
            }
            pbVar10[1] = bVar7;
            if (bVar3 == 0) {
              bVar3 = *pbVar10;
            }
            else if (uVar6 == 0) {
              bVar3 = *pbVar9;
            }
            else {
              bVar3 = (byte)((int)((uint)*pbVar10 * (0xff - uVar4) * uVar6 + *pbVar9 * uVar4 * 0xff)
                            / (int)((0xff - uVar4) * uVar6 + uVar4 * 0xff));
            }
            *pbVar10 = bVar3;
            pbVar9 = pbVar9 + 4;
            pbVar10[3] = (byte)((int)((0xff - uVar4) * uVar6 + uVar4 * 0xff) / 0xff);
            pbVar10 = pbVar10 + 4;
            param_5 = param_5 + -1;
          } while (param_5 != 0);
        }
        param_9 = param_9 + -1;
        iVar5 = iVar5 + 1;
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
          param_2 = param_8;
          pbVar9 = pbVar8;
          do {
            iVar5 = (int)((uint)pbVar9[3] * param_10) / 0xff;
            uVar4 = (uint)pbVar10[3];
            pbVar1 = pbVar10 + 2;
            if (iVar5 == 0) {
              bVar3 = *pbVar1;
            }
            else {
              bVar3 = pbVar9[2];
              if (uVar4 != 0) {
                bVar3 = (byte)((int)((uint)*pbVar1 * (0xff - iVar5) * uVar4 +
                                    (uint)bVar3 * iVar5 * 0xff) /
                              (int)((0xff - iVar5) * uVar4 + iVar5 * 0xff));
              }
            }
            *pbVar1 = bVar3;
            if (iVar5 == 0) {
              bVar3 = pbVar10[1];
            }
            else if (uVar4 == 0) {
              bVar3 = pbVar9[1];
            }
            else {
              bVar3 = (byte)((int)((uint)pbVar10[1] * (0xff - iVar5) * uVar4 +
                                  (uint)pbVar9[1] * iVar5 * 0xff) /
                            (int)((0xff - iVar5) * uVar4 + iVar5 * 0xff));
            }
            pbVar10[1] = bVar3;
            if (iVar5 == 0) {
              bVar3 = *pbVar10;
            }
            else if (uVar4 == 0) {
              bVar3 = *pbVar9;
            }
            else {
              bVar3 = (byte)((int)((uint)*pbVar10 * (0xff - iVar5) * uVar4 +
                                  (uint)*pbVar9 * iVar5 * 0xff) /
                            (int)((0xff - iVar5) * uVar4 + iVar5 * 0xff));
            }
            *pbVar10 = bVar3;
            pbVar9 = pbVar9 + 4;
            pbVar10[3] = (byte)((int)((0xff - iVar5) * uVar4 + iVar5 * 0xff) / 0xff);
            pbVar10 = pbVar10 + 4;
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
        param_9 = param_9 + -1;
        param_5 = param_5 + 1;
        iVar5 = param_3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          iVar5 = -param_3;
        }
        pbVar8 = pbVar8 + iVar5;
      } while (param_9 != 0);
    }
  }
  return;
}


