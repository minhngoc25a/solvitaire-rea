// Function: FUN_00408950
// Entry: 00408950
// Size: 5223 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl
FUN_00408950(int *param_1,int param_2,byte *param_3,uint *param_4,uint param_5,uint param_6,
            int *param_7,undefined4 *param_8)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  bool bVar27;
  float10 fVar28;
  uint local_70;
  undefined8 local_6c;
  uint local_64;
  uint local_60;
  undefined4 *local_5c;
  int local_58;
  int *local_50;
  uint local_4c;
  uint local_44;
  uint local_40;
  uint local_38;
  uint local_34;
  uint local_20 [4];
  
  uVar13 = param_6;
  uVar26 = *param_4;
  *param_4 = uVar26 & 0xffffffcf;
  switch(uVar26 & 7) {
  case 0:
    goto switchD_0040897c_caseD_0;
  case 1:
  case 2:
    iVar21 = 0;
    iVar17 = *param_1;
    if (0x20 < iVar17) {
      iVar9 = 0x20;
      do {
        iVar9 = iVar9 * 2;
        iVar21 = iVar21 + 1;
      } while (iVar9 < iVar17);
    }
    puVar10 = FUN_0040a840(iVar21);
    puVar14 = puVar10 + 5;
    pbVar11 = param_3;
    puVar15 = puVar14;
    do {
      uVar3 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      puVar16 = puVar15 + 1;
      *puVar15 = uVar3;
      puVar15 = puVar16;
    } while (pbVar11 <= param_3 + (iVar17 + -1 >> 5) * 4);
    iVar21 = (int)puVar16 - (int)puVar14 >> 2;
LAB_004089fa:
    iVar9 = iVar21 + -1;
    if (puVar14[iVar9] == 0) break;
    uVar18 = 0x1f;
    if (puVar10[iVar21 + 4] != 0) {
      for (; (uint)puVar10[iVar21 + 4] >> uVar18 == 0; uVar18 = uVar18 - 1) {
      }
    }
    puVar10[4] = iVar21;
    iVar21 = iVar21 * 0x20 - (uVar18 ^ 0x1f);
    goto LAB_00408a16;
  case 3:
    *param_7 = -0x8000;
    piVar12 = (int *)FUN_0040a4b0("Infinity",param_8,8);
    return piVar12;
  case 4:
    *param_7 = -0x8000;
    piVar12 = (int *)FUN_0040a4b0("NaN",param_8,3);
    return piVar12;
  default:
    return (int *)0x0;
  }
  iVar21 = iVar9;
  if (iVar9 == 0) goto LAB_00408e60;
  goto LAB_004089fa;
LAB_00409a19:
  while( true ) {
    uVar13 = FUN_0040ae80((int)puVar14,(int)puVar16);
    local_6c._0_1_ = (char)uVar26;
    if ((int)uVar13 < 1) break;
    *(char *)local_50 = (char)local_6c;
    puVar15 = FUN_0040a980(puVar16,10,0);
    if (local_5c == puVar16) {
      local_5c = puVar15;
    }
    puVar10 = FUN_0040a980(puVar10,10,0);
    iVar17 = FUN_0040a520((int)puVar10,(int)puVar14);
    uVar26 = iVar17 + 0x30;
    puVar16 = puVar15;
    local_50 = (int *)((int)local_50 + 1);
  }
  if (uVar26 == 0x39) {
LAB_00409c94:
    piVar23 = (int *)((int)local_50 + 1);
    cVar8 = '9';
    *(char *)local_50 = '9';
    puVar15 = local_5c;
    local_5c = puVar16;
LAB_004096ae:
    while (piVar24 = (int *)((int)piVar23 + -1), cVar8 == '9') {
      if (piVar24 == piVar12) {
        local_64 = 0x20;
        *(undefined1 *)piVar12 = 0x31;
        local_70 = local_70 + 2;
        goto LAB_004091a2;
      }
      cVar8 = *(char *)((int)piVar23 + -2);
      piVar23 = piVar24;
    }
    *(char *)piVar24 = cVar8 + '\x01';
    local_64 = 0x20;
    local_70 = local_70 + 1;
  }
  else {
    local_6c._0_1_ = (char)local_6c + '\x01';
    local_64 = 0x20;
    uVar26 = local_64;
LAB_00409a41:
    local_64 = uVar26;
    piVar23 = (int *)((int)local_50 + 1);
    *(char *)local_50 = (char)local_6c;
    local_70 = local_70 + 1;
    puVar15 = local_5c;
    local_5c = puVar16;
  }
  goto LAB_004091a2;
code_r0x004098b5:
  cVar8 = (char)uVar13 + '\x01';
LAB_004098bc:
  *(char *)piVar24 = cVar8;
  local_64 = 0x20;
  local_70 = local_44 + 1;
  goto LAB_004091ce;
LAB_00408e60:
  puVar10[4] = 0;
  iVar21 = 0;
LAB_00408a16:
  local_20[0] = FUN_0040b390((int)puVar10);
  local_5c = (undefined4 *)param_2;
  if (local_20[0] != 0) {
    FUN_0040b270((int)puVar10,local_20[0]);
    iVar21 = iVar21 - local_20[0];
    local_5c = (undefined4 *)(param_2 + local_20[0]);
  }
  if (puVar10[4] == 0) {
    FUN_0040a910(puVar10);
switchD_0040897c_caseD_0:
    *param_7 = 1;
    piVar12 = (int *)FUN_0040a4b0("0",param_8,1);
    return piVar12;
  }
  fVar28 = FUN_0040b050((int)puVar10,(int *)local_20);
  uVar18 = (int)local_5c + -1 + iVar21;
  local_6c._4_4_ = (uint)((ulonglong)(double)fVar28 >> 0x20);
  uVar22 = local_6c._4_4_ & 0xfffff;
  uVar4 = (ulonglong)(double)fVar28 & 0xfffffffffffff;
  local_6c = (double)(uVar4 | 0x3ff0000000000000);
  iVar9 = (((int)uVar18 >> 0x1f ^ uVar18) - ((int)uVar18 >> 0x1f)) + -0x435;
  dVar5 = (double)(int)uVar18 * _DAT_0040db18 +
          (local_6c - (double)_DAT_0040db04) * _DAT_0040db08 + _DAT_0040db10;
  if (0 < iVar9) {
    dVar5 = (double)iVar9 * _DAT_0040db20 + dVar5;
  }
  local_70 = (uint)ROUND(dVar5);
  if ((dVar5 < 0.0) && ((double)(int)local_70 != dVar5)) {
    local_70 = local_70 - 1;
  }
  bVar27 = true;
  local_6c._0_4_ = (undefined4)uVar4;
  local_6c = (double)CONCAT44(uVar18 * 0x100000 + (uVar22 | 0x3ff00000),(undefined4)local_6c);
  dVar5 = local_6c;
  if (local_70 < 0x17) {
    if (*(double *)(&DAT_0040db80 + local_70 * 8) <= local_6c) {
      bVar27 = false;
    }
    else {
      local_70 = local_70 - 1;
      bVar27 = false;
    }
  }
  local_60 = (iVar21 - uVar18) - 1;
  local_50 = (int *)0x0;
  if ((int)local_60 < 0) {
    local_50 = (int *)-local_60;
    local_60 = 0;
  }
  if ((int)local_70 < 0) {
    local_50 = (int *)((int)local_50 - local_70);
    local_40 = 0;
    local_4c = -local_70;
  }
  else {
    local_60 = local_60 + local_70;
    local_40 = local_70;
    local_4c = 0;
  }
  if (param_5 < 10) {
    bVar20 = (int)param_5 < 6;
    if (!bVar20) {
      param_5 = param_5 - 4;
    }
    if (param_5 == 3) {
      bVar7 = false;
LAB_00408c6a:
      local_38 = local_70 + param_6;
      local_64 = local_38 + 1;
      if ((int)local_64 < 1) {
        local_20[0] = 1;
        bVar20 = local_64 < 0xf && bVar20;
      }
      else {
        bVar20 = local_64 < 0xf && bVar20;
        local_20[0] = local_64;
      }
    }
    else {
      if ((int)param_5 < 4) {
        bVar7 = false;
        if (param_5 != 2) goto LAB_00408e9f;
      }
      else {
        bVar7 = true;
        if (param_5 != 4) {
          if (param_5 != 5) goto LAB_00408e9f;
          goto LAB_00408c6a;
        }
      }
      if ((int)param_6 < 1) {
        param_6 = 1;
      }
      bVar20 = (int)uVar13 < 0xf && bVar20;
      local_20[0] = param_6;
      local_38 = param_6;
      local_64 = param_6;
    }
  }
  else {
    param_5 = 0;
LAB_00408e9f:
    bVar20 = false;
    bVar7 = true;
    local_38 = 0xffffffff;
    local_64 = 0xffffffff;
    param_6 = 0;
    local_20[0] = (int)ROUND((double)iVar17 * _DAT_0040db28) + 3;
  }
  piVar12 = FUN_0040a470(local_20[0]);
  iVar9 = param_1[3] + -1;
  local_58 = iVar9;
  if (iVar9 != 0) {
    local_58 = 2;
    if (-1 < iVar9) {
      local_58 = iVar9;
    }
    if ((uVar26 & 8) != 0) {
      local_58 = 3 - local_58;
    }
  }
  if ((bVar20) && (local_58 == 0 && local_70 == 0)) {
    local_20[0] = 0;
    if ((bVar27) && (local_6c < 1.0)) {
      if (local_64 == 0) {
        dVar1 = local_6c + local_6c + (double)_DAT_0040db3c;
        local_6c._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        local_6c._0_4_ = SUB84(dVar1,0);
        local_6c = (double)CONCAT44(local_6c._4_4_ + -0x3400000,(undefined4)local_6c);
        goto LAB_00408f04;
      }
      if (0 < (int)local_38) {
        dVar1 = local_6c * (double)_DAT_0040db34;
        local_44 = 0xffffffff;
        dVar2 = dVar1 * (double)_DAT_0040db38 + (double)_DAT_0040db3c;
        local_6c._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        local_6c._0_4_ = SUB84(dVar2,0);
        local_6c = (double)CONCAT44(local_6c._4_4_ + -0x3400000,(undefined4)local_6c);
        uVar26 = local_38;
        goto LAB_00408d38;
      }
      goto LAB_00408f40;
    }
    dVar1 = local_6c + local_6c + (double)_DAT_0040db3c;
    local_6c._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
    local_6c._0_4_ = SUB84(dVar1,0);
    local_6c = (double)CONCAT44(local_6c._4_4_ + -0x3400000,(undefined4)local_6c);
    if (local_64 != 0) {
      local_44 = 0;
      uVar26 = local_64;
      dVar1 = dVar5;
LAB_00408d38:
      if (!bVar7) {
        dVar2 = *(double *)(&DAT_0040db78 + uVar26 * 8);
        local_20[0] = 1;
        dVar6 = (double)_DAT_0040db34;
        piVar24 = piVar12;
        while( true ) {
          iVar9 = (int)ROUND(dVar1);
          if (iVar9 != 0) {
            dVar1 = dVar1 - (double)iVar9;
          }
          piVar23 = (int *)((int)piVar24 + 1);
          uVar13 = iVar9 + 0x30;
          *(char *)piVar24 = (char)uVar13;
          if (local_20[0] == uVar26) break;
          dVar1 = dVar1 * dVar6;
          local_20[0] = local_20[0] + 1;
          piVar24 = piVar23;
        }
        if (local_6c * dVar2 + (double)_DAT_0040db44 < dVar1) goto LAB_004098ae;
        if ((double)_DAT_0040db44 - local_6c * dVar2 <= dVar1) goto LAB_00408f40;
        if (dVar1 != 0.0) goto LAB_00409c85;
        local_64 = 0;
LAB_00409836:
        while ((char)uVar13 == '0') {
          uVar13 = (uint)*(byte *)((int)piVar23 + -2);
          piVar23 = (int *)((int)piVar23 + -1);
        }
        local_70 = local_44 + 1;
        goto LAB_004091ce;
      }
      local_20[0] = 0;
      piVar23 = (int *)((int)piVar12 + 1);
      local_6c = (double)_DAT_0040db44 / *(double *)(&DAT_0040db78 + uVar26 * 8) - local_6c;
      uVar13 = (int)ROUND(dVar1) + 0x30;
      dVar1 = dVar1 - (double)(int)ROUND(dVar1);
      *(char *)piVar12 = (char)uVar13;
      if (local_6c <= dVar1) {
        if ((double)_DAT_0040db30 - dVar1 < local_6c) goto LAB_004098ae;
        local_20[0] = 1;
        if (1 < (int)uVar26) {
          dVar2 = (double)_DAT_0040db34;
          piVar24 = piVar23;
          local_20[0] = 1;
          do {
            local_6c = local_6c * dVar2;
            piVar23 = (int *)((int)piVar24 + 1);
            dVar1 = dVar1 * dVar2;
            iVar9 = (int)ROUND(dVar1);
            uVar13 = iVar9 + 0x30;
            dVar1 = dVar1 - (double)iVar9;
            *(char *)piVar24 = (char)uVar13;
            if (dVar1 < local_6c) goto LAB_00408e36;
            if ((double)_DAT_0040db30 - dVar1 < local_6c) goto LAB_004098ae;
            local_20[0] = local_20[0] + 1;
            piVar24 = piVar23;
          } while ((int)local_20[0] < (int)uVar26);
        }
        goto LAB_00408f40;
      }
LAB_00408e36:
      if (dVar1 != 0.0) goto LAB_00408e4a;
      goto LAB_004093e6;
    }
LAB_00408f04:
    if (dVar5 - (double)_DAT_0040db40 <= local_6c) {
      if (-local_6c <= dVar5 - (double)_DAT_0040db40) goto LAB_00408f40;
      goto LAB_00409291;
    }
    local_70 = 2;
    puVar14 = (undefined4 *)0x0;
    local_5c = (undefined4 *)0x0;
LAB_0040918e:
    local_64 = 0x20;
    *(undefined1 *)piVar12 = 0x31;
    puVar15 = (undefined4 *)0x0;
    piVar23 = (int *)((int)piVar12 + 1);
  }
  else {
LAB_00408f40:
    if (((int)local_70 < 0xf) && (-1 < (int)local_5c)) {
      dVar1 = *(double *)(&DAT_0040db80 + local_70 * 8);
      if ((0 < (int)local_64) || (-1 < (int)param_6)) {
        local_20[0] = 1;
        piVar23 = (int *)((int)piVar12 + 1);
        local_34 = (uint)ROUND(dVar5 / dVar1);
        *(char *)piVar12 = (char)local_34 + '0';
        dVar5 = dVar5 - (double)(int)local_34 * dVar1;
        local_44 = local_70;
        if (dVar5 != 0.0) {
          uVar26 = 1;
          if (local_64 != 1) {
            dVar2 = (double)_DAT_0040db34;
            piVar24 = piVar23;
            do {
              uVar26 = uVar26 + 1;
              piVar23 = (int *)((int)piVar24 + 1);
              local_34 = (uint)ROUND((dVar5 * dVar2) / dVar1);
              *(char *)piVar24 = (char)local_34 + '0';
              dVar5 = dVar5 * dVar2 - (double)(int)local_34 * dVar1;
              local_20[0] = uVar26;
              if (dVar5 == 0.0) goto LAB_004093e6;
              piVar24 = piVar23;
            } while (local_64 != uVar26);
          }
          if (local_58 == 0) {
            if (dVar5 + dVar5 <= dVar1) {
              if (dVar1 == dVar5 + dVar5) {
                uVar13 = (uint)*(byte *)((int)piVar23 + -1);
                if ((local_34 & 1) != 0) goto LAB_004098ae;
LAB_00409c85:
                local_64 = 0x10;
              }
              else {
                uVar13 = (uint)*(byte *)((int)piVar23 + -1);
                local_64 = 0x10;
              }
              goto LAB_00409836;
            }
          }
          else if (local_58 != 1) {
LAB_00408e4a:
            local_70 = local_44 + 1;
            local_64 = 0x10;
            goto LAB_004091ce;
          }
          uVar13 = (uint)*(byte *)((int)piVar23 + -1);
LAB_004098ae:
          do {
            piVar24 = (int *)((int)piVar23 + -1);
            if ((char)uVar13 != '9') goto code_r0x004098b5;
            if (piVar24 == piVar12) {
              cVar8 = '1';
              local_44 = local_44 + 1;
              *(undefined1 *)piVar12 = 0x30;
              goto LAB_004098bc;
            }
            uVar13 = (uint)*(byte *)((int)piVar23 + -2);
            piVar23 = piVar24;
          } while( true );
        }
LAB_004093e6:
        local_70 = local_44 + 1;
        local_64 = 0;
        goto LAB_004091ce;
      }
      if ((local_64 == 0) && (dVar1 * (double)_DAT_0040db40 < dVar5)) {
        puVar14 = (undefined4 *)0x0;
        local_5c = (undefined4 *)0x0;
        local_70 = local_70 + 2;
        goto LAB_0040918e;
      }
LAB_00409291:
      puVar14 = (undefined4 *)0x0;
      local_5c = (undefined4 *)0x0;
    }
    else {
      piVar24 = local_50;
      uVar26 = local_4c;
      if (bVar7) {
        if ((int)param_5 < 2) {
          local_20[0] = (iVar17 - iVar21) + 1;
          if ((int)local_5c - (iVar17 - iVar21) < param_1[1]) {
            local_20[0] = ((int)local_5c - param_1[1]) + 1;
          }
        }
        else {
          uVar13 = local_64 - 1;
          if ((int)local_4c < (int)uVar13) {
            uVar26 = 0;
            local_40 = local_40 + (uVar13 - local_4c);
            local_4c = uVar13;
          }
          else {
            uVar26 = local_4c - uVar13;
          }
          if ((int)local_64 < 0) {
            local_20[0] = 0;
            piVar24 = (int *)((int)local_50 - local_64);
          }
          else {
            local_20[0] = local_64;
          }
        }
        local_50 = (int *)((int)local_50 + local_20[0]);
        local_60 = local_60 + local_20[0];
        local_5c = (undefined4 *)FUN_0040aa60(1);
      }
      else {
        local_5c = (undefined4 *)0x0;
      }
      if ((0 < (int)local_60) && (0 < (int)piVar24)) {
        local_20[0] = local_60;
        if ((int)piVar24 < (int)local_60) {
          local_20[0] = (uint)piVar24;
        }
        local_50 = (int *)((int)local_50 - local_20[0]);
        piVar24 = (int *)((int)piVar24 - local_20[0]);
        local_60 = local_60 - local_20[0];
      }
      if (0 < (int)local_4c) {
        if (bVar7) {
          puVar14 = puVar10;
          if (0 < (int)uVar26) {
            local_5c = FUN_0040abe0(local_5c,uVar26);
            puVar14 = FUN_0040aa90((int)local_5c,(int)puVar10);
            FUN_0040a910(puVar10);
          }
          local_4c = local_4c - uVar26;
          puVar10 = puVar14;
          if (local_4c == 0) goto LAB_00409021;
        }
        puVar10 = FUN_0040abe0(puVar10,local_4c);
      }
LAB_00409021:
      puVar14 = (undefined4 *)FUN_0040aa60(1);
      if (0 < (int)local_40) {
        puVar14 = FUN_0040abe0(puVar14,local_40);
      }
      bVar20 = false;
      if ((((int)param_5 < 2) && (iVar21 == 1)) && (param_1[1] + 1 < param_2)) {
        local_50 = (int *)((int)local_50 + 1);
        local_60 = local_60 + 1;
        bVar20 = true;
      }
      uVar26 = 0x1f;
      if (local_40 != 0) {
        uVar26 = 0x1f;
        if (puVar14[puVar14[4] + 4] != 0) {
          for (; (uint)puVar14[puVar14[4] + 4] >> uVar26 == 0; uVar26 = uVar26 - 1) {
          }
        }
        uVar26 = uVar26 ^ 0x1f;
      }
      uVar26 = (uVar26 - local_60) - 4 & 0x1f;
      local_20[0] = uVar26;
      if (0 < (int)((int)local_50 + uVar26)) {
        puVar10 = FUN_0040ad70(puVar10,(int)local_50 + uVar26);
      }
      if (0 < (int)(local_20[0] + local_60)) {
        puVar14 = FUN_0040ad70(puVar14,local_20[0] + local_60);
      }
      if ((bVar27) && (uVar13 = FUN_0040ae80((int)puVar10,(int)puVar14), (int)uVar13 < 0)) {
        local_70 = local_70 - 1;
        puVar10 = FUN_0040a980(puVar10,10,0);
        if (bVar7) {
          local_5c = FUN_0040a980(local_5c,10,0);
          local_64 = local_38;
          if ((0 < (int)local_38) || ((int)param_5 < 3)) goto LAB_0040940c;
        }
        else if (((int)param_5 < 3) || (0 < (int)local_38)) {
          local_64 = local_38;
LAB_00409623:
          local_20[0] = 1;
          piVar24 = piVar12;
          while( true ) {
            piVar25 = (int *)((int)piVar24 + 1);
            iVar17 = FUN_0040a520((int)puVar10,(int)puVar14);
            uVar26 = iVar17 + 0x30;
            *(char *)piVar24 = (char)uVar26;
            if ((int)local_64 <= (int)local_20[0]) break;
            puVar10 = FUN_0040a980(puVar10,10,0);
            local_20[0] = local_20[0] + 1;
            piVar24 = piVar25;
          }
          puVar15 = (undefined4 *)0x0;
          goto LAB_00409675;
        }
        local_64 = local_38;
      }
      else if (((int)param_5 < 3) || (0 < (int)local_64)) {
        if (!bVar7) goto LAB_00409623;
LAB_0040940c:
        if (0 < (int)((int)piVar24 + uVar26)) {
          local_5c = FUN_0040ad70(local_5c,(int)piVar24 + uVar26);
        }
        puVar16 = local_5c;
        if (bVar20) {
          puVar15 = FUN_0040a840(local_5c[1]);
          memcpy(puVar15 + 3,local_5c + 3,local_5c[4] * 4 + 8);
          puVar16 = FUN_0040ad70(puVar15,1);
        }
        local_20[0] = 1;
        puVar15 = local_5c;
        local_50 = piVar12;
        while( true ) {
          iVar17 = FUN_0040a520((int)puVar10,(int)puVar14);
          uVar26 = iVar17 + 0x30;
          uVar18 = FUN_0040ae80((int)puVar10,(int)puVar15);
          puVar19 = FUN_0040aed0((int)puVar14,(int)puVar16);
          uVar13 = 1;
          if (puVar19[3] == 0) {
            uVar13 = FUN_0040ae80((int)puVar10,(int)puVar19);
          }
          FUN_0040a910(puVar19);
          if (((uVar13 == 0 && param_5 == 0) && ((*param_3 & 1) == 0)) && (local_58 == 0)) {
            local_5c = puVar15;
            if (uVar26 == 0x39) goto LAB_00409c94;
            if ((int)uVar18 < 1) {
              local_64 = 0x10;
              if ((int)puVar10[4] < 2) {
                local_64 = ~-(uint)(puVar10[5] == 0) & 0x10;
              }
            }
            else {
              local_64 = 0x20;
              uVar26 = iVar17 + 0x31;
            }
            local_6c._0_1_ = (char)uVar26;
            piVar23 = (int *)((int)local_50 + 1);
            *(char *)local_50 = (char)local_6c;
            local_70 = local_70 + 1;
            local_5c = puVar16;
            goto LAB_004091a2;
          }
          local_6c._0_1_ = (char)uVar26;
          if (((int)uVar18 < 0) || ((uVar18 == 0 && param_5 == 0 && ((*param_3 & 1) == 0)))) {
            if ((local_58 == 0) || (((int)puVar10[4] < 2 && (puVar10[5] == 0)))) {
              if ((int)uVar13 < 1) {
                local_64 = 0;
              }
              else {
                puVar10 = FUN_0040ad70(puVar10,1);
                uVar13 = FUN_0040ae80((int)puVar10,(int)puVar14);
                if (((0 < (int)uVar13) || ((uVar13 == 0 && ((uVar26 & 1) != 0)))) &&
                   (bVar27 = uVar26 == 0x39, local_5c = puVar15, uVar26 = iVar17 + 0x31, bVar27))
                goto LAB_00409c94;
                local_64 = 0x20;
              }
              local_6c._0_1_ = (char)uVar26;
              if ((int)puVar10[4] < 2) {
                uVar26 = 0x10;
                local_5c = puVar15;
                if (puVar10[5] == 0) {
                  uVar26 = local_64;
                }
                goto LAB_00409a41;
              }
            }
            else {
              local_5c = puVar15;
              if (local_58 != 2) goto LAB_00409a19;
            }
            local_6c._0_1_ = (char)uVar26;
            local_64 = 0x10;
            uVar26 = local_64;
            local_5c = puVar15;
            goto LAB_00409a41;
          }
          if ((0 < (int)uVar13) && (local_58 != 2)) {
            local_5c = puVar15;
            if (uVar26 == 0x39) goto LAB_00409c94;
            piVar23 = (int *)((int)local_50 + 1);
            local_64 = 0x20;
            *(char *)local_50 = (char)local_6c + '\x01';
            local_70 = local_70 + 1;
            local_5c = puVar16;
            goto LAB_004091a2;
          }
          piVar25 = (int *)((int)local_50 + 1);
          *(char *)local_50 = (char)local_6c;
          local_5c = puVar16;
          if (local_20[0] == local_64) break;
          puVar10 = FUN_0040a980(puVar10,10,0);
          if (puVar15 == puVar16) {
            puVar16 = FUN_0040a980(puVar15,10,0);
            puVar15 = puVar16;
          }
          else {
            puVar15 = FUN_0040a980(puVar15,10,0);
            puVar16 = FUN_0040a980(puVar16,10,0);
          }
          local_20[0] = local_20[0] + 1;
          local_50 = piVar25;
        }
LAB_00409675:
        if (local_58 == 0) {
          puVar10 = FUN_0040ad70(puVar10,1);
          uVar13 = FUN_0040ae80((int)puVar10,(int)puVar14);
          if ((0 < (int)uVar13) || ((uVar13 == 0 && ((uVar26 & 1) != 0)))) {
LAB_00409694:
            cVar8 = *(char *)((int)piVar25 + -1);
            piVar23 = piVar25;
            goto LAB_004096ae;
          }
LAB_00409ad0:
          if ((1 < (int)puVar10[4]) || (local_64 = 0, puVar10[5] != 0)) {
            local_64 = 0x10;
          }
        }
        else {
          if (local_58 == 2) goto LAB_00409ad0;
          if ((1 < (int)puVar10[4]) || (puVar10[5] != 0)) goto LAB_00409694;
          local_64 = 0;
        }
        do {
          piVar23 = piVar25;
          piVar25 = (int *)((int)piVar23 + -1);
        } while (*(char *)((int)piVar23 + -1) == '0');
        local_70 = local_70 + 1;
        goto LAB_004091a2;
      }
      if (local_64 == 0) {
        puVar14 = FUN_0040a980(puVar14,5,0);
        uVar26 = FUN_0040ae80((int)puVar10,(int)puVar14);
        if (0 < (int)uVar26) {
          local_70 = local_70 + 2;
          goto LAB_0040918e;
        }
      }
    }
    local_64 = 0x10;
    local_70 = -param_6;
    puVar15 = (undefined4 *)0x0;
    piVar23 = piVar12;
  }
LAB_004091a2:
  FUN_0040a910(puVar14);
  if (local_5c != (undefined4 *)0x0) {
    if ((puVar15 != local_5c) && (puVar15 != (undefined4 *)0x0)) {
      FUN_0040a910(puVar15);
    }
    FUN_0040a910(local_5c);
  }
LAB_004091ce:
  FUN_0040a910(puVar10);
  *(char *)piVar23 = '\0';
  *param_7 = local_70;
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = piVar23;
  }
  *param_4 = *param_4 | local_64;
  return piVar12;
}


