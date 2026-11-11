// Function: FUN_004866c0
// Entry: 004866c0
// Size: 1400 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004866c0(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  byte local_26;
  int local_24;
  uint local_20;
  uint local_1c;
  byte *local_18;
  
  if ((char)param_1[4] == '\0') {
    local_26 = (byte)param_1[2];
    local_1c = param_1[3];
    uVar12 = param_1[0x318];
    local_18 = *(byte **)(*param_1 + 0x10);
    iVar2 = *(int *)(*param_1 + 0x14);
    uVar13 = param_1[0x110];
    uVar9 = param_1[0x3e90] + 1;
    uVar8 = param_1[0x313];
    uVar6 = param_1[9];
    local_20 = param_1[0xf];
    uVar4 = param_1[0xe];
    local_24 = iVar2;
    do {
      uVar5 = uVar13;
      uVar10 = local_20;
      if ((int)local_1c < 1) goto LAB_00486a94;
LAB_00486a20:
      do {
        do {
          local_20 = uVar10;
          uVar5 = uVar13;
          if (local_24 == 0) {
LAB_00486af1:
            uVar13 = *(uint *)(*param_1 + 0x18);
            *(uint *)(*param_1 + 0x18) = (uVar13 - local_24) + iVar2;
            if (*(uint *)(*param_1 + 0x18) < uVar13) {
              piVar1 = (int *)(*param_1 + 0x1c);
              *piVar1 = *piVar1 + 1;
            }
            *(byte *)(param_1 + 2) = local_26;
            param_1[0xe] = uVar4;
            param_1[3] = local_1c;
            param_1[0x313] = uVar8;
            param_1[0x318] = uVar12;
            param_1[0x110] = uVar5;
            param_1[0xf] = local_20;
            *(byte **)(*param_1 + 0x10) = local_18;
            uVar4 = *param_1;
            *(int *)(uVar4 + 0x14) = local_24;
            goto LAB_00486b4d;
          }
          if (local_1c != 1) {
            local_1c = local_1c - 1;
            *local_18 = local_26;
            uVar12 = uVar12 << 8 ^ *(uint *)(&DAT_00541bd0 + (uVar12 >> 0x18 ^ (uint)local_26) * 4);
            local_24 = local_24 + -1;
            local_18 = local_18 + 1;
            uVar10 = local_20;
            goto LAB_00486a20;
          }
          while( true ) {
            *local_18 = local_26;
            local_18 = local_18 + 1;
            uVar12 = uVar12 << 8 ^ *(uint *)(&DAT_00541bd0 + (uVar12 >> 0x18 ^ (uint)local_26) * 4);
            local_24 = local_24 + -1;
            uVar5 = uVar13;
LAB_00486a94:
            if (uVar5 != uVar9 && (int)uVar9 <= (int)uVar5) goto LAB_00486c2e;
            if (uVar5 == uVar9) {
              local_1c = 0;
              goto LAB_00486af1;
            }
            uVar7 = uVar6 * 100000;
            local_26 = (byte)local_20;
            if (uVar7 <= uVar4) goto LAB_00486c2e;
            uVar13 = uVar5 + 1;
            uVar4 = *(uint *)(uVar8 + uVar4 * 4);
            uVar10 = uVar4 & 0xff;
            uVar4 = uVar4 >> 8;
            if ((uVar10 == local_20) && (uVar10 = local_20, uVar13 != uVar9)) break;
            local_20 = uVar10;
            if (local_24 == 0) {
              local_1c = 1;
              uVar5 = uVar13;
              goto LAB_00486af1;
            }
          }
          local_1c = 2;
          if (uVar7 <= uVar4) goto LAB_00486c2e;
          uVar13 = uVar5 + 2;
          uVar3 = *(uint *)(uVar8 + uVar4 * 4);
          uVar4 = uVar3 >> 8;
        } while ((uVar13 == uVar9) || (uVar10 = uVar3 & 0xff, uVar10 != local_20));
        local_1c = 3;
        if (uVar7 <= uVar4) goto LAB_00486c2e;
        uVar13 = uVar5 + 3;
        uVar7 = *(uint *)(uVar8 + uVar4 * 4);
        uVar4 = uVar7 >> 8;
        uVar10 = local_20;
      } while ((uVar13 == uVar9) || (uVar10 = uVar7 & 0xff, uVar10 != local_20));
      if (uVar6 * 100000 <= uVar4) goto LAB_00486c2e;
      uVar13 = *(uint *)(uVar8 + uVar4 * 4);
      local_1c = (uVar13 & 0xff) + 4;
      uVar13 = uVar13 >> 8;
      uVar4 = uVar6 * 100000;
      if (uVar4 <= uVar13) goto LAB_00486c2e;
      uVar4 = *(uint *)(uVar8 + uVar13 * 4);
      local_20 = uVar4 & 0xff;
      uVar4 = uVar4 >> 8;
      uVar13 = uVar5 + 5;
    } while( true );
  }
LAB_004866e4:
  do {
    puVar11 = param_1 + 2;
    uVar4 = in_EAX;
    if (*(int *)(*param_1 + 0x14) == 0) {
LAB_00486b4d:
      return uVar4 & 0xffffff00;
    }
    if (param_1[3] == 0) {
      uVar4 = param_1[0x3e90];
      uVar13 = param_1[0x110];
      uVar12 = uVar4 + 1;
      if (uVar13 == uVar12) goto LAB_00486b4d;
      if ((int)uVar12 <= (int)uVar13) goto LAB_00486c2e;
      uVar8 = param_1[9] * 100000;
      *(byte *)puVar11 = (byte)param_1[0xf];
      uVar4 = param_1[0xe];
      param_1[3] = 1;
      if (uVar8 <= uVar4) goto LAB_00486c2e;
      uVar6 = *(uint *)(param_1[0x313] + uVar4 * 4);
      uVar9 = param_1[5];
      uVar4 = uVar6 >> 8;
      param_1[0xe] = uVar4;
      if (uVar9 == 0) {
        uVar9 = (&DAT_005413d0)[param_1[6]];
        uVar5 = param_1[6] + 1;
        param_1[6] = uVar5;
        if (uVar5 == 0x200) {
          param_1[6] = 0;
        }
      }
      in_EAX = uVar13 + 1;
      uVar9 = uVar9 - 1;
      param_1[5] = uVar9;
      param_1[0x110] = in_EAX;
      if (in_EAX != uVar12) {
        in_EAX = uVar6 & 0xff;
        uVar6 = uVar9 == 1 ^ in_EAX;
        if (uVar6 == param_1[0xf]) {
          param_1[3] = 2;
          if (uVar8 <= uVar4) goto LAB_00486c2e;
          uVar6 = *(uint *)(param_1[0x313] + uVar4 * 4);
          uVar4 = uVar6 >> 8;
          param_1[0xe] = uVar4;
          if (uVar9 == 0) {
            uVar9 = (&DAT_005413d0)[param_1[6]];
            uVar5 = param_1[6] + 1;
            param_1[6] = uVar5;
            if (uVar5 == 0x200) {
              param_1[6] = 0;
            }
          }
          in_EAX = uVar13 + 2;
          uVar9 = uVar9 - 1;
          param_1[5] = uVar9;
          param_1[0x110] = in_EAX;
          if (in_EAX == uVar12) goto LAB_004866e4;
          in_EAX = uVar6 & 0xff;
          uVar6 = uVar9 == 1 ^ in_EAX;
          if (uVar6 == param_1[0xf]) {
            param_1[3] = 3;
            if (uVar8 <= uVar4) goto LAB_00486c2e;
            uVar6 = *(uint *)(param_1[0x313] + uVar4 * 4);
            uVar4 = uVar6 >> 8;
            param_1[0xe] = uVar4;
            if (uVar9 == 0) {
              uVar9 = (&DAT_005413d0)[param_1[6]];
              uVar5 = param_1[6] + 1;
              param_1[6] = uVar5;
              if (uVar5 == 0x200) {
                param_1[6] = 0;
              }
            }
            uVar9 = uVar9 - 1;
            in_EAX = uVar13 + 3;
            param_1[5] = uVar9;
            param_1[0x110] = in_EAX;
            if (in_EAX == uVar12) goto LAB_004866e4;
            in_EAX = uVar6 & 0xff;
            uVar6 = uVar9 == 1 ^ in_EAX;
            if (uVar6 == param_1[0xf]) {
              if (uVar8 <= uVar4) {
LAB_00486c2e:
                return CONCAT31((int3)(uVar4 >> 8),1);
              }
              uVar4 = *(uint *)(param_1[0x313] + uVar4 * 4);
              uVar12 = uVar4 >> 8;
              param_1[0xe] = uVar12;
              if (uVar9 == 0) {
                uVar9 = (&DAT_005413d0)[param_1[6]];
                uVar6 = param_1[6] + 1;
                param_1[6] = uVar6;
                if (uVar6 == 0x200) {
                  param_1[6] = 0;
                }
              }
              uVar9 = uVar9 - 1;
              uVar4 = uVar4 & 0xff;
              param_1[5] = uVar9;
              param_1[0x110] = uVar13 + 4;
              param_1[3] = (uVar9 == 1 ^ uVar4) + 4;
              if (uVar8 <= uVar12) goto LAB_00486c2e;
              uVar4 = *(uint *)(param_1[0x313] + uVar12 * 4);
              uVar6 = uVar4 & 0xff;
              param_1[0xf] = uVar6;
              param_1[0xe] = uVar4 >> 8;
              if (uVar9 == 0) {
                uVar9 = (&DAT_005413d0)[param_1[6]];
                uVar4 = param_1[6] + 1;
                param_1[6] = uVar4;
                if (uVar4 == 0x200) {
                  param_1[6] = 0;
                }
              }
              param_1[5] = uVar9 - 1;
              in_EAX = uVar13 + 5;
              param_1[0x110] = in_EAX;
              uVar6 = uVar9 - 1 == 1 ^ uVar6;
            }
          }
        }
        param_1[0xf] = uVar6;
      }
      goto LAB_004866e4;
    }
    **(byte **)(*param_1 + 0x10) = (byte)*puVar11;
    uVar4 = *(uint *)(&DAT_00541bd0 + (param_1[0x318] >> 0x18 ^ (uint)(byte)*puVar11) * 4);
    param_1[3] = param_1[3] - 1;
    param_1[0x318] = param_1[0x318] << 8 ^ uVar4;
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
    *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + -1;
    *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + 1;
    in_EAX = *param_1;
    if (*(int *)(in_EAX + 0x18) == 0) {
      *(int *)(in_EAX + 0x1c) = *(int *)(in_EAX + 0x1c) + 1;
    }
  } while( true );
}


