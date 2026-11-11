// Function: FUN_004acd30
// Entry: 004acd30
// Size: 1167 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004acd30(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar6 = (byte *)*puVar2;
  iVar5 = puVar2[1];
  if (*(char *)(param_1[0x6b] + 0xd) == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x3c;
    _strncpy((char *)(*param_1 + 0x18),"LSE",0x50);
    (**(code **)*param_1)(param_1);
  }
  if (2 < param_1[9]) {
    if (iVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_004ad17b;
      pbVar6 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_004ad17b;
      pbVar6 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    iVar5 = iVar5 + -1;
    pbVar7 = pbVar6 + 1;
    if ((uint)*pbVar6 + (uint)bVar1 * 0x100 != 0x18) {
      *(undefined4 *)(*param_1 + 0x14) = 0xc;
      (**(code **)*param_1)(param_1);
    }
    if (iVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_004ad17b;
      pbVar7 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    iVar5 = iVar5 + -1;
    pbVar8 = pbVar7 + 1;
    if (*pbVar7 != 0xd) {
      *(undefined4 *)(*param_1 + 0x14) = 0x46;
      *(int *)(*param_1 + 0x18) = param_1[0x65];
      (**(code **)*param_1)(param_1);
    }
    if (iVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_004ad17b;
      pbVar8 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_004ad17b;
      pbVar8 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    iVar5 = iVar5 + -1;
    pbVar6 = pbVar8 + 1;
    if (CONCAT11(bVar1,*pbVar8) == 0xff) {
      if (iVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_004ad17b;
        pbVar6 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      bVar1 = *pbVar6;
      iVar5 = iVar5 + -1;
      pbVar6 = pbVar6 + 1;
      if (bVar1 == 3) {
        if (iVar5 == 0) {
          uVar3 = (*(code *)puVar2[3])(param_1);
          if ((char)uVar3 == '\0') goto LAB_004ad17b;
          pbVar6 = (byte *)*puVar2;
          iVar5 = puVar2[1];
        }
        bVar1 = *pbVar6;
        iVar5 = iVar5 + -1;
        pbVar6 = pbVar6 + 1;
        if ((uint)bVar1 == *(uint *)(param_1[0x31] + 0x58)) {
          if (iVar5 == 0) {
            uVar3 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar3 == '\0') goto LAB_004ad17b;
            pbVar6 = (byte *)*puVar2;
            iVar5 = puVar2[1];
          }
          iVar5 = iVar5 + -1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if ((uint)bVar1 == *(uint *)param_1[0x31]) {
            if (iVar5 == 0) {
              uVar3 = (*(code *)puVar2[3])(param_1);
              if ((char)uVar3 == '\0') goto LAB_004ad17b;
              pbVar6 = (byte *)*puVar2;
              iVar5 = puVar2[1];
            }
            iVar5 = iVar5 + -1;
            bVar1 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            if ((uint)bVar1 == *(uint *)(param_1[0x31] + 0xb0)) {
              if (iVar5 == 0) {
                uVar3 = (*(code *)puVar2[3])(param_1);
                if ((char)uVar3 == '\0') goto LAB_004ad17b;
                pbVar6 = (byte *)*puVar2;
                iVar5 = puVar2[1];
              }
              bVar1 = *pbVar6;
              iVar5 = iVar5 + -1;
              pbVar6 = pbVar6 + 1;
              if (bVar1 == 0x80) {
                if (iVar5 == 0) {
                  uVar3 = (*(code *)puVar2[3])(param_1);
                  if ((char)uVar3 == '\0') goto LAB_004ad17b;
                  pbVar6 = (byte *)*puVar2;
                  iVar5 = puVar2[1];
                }
                bVar1 = *pbVar6;
                pbVar7 = pbVar6 + 1;
                iVar5 = iVar5 + -1;
                if (iVar5 == 0) {
                  uVar3 = (*(code *)puVar2[3])(param_1);
                  if ((char)uVar3 == '\0') goto LAB_004ad17b;
                  pbVar7 = (byte *)*puVar2;
                  iVar5 = puVar2[1];
                }
                iVar5 = iVar5 + -1;
                pbVar6 = pbVar7 + 1;
                if (CONCAT11(bVar1,*pbVar7) == 0) {
                  if (iVar5 == 0) {
                    uVar3 = (*(code *)puVar2[3])(param_1);
                    if ((char)uVar3 == '\0') goto LAB_004ad17b;
                    pbVar6 = (byte *)*puVar2;
                    iVar5 = puVar2[1];
                  }
                  bVar1 = *pbVar6;
                  pbVar7 = pbVar6 + 1;
                  iVar5 = iVar5 + -1;
                  if (iVar5 == 0) {
                    uVar3 = (*(code *)puVar2[3])(param_1);
                    if ((char)uVar3 == '\0') goto LAB_004ad17b;
                    pbVar7 = (byte *)*puVar2;
                    iVar5 = puVar2[1];
                  }
                  iVar5 = iVar5 + -1;
                  pbVar6 = pbVar7 + 1;
                  if (CONCAT11(bVar1,*pbVar7) == 0) {
                    if (iVar5 == 0) {
                      uVar3 = (*(code *)puVar2[3])(param_1);
                      if ((char)uVar3 == '\0') goto LAB_004ad17b;
                      pbVar6 = (byte *)*puVar2;
                      iVar5 = puVar2[1];
                    }
                    bVar1 = *pbVar6;
                    iVar5 = iVar5 + -1;
                    pbVar6 = pbVar6 + 1;
                    if (bVar1 == 0) {
                      if (iVar5 == 0) {
                        uVar3 = (*(code *)puVar2[3])(param_1);
                        if ((char)uVar3 == '\0') goto LAB_004ad17b;
                        pbVar6 = (byte *)*puVar2;
                        iVar5 = puVar2[1];
                      }
                      bVar1 = *pbVar6;
                      pbVar7 = pbVar6 + 1;
                      iVar5 = iVar5 + -1;
                      if (iVar5 == 0) {
                        uVar3 = (*(code *)puVar2[3])(param_1);
                        if ((char)uVar3 == '\0') goto LAB_004ad17b;
                        pbVar7 = (byte *)*puVar2;
                        iVar5 = puVar2[1];
                      }
                      iVar5 = iVar5 + -1;
                      pbVar6 = pbVar7 + 1;
                      if (CONCAT11(bVar1,*pbVar7) == 1) {
                        if (iVar5 == 0) {
                          uVar3 = (*(code *)puVar2[3])(param_1);
                          if ((char)uVar3 == '\0') goto LAB_004ad17b;
                          pbVar6 = (byte *)*puVar2;
                          iVar5 = puVar2[1];
                        }
                        bVar1 = *pbVar6;
                        pbVar7 = pbVar6 + 1;
                        iVar5 = iVar5 + -1;
                        if (iVar5 == 0) {
                          uVar3 = (*(code *)puVar2[3])(param_1);
                          if ((char)uVar3 == '\0') goto LAB_004ad17b;
                          pbVar7 = (byte *)*puVar2;
                          iVar5 = puVar2[1];
                        }
                        iVar5 = iVar5 + -1;
                        pbVar6 = pbVar7 + 1;
                        if (CONCAT11(bVar1,*pbVar7) == 0) {
                          if (iVar5 == 0) {
                            uVar3 = (*(code *)puVar2[3])(param_1);
                            if ((char)uVar3 == '\0') goto LAB_004ad17b;
                            pbVar6 = (byte *)*puVar2;
                            iVar5 = puVar2[1];
                          }
                          bVar1 = *pbVar6;
                          iVar5 = iVar5 + -1;
                          pbVar6 = pbVar6 + 1;
                          if (bVar1 == 0) {
                            if (iVar5 == 0) {
                              uVar3 = (*(code *)puVar2[3])(param_1);
                              if ((char)uVar3 == '\0') goto LAB_004ad17b;
                              pbVar6 = (byte *)*puVar2;
                              iVar5 = puVar2[1];
                            }
                            bVar1 = *pbVar6;
                            pbVar7 = pbVar6 + 1;
                            iVar5 = iVar5 + -1;
                            if (iVar5 == 0) {
                              uVar3 = (*(code *)puVar2[3])(param_1);
                              if ((char)uVar3 == '\0') goto LAB_004ad17b;
                              pbVar7 = (byte *)*puVar2;
                              iVar5 = puVar2[1];
                            }
                            iVar5 = iVar5 + -1;
                            pbVar6 = pbVar7 + 1;
                            if (CONCAT11(bVar1,*pbVar7) == 1) {
                              if (iVar5 == 0) {
                                uVar3 = (*(code *)puVar2[3])(param_1);
                                if ((char)uVar3 == '\0') goto LAB_004ad17b;
                                pbVar6 = (byte *)*puVar2;
                                iVar5 = puVar2[1];
                              }
                              bVar1 = *pbVar6;
                              pbVar7 = pbVar6 + 1;
                              iVar5 = iVar5 + -1;
                              if (iVar5 == 0) {
                                uVar3 = (*(code *)puVar2[3])(param_1);
                                if ((char)uVar3 == '\0') {
LAB_004ad17b:
                                  return uVar3 & 0xffffff00;
                                }
                                pbVar7 = (byte *)*puVar2;
                                iVar5 = puVar2[1];
                              }
                              uVar4 = 0;
                              iVar5 = iVar5 + -1;
                              pbVar6 = pbVar7 + 1;
                              if (CONCAT11(bVar1,*pbVar7) == 0) goto LAB_004ad1a9;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x1c;
  uVar4 = (**(code **)*param_1)(param_1);
LAB_004ad1a9:
  param_1[0x43] = 1;
  *puVar2 = pbVar6;
  puVar2[1] = iVar5;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


