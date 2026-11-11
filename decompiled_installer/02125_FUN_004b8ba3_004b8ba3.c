// Function: FUN_004b8ba3
// Entry: 004b8ba3
// Size: 1148 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b8ba3(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = param_3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar5 = (*(int *)(param_1 + 0x84) - param_3) + -1;
  }
  iVar3 = *(int *)(param_1 + 0xd4);
  pbVar6 = (byte *)(*(int *)(param_1 + 0xcc) * iVar5 + iVar3 * param_2 + *(int *)(param_1 + 200));
  if ((*(int *)(param_1 + 0xe0) == 0) && (*(int *)(param_1 + 0xe4) == 0)) {
    uVar4 = *(uint *)(param_1 + 0xd8);
    if ((uVar4 & 2) == 0) {
      if ((uVar4 & 0x100) == 0) {
        if ((uVar4 & 8) == 0) {
          if ((uVar4 & 0x10) == 0) {
            if (param_4 != 0) {
              if ((uVar4 & 0x20) == 0) {
                do {
                  pbVar6[2] = *(byte *)(param_1 + 0xf0);
                  pbVar6[1] = *(byte *)(param_1 + 0xf4);
                  *pbVar6 = *(byte *)(param_1 + 0xf8);
                  pbVar6 = pbVar6 + *(int *)(param_1 + 0xd4);
                  param_4 = param_4 + -1;
                } while (param_4 != 0);
              }
              else if (iVar3 == 4) {
                do {
                  uVar4 = (uint)pbVar6[3];
                  pbVar1 = pbVar6 + 2;
                  iVar5 = *(int *)(param_1 + 0xfc);
                  if (iVar5 == 0) {
                    bVar2 = *pbVar1;
                  }
                  else {
                    if (uVar4 == 0) {
                      iVar3 = *(int *)(param_1 + 0xf0);
                    }
                    else {
                      iVar3 = (uint)*pbVar1 * *(int *)(param_1 + 0x100) * uVar4 +
                              *(int *)(param_1 + 0xf0) * 0xff;
                      iVar5 = *(int *)(param_1 + 0x100) * uVar4 + *(int *)(param_1 + 0xfc) * 0xff;
                    }
                    bVar2 = (byte)(iVar3 / iVar5);
                  }
                  *pbVar1 = bVar2;
                  if (*(int *)(param_1 + 0xfc) == 0) {
                    bVar2 = pbVar6[1];
                  }
                  else if (uVar4 == 0) {
                    bVar2 = (byte)(*(int *)(param_1 + 0xf4) / *(int *)(param_1 + 0xfc));
                  }
                  else {
                    bVar2 = (byte)((int)((uint)pbVar6[1] * *(int *)(param_1 + 0x100) * uVar4 +
                                        *(int *)(param_1 + 0xf4) * 0xff) /
                                  (int)(*(int *)(param_1 + 0x100) * uVar4 +
                                       *(int *)(param_1 + 0xfc) * 0xff));
                  }
                  pbVar6[1] = bVar2;
                  if (*(int *)(param_1 + 0xfc) == 0) {
                    bVar2 = *pbVar6;
                  }
                  else if (uVar4 == 0) {
                    bVar2 = (byte)(*(int *)(param_1 + 0xf8) / *(int *)(param_1 + 0xfc));
                  }
                  else {
                    bVar2 = (byte)((int)((uint)*pbVar6 * *(int *)(param_1 + 0x100) * uVar4 +
                                        *(int *)(param_1 + 0xf8) * 0xff) /
                                  (int)(*(int *)(param_1 + 0x100) * uVar4 +
                                       *(int *)(param_1 + 0xfc) * 0xff));
                  }
                  *pbVar6 = bVar2;
                  pbVar6 = pbVar6 + 4;
                  param_4 = param_4 + -1;
                } while (param_4 != 0);
              }
              else {
                do {
                  pbVar6[2] = (byte)((int)((uint)pbVar6[2] * *(int *)(param_1 + 0x100) +
                                          *(int *)(param_1 + 0xf0)) / 0xff);
                  pbVar6[1] = (byte)((int)((uint)pbVar6[1] * *(int *)(param_1 + 0x100) +
                                          *(int *)(param_1 + 0xf4)) / 0xff);
                  *pbVar6 = (byte)((int)((uint)*pbVar6 * *(int *)(param_1 + 0x100) +
                                        *(int *)(param_1 + 0xf8)) / 0xff);
                  pbVar6 = pbVar6 + 3;
                  param_4 = param_4 + -1;
                } while (param_4 != 0);
              }
            }
          }
          else if (param_4 != 0) {
            if (iVar3 == 4) {
              do {
                uVar4 = (uint)pbVar6[3];
                pbVar1 = pbVar6 + 2;
                iVar5 = *(int *)(param_1 + 0xfc);
                if (iVar5 == 0) {
                  bVar2 = *pbVar1;
                }
                else {
                  if (uVar4 == 0) {
                    iVar3 = *(int *)(param_1 + 0xf0);
                  }
                  else {
                    iVar3 = (uint)*pbVar1 * *(int *)(param_1 + 0x100) * uVar4 +
                            *(int *)(param_1 + 0xf0) * 0xff;
                    iVar5 = *(int *)(param_1 + 0x100) * uVar4 + *(int *)(param_1 + 0xfc) * 0xff;
                  }
                  bVar2 = (byte)(iVar3 / iVar5);
                }
                *pbVar1 = bVar2;
                if (*(int *)(param_1 + 0xfc) == 0) {
                  bVar2 = pbVar6[1];
                }
                else if (uVar4 == 0) {
                  bVar2 = (byte)(*(int *)(param_1 + 0xf4) / *(int *)(param_1 + 0xfc));
                }
                else {
                  bVar2 = (byte)((int)((uint)pbVar6[1] * *(int *)(param_1 + 0x100) * uVar4 +
                                      *(int *)(param_1 + 0xf4) * 0xff) /
                                (int)(*(int *)(param_1 + 0x100) * uVar4 +
                                     *(int *)(param_1 + 0xfc) * 0xff));
                }
                pbVar6[1] = bVar2;
                if (*(int *)(param_1 + 0xfc) == 0) {
                  bVar2 = *pbVar6;
                }
                else if (uVar4 == 0) {
                  bVar2 = (byte)(*(int *)(param_1 + 0xf8) / *(int *)(param_1 + 0xfc));
                }
                else {
                  bVar2 = (byte)((int)((uint)*pbVar6 * *(int *)(param_1 + 0x100) * uVar4 +
                                      *(int *)(param_1 + 0xf8) * 0xff) /
                                (int)(*(int *)(param_1 + 0x100) * uVar4 +
                                     *(int *)(param_1 + 0xfc) * 0xff));
                }
                *pbVar6 = bVar2;
                pbVar6[3] = (byte)((int)(*(int *)(param_1 + 0x100) * uVar4 +
                                        *(int *)(param_1 + 0xfc) * 0xff) / 0xff);
                pbVar6 = pbVar6 + 4;
                param_4 = param_4 + -1;
              } while (param_4 != 0);
            }
            else {
              do {
                pbVar6[2] = (byte)((int)((uint)pbVar6[2] * *(int *)(param_1 + 0x100) +
                                        *(int *)(param_1 + 0xf0)) / 0xff);
                pbVar6[1] = (byte)((int)((uint)pbVar6[1] * *(int *)(param_1 + 0x100) +
                                        *(int *)(param_1 + 0xf4)) / 0xff);
                *pbVar6 = (byte)((int)((uint)*pbVar6 * *(int *)(param_1 + 0x100) +
                                      *(int *)(param_1 + 0xf8)) / 0xff);
                pbVar6 = pbVar6 + 3;
                param_4 = param_4 + -1;
              } while (param_4 != 0);
            }
          }
        }
        else if ((iVar3 == 4) && (param_4 != 0)) {
          pbVar6 = pbVar6 + 3;
          do {
            *pbVar6 = *(byte *)(param_1 + 0xfc);
            pbVar6 = pbVar6 + 4;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
      }
      else {
        for (; param_4 != 0; param_4 = param_4 + -1) {
          pbVar6[2] = *(byte *)(param_1 + 0xf0);
          pbVar6[1] = *(byte *)(param_1 + 0xf4);
          *pbVar6 = *(byte *)(param_1 + 0xf8);
          pbVar6[3] = *(byte *)(param_1 + 0xfc);
          pbVar6 = pbVar6 + 4;
        }
      }
    }
    else {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        pbVar6[2] = pbVar6[2] ^ *(byte *)(param_1 + 0xf0);
        pbVar6[1] = pbVar6[1] ^ *(byte *)(param_1 + 0xf4);
        *pbVar6 = *pbVar6 ^ *(byte *)(param_1 + 0xf8);
        pbVar6 = pbVar6 + *(int *)(param_1 + 0xd4);
      }
    }
  }
  else {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      FUN_004b86f7(param_1,param_2,param_3,pbVar6);
      pbVar6 = pbVar6 + *(int *)(param_1 + 0xd4);
      param_2 = param_2 + 1;
    }
  }
  return;
}


