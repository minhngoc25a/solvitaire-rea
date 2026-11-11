// Function: FUN_004b901f
// Entry: 004b901f
// Size: 1073 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b901f(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar6 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar6 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  iVar5 = *(int *)(param_1 + 0xcc);
  iVar3 = *(int *)(param_1 + 0xd4);
  pbVar7 = (byte *)(iVar5 * iVar6 + iVar3 * param_2 + *(int *)(param_1 + 200));
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar5 = -iVar5;
  }
  if ((*(int *)(param_1 + 0xe0) == 0) && (*(int *)(param_1 + 0xe4) == 0)) {
    uVar4 = *(uint *)(param_1 + 0xd8);
    if ((uVar4 & 2) == 0) {
      if ((uVar4 & 0x100) == 0) {
        if ((uVar4 & 8) == 0) {
          if ((uVar4 & 0x10) == 0) {
            if (((uVar4 & 0x20) == 0) || (iVar3 != 4)) {
              for (; param_4 != 0; param_4 = param_4 + -1) {
                pbVar7[2] = *(byte *)(param_1 + 0xf0);
                pbVar7[1] = *(byte *)(param_1 + 0xf4);
                *pbVar7 = *(byte *)(param_1 + 0xf8);
                pbVar7 = pbVar7 + iVar5;
              }
            }
            else {
              for (; param_4 != 0; param_4 = param_4 + -1) {
                uVar4 = (uint)pbVar7[3];
                pbVar1 = pbVar7 + 2;
                iVar6 = *(int *)(param_1 + 0xfc);
                if (iVar6 == 0) {
                  bVar2 = *pbVar1;
                }
                else {
                  if (uVar4 == 0) {
                    iVar3 = *(int *)(param_1 + 0xf0);
                  }
                  else {
                    iVar3 = (uint)*pbVar1 * *(int *)(param_1 + 0x100) * uVar4 +
                            *(int *)(param_1 + 0xf0) * 0xff;
                    iVar6 = *(int *)(param_1 + 0x100) * uVar4 + *(int *)(param_1 + 0xfc) * 0xff;
                  }
                  bVar2 = (byte)(iVar3 / iVar6);
                }
                *pbVar1 = bVar2;
                if (*(int *)(param_1 + 0xfc) == 0) {
                  bVar2 = pbVar7[1];
                }
                else if (uVar4 == 0) {
                  bVar2 = (byte)(*(int *)(param_1 + 0xf4) / *(int *)(param_1 + 0xfc));
                }
                else {
                  bVar2 = (byte)((int)((uint)pbVar7[1] * *(int *)(param_1 + 0x100) * uVar4 +
                                      *(int *)(param_1 + 0xf4) * 0xff) /
                                (int)(*(int *)(param_1 + 0x100) * uVar4 +
                                     *(int *)(param_1 + 0xfc) * 0xff));
                }
                pbVar7[1] = bVar2;
                if (*(int *)(param_1 + 0xfc) == 0) {
                  bVar2 = *pbVar7;
                }
                else if (uVar4 == 0) {
                  bVar2 = (byte)(*(int *)(param_1 + 0xf8) / *(int *)(param_1 + 0xfc));
                }
                else {
                  bVar2 = (byte)((int)((uint)*pbVar7 * *(int *)(param_1 + 0x100) * uVar4 +
                                      *(int *)(param_1 + 0xf8) * 0xff) /
                                (int)(*(int *)(param_1 + 0x100) * uVar4 +
                                     *(int *)(param_1 + 0xfc) * 0xff));
                }
                *pbVar7 = bVar2;
                pbVar7 = pbVar7 + iVar5;
              }
            }
          }
          else if (param_4 != 0) {
            if (iVar3 == 4) {
              do {
                uVar4 = (uint)pbVar7[3];
                pbVar1 = pbVar7 + 2;
                iVar6 = *(int *)(param_1 + 0xfc);
                if (iVar6 == 0) {
                  bVar2 = *pbVar1;
                }
                else {
                  if (uVar4 == 0) {
                    iVar3 = *(int *)(param_1 + 0xf0);
                  }
                  else {
                    iVar3 = (uint)*pbVar1 * *(int *)(param_1 + 0x100) * uVar4 +
                            *(int *)(param_1 + 0xf0) * 0xff;
                    iVar6 = *(int *)(param_1 + 0x100) * uVar4 + *(int *)(param_1 + 0xfc) * 0xff;
                  }
                  bVar2 = (byte)(iVar3 / iVar6);
                }
                *pbVar1 = bVar2;
                if (*(int *)(param_1 + 0xfc) == 0) {
                  bVar2 = pbVar7[1];
                }
                else if (uVar4 == 0) {
                  bVar2 = (byte)(*(int *)(param_1 + 0xf4) / *(int *)(param_1 + 0xfc));
                }
                else {
                  bVar2 = (byte)((int)((uint)pbVar7[1] * *(int *)(param_1 + 0x100) * uVar4 +
                                      *(int *)(param_1 + 0xf4) * 0xff) /
                                (int)(*(int *)(param_1 + 0x100) * uVar4 +
                                     *(int *)(param_1 + 0xfc) * 0xff));
                }
                pbVar7[1] = bVar2;
                if (*(int *)(param_1 + 0xfc) == 0) {
                  bVar2 = *pbVar7;
                }
                else if (uVar4 == 0) {
                  bVar2 = (byte)(*(int *)(param_1 + 0xf8) / *(int *)(param_1 + 0xfc));
                }
                else {
                  bVar2 = (byte)((int)((uint)*pbVar7 * *(int *)(param_1 + 0x100) * uVar4 +
                                      *(int *)(param_1 + 0xf8) * 0xff) /
                                (int)(*(int *)(param_1 + 0x100) * uVar4 +
                                     *(int *)(param_1 + 0xfc) * 0xff));
                }
                *pbVar7 = bVar2;
                pbVar7[3] = (byte)((int)(*(int *)(param_1 + 0x100) * uVar4 +
                                        *(int *)(param_1 + 0xfc) * 0xff) / 0xff);
                pbVar7 = pbVar7 + iVar5;
                param_4 = param_4 + -1;
              } while (param_4 != 0);
            }
            else {
              do {
                pbVar7[2] = (byte)((int)((uint)pbVar7[2] * *(int *)(param_1 + 0x100) +
                                        *(int *)(param_1 + 0xf0)) / 0xff);
                pbVar7[1] = (byte)((int)((uint)pbVar7[1] * *(int *)(param_1 + 0x100) +
                                        *(int *)(param_1 + 0xf4)) / 0xff);
                *pbVar7 = (byte)((int)((uint)*pbVar7 * *(int *)(param_1 + 0x100) +
                                      *(int *)(param_1 + 0xf8)) / 0xff);
                pbVar7 = pbVar7 + iVar5;
                param_4 = param_4 + -1;
              } while (param_4 != 0);
            }
          }
        }
        else if (iVar3 == 4) {
          for (; param_4 != 0; param_4 = param_4 + -1) {
            pbVar7[3] = *(byte *)(param_1 + 0xfc);
            pbVar7 = pbVar7 + iVar5;
          }
        }
      }
      else {
        for (; param_4 != 0; param_4 = param_4 + -1) {
          pbVar7[2] = *(byte *)(param_1 + 0xf0);
          pbVar7[1] = *(byte *)(param_1 + 0xf4);
          *pbVar7 = *(byte *)(param_1 + 0xf8);
          pbVar7[3] = *(byte *)(param_1 + 0xfc);
          pbVar7 = pbVar7 + iVar5;
        }
      }
    }
    else {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        pbVar7[2] = pbVar7[2] ^ *(byte *)(param_1 + 0xf0);
        pbVar7[1] = pbVar7[1] ^ *(byte *)(param_1 + 0xf4);
        *pbVar7 = *pbVar7 ^ *(byte *)(param_1 + 0xf8);
        pbVar7 = pbVar7 + iVar5;
      }
    }
  }
  else {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      FUN_004b86f7(param_1,param_2,param_3,pbVar7);
      pbVar7 = pbVar7 + iVar5;
      param_3 = param_3 + 1;
    }
  }
  return;
}


