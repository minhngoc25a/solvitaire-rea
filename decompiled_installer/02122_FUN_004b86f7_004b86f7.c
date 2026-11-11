// Function: FUN_004b86f7
// Entry: 004b86f7
// Size: 1072 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b86f7(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    if (*(int *)(param_1 + 0xe0) != 0) {
LAB_004b872a:
      uVar2 = FUN_004b82e3(param_1,param_2,param_3);
      goto LAB_004b8745;
    }
  }
  else {
    if (*(int *)(param_1 + 0xe0) != 0) goto LAB_004b872a;
    uVar2 = *(uint *)(param_1 + 0xac);
LAB_004b8745:
    if (*(int *)(param_1 + 0xe4) != 0) {
      if (*(int *)(param_1 + 0xd4) == 4) {
        uVar3 = CONCAT31(CONCAT21(CONCAT11(param_4[3],*param_4),param_4[1]),param_4[2]);
      }
      else {
        uVar3 = ((*param_4 | 0xffffff00) << 8 | (uint)param_4[1]) << 8 | (uint)param_4[2];
      }
      uVar2 = (**(code **)(param_1 + 0xb8))(param_2,param_3,uVar2,uVar3);
    }
    if (*(int *)(param_1 + 0xe4) != 0) {
      param_4[2] = (byte)uVar2;
      param_4[1] = (byte)(uVar2 >> 8);
      *param_4 = (byte)(uVar2 >> 0x10);
      if (*(int *)(param_1 + 0xd4) != 4) {
        return;
      }
      param_4[3] = (byte)(uVar2 >> 0x18);
      return;
    }
    uVar7 = (int)uVar2 >> 0x18 & 0xff;
    uVar6 = (int)uVar2 >> 8 & 0xff;
    uVar3 = (int)uVar2 >> 0x10 & 0xff;
    uVar2 = uVar2 & 0xff;
    *(uint *)(param_1 + 0xfc) = uVar7;
    if ((*(uint *)(param_1 + 0xd8) & 0x30) != 0) {
      uVar2 = uVar2 * uVar7;
      uVar6 = uVar6 * uVar7;
      *(uint *)(param_1 + 0x100) = 0xff - uVar7;
      uVar3 = uVar3 * uVar7;
    }
    *(uint *)(param_1 + 0xf8) = uVar3;
    *(uint *)(param_1 + 0xf4) = uVar6;
    *(uint *)(param_1 + 0xf0) = uVar2;
  }
  iVar5 = 0xff;
  uVar2 = *(uint *)(param_1 + 0xd8);
  if ((uVar2 & 2) != 0) {
    param_4[2] = param_4[2] ^ *(byte *)(param_1 + 0xf0);
    param_4[1] = param_4[1] ^ *(byte *)(param_1 + 0xf4);
    *param_4 = *param_4 ^ *(byte *)(param_1 + 0xf8);
    return;
  }
  if ((uVar2 & 0x100) == 0) {
    if ((uVar2 & 8) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) {
          param_4[2] = *(byte *)(param_1 + 0xf0);
          param_4[1] = *(byte *)(param_1 + 0xf4);
          bVar1 = *(byte *)(param_1 + 0xf8);
          goto LAB_004b8aec;
        }
        if (*(int *)(param_1 + 0xd4) != 4) goto LAB_004b8aab;
        uVar2 = (uint)param_4[3];
        if (*(int *)(param_1 + 0xfc) == 0) {
          bVar1 = param_4[2];
        }
        else if (uVar2 == 0) {
          bVar1 = (byte)(*(int *)(param_1 + 0xf0) / *(int *)(param_1 + 0xfc));
        }
        else {
          bVar1 = (byte)((int)((uint)param_4[2] * *(int *)(param_1 + 0x100) * uVar2 +
                              *(int *)(param_1 + 0xf0) * 0xff) /
                        (int)(*(int *)(param_1 + 0x100) * uVar2 + *(int *)(param_1 + 0xfc) * 0xff));
        }
        param_4[2] = bVar1;
        if (*(int *)(param_1 + 0xfc) == 0) {
          bVar1 = param_4[1];
        }
        else if (uVar2 == 0) {
          bVar1 = (byte)(*(int *)(param_1 + 0xf4) / *(int *)(param_1 + 0xfc));
        }
        else {
          bVar1 = (byte)((int)((uint)param_4[1] * *(int *)(param_1 + 0x100) * uVar2 +
                              *(int *)(param_1 + 0xf4) * 0xff) /
                        (int)(*(int *)(param_1 + 0x100) * uVar2 + *(int *)(param_1 + 0xfc) * 0xff));
        }
        param_4[1] = bVar1;
        iVar5 = *(int *)(param_1 + 0xfc);
        if (iVar5 == 0) {
          bVar1 = *param_4;
          goto LAB_004b8aec;
        }
        if (uVar2 != 0) {
          bVar1 = (byte)((int)((uint)*param_4 * *(int *)(param_1 + 0x100) * uVar2 +
                              *(int *)(param_1 + 0xf8) * 0xff) /
                        (int)(*(int *)(param_1 + 0x100) * uVar2 + *(int *)(param_1 + 0xfc) * 0xff));
          goto LAB_004b8aec;
        }
        iVar4 = *(int *)(param_1 + 0xf8);
      }
      else {
        if (*(int *)(param_1 + 0xd4) == 4) {
          uVar2 = (uint)param_4[3];
          if (*(int *)(param_1 + 0xfc) == 0) {
            bVar1 = param_4[2];
          }
          else if (uVar2 == 0) {
            bVar1 = (byte)(*(int *)(param_1 + 0xf0) / *(int *)(param_1 + 0xfc));
          }
          else {
            bVar1 = (byte)((int)((uint)param_4[2] * *(int *)(param_1 + 0x100) * uVar2 +
                                *(int *)(param_1 + 0xf0) * 0xff) /
                          (int)(*(int *)(param_1 + 0x100) * uVar2 + *(int *)(param_1 + 0xfc) * 0xff)
                          );
          }
          param_4[2] = bVar1;
          if (*(int *)(param_1 + 0xfc) == 0) {
            bVar1 = param_4[1];
          }
          else if (uVar2 == 0) {
            bVar1 = (byte)(*(int *)(param_1 + 0xf4) / *(int *)(param_1 + 0xfc));
          }
          else {
            bVar1 = (byte)((int)((uint)param_4[1] * *(int *)(param_1 + 0x100) * uVar2 +
                                *(int *)(param_1 + 0xf4) * 0xff) /
                          (int)(*(int *)(param_1 + 0x100) * uVar2 + *(int *)(param_1 + 0xfc) * 0xff)
                          );
          }
          param_4[1] = bVar1;
          if (*(int *)(param_1 + 0xfc) == 0) {
            bVar1 = *param_4;
          }
          else if (uVar2 == 0) {
            bVar1 = (byte)(*(int *)(param_1 + 0xf8) / *(int *)(param_1 + 0xfc));
          }
          else {
            bVar1 = (byte)((int)((uint)*param_4 * *(int *)(param_1 + 0x100) * uVar2 +
                                *(int *)(param_1 + 0xf8) * 0xff) /
                          (int)(*(int *)(param_1 + 0x100) * uVar2 + *(int *)(param_1 + 0xfc) * 0xff)
                          );
          }
          *param_4 = bVar1;
          bVar1 = (byte)((int)(*(int *)(param_1 + 0x100) * uVar2 + *(int *)(param_1 + 0xfc) * 0xff)
                        / 0xff);
          goto LAB_004b8878;
        }
LAB_004b8aab:
        param_4[2] = (byte)((int)((uint)param_4[2] * *(int *)(param_1 + 0x100) +
                                 *(int *)(param_1 + 0xf0)) / 0xff);
        param_4[1] = (byte)((int)((uint)param_4[1] * *(int *)(param_1 + 0x100) +
                                 *(int *)(param_1 + 0xf4)) / 0xff);
        iVar4 = (uint)*param_4 * *(int *)(param_1 + 0x100) + *(int *)(param_1 + 0xf8);
      }
      bVar1 = (byte)(iVar4 / iVar5);
LAB_004b8aec:
      *param_4 = bVar1;
      return;
    }
    if (*(int *)(param_1 + 0xd4) != 4) {
      return;
    }
  }
  else {
    param_4[2] = *(byte *)(param_1 + 0xf0);
    param_4[1] = *(byte *)(param_1 + 0xf4);
    *param_4 = *(byte *)(param_1 + 0xf8);
  }
  bVar1 = *(byte *)(param_1 + 0xfc);
LAB_004b8878:
  param_4[3] = bVar1;
  return;
}


