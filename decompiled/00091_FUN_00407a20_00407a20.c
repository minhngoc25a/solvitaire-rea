// Function: FUN_00407a20
// Entry: 00407a20
// Size: 1465 bytes
// Thunk: false
// External: false


/* WARNING: Unable to track spacebase fully for stack */

void __cdecl FUN_00407a20(float10 param_1)

{
  byte bVar1;
  float10 fVar2;
  int *in_EAX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  lconv *plVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar11;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  uint extraout_ECX_10;
  undefined4 extraout_ECX_11;
  uint extraout_ECX_12;
  WCHAR WVar12;
  uint uVar13;
  undefined4 extraout_EDX;
  short sVar14;
  char *pcVar15;
  undefined1 *puVar16;
  short sVar17;
  int iVar18;
  uint uVar19;
  undefined4 uStackY_80;
  undefined1 auStack_6c [4];
  int local_68;
  int local_64;
  char *local_60;
  int local_5c;
  char *local_58;
  char *local_54;
  uint local_50;
  WCHAR local_4a;
  undefined4 local_48;
  undefined1 local_44 [8];
  ushort uStack_3c;
  char local_2e;
  char local_2d [29];
  
  _local_44 = param_1;
  fVar2 = _local_44;
  if ((ushort)((ushort)NAN(param_1) << 8 | (ushort)(param_1 != (float10)0) << 10 |
              (ushort)(param_1 == (float10)0) << 0xe) == 0x100) {
    uStackY_80 = 0x407f85;
    FUN_00406d90(in_EAX,0x40d940);
    return;
  }
  uStack_3c = (ushort)((unkuint10)param_1 >> 0x40);
  if ((uStack_3c & 0x8000) != 0) {
    in_EAX[1] = in_EAX[1] | 0x80;
  }
  _local_44 = fVar2;
  if ((ushort)((ushort)NAN(param_1) << 8 | (ushort)(param_1 != (float10)0) << 10 |
              (ushort)(param_1 == (float10)0) << 0xe) == 0x500) {
    uStackY_80 = 0x407fa1;
    FUN_00406d90(in_EAX,0x40d944);
    return;
  }
  local_44._0_4_ = SUB104(param_1,0);
  local_44._4_4_ = (undefined4)((unkuint10)param_1 >> 0x20);
  if ((uStack_3c & 0x7fff) == 0) {
    if (local_44._4_4_ == 0 && local_44._0_4_ == 0) {
      sVar17 = 0;
      local_44._0_4_ = 0;
      local_44._4_4_ = 0;
    }
    else if ((int)local_44._4_4_ < 0) {
      sVar17 = -0x3ffe;
    }
    else {
      sVar14 = -0x3fff;
      do {
        sVar17 = sVar14;
        local_44._4_4_ = local_44._4_4_ << 1 | (uint)local_44._0_4_ >> 0x1f;
        local_44._0_4_ = local_44._0_4_ * 2;
        sVar14 = sVar17 + -1;
      } while (-1 < (int)local_44._4_4_);
    }
  }
  else {
    sVar17 = (uStack_3c & 0x7fff) + 0xc001;
  }
  uVar19 = in_EAX[3];
  if (uVar19 < 0xf) {
    for (; -1 < (int)local_44._4_4_; local_44._4_4_ = local_44._4_4_ << 1 | uVar9) {
      uVar9 = (uint)local_44._0_4_ >> 0x1f;
      local_44._0_4_ = local_44._0_4_ * 2;
    }
    uVar3 = (uint)local_44._0_4_ >> 1 | local_44._4_4_ << 0x1f;
    uVar10 = (0xe - uVar19) * 4;
    bVar8 = (byte)uVar10;
    bVar1 = bVar8 & 0x1f;
    uVar4 = 4 << (bVar8 & 0x1f);
    uVar9 = uVar4;
    uVar13 = 0 << bVar1 | 4U >> 0x20 - bVar1;
    if ((uVar10 & 0x20) != 0) {
      uVar9 = 0;
      uVar13 = uVar4;
    }
    local_54 = (char *)(uVar3 + uVar9);
    local_50 = ((uint)local_44._4_4_ >> 1) + uVar13 + (uint)CARRY4(uVar3,uVar9);
    if ((int)local_50 < 0) {
      sVar17 = sVar17 + 1;
    }
    else {
      local_50 = local_50 * 2 | (uint)local_54 >> 0x1f;
      local_54 = (char *)((int)local_54 * 2);
    }
    uVar19 = (0xf - uVar19) * 4;
    bVar8 = (byte)uVar19;
    bVar1 = bVar8 & 0x1f;
    uVar9 = local_50 >> (bVar8 & 0x1f);
    local_44._0_4_ = (uint)local_54 >> bVar1 | local_50 << 0x20 - bVar1;
    local_44._4_4_ = uVar9;
    if ((uVar19 & 0x20) != 0) {
      local_44._4_4_ = 0;
      local_44._0_4_ = uVar9;
    }
LAB_00407a9a:
    local_58 = &local_2e;
    do {
      uVar19 = local_44._0_4_ & 0xf;
      if (local_44._4_4_ == 0 && local_44._0_4_ == uVar19) {
        if (((&local_2e < local_58) || ((*(byte *)((int)in_EAX + 5) & 8) != 0)) ||
           (local_54 = local_58, 0 < in_EAX[3])) {
          local_54 = local_58 + 1;
          *local_58 = '.';
        }
        if (local_44._0_4_ != 1 || local_44._4_4_ != 0) {
          do {
            sVar17 = sVar17 + -1;
            local_44._0_4_ = (uint)local_44._0_4_ >> 1 | local_44._4_4_ << 0x1f;
            local_44._4_4_ = (uint)local_44._4_4_ >> 1;
          } while (local_44._0_4_ != 1 || local_44._4_4_ != 0);
        }
        local_44._0_4_ = 0;
        local_44._4_4_ = 0;
        if (uVar19 == 0) goto LAB_00407b78;
LAB_00407ad0:
        local_58 = local_54 + 1;
        if (uVar19 < 10) goto LAB_00407b97;
        uVar9 = uVar19 + 0x37 | in_EAX[1] & 0x20U;
LAB_00407af7:
        *local_54 = (char)uVar9;
      }
      else {
        if (0 < in_EAX[3]) {
          in_EAX[3] = in_EAX[3] + -1;
        }
        local_44._0_4_ = (uint)local_44._0_4_ >> 4 | local_44._4_4_ << 0x1c;
        local_44._4_4_ = (uint)local_44._4_4_ >> 4;
        local_54 = local_58;
        if (uVar19 != 0) goto LAB_00407ad0;
LAB_00407b78:
        if ((&local_2e < local_54) || (uVar9 = in_EAX[3], -1 < (int)uVar9)) {
          local_58 = local_54 + 1;
LAB_00407b97:
          uVar9 = uVar19 + 0x30;
          goto LAB_00407af7;
        }
        local_58 = local_54;
      }
    } while (local_44._4_4_ != 0 || local_44._0_4_ != 0);
    if (local_58 == &local_2e) {
      uVar19 = in_EAX[3];
      goto LAB_00407fac;
    }
    local_54 = (char *)in_EAX[1];
  }
  else {
    if (local_44._4_4_ != 0 || local_44._0_4_ != 0) goto LAB_00407a9a;
    uVar9 = 0;
LAB_00407fac:
    local_60 = &local_2e;
    local_54 = (char *)in_EAX[1];
    if ((0 < (int)uVar19) || (((uint)local_54 & 0x800) != 0)) {
      local_2e = '.';
      local_60 = local_2d;
    }
    local_58 = local_60 + 1;
    *local_60 = '0';
  }
  local_60 = &local_2e;
  local_5c = in_EAX[2];
  if (local_5c < 1) {
    local_64 = 2;
  }
  else {
    local_68 = (int)sVar17;
    iVar18 = (int)local_58 - (int)local_60;
    if (0 < in_EAX[3]) {
      iVar18 = ((int)local_58 - (int)local_60) + in_EAX[3];
    }
    iVar18 = (iVar18 + 6) - (uint)(((uint)local_54 & 0x1c0) == 0);
    iVar5 = local_68 / 10;
    if (iVar5 == 0) {
      local_64 = 2;
    }
    else {
      sVar14 = 2;
      do {
        iVar18 = iVar18 + 1;
        sVar14 = sVar14 + 1;
        iVar5 = iVar5 / 10;
      } while (iVar5 != 0);
      local_64 = (int)sVar14;
    }
    uVar9 = 0;
    if (iVar18 < local_5c) {
      iVar18 = local_5c - iVar18;
      if (((uint)local_54 & 0x600) == 0) {
        in_EAX[2] = iVar18 + -1;
        if (0 < iVar18) {
          do {
            uStackY_80 = 0x407d20;
            FUN_00406ba0(uVar9,in_EAX);
            iVar18 = in_EAX[2];
            in_EAX[2] = iVar18 + -1;
            uVar9 = extraout_ECX;
          } while (0 < iVar18);
          local_54 = (char *)in_EAX[1];
          goto joined_r0x00407d6b;
        }
      }
      else {
        in_EAX[2] = iVar18;
      }
    }
    else {
      in_EAX[2] = -1;
    }
  }
  local_68 = (int)sVar17;
  _local_44 = param_1;
joined_r0x00407d6b:
  if (((uint)local_54 & 0x80) == 0) {
    if (((uint)local_54 & 0x100) == 0) {
      if (((uint)local_54 & 0x40) != 0) {
        uStackY_80 = 0x407f68;
        FUN_00406ba0(uVar9,in_EAX);
        uVar9 = extraout_ECX_12;
      }
    }
    else {
      uStackY_80 = 0x407f46;
      FUN_00406ba0(uVar9,in_EAX);
      uVar9 = extraout_ECX_10;
    }
  }
  else {
    uStackY_80 = 0x407d4c;
    FUN_00406ba0(uVar9,in_EAX);
    uVar9 = extraout_ECX_00;
  }
  uStackY_80 = 0x407d90;
  FUN_00406ba0(uVar9,in_EAX);
  uStackY_80 = 0x407da0;
  FUN_00406ba0(extraout_ECX_01,in_EAX);
  uVar11 = extraout_ECX_02;
  if ((0 < in_EAX[2]) && ((*(byte *)((int)in_EAX + 5) & 2) != 0)) {
    in_EAX[2] = in_EAX[2] + -1;
    do {
      uStackY_80 = 0x407dbf;
      FUN_00406ba0(uVar11,in_EAX);
      iVar18 = in_EAX[2];
      in_EAX[2] = iVar18 + -1;
      uVar11 = extraout_ECX_03;
    } while (0 < iVar18);
  }
  pcVar15 = local_58;
  if (local_60 < local_58) {
    do {
      pcVar15 = pcVar15 + -1;
      if (*pcVar15 == '.') {
        if (in_EAX[4] == -3) {
          local_48 = 0;
          uStackY_80 = 0x407ee0;
          plVar7 = localeconv();
          uStackY_80 = 0x407efd;
          iVar18 = FUN_0040a1d0(&local_4a,(byte *)plVar7->decimal_point,0x10,(byte *)&local_48);
          if (iVar18 < 1) {
            WVar12 = *(WCHAR *)(in_EAX + 5);
          }
          else {
            *(WCHAR *)(in_EAX + 5) = local_4a;
            WVar12 = local_4a;
          }
          in_EAX[4] = iVar18;
          uVar11 = extraout_ECX_09;
        }
        else {
          WVar12 = *(WCHAR *)(in_EAX + 5);
        }
        if (WVar12 == L'\0') {
          uStackY_80 = 0x407ecc;
          FUN_00406ba0(uVar11,in_EAX);
          uVar11 = extraout_ECX_08;
        }
        else {
          uStackY_80 = 0x407e23;
          local_54 = &stack0xffffff84;
          uVar19 = FUN_0040b3d0();
          iVar18 = -uVar19;
          puVar16 = auStack_6c + iVar18;
          local_48 = 0;
          *(undefined4 **)(&stack0xffffff8c + iVar18) = &local_48;
          *(undefined4 *)(&stack0xffffff88 + iVar18) = extraout_EDX;
          *(undefined1 **)(&stack0xffffff84 + iVar18) = puVar16;
          *(undefined4 *)((int)&uStackY_80 + iVar18) = 0x407e43;
          iVar5 = FUN_00409e80(*(LPSTR *)(&stack0xffffff84 + iVar18),
                               *(WCHAR *)(&stack0xffffff88 + iVar18));
          if (iVar5 < 1) {
            *(undefined4 *)((int)&uStackY_80 + iVar18) = 0x407f57;
            FUN_00406ba0(extraout_ECX_05,in_EAX);
            uVar11 = extraout_ECX_11;
          }
          else {
            puVar6 = puVar16 + iVar5;
            uVar11 = extraout_ECX_05;
            local_58 = pcVar15;
            do {
              puVar16 = puVar16 + 1;
              *(undefined4 *)((int)&uStackY_80 + iVar18) = 0x407e62;
              FUN_00406ba0(uVar11,in_EAX);
              uVar11 = extraout_ECX_06;
              pcVar15 = local_58;
            } while (puVar16 != puVar6);
          }
        }
      }
      else {
        uStackY_80 = 0x407de7;
        FUN_00406ba0(uVar11,in_EAX);
        uVar11 = extraout_ECX_04;
      }
    } while (pcVar15 != local_60);
  }
  while (iVar18 = in_EAX[3], in_EAX[3] = iVar18 + -1, 0 < iVar18) {
    uStackY_80 = 0x407e7d;
    FUN_00406ba0(uVar11,in_EAX);
    uVar11 = extraout_ECX_07;
  }
  uStackY_80 = 0x407e9a;
  FUN_00406ba0(uVar11,in_EAX);
  in_EAX[2] = in_EAX[2] + local_64;
  in_EAX[1] = in_EAX[1] | 0x1c0;
  uStackY_80 = 0x407eb2;
  FUN_00406e20(in_EAX,local_68 >> 0x1f);
  return;
}


