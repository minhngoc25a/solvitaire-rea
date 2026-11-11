// Function: FUN_00489550
// Entry: 00489550
// Size: 6183 bytes
// Thunk: false
// External: false


undefined8 __fastcall FUN_00489550(undefined4 param_1,uint param_2,int *param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  ushort uVar14;
  ulonglong uVar15;
  uint local_38;
  uint *local_34;
  uint local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  uint local_28;
  uint *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  uint local_4;
  
  if ((((((param_3 == (int *)0x0) || (param_3[8] == 0)) || (param_3[9] == 0)) ||
       ((piVar2 = (int *)param_3[7], piVar2 == (int *)0x0 || ((int *)*piVar2 != param_3)))) ||
      (0x1f < piVar2[1] - 0x3f34U)) || ((param_3[3] == 0 || ((*param_3 == 0 && (param_3[1] != 0)))))
     ) {
switchD_00489629_caseD_1f:
    return CONCAT44(param_2,0xfffffffe);
  }
  local_1c = param_3[7];
  iVar7 = *(int *)(local_1c + 4);
  if (iVar7 == 0x3f3f) {
    *(undefined4 *)(local_1c + 4) = 0x3f40;
    iVar7 = 0x3f40;
  }
  local_c = param_3 + 3;
  local_24 = (uint *)param_3[3];
  uVar12 = param_3[1];
  local_38 = *(uint *)(local_1c + 0x3c);
  local_28 = param_3[4];
  uVar5 = *(uint *)(local_1c + 0x40);
  local_18 = 0;
  iVar7 = iVar7 + -0x3f34;
  param_2 = local_38;
  puVar11 = (uint *)*param_3;
  iVar10 = local_1c;
  local_34 = (uint *)*param_3;
  local_30 = uVar5;
  local_20 = local_28;
  local_8 = uVar12;
LAB_0048961c:
  uVar8 = uVar12;
  uVar4 = local_14;
  switch(iVar7) {
  case 0:
    if (*(int *)(iVar10 + 0xc) == 0) {
      *(undefined4 *)(iVar10 + 4) = 0x3f40;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
    }
    else {
      while (uVar5 < 0x10) {
        uVar8 = 0;
        if (uVar12 == 0) goto LAB_0048ac36;
        param_2 = param_2 + ((uint)(byte)*puVar11 << ((byte)uVar5 & 0x1f));
        puVar11 = (uint *)((int)puVar11 + 1);
        uVar12 = uVar12 - 1;
        uVar5 = uVar5 + 8;
        local_38 = param_2;
        local_34 = puVar11;
        local_30 = uVar5;
      }
      if (((*(byte *)(iVar10 + 0xc) & 2) == 0) || (param_2 != 0x8b1f)) {
        if (*(int *)(iVar10 + 0x24) != 0) {
          *(undefined4 *)(*(int *)(iVar10 + 0x24) + 0x30) = 0xffffffff;
        }
        if (((*(byte *)(iVar10 + 0xc) & 1) == 0) ||
           (uVar4 = param_2 & 0xff, uVar8 = param_2 >> 8, param_2 = local_38,
           (uVar4 * 0x100 + uVar8) % 0x1f != 0)) {
          param_3[6] = (int)"incorrect header check";
          *(undefined4 *)(iVar10 + 4) = 0x3f51;
          iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
        }
        else if (((byte)local_38 & 0xf) == 8) {
          uVar5 = uVar5 - 4;
          param_2 = local_38 >> 4;
          uVar8 = (param_2 & 0xf) + 8;
          uVar4 = *(uint *)(iVar10 + 0x28);
          if (*(uint *)(iVar10 + 0x28) == 0) {
            *(uint *)(iVar10 + 0x28) = uVar8;
            uVar4 = uVar8;
          }
          if ((uVar8 < 0x10) && (uVar8 <= uVar4)) {
            *(undefined4 *)(iVar10 + 0x14) = 0;
            *(int *)(iVar10 + 0x18) = 1 << (sbyte)uVar8;
            uVar4 = thunk_FUN_004a4c70(0,(byte *)0x0,0);
            uVar5 = 0;
            *(uint *)(iVar10 + 0x1c) = uVar4;
            local_30 = 0;
            param_3[0xc] = uVar4;
            *(uint *)(iVar10 + 4) = ~(local_38 >> 0xc) & 2 | 0x3f3d;
            param_2 = 0;
            local_38 = 0;
            iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
          }
          else {
            param_3[6] = (int)"invalid window size";
            *(undefined4 *)(iVar10 + 4) = 0x3f51;
            iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
            local_38 = param_2;
            local_30 = uVar5;
          }
        }
        else {
          param_3[6] = (int)"unknown compression method";
          *(undefined4 *)(iVar10 + 4) = 0x3f51;
          iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
        }
      }
      else {
        if (*(int *)(iVar10 + 0x28) == 0) {
          *(undefined4 *)(iVar10 + 0x28) = 0xf;
        }
        uVar5 = thunk_FUN_0048b320(0,(uint *)0x0,0);
        *(uint *)(iVar10 + 0x1c) = uVar5;
        local_2c = 0x8b1f;
        uVar5 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),(uint *)&local_2c,2);
        *(uint *)(iVar10 + 0x1c) = uVar5;
        uVar5 = 0;
        *(undefined4 *)(iVar10 + 4) = 0x3f35;
        local_38 = 0;
        iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
        local_30 = 0;
        param_2 = 0;
      }
    }
    goto LAB_0048961c;
  case 1:
    while (uVar5 < 0x10) {
      uVar8 = 0;
      if (uVar12 == 0) goto LAB_0048ac36;
      param_2 = param_2 + ((uint)(byte)*puVar11 << ((byte)uVar5 & 0x1f));
      puVar11 = (uint *)((int)puVar11 + 1);
      uVar12 = uVar12 - 1;
      uVar5 = uVar5 + 8;
      local_38 = param_2;
      local_34 = puVar11;
      local_30 = uVar5;
    }
    *(uint *)(iVar10 + 0x14) = param_2;
    if ((char)param_2 == '\b') {
      if ((param_2 & 0xe000) == 0) {
        if (*(uint **)(iVar10 + 0x24) != (uint *)0x0) {
          **(uint **)(iVar10 + 0x24) = param_2 >> 8 & 1;
        }
        if (((*(uint *)(iVar10 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar10 + 0xc) & 4) != 0)) {
          local_2c = (undefined2)param_2;
          uVar5 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),(uint *)&local_2c,2);
          *(uint *)(iVar10 + 0x1c) = uVar5;
        }
        param_2 = 0;
        *(undefined4 *)(iVar10 + 4) = 0x3f36;
        local_38 = 0;
        uVar5 = 0;
        do {
          uVar8 = 0;
          uVar4 = local_14;
          if (uVar12 == 0) goto LAB_0048ac36;
          uVar4 = *puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          param_2 = param_2 + ((uint)(byte)uVar4 << ((byte)uVar5 & 0x1f));
          uVar5 = uVar5 + 8;
          uVar12 = uVar12 - 1;
          local_38 = param_2;
          local_34 = puVar11;
joined_r0x004898cb:
        } while (uVar5 < 0x20);
        if (*(int *)(iVar10 + 0x24) != 0) {
          *(uint *)(*(int *)(iVar10 + 0x24) + 4) = param_2;
        }
        if (((*(uint *)(iVar10 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar10 + 0xc) & 4) != 0)) {
          local_2c = (undefined2)param_2;
          local_2a = (undefined1)(param_2 >> 0x10);
          local_29 = (undefined1)(param_2 >> 0x18);
          uVar5 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),(uint *)&local_2c,4);
          *(uint *)(iVar10 + 0x1c) = uVar5;
        }
        param_2 = 0;
        *(undefined4 *)(iVar10 + 4) = 0x3f37;
        local_38 = 0;
        uVar5 = 0;
        do {
          uVar8 = 0;
          uVar4 = local_14;
          if (uVar12 == 0) goto LAB_0048ac36;
          uVar4 = *puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          param_2 = param_2 + ((uint)(byte)uVar4 << ((byte)uVar5 & 0x1f));
          uVar5 = uVar5 + 8;
          uVar12 = uVar12 - 1;
          local_38 = param_2;
          local_34 = puVar11;
joined_r0x00489952:
        } while (uVar5 < 0x10);
        if (*(int *)(iVar10 + 0x24) != 0) {
          *(uint *)(*(int *)(iVar10 + 0x24) + 8) = param_2 & 0xff;
          *(uint *)(*(int *)(iVar10 + 0x24) + 0xc) = param_2 >> 8;
        }
        if (((*(uint *)(iVar10 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar10 + 0xc) & 4) != 0)) {
          local_2c = (undefined2)param_2;
          uVar5 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),(uint *)&local_2c,2);
          *(uint *)(iVar10 + 0x1c) = uVar5;
        }
        param_2 = 0;
        *(undefined4 *)(iVar10 + 4) = 0x3f38;
        uVar5 = 0;
        local_38 = 0;
        local_30 = 0;
        goto switchD_00489629_caseD_4;
      }
      param_3[6] = (int)"unknown header flags set";
      *(undefined4 *)(iVar10 + 4) = 0x3f51;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
    }
    else {
      param_3[6] = (int)"unknown compression method";
      *(undefined4 *)(iVar10 + 4) = 0x3f51;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
    }
    goto LAB_0048961c;
  case 2:
    goto switchD_00489629_caseD_2;
  case 3:
    goto joined_r0x00489952;
  case 4:
switchD_00489629_caseD_4:
    if ((*(uint *)(iVar10 + 0x14) & 0x400) == 0) {
      if (*(int *)(iVar10 + 0x24) != 0) {
        *(undefined4 *)(*(int *)(iVar10 + 0x24) + 0x10) = 0;
      }
    }
    else {
      for (; uVar5 < 0x10; uVar5 = uVar5 + 8) {
        uVar8 = 0;
        uVar4 = local_14;
        if (uVar12 == 0) goto LAB_0048ac36;
        uVar4 = *puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        param_2 = param_2 + ((uint)(byte)uVar4 << ((byte)uVar5 & 0x1f));
        uVar12 = uVar12 - 1;
        local_38 = param_2;
        local_34 = puVar11;
      }
      *(uint *)(iVar10 + 0x44) = param_2;
      if (*(int *)(iVar10 + 0x24) != 0) {
        *(uint *)(*(int *)(iVar10 + 0x24) + 0x14) = param_2;
      }
      if (((*(uint *)(iVar10 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar10 + 0xc) & 4) != 0)) {
        local_2c = (undefined2)param_2;
        uVar5 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),(uint *)&local_2c,2);
        *(uint *)(iVar10 + 0x1c) = uVar5;
      }
      uVar5 = 0;
      local_38 = 0;
      local_30 = 0;
    }
    *(undefined4 *)(iVar10 + 4) = 0x3f39;
switchD_00489629_caseD_5:
    if ((*(uint *)(iVar10 + 0x14) & 0x400) != 0) {
      uVar9 = *(uint *)(iVar10 + 0x44);
      local_14 = uVar12;
      if (uVar9 <= uVar12) {
        local_14 = uVar9;
      }
      if (local_14 != 0) {
        iVar7 = *(int *)(iVar10 + 0x24);
        if ((iVar7 != 0) && (local_4 = *(uint *)(iVar7 + 0x10), puVar11 = local_34, local_4 != 0)) {
          iVar10 = *(int *)(iVar7 + 0x14) - uVar9;
          uVar4 = local_14;
          if (*(uint *)(iVar7 + 0x18) < local_14 + iVar10) {
            uVar4 = *(uint *)(iVar7 + 0x18) - iVar10;
          }
          FUN_0044c490((uint *)(local_4 + iVar10),local_34,uVar4);
          iVar10 = local_1c;
        }
        if (((*(uint *)(iVar10 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar10 + 0xc) & 4) != 0)) {
          uVar4 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),puVar11,local_14);
          *(uint *)(iVar10 + 0x1c) = uVar4;
        }
        uVar12 = uVar12 - local_14;
        puVar11 = (uint *)((int)puVar11 + local_14);
        uVar9 = *(int *)(iVar10 + 0x44) - local_14;
        *(uint *)(iVar10 + 0x44) = uVar9;
        local_34 = puVar11;
      }
      uVar8 = uVar12;
      uVar4 = local_14;
      if (uVar9 != 0) break;
    }
    *(undefined4 *)(iVar10 + 0x44) = 0;
    *(undefined4 *)(iVar10 + 4) = 0x3f3a;
switchD_00489629_caseD_6:
    if ((*(uint *)(iVar10 + 0x14) & 0x800) != 0) {
      uVar8 = uVar12;
      uVar4 = local_14;
      if (uVar12 != 0) {
        local_4 = 0;
        do {
          bVar1 = *(byte *)(local_4 + (int)puVar11);
          local_4 = local_4 + 1;
          iVar7 = *(int *)(iVar10 + 0x24);
          if (((iVar7 != 0) && (*(int *)(iVar7 + 0x1c) != 0)) &&
             (*(uint *)(iVar10 + 0x44) < *(uint *)(iVar7 + 0x20))) {
            *(byte *)(*(int *)(iVar7 + 0x1c) + *(uint *)(iVar10 + 0x44)) = bVar1;
            *(int *)(iVar10 + 0x44) = *(int *)(iVar10 + 0x44) + 1;
            puVar11 = local_34;
          }
        } while ((bVar1 != 0) && (local_4 < uVar12));
        if (((*(uint *)(iVar10 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar10 + 0xc) & 4) != 0)) {
          uVar5 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),puVar11,local_4);
          *(uint *)(iVar10 + 0x1c) = uVar5;
        }
        puVar11 = (uint *)((int)puVar11 + local_4);
        uVar12 = uVar12 - local_4;
        uVar8 = uVar12;
        uVar5 = local_30;
        local_34 = puVar11;
        uVar4 = local_14;
        if (bVar1 == 0) goto LAB_00489bbe;
      }
      break;
    }
    if (*(int *)(iVar10 + 0x24) != 0) {
      *(undefined4 *)(*(int *)(iVar10 + 0x24) + 0x1c) = 0;
    }
LAB_00489bbe:
    *(undefined4 *)(iVar10 + 0x44) = 0;
    *(undefined4 *)(iVar10 + 4) = 0x3f3b;
switchD_00489629_caseD_7:
    if ((*(uint *)(iVar10 + 0x14) & 0x1000) == 0) {
      if (*(int *)(iVar10 + 0x24) != 0) {
        *(undefined4 *)(*(int *)(iVar10 + 0x24) + 0x24) = 0;
      }
LAB_00489c6c:
      *(undefined4 *)(iVar10 + 4) = 0x3f3c;
      param_2 = local_38;
switchD_00489629_caseD_8:
      if ((*(uint *)(iVar10 + 0x14) & 0x200) != 0) {
        while (uVar5 < 0x10) {
          uVar8 = 0;
          uVar4 = local_14;
          if (uVar12 == 0) goto LAB_0048ac36;
          param_2 = param_2 + ((uint)(byte)*puVar11 << ((byte)uVar5 & 0x1f));
          puVar11 = (uint *)((int)puVar11 + 1);
          uVar12 = uVar12 - 1;
          uVar5 = uVar5 + 8;
          local_38 = param_2;
          local_34 = puVar11;
          local_30 = uVar5;
        }
        if (((*(byte *)(iVar10 + 0xc) & 4) != 0) && (param_2 != *(ushort *)(iVar10 + 0x1c))) {
          param_3[6] = (int)"header crc mismatch";
          *(undefined4 *)(iVar10 + 4) = 0x3f51;
          iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
          goto LAB_0048961c;
        }
        uVar5 = 0;
        local_38 = 0;
        local_30 = 0;
      }
      if (*(int *)(iVar10 + 0x24) != 0) {
        *(uint *)(*(int *)(iVar10 + 0x24) + 0x2c) = *(int *)(iVar10 + 0x14) >> 9 & 1;
        *(undefined4 *)(*(int *)(iVar10 + 0x24) + 0x30) = 1;
      }
      uVar4 = thunk_FUN_0048b320(0,(uint *)0x0,0);
      *(uint *)(iVar10 + 0x1c) = uVar4;
      param_3[0xc] = uVar4;
      *(undefined4 *)(iVar10 + 4) = 0x3f3f;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
      param_2 = local_38;
      goto LAB_0048961c;
    }
    uVar8 = uVar12;
    uVar4 = local_14;
    if (uVar12 != 0) {
      local_4 = 0;
      do {
        bVar1 = *(byte *)(local_4 + (int)puVar11);
        local_4 = local_4 + 1;
        iVar7 = *(int *)(iVar10 + 0x24);
        if (((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0)) &&
           (*(uint *)(iVar10 + 0x44) < *(uint *)(iVar7 + 0x28))) {
          *(byte *)(*(int *)(iVar7 + 0x24) + *(uint *)(iVar10 + 0x44)) = bVar1;
          *(int *)(iVar10 + 0x44) = *(int *)(iVar10 + 0x44) + 1;
          puVar11 = local_34;
        }
      } while ((bVar1 != 0) && (local_4 < uVar12));
      if (((*(uint *)(iVar10 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar10 + 0xc) & 4) != 0)) {
        uVar5 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),puVar11,local_4);
        *(uint *)(iVar10 + 0x1c) = uVar5;
      }
      puVar11 = (uint *)((int)puVar11 + local_4);
      uVar12 = uVar12 - local_4;
      uVar8 = uVar12;
      uVar5 = local_30;
      local_34 = puVar11;
      uVar4 = local_14;
      if (bVar1 == 0) goto LAB_00489c6c;
    }
    break;
  case 5:
    goto switchD_00489629_caseD_5;
  case 6:
    goto switchD_00489629_caseD_6;
  case 7:
    goto switchD_00489629_caseD_7;
  case 8:
    goto switchD_00489629_caseD_8;
  case 9:
    for (; uVar5 < 0x20; uVar5 = uVar5 + 8) {
      uVar8 = 0;
      if (uVar12 == 0) goto LAB_0048ac36;
      uVar8 = *puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      param_2 = param_2 + ((uint)(byte)uVar8 << ((byte)uVar5 & 0x1f));
      uVar12 = uVar12 - 1;
      local_38 = param_2;
      local_34 = puVar11;
    }
    uVar5 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
    *(uint *)(iVar10 + 0x1c) = uVar5;
    param_3[0xc] = uVar5;
    param_2 = 0;
    local_38 = 0;
    uVar5 = 0;
    *(undefined4 *)(iVar10 + 4) = 0x3f3e;
    goto LAB_00489d84;
  case 10:
LAB_00489d84:
    if (*(int *)(iVar10 + 0x10) == 0) {
      param_3[3] = (int)local_24;
      *param_3 = (int)puVar11;
      param_3[1] = uVar12;
      param_3[4] = local_28;
      *(uint *)(iVar10 + 0x40) = uVar5;
      *(uint *)(iVar10 + 0x3c) = param_2;
      return CONCAT44(param_2,2);
    }
    uVar4 = thunk_FUN_004a4c70(0,(byte *)0x0,0);
    *(uint *)(iVar10 + 0x1c) = uVar4;
    param_3[0xc] = uVar4;
    *(undefined4 *)(iVar10 + 4) = 0x3f3f;
    param_2 = local_38;
switchD_00489629_caseD_b:
    uVar8 = uVar12;
    uVar4 = local_14;
    if ((param_4 != 5) && (param_4 != 6)) {
switchD_00489629_caseD_c:
      if (*(int *)(iVar10 + 8) != 0) {
        *(undefined4 *)(iVar10 + 4) = 0x3f4e;
        local_38 = param_2 >> (sbyte)(uVar5 & 7);
        uVar5 = uVar5 - (uVar5 & 7);
        iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
        param_2 = local_38;
        local_30 = uVar5;
        goto LAB_0048961c;
      }
      for (; uVar4 = local_14, uVar5 < 3; uVar5 = uVar5 + 8) {
        uVar8 = 0;
        if (uVar12 == 0) goto LAB_0048ac36;
        uVar4 = *puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        param_2 = param_2 + ((uint)(byte)uVar4 << ((byte)uVar5 & 0x1f));
        uVar12 = uVar12 - 1;
        local_38 = param_2;
        local_34 = puVar11;
      }
      *(uint *)(iVar10 + 8) = param_2 & 1;
      switch(param_2 >> 1 & 3) {
      case 0:
        *(undefined4 *)(iVar10 + 4) = 0x3f41;
        uVar5 = uVar5 - 3;
        param_2 = param_2 >> 3;
        iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
        local_38 = param_2;
        local_30 = uVar5;
        goto LAB_0048961c;
      case 1:
        *(undefined **)(iVar10 + 0x50) = &DAT_0050f150;
        *(undefined4 *)(iVar10 + 0x58) = 9;
        *(undefined **)(iVar10 + 0x54) = &DAT_0050f950;
        *(undefined4 *)(iVar10 + 0x5c) = 5;
        *(undefined4 *)(iVar10 + 4) = 0x3f47;
        if (param_4 == 6) {
          local_38 = param_2 >> 3;
          uVar5 = uVar5 - 3;
          uVar8 = uVar12;
          goto LAB_0048ac36;
        }
        break;
      case 2:
        *(undefined4 *)(iVar10 + 4) = 0x3f44;
        uVar5 = uVar5 - 3;
        param_2 = param_2 >> 3;
        iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
        local_38 = param_2;
        local_30 = uVar5;
        goto LAB_0048961c;
      case 3:
        param_3[6] = (int)"invalid block type";
        *(undefined4 *)(iVar10 + 4) = 0x3f51;
      }
      uVar5 = uVar5 - 3;
      param_2 = param_2 >> 3;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
      local_38 = param_2;
      local_30 = uVar5;
      goto LAB_0048961c;
    }
    break;
  case 0xb:
    goto switchD_00489629_caseD_b;
  case 0xc:
    goto switchD_00489629_caseD_c;
  case 0xd:
    local_38 = param_2 >> (sbyte)(uVar5 & 7);
    for (uVar5 = uVar5 - (uVar5 & 7); uVar5 < 0x20; uVar5 = uVar5 + 8) {
      uVar8 = 0;
      if (uVar12 == 0) goto LAB_0048ac36;
      local_38 = local_38 + ((uint)(byte)*puVar11 << ((byte)uVar5 & 0x1f));
      puVar11 = (uint *)((int)puVar11 + 1);
      uVar12 = uVar12 - 1;
      local_34 = puVar11;
    }
    if ((local_38 & 0xffff) != ~local_38 >> 0x10) {
      param_3[6] = (int)"invalid stored block lengths";
      *(undefined4 *)(iVar10 + 4) = 0x3f51;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
      param_2 = local_38;
      local_30 = uVar5;
      goto LAB_0048961c;
    }
    *(uint *)(iVar10 + 0x44) = local_38 & 0xffff;
    param_2 = 0;
    uVar5 = 0;
    local_38 = 0;
    local_30 = 0;
    *(undefined4 *)(iVar10 + 4) = 0x3f42;
    uVar8 = uVar12;
    if (param_4 != 6) goto switchD_00489629_caseD_e;
    break;
  case 0xe:
switchD_00489629_caseD_e:
    *(undefined4 *)(iVar10 + 4) = 0x3f43;
  case 0xf:
    uVar8 = *(uint *)(iVar10 + 0x44);
    if (uVar8 == 0) {
LAB_0048a71b:
      *(undefined4 *)(iVar10 + 4) = 0x3f3f;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
      goto LAB_0048961c;
    }
    local_4 = uVar12;
    if (uVar8 <= uVar12) {
      local_4 = uVar8;
    }
    if (local_28 < local_4) {
      local_4 = local_28;
    }
    uVar8 = uVar12;
    if (local_4 != 0) {
      FUN_0044c490(local_24,puVar11,local_4);
      local_28 = local_28 - local_4;
      puVar11 = (uint *)((int)puVar11 + local_4);
      local_24 = (uint *)((int)local_24 + local_4);
      uVar12 = uVar12 - local_4;
      *(int *)(iVar10 + 0x44) = *(int *)(iVar10 + 0x44) - local_4;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
      param_2 = local_38;
      local_34 = puVar11;
      goto LAB_0048961c;
    }
    break;
  case 0x10:
    for (; uVar5 < 0xe; uVar5 = uVar5 + 8) {
      uVar8 = 0;
      if (uVar12 == 0) goto LAB_0048ac36;
      uVar8 = *puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      param_2 = param_2 + ((uint)(byte)uVar8 << ((byte)uVar5 & 0x1f));
      uVar12 = uVar12 - 1;
      local_38 = param_2;
      local_34 = puVar11;
    }
    uVar5 = uVar5 - 0xe;
    uVar9 = param_2 >> 10;
    local_4 = (param_2 >> 5 & 0x1f) + 1;
    uVar8 = (param_2 & 0x1f) + 0x101;
    *(uint *)(iVar10 + 0x68) = local_4;
    param_2 = param_2 >> 0xe;
    *(uint *)(iVar10 + 100) = uVar8;
    *(uint *)(iVar10 + 0x60) = (uVar9 & 0xf) + 4;
    local_38 = param_2;
    local_30 = uVar5;
    if ((uVar8 < 0x11f) && (local_4 < 0x1f)) {
      *(undefined4 *)(iVar10 + 0x6c) = 0;
      *(undefined4 *)(iVar10 + 4) = 0x3f45;
      goto switchD_00489629_caseD_11;
    }
    param_3[6] = (int)"too many length or distance symbols";
    *(undefined4 *)(iVar10 + 4) = 0x3f51;
    iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
    goto LAB_0048961c;
  case 0x11:
switchD_00489629_caseD_11:
    uVar8 = *(uint *)(iVar10 + 0x6c);
    if (uVar8 < *(uint *)(iVar10 + 0x60)) {
      do {
        for (; uVar5 < 3; uVar5 = uVar5 + 8) {
          uVar8 = 0;
          if (uVar12 == 0) goto LAB_0048ac36;
          uVar8 = *puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          param_2 = param_2 + ((uint)(byte)uVar8 << ((byte)uVar5 & 0x1f));
          uVar12 = uVar12 - 1;
          local_38 = param_2;
          local_34 = puVar11;
        }
        uVar14 = (ushort)param_2;
        param_2 = param_2 >> 3;
        uVar5 = uVar5 - 3;
        *(ushort *)
         (iVar10 + 0x74 + (uint)*(ushort *)(&DAT_0050f9d0 + *(int *)(iVar10 + 0x6c) * 2) * 2) =
             uVar14 & 7;
        *(int *)(iVar10 + 0x6c) = *(int *)(iVar10 + 0x6c) + 1;
        uVar8 = *(uint *)(iVar10 + 0x6c);
        local_38 = param_2;
        local_30 = uVar5;
      } while (uVar8 < *(uint *)(iVar10 + 0x60));
    }
    while (uVar8 < 0x13) {
      *(undefined2 *)(iVar10 + 0x74 + (uint)*(ushort *)(&DAT_0050f9d0 + uVar8 * 2) * 2) = 0;
      uVar8 = *(int *)(iVar10 + 0x6c) + 1;
      *(uint *)(iVar10 + 0x6c) = uVar8;
    }
    *(undefined4 *)(iVar10 + 0x58) = 7;
    *(int *)(iVar10 + 0x50) = iVar10 + 0x534;
    *(int *)(iVar10 + 0x70) = iVar10 + 0x534;
    local_18 = FUN_004cffb0(0,iVar10 + 0x74,0x13,(int *)(iVar10 + 0x70),(uint *)(iVar10 + 0x58),
                            (ushort *)(iVar10 + 0x2f4));
    param_2 = local_38;
    if (local_18 == 0) {
      *(undefined4 *)(iVar10 + 0x6c) = 0;
      *(undefined4 *)(iVar10 + 4) = 0x3f46;
switchD_00489629_caseD_12:
      if (*(uint *)(iVar10 + 0x6c) < (uint)(*(int *)(iVar10 + 0x68) + *(int *)(iVar10 + 100))) {
        do {
          uVar4 = *(uint *)(*(int *)(iVar10 + 0x50) +
                           ((1 << ((byte)*(undefined4 *)(iVar10 + 0x58) & 0x1f)) - 1U & param_2) * 4
                           );
          uVar8 = uVar4 >> 8;
          local_10 = uVar4 >> 0x10;
          local_14 = uVar4;
          local_4 = uVar8;
          if (uVar5 < (uVar8 & 0xff)) {
            do {
              uVar8 = 0;
              uVar4 = local_14;
              if (uVar12 == 0) goto LAB_0048ac36;
              uVar4 = *local_34;
              local_34 = (uint *)((int)local_34 + 1);
              param_2 = param_2 + ((uint)(byte)uVar4 << ((byte)uVar5 & 0x1f));
              uVar5 = uVar5 + 8;
              uVar12 = uVar12 - 1;
              uVar4 = *(uint *)(*(int *)(iVar10 + 0x50) +
                               ((1 << ((byte)*(undefined4 *)(iVar10 + 0x58) & 0x1f)) - 1U & param_2)
                               * 4);
              local_4 = uVar4 >> 8;
              local_38 = param_2;
              local_14 = uVar4;
            } while (uVar5 < (local_4 & 0xff));
            uVar8 = local_4 & 0xff;
            local_10 = uVar4 >> 0x10;
          }
          uVar14 = (ushort)local_10;
          local_4 = local_10;
          local_14 = uVar4;
          iVar10 = local_1c;
          if (0xf < uVar14) {
            uVar8 = uVar8 & 0xff;
            local_14._1_1_ = (byte)(uVar4 >> 8);
            bVar1 = local_14._1_1_;
            if (uVar14 == 0x10) {
              local_4 = uVar8 + 2;
              for (; uVar5 < local_4; uVar5 = uVar5 + 8) {
                uVar8 = 0;
                if (uVar12 == 0) goto LAB_0048ac36;
                uVar8 = *local_34;
                local_34 = (uint *)((int)local_34 + 1);
                param_2 = param_2 + ((uint)(byte)uVar8 << ((byte)uVar5 & 0x1f));
                uVar12 = uVar12 - 1;
                local_38 = param_2;
              }
              param_2 = param_2 >> (local_14._1_1_ & 0x1f);
              uVar5 = uVar5 - local_14._1_1_;
              if (*(int *)(local_1c + 0x6c) != 0) {
                local_10 = (uint)*(ushort *)(local_1c + 0x72 + *(int *)(local_1c + 0x6c) * 2);
                uVar4 = param_2 & 3;
                param_2 = param_2 >> 2;
                local_14 = uVar4 + 3;
                uVar5 = uVar5 - 2;
                goto LAB_0048a381;
              }
            }
            else {
              if (uVar14 == 0x11) {
                local_4 = uVar8 + 3;
                for (; uVar5 < local_4; uVar5 = uVar5 + 8) {
                  uVar8 = 0;
                  if (uVar12 == 0) goto LAB_0048ac36;
                  uVar8 = *local_34;
                  local_34 = (uint *)((int)local_34 + 1);
                  param_2 = param_2 + ((uint)(byte)uVar8 << ((byte)uVar5 & 0x1f));
                  uVar12 = uVar12 - 1;
                  local_38 = param_2;
                }
                uVar4 = param_2 >> (local_14._1_1_ & 0x1f);
                local_14 = (uVar4 & 7) + 3;
                param_2 = uVar4 >> 3;
                iVar7 = -3;
              }
              else {
                local_4 = uVar8 + 7;
                for (; uVar5 < local_4; uVar5 = uVar5 + 8) {
                  uVar8 = 0;
                  if (uVar12 == 0) goto LAB_0048ac36;
                  uVar8 = *local_34;
                  local_34 = (uint *)((int)local_34 + 1);
                  param_2 = param_2 + ((uint)(byte)uVar8 << ((byte)uVar5 & 0x1f));
                  uVar12 = uVar12 - 1;
                  local_38 = param_2;
                }
                uVar4 = param_2 >> (local_14._1_1_ & 0x1f);
                local_14 = (uVar4 & 0x7f) + 0xb;
                param_2 = uVar4 >> 7;
                iVar7 = -7;
              }
              local_10 = 0;
              uVar5 = uVar5 + (iVar7 - (uint)bVar1);
LAB_0048a381:
              local_4 = *(uint *)(local_1c + 0x6c);
              uVar4 = local_4;
              uVar8 = local_14;
              if (local_4 + local_14 <= (uint)(*(int *)(local_1c + 100) + *(int *)(local_1c + 0x68))
                 ) {
                do {
                  *(short *)(local_1c + 0x74 + uVar4 * 2) = (short)local_10;
                  uVar4 = *(int *)(local_1c + 0x6c) + 1;
                  *(uint *)(local_1c + 0x6c) = uVar4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                goto LAB_0048a3cb;
              }
            }
            param_3[6] = (int)"invalid bit length repeat";
            *(undefined4 *)(local_1c + 4) = 0x3f51;
            puVar11 = local_34;
            local_38 = param_2;
            local_30 = uVar5;
            break;
          }
          param_2 = param_2 >> ((byte)uVar8 & 0x1f);
          uVar5 = uVar5 - (uVar4 >> 8 & 0xff);
          *(short *)(local_1c + 0x74 + *(int *)(local_1c + 0x6c) * 2) = (short)(uVar4 >> 0x10);
          *(int *)(local_1c + 0x6c) = *(int *)(local_1c + 0x6c) + 1;
          uVar4 = *(uint *)(local_1c + 0x6c);
LAB_0048a3cb:
          puVar11 = local_34;
          local_38 = param_2;
          local_30 = uVar5;
        } while (uVar4 < (uint)(*(int *)(local_1c + 100) + *(int *)(local_1c + 0x68)));
      }
      if (*(int *)(iVar10 + 4) == 0x3f51) goto LAB_0048abd6;
      if (*(short *)(iVar10 + 0x274) == 0) {
        param_3[6] = (int)"invalid code -- missing end-of-block";
        *(undefined4 *)(iVar10 + 4) = 0x3f51;
        iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
      }
      else {
        *(undefined4 *)(iVar10 + 0x58) = 9;
        *(int *)(iVar10 + 0x50) = iVar10 + 0x534;
        *(int *)(iVar10 + 0x70) = iVar10 + 0x534;
        local_18 = FUN_004cffb0(1,iVar10 + 0x74,*(uint *)(iVar10 + 100),(int *)(iVar10 + 0x70),
                                (uint *)(iVar10 + 0x58),(ushort *)(iVar10 + 0x2f4));
        param_2 = local_38;
        if (local_18 == 0) {
          *(undefined4 *)(iVar10 + 0x54) = *(undefined4 *)(iVar10 + 0x70);
          *(uint *)(iVar10 + 0x5c) = 6;
          local_18 = FUN_004cffb0(2,iVar10 + (*(int *)(iVar10 + 100) + 0x3a) * 2,
                                  *(uint *)(iVar10 + 0x68),(int *)(iVar10 + 0x70),
                                  (uint *)(iVar10 + 0x5c),(ushort *)(iVar10 + 0x2f4));
          if (local_18 == 0) {
            *(undefined4 *)(iVar10 + 4) = 0x3f47;
            uVar8 = uVar12;
            uVar4 = local_14;
            if (param_4 == 6) break;
switchD_00489629_caseD_13:
            *(undefined4 *)(iVar10 + 4) = 0x3f48;
switchD_00489629_caseD_14:
            if ((5 < uVar12) && (0x101 < local_28)) {
              *local_c = (int)local_24;
              param_3[4] = local_28;
              *param_3 = (int)puVar11;
              param_3[1] = uVar12;
              *(uint *)(iVar10 + 0x3c) = param_2;
              *(uint *)(iVar10 + 0x40) = uVar5;
              FUN_004d0510(param_3,local_20);
              param_2 = *(uint *)(iVar10 + 0x3c);
              local_24 = (uint *)*local_c;
              uVar5 = *(uint *)(iVar10 + 0x40);
              puVar11 = (uint *)*param_3;
              uVar12 = param_3[1];
              local_28 = param_3[4];
              local_38 = param_2;
              local_34 = puVar11;
              local_30 = uVar5;
              if (*(int *)(iVar10 + 4) == 0x3f3f) {
                *(undefined4 *)(iVar10 + 0x1bc8) = 0xffffffff;
                iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
              }
              else {
LAB_0048abd6:
                iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
              }
              goto LAB_0048961c;
            }
            local_14 = *(uint *)(iVar10 + 0x50);
            *(undefined4 *)(iVar10 + 0x1bc8) = 0;
            uVar4 = *(uint *)(*(int *)(iVar10 + 0x50) +
                             ((1 << ((byte)*(undefined4 *)(iVar10 + 0x58) & 0x1f)) - 1U & param_2) *
                             4);
            if (uVar5 < (uVar4 >> 8 & 0xff)) {
              do {
                uVar8 = 0;
                uVar4 = local_14;
                if (uVar12 == 0) goto LAB_0048ac36;
                uVar4 = *puVar11;
                puVar11 = (uint *)((int)puVar11 + 1);
                param_2 = param_2 + ((uint)(byte)uVar4 << ((byte)uVar5 & 0x1f));
                uVar5 = uVar5 + 8;
                uVar12 = uVar12 - 1;
                uVar4 = *(uint *)(local_14 +
                                 ((1 << ((byte)*(undefined4 *)(iVar10 + 0x58) & 0x1f)) - 1U &
                                 param_2) * 4);
                local_38 = param_2;
                local_34 = puVar11;
              } while (uVar5 < (uVar4 >> 8 & 0xff));
            }
            cVar3 = (char)uVar4;
            uVar8 = uVar4;
            if ((cVar3 != '\0') && ((uVar4 & 0xf0) == 0)) {
              bVar1 = (byte)(uVar4 >> 8);
              uVar8 = *(uint *)(local_14 +
                               ((((1 << (cVar3 + bVar1 & 0x1f)) - 1U & local_38) >> (bVar1 & 0x1f))
                               + (uVar4 >> 0x10)) * 4);
              uVar9 = uVar5;
              if (uVar5 < (uVar8 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
                do {
                  if (uVar12 == 0) goto LAB_0048ac2e;
                  uVar5 = uVar9 + 8;
                  uVar12 = uVar12 - 1;
                  uVar8 = *local_34;
                  local_34 = (uint *)((int)local_34 + 1);
                  local_38 = local_38 + ((uint)(byte)uVar8 << ((byte)uVar9 & 0x1f));
                  uVar8 = *(uint *)(local_14 +
                                   ((((1 << (cVar3 + bVar1 & 0x1f)) - 1U & local_38) >>
                                    (bVar1 & 0x1f)) + (uVar4 >> 0x10)) * 4);
                  uVar9 = uVar5;
                } while (uVar5 < (uVar8 >> 8 & 0xff) + (uint)bVar1);
              }
              local_38 = local_38 >> (bVar1 & 0x1f);
              uVar5 = uVar5 - bVar1;
              *(uint *)(local_1c + 0x1bc8) = (uint)bVar1;
              puVar11 = local_34;
              iVar10 = local_1c;
            }
            uVar4 = uVar8 >> 8 & 0xff;
            *(int *)(iVar10 + 0x1bc8) = *(int *)(iVar10 + 0x1bc8) + uVar4;
            param_2 = local_38 >> ((byte)(uVar8 >> 8) & 0x1f);
            uVar5 = uVar5 - uVar4;
            *(uint *)(iVar10 + 0x44) = uVar8 >> 0x10;
            local_38 = param_2;
            local_30 = uVar5;
            if ((char)uVar8 == '\0') {
              *(undefined4 *)(iVar10 + 4) = 0x3f4d;
              iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
            }
            else {
              if ((uVar8 & 0x20) != 0) {
                *(undefined4 *)(iVar10 + 0x1bc8) = 0xffffffff;
                goto LAB_0048a71b;
              }
              if ((uVar8 & 0x40) == 0) {
                *(undefined4 *)(iVar10 + 4) = 0x3f49;
                *(uint *)(iVar10 + 0x4c) = uVar8 & 0xf;
switchD_00489629_caseD_15:
                uVar9 = *(uint *)(iVar10 + 0x4c);
                if (uVar9 != 0) {
                  for (; uVar5 < uVar9; uVar5 = uVar5 + 8) {
                    uVar8 = 0;
                    uVar4 = local_14;
                    local_4 = uVar9;
                    if (uVar12 == 0) goto LAB_0048ac36;
                    uVar4 = *puVar11;
                    puVar11 = (uint *)((int)puVar11 + 1);
                    param_2 = param_2 + ((uint)(byte)uVar4 << ((byte)uVar5 & 0x1f));
                    uVar12 = uVar12 - 1;
                    local_38 = param_2;
                    local_34 = puVar11;
                  }
                  uVar5 = uVar5 - uVar9;
                  uVar4 = (1 << ((byte)uVar9 & 0x1f)) - 1U & param_2;
                  param_2 = param_2 >> ((byte)uVar9 & 0x1f);
                  *(int *)(iVar10 + 0x44) = *(int *)(iVar10 + 0x44) + uVar4;
                  *(int *)(iVar10 + 0x1bc8) = *(int *)(iVar10 + 0x1bc8) + uVar9;
                  local_38 = param_2;
                }
                *(undefined4 *)(iVar10 + 0x1bcc) = *(undefined4 *)(iVar10 + 0x44);
                *(undefined4 *)(iVar10 + 4) = 0x3f4a;
switchD_00489629_caseD_16:
                local_14 = *(uint *)(iVar10 + 0x54);
                uVar4 = *(uint *)(*(int *)(iVar10 + 0x54) +
                                 ((1 << ((byte)*(undefined4 *)(iVar10 + 0x5c) & 0x1f)) - 1U &
                                 param_2) * 4);
                if (uVar5 < (uVar4 >> 8 & 0xff)) {
                  do {
                    uVar8 = 0;
                    uVar4 = local_14;
                    if (uVar12 == 0) goto LAB_0048ac36;
                    uVar4 = *puVar11;
                    puVar11 = (uint *)((int)puVar11 + 1);
                    param_2 = param_2 + ((uint)(byte)uVar4 << ((byte)uVar5 & 0x1f));
                    uVar5 = uVar5 + 8;
                    uVar12 = uVar12 - 1;
                    uVar4 = *(uint *)(local_14 +
                                     ((1 << ((byte)*(undefined4 *)(iVar10 + 0x5c) & 0x1f)) - 1U &
                                     param_2) * 4);
                    local_38 = param_2;
                    local_34 = puVar11;
                  } while (uVar5 < (uVar4 >> 8 & 0xff));
                }
                uVar8 = uVar4;
                if ((uVar4 & 0xf0) == 0) {
                  bVar1 = (byte)(uVar4 >> 8);
                  uVar8 = *(uint *)(local_14 +
                                   ((((1 << ((char)uVar4 + bVar1 & 0x1f)) - 1U & local_38) >>
                                    (bVar1 & 0x1f)) + (uVar4 >> 0x10)) * 4);
                  uVar9 = uVar5;
                  if (uVar5 < (uVar8 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
                    do {
                      if (uVar12 == 0) goto LAB_0048ac2e;
                      uVar5 = uVar9 + 8;
                      uVar12 = uVar12 - 1;
                      uVar8 = *local_34;
                      local_34 = (uint *)((int)local_34 + 1);
                      local_38 = local_38 + ((uint)(byte)uVar8 << ((byte)uVar9 & 0x1f));
                      uVar8 = *(uint *)(local_14 +
                                       ((((1 << ((char)uVar4 + bVar1 & 0x1f)) - 1U & local_38) >>
                                        (bVar1 & 0x1f)) + (uVar4 >> 0x10)) * 4);
                      uVar9 = uVar5;
                    } while (uVar5 < (uVar8 >> 8 & 0xff) + (uint)bVar1);
                  }
                  uVar5 = uVar5 - bVar1;
                  param_2 = local_38 >> (bVar1 & 0x1f);
                  *(int *)(local_1c + 0x1bc8) = *(int *)(local_1c + 0x1bc8) + (uint)bVar1;
                  iVar10 = local_1c;
                }
                uVar4 = uVar8 >> 8 & 0xff;
                *(int *)(iVar10 + 0x1bc8) = *(int *)(iVar10 + 0x1bc8) + uVar4;
                uVar5 = uVar5 - uVar4;
                param_2 = param_2 >> ((byte)(uVar8 >> 8) & 0x1f);
                puVar11 = local_34;
                local_38 = param_2;
                local_30 = uVar5;
                if ((uVar8 & 0x40) != 0) {
                  param_3[6] = (int)"invalid distance code";
                  *(undefined4 *)(iVar10 + 4) = 0x3f51;
                  iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
                  goto LAB_0048961c;
                }
                *(undefined4 *)(iVar10 + 4) = 0x3f4b;
                *(uint *)(iVar10 + 0x48) = uVar8 >> 0x10;
                *(uint *)(iVar10 + 0x4c) = uVar8 & 0xf;
switchD_00489629_caseD_17:
                uVar9 = *(uint *)(iVar10 + 0x4c);
                if (uVar9 != 0) {
                  for (; uVar5 < uVar9; uVar5 = uVar5 + 8) {
                    uVar8 = 0;
                    uVar4 = local_14;
                    local_4 = uVar9;
                    if (uVar12 == 0) goto LAB_0048ac36;
                    uVar4 = *puVar11;
                    puVar11 = (uint *)((int)puVar11 + 1);
                    param_2 = param_2 + ((uint)(byte)uVar4 << ((byte)uVar5 & 0x1f));
                    uVar12 = uVar12 - 1;
                    local_38 = param_2;
                    local_34 = puVar11;
                  }
                  uVar5 = uVar5 - uVar9;
                  uVar4 = (1 << ((byte)uVar9 & 0x1f)) - 1U & param_2;
                  param_2 = param_2 >> ((byte)uVar9 & 0x1f);
                  *(int *)(iVar10 + 0x48) = *(int *)(iVar10 + 0x48) + uVar4;
                  *(int *)(iVar10 + 0x1bc8) = *(int *)(iVar10 + 0x1bc8) + uVar9;
                  local_38 = param_2;
                  local_30 = uVar5;
                }
                *(undefined4 *)(iVar10 + 4) = 0x3f4c;
switchD_00489629_caseD_18:
                uVar8 = uVar12;
                uVar4 = local_14;
                if (local_28 == 0) break;
                uVar4 = *(uint *)(iVar10 + 0x48);
                if (local_20 - local_28 < uVar4) {
                  local_14 = uVar4 - (local_20 - local_28);
                  if ((*(uint *)(iVar10 + 0x30) < local_14) && (*(int *)(iVar10 + 0x1bc4) != 0)) {
                    param_3[6] = (int)"invalid distance too far back";
                    *(undefined4 *)(iVar10 + 4) = 0x3f51;
                    iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
                    goto LAB_0048961c;
                  }
                  uVar4 = *(uint *)(iVar10 + 0x34);
                  if (uVar4 < local_14) {
                    local_14 = local_14 - uVar4;
                    uVar4 = *(uint *)(iVar10 + 0x2c);
                  }
                  local_10 = (uVar4 - local_14) + *(int *)(iVar10 + 0x38);
                  uVar4 = *(uint *)(iVar10 + 0x44);
                  uVar8 = uVar4;
                  local_4 = uVar4;
                  if (local_14 <= uVar4) {
                    uVar8 = local_14;
                  }
                }
                else {
                  local_10 = (int)local_24 - uVar4;
                  uVar4 = *(uint *)(iVar10 + 0x44);
                  uVar8 = uVar4;
                }
                if (local_28 < uVar8) {
                  uVar8 = local_28;
                }
                local_28 = local_28 - uVar8;
                *(uint *)(iVar10 + 0x44) = uVar4 - uVar8;
                iVar7 = local_10 - (int)local_24;
                do {
                  *(undefined1 *)local_24 = *(undefined1 *)(iVar7 + (int)local_24);
                  local_24 = (uint *)((int)local_24 + 1);
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                puVar11 = local_34;
                iVar10 = local_1c;
                if (*(int *)(local_1c + 0x44) != 0) goto LAB_0048abd6;
                *(undefined4 *)(local_1c + 4) = 0x3f48;
                iVar7 = *(int *)(local_1c + 4) + -0x3f34;
                goto LAB_0048961c;
              }
              param_3[6] = (int)"invalid literal/length code";
              *(undefined4 *)(iVar10 + 4) = 0x3f51;
              iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
            }
          }
          else {
            param_3[6] = (int)"invalid distances set";
            *(undefined4 *)(iVar10 + 4) = 0x3f51;
            iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
          }
        }
        else {
          param_3[6] = (int)"invalid literal/lengths set";
          *(undefined4 *)(iVar10 + 4) = 0x3f51;
          iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
        }
      }
    }
    else {
      param_3[6] = (int)"invalid code lengths set";
      *(undefined4 *)(iVar10 + 4) = 0x3f51;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
    }
    goto LAB_0048961c;
  case 0x12:
    goto switchD_00489629_caseD_12;
  case 0x13:
    goto switchD_00489629_caseD_13;
  case 0x14:
    goto switchD_00489629_caseD_14;
  case 0x15:
    goto switchD_00489629_caseD_15;
  case 0x16:
    goto switchD_00489629_caseD_16;
  case 0x17:
    goto switchD_00489629_caseD_17;
  case 0x18:
    goto switchD_00489629_caseD_18;
  case 0x19:
    if (local_28 != 0) {
      local_28 = local_28 - 1;
      *(undefined1 *)local_24 = *(undefined1 *)(iVar10 + 0x44);
      local_24 = (uint *)((int)local_24 + 1);
      *(undefined4 *)(iVar10 + 4) = 0x3f48;
      iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
      goto LAB_0048961c;
    }
    break;
  case 0x1a:
    if (*(int *)(iVar10 + 0xc) == 0) {
LAB_0048ab72:
      *(undefined4 *)(iVar10 + 4) = 0x3f4f;
      goto switchD_00489629_caseD_1b;
    }
    while (uVar5 < 0x20) {
      uVar8 = 0;
      if (uVar12 == 0) goto LAB_0048ac36;
      param_2 = param_2 + ((uint)(byte)*puVar11 << ((byte)uVar5 & 0x1f));
      puVar11 = (uint *)((int)puVar11 + 1);
      uVar12 = uVar12 - 1;
      uVar5 = uVar5 + 8;
      local_38 = param_2;
      local_34 = puVar11;
      local_30 = uVar5;
    }
    local_20 = local_20 - local_28;
    param_3[5] = param_3[5] + local_20;
    *(int *)(iVar10 + 0x20) = *(int *)(iVar10 + 0x20) + local_20;
    if (((*(byte *)(iVar10 + 0xc) & 4) != 0) && (local_20 != 0)) {
      if (*(int *)(iVar10 + 0x14) == 0) {
        uVar4 = thunk_FUN_004a4c70(*(uint *)(iVar10 + 0x1c),(byte *)((int)local_24 - local_20),
                                   local_20);
      }
      else {
        uVar4 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),(uint *)((int)local_24 - local_20),
                                   local_20);
      }
      *(uint *)(iVar10 + 0x1c) = uVar4;
      param_3[0xc] = uVar4;
      param_2 = local_38;
    }
    local_20 = local_28;
    if ((*(byte *)(iVar10 + 0xc) & 4) == 0) {
LAB_0048ab66:
      param_2 = 0;
      uVar5 = 0;
      local_38 = 0;
      local_30 = 0;
      goto LAB_0048ab72;
    }
    uVar4 = param_2;
    if (*(int *)(iVar10 + 0x14) == 0) {
      uVar4 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
              param_2 << 0x18;
    }
    if (uVar4 == *(uint *)(iVar10 + 0x1c)) goto LAB_0048ab66;
    param_3[6] = (int)"incorrect data check";
    *(undefined4 *)(iVar10 + 4) = 0x3f51;
    iVar7 = *(int *)(iVar10 + 4) + -0x3f34;
    goto LAB_0048961c;
  case 0x1b:
switchD_00489629_caseD_1b:
    if ((*(int *)(iVar10 + 0xc) == 0) || (*(int *)(iVar10 + 0x14) == 0)) {
LAB_0048ac13:
      *(undefined4 *)(iVar10 + 4) = 0x3f50;
      goto switchD_00489629_caseD_1c;
    }
    while (uVar5 < 0x20) {
      uVar8 = 0;
      uVar4 = local_14;
      if (uVar12 == 0) goto LAB_0048ac36;
      param_2 = param_2 + ((uint)(byte)*puVar11 << ((byte)uVar5 & 0x1f));
      puVar11 = (uint *)((int)puVar11 + 1);
      uVar12 = uVar12 - 1;
      uVar5 = uVar5 + 8;
      local_38 = param_2;
      local_34 = puVar11;
      local_30 = uVar5;
    }
    if (((*(byte *)(iVar10 + 0xc) & 4) == 0) || (param_2 == *(uint *)(iVar10 + 0x20))) {
      local_38 = 0;
      uVar5 = 0;
      goto LAB_0048ac13;
    }
    param_3[6] = (int)"incorrect length check";
    *(undefined4 *)(iVar10 + 4) = 0x3f51;
    goto LAB_0048abd6;
  case 0x1c:
switchD_00489629_caseD_1c:
    local_18 = 1;
    uVar8 = uVar12;
    uVar4 = local_14;
    break;
  case 0x1d:
    local_18 = -3;
    break;
  case 0x1e:
    goto switchD_00489629_caseD_1e;
  default:
    goto switchD_00489629_caseD_1f;
  }
LAB_0048ac36:
  local_14 = uVar4;
  uVar12 = local_20;
  param_3[3] = (int)local_24;
  param_3[4] = local_28;
  *param_3 = (int)local_34;
  param_3[1] = uVar8;
  *(uint *)(iVar10 + 0x3c) = local_38;
  *(uint *)(iVar10 + 0x40) = uVar5;
  if ((*(int *)(iVar10 + 0x2c) != 0) ||
     (((local_20 != param_3[4] && (*(int *)(iVar10 + 4) < 0x3f51)) &&
      ((*(int *)(iVar10 + 4) < 0x3f4e || (param_4 != 4)))))) {
    uVar15 = FUN_0048b220((int)param_3,param_3[3],local_20 - param_3[4]);
    param_2 = (uint)(uVar15 >> 0x20);
    if ((int)uVar15 != 0) {
      *(undefined4 *)(iVar10 + 4) = 0x3f52;
switchD_00489629_caseD_1e:
      return CONCAT44(param_2,0xfffffffc);
    }
  }
  local_8 = local_8 - param_3[1];
  uVar12 = uVar12 - param_3[4];
  param_3[2] = param_3[2] + local_8;
  param_3[5] = param_3[5] + uVar12;
  *(int *)(iVar10 + 0x20) = *(int *)(iVar10 + 0x20) + uVar12;
  if (((*(byte *)(iVar10 + 0xc) & 4) != 0) && (uVar12 != 0)) {
    if (*(int *)(iVar10 + 0x14) == 0) {
      uVar5 = thunk_FUN_004a4c70(*(uint *)(iVar10 + 0x1c),(byte *)(param_3[3] - uVar12),uVar12);
    }
    else {
      uVar5 = thunk_FUN_0048b320(*(uint *)(iVar10 + 0x1c),(uint *)(param_3[3] - uVar12),uVar12);
    }
    *(uint *)(iVar10 + 0x1c) = uVar5;
    param_3[0xc] = uVar5;
  }
  iVar7 = *(int *)(iVar10 + 4);
  if ((iVar7 == 0x3f47) || (iVar7 == 0x3f42)) {
    iVar13 = 0x100;
  }
  else {
    iVar13 = 0;
  }
  iVar6 = 0;
  if (iVar7 == 0x3f3f) {
    iVar6 = 0x80;
  }
  param_3[0xb] = (-(uint)(*(int *)(iVar10 + 8) != 0) & 0x40) + iVar6 + *(int *)(iVar10 + 0x40) +
                 iVar13;
  if (((local_8 != 0) || (uVar12 != 0)) && (param_4 != 4)) {
    return CONCAT44(iVar7,local_18);
  }
  if (local_18 == 0) {
    local_18 = -5;
  }
  return CONCAT44(iVar7,local_18);
LAB_0048ac2e:
  uVar8 = 0;
  uVar5 = uVar9;
  iVar10 = local_1c;
  uVar4 = local_14;
  goto LAB_0048ac36;
switchD_00489629_caseD_2:
  goto joined_r0x004898cb;
}


