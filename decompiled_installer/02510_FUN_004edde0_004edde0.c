// Function: FUN_004edde0
// Entry: 004edde0
// Size: 1493 bytes
// Thunk: false
// External: false


/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_004edde0(byte *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  int local_1c;
  undefined4 local_18;
  int local_10;
  uint local_c;
  
  pbVar1 = (byte *)*param_3;
  local_1c = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 0x40);
  uVar13 = *(uint *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x24);
  uVar8 = (1 << (param_1[2] & 0x1f)) - 1U & *(uint *)(param_1 + 0x28);
  if (uVar13 < 0x1000000) {
    if (pbVar1 <= param_2) {
      return 0;
    }
    uVar13 = uVar13 << 8;
    uVar3 = uVar3 << 8 | (uint)*param_2;
    param_2 = param_2 + 1;
  }
  uVar4 = (uVar13 >> 0xb) *
          (uint)*(ushort *)(*(int *)(param_1 + 0xc) + -0x200 + (uVar8 * 0x10 + iVar5) * 2);
  if (uVar3 < uVar4) {
    iVar5 = *(int *)(param_1 + 0xc) + 0x280;
    if ((*(int *)(param_1 + 0x2c) != 0) || (*(int *)(param_1 + 0x28) != 0)) {
      local_10 = *(int *)(param_1 + 0x18);
      if (local_10 == 0) {
        local_10 = *(int *)(param_1 + 0x14);
      }
      iVar5 = iVar5 + ((uint)(*(byte *)(*(int *)(param_1 + 0x10) + -1 + local_10) >>
                             (8 - *param_1 & 0x1f)) +
                      (((1 << (param_1[1] & 0x1f)) - 1U & *(uint *)(param_1 + 0x28)) <<
                      (*param_1 & 0x1f))) * 0x600;
    }
    if (*(uint *)(param_1 + 0x40) < 7) {
      uVar13 = 1;
      do {
        uVar13 = uVar13 * 2;
        uVar8 = uVar4;
        if (uVar4 < 0x1000000) {
          if (pbVar1 <= param_2) {
            return 0;
          }
          uVar8 = uVar4 << 8;
          uVar3 = uVar3 << 8 | (uint)*param_2;
          param_2 = param_2 + 1;
        }
        uVar4 = (uVar8 >> 0xb) * (uint)*(ushort *)(uVar13 + iVar5);
        if (uVar4 <= uVar3) {
          uVar3 = uVar3 - uVar4;
          uVar13 = uVar13 + 1;
          uVar4 = uVar8 - uVar4;
        }
      } while (uVar13 < 0x100);
    }
    else {
      if (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x30)) {
        iVar6 = *(int *)(param_1 + 0x14);
      }
      else {
        iVar6 = 0;
      }
      uVar13 = (uint)*(byte *)((*(uint *)(param_1 + 0x18) - *(int *)(param_1 + 0x30)) +
                               *(int *)(param_1 + 0x10) + iVar6);
      uVar8 = 1;
      uVar9 = 0x100;
      do {
        uVar13 = uVar13 * 2;
        uVar11 = uVar9 & uVar13;
        iVar6 = uVar9 + uVar8;
        if (uVar4 < 0x1000000) {
          if (pbVar1 <= param_2) {
            return 0;
          }
          uVar4 = uVar4 << 8;
          uVar3 = uVar3 << 8 | (uint)*param_2;
          param_2 = param_2 + 1;
        }
        uVar8 = uVar8 * 2;
        uVar7 = (uVar4 >> 0xb) * (uint)*(ushort *)(iVar5 + (iVar6 + uVar11) * 2);
        if (uVar3 < uVar7) {
          uVar11 = uVar11 ^ uVar9;
          uVar4 = uVar7;
        }
        else {
          uVar4 = uVar4 - uVar7;
          uVar3 = uVar3 - uVar7;
          uVar8 = uVar8 + 1;
        }
        uVar9 = uVar11;
      } while (uVar8 < 0x100);
    }
    local_18 = 1;
    goto LAB_004ee399;
  }
  uVar13 = uVar13 - uVar4;
  uVar3 = uVar3 - uVar4;
  if (uVar13 < 0x1000000) {
    if (pbVar1 <= param_2) {
      return 0;
    }
    uVar13 = uVar13 * 0x100;
    uVar3 = uVar3 * 0x100 | (uint)*param_2;
    param_2 = param_2 + 1;
  }
  uVar4 = (uVar13 >> 0xb) * (uint)*(ushort *)(local_1c + 0x20 + iVar5 * 2);
  if (uVar3 < uVar4) {
    local_c = 0;
    puVar12 = (ushort *)(local_1c + -0x600);
    local_18 = 2;
  }
  else {
    uVar13 = uVar13 - uVar4;
    local_18 = 3;
    uVar3 = uVar3 - uVar4;
    if (uVar13 < 0x1000000) {
      if (pbVar1 <= param_2) {
        return 0;
      }
      uVar3 = uVar3 * 0x100 | (uint)*param_2;
      uVar13 = uVar13 * 0x100;
      param_2 = param_2 + 1;
    }
    uVar9 = (uVar13 >> 0xb) * (uint)*(ushort *)(local_1c + 0x38 + iVar5 * 2);
    if (uVar3 < uVar9) {
      if (uVar9 < 0x1000000) {
        if (pbVar1 <= param_2) {
          return 0;
        }
        uVar9 = uVar9 * 0x100;
        uVar3 = uVar3 << 8 | (uint)*param_2;
        param_2 = param_2 + 1;
      }
      uVar4 = (uVar9 >> 0xb) * (uint)*(ushort *)(local_1c + -0xc00 + (uVar8 * 0x10 + iVar5) * 2);
      if (uVar3 < uVar4) {
        local_18 = 3;
        goto LAB_004ee399;
      }
LAB_004ee131:
      uVar3 = uVar3 - uVar4;
      uVar4 = uVar9 - uVar4;
    }
    else {
      uVar13 = uVar13 - uVar9;
      uVar3 = uVar3 - uVar9;
      if (uVar13 < 0x1000000) {
        if (pbVar1 <= param_2) {
          return 0;
        }
        uVar13 = uVar13 * 0x100;
        uVar3 = uVar3 * 0x100 | (uint)*param_2;
        param_2 = param_2 + 1;
      }
      uVar4 = (uVar13 >> 0xb) * (uint)*(ushort *)(local_1c + 0x50 + iVar5 * 2);
      if (uVar4 <= uVar3) {
        uVar9 = uVar13 - uVar4;
        uVar3 = uVar3 - uVar4;
        if (uVar9 < 0x1000000) {
          if (pbVar1 <= param_2) {
            return 0;
          }
          uVar9 = uVar9 * 0x100;
          uVar3 = uVar3 * 0x100 | (uint)*param_2;
          param_2 = param_2 + 1;
        }
        uVar4 = (uVar9 >> 0xb) * (uint)*(ushort *)(local_1c + 0x68 + iVar5 * 2);
        if (uVar4 <= uVar3) goto LAB_004ee131;
      }
    }
    puVar12 = (ushort *)(local_1c + -0xa00);
    local_c = 0xc;
  }
  if (uVar4 < 0x1000000) {
    if (pbVar1 <= param_2) {
      return 0;
    }
    uVar4 = uVar4 << 8;
    uVar3 = uVar3 << 8 | (uint)*param_2;
    param_2 = param_2 + 1;
  }
  uVar13 = (uVar4 >> 0xb) * (uint)*puVar12;
  if (uVar3 < uVar13) {
    param_1 = (byte *)0x8;
    puVar12 = puVar12 + uVar8 * 0x10;
    local_10 = 0;
    uVar4 = uVar13;
  }
  else {
    uVar4 = uVar4 - uVar13;
    uVar3 = uVar3 - uVar13;
    if (uVar4 < 0x1000000) {
      if (pbVar1 <= param_2) {
        return 0;
      }
      uVar4 = uVar4 * 0x100;
      uVar3 = uVar3 * 0x100 | (uint)*param_2;
      param_2 = param_2 + 1;
    }
    uVar13 = (uVar4 >> 0xb) * (uint)puVar12[8];
    if (uVar3 < uVar13) {
      local_10 = 8;
      param_1 = (byte *)0x8;
      puVar12 = puVar12 + uVar8 * 0x10 + 8;
      uVar4 = uVar13;
    }
    else {
      uVar4 = uVar4 - uVar13;
      local_10 = 0x10;
      uVar3 = uVar3 - uVar13;
      puVar12 = puVar12 + 0x100;
      param_1 = (byte *)0x100;
    }
  }
  pbVar10 = (byte *)0x1;
  do {
    pbVar10 = (byte *)((int)pbVar10 * 2);
    uVar13 = uVar4;
    if (uVar4 < 0x1000000) {
      if (pbVar1 <= param_2) {
        return 0;
      }
      uVar13 = uVar4 << 8;
      uVar3 = uVar3 << 8 | (uint)*param_2;
      param_2 = param_2 + 1;
    }
    uVar4 = (uVar13 >> 0xb) * (uint)*(ushort *)(pbVar10 + (int)puVar12);
    if (uVar4 <= uVar3) {
      uVar3 = uVar3 - uVar4;
      pbVar10 = pbVar10 + 1;
      uVar4 = uVar13 - uVar4;
    }
  } while (pbVar10 < param_1);
  pbVar10 = pbVar10 + (local_10 - (int)param_1);
  if (local_c < 4) {
    if ((byte *)0x2 < pbVar10) {
      pbVar10 = (byte *)0x3;
    }
    uVar13 = 1;
    do {
      uVar13 = uVar13 * 2;
      uVar8 = uVar4;
      if (uVar4 < 0x1000000) {
        if (pbVar1 <= param_2) {
          return 0;
        }
        uVar8 = uVar4 << 8;
        uVar3 = uVar3 << 8 | (uint)*param_2;
        param_2 = param_2 + 1;
      }
      uVar4 = (uVar8 >> 0xb) * (uint)*(ushort *)(uVar13 + (int)(pbVar10 + 1) * 0x80 + local_1c);
      if (uVar4 <= uVar3) {
        uVar3 = uVar3 - uVar4;
        uVar13 = uVar13 + 1;
        uVar4 = uVar8 - uVar4;
      }
    } while (uVar13 < 0x40);
    uVar13 = uVar13 - 0x40;
    if (3 < uVar13) {
      local_10 = (uVar13 >> 1) - 1;
      if (uVar13 < 0xe) {
        local_1c = local_1c + ((uVar13 & 1 | 2) << ((byte)local_10 & 0x1f)) * 2 + -0xd00;
      }
      else {
        iVar5 = (uVar13 >> 1) - 5;
        do {
          if (uVar4 < 0x1000000) {
            if (pbVar1 <= param_2) {
              return 0;
            }
            uVar4 = uVar4 << 8;
            uVar3 = uVar3 << 8 | (uint)*param_2;
            param_2 = param_2 + 1;
          }
          uVar4 = uVar4 >> 1;
          uVar3 = uVar3 - (0xffffffffU - ((int)(uVar3 - uVar4) >> 0x1f) & uVar4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        local_10 = 4;
      }
      pbVar10 = (byte *)0x1;
      param_1 = (byte *)0x1;
      do {
        uVar13 = uVar4;
        if (uVar4 < 0x1000000) {
          if (pbVar1 <= param_2) {
            return 0;
          }
          uVar13 = uVar4 << 8;
          uVar3 = uVar3 << 8 | (uint)*param_2;
          param_2 = param_2 + 1;
        }
        uVar4 = (uVar13 >> 0xb) * (uint)*(ushort *)(local_1c + (int)pbVar10 * 2);
        pbVar2 = (byte *)((int)param_1 * 2);
        if (uVar4 <= uVar3) {
          uVar3 = uVar3 - uVar4;
          uVar4 = uVar13 - uVar4;
          param_1 = pbVar2;
        }
        pbVar10 = pbVar10 + (int)param_1;
        local_10 = local_10 + -1;
        param_1 = pbVar2;
      } while (local_10 != 0);
    }
  }
LAB_004ee399:
  if (uVar4 < 0x1000000) {
    if (pbVar1 <= param_2) {
      return 0;
    }
    param_2 = param_2 + 1;
  }
  *param_3 = param_2;
  return local_18;
}


