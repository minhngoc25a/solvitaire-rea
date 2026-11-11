// Function: FUN_00453705
// Entry: 00453705
// Size: 583 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00453705(int *param_1,byte *param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_10;
  byte local_8;
  
  uVar5 = FUN_004536c1((int *)&param_2);
  uVar8 = param_4;
  pbVar3 = param_2;
  if ((char)uVar5 == '\0') {
LAB_0045374a:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_0045374a;
  }
  local_10 = 0;
  local_8 = *param_2;
  param_2 = param_2 + 1;
  if ((char)param_1[5] == '\0') {
    FUN_0044ef90(param_1);
  }
  while (uVar6 = FUN_0044e948((uint)local_8,8,(_locale_t)(param_1 + 3)), uVar6 != 0) {
    local_8 = *param_2;
    param_2 = param_2 + 1;
  }
  if (local_8 == 0x2d) {
    bVar2 = param_5 | 2;
LAB_004537c0:
    local_8 = *param_2;
    param_2 = param_2 + 1;
  }
  else {
    bVar2 = param_5;
    if (local_8 == 0x2b) goto LAB_004537c0;
  }
  if ((uVar8 != 0) && (uVar8 != 0x10)) goto LAB_0045384d;
  if ((byte)(local_8 - 0x30) < 10) {
    iVar7 = (char)local_8 + -0x30;
LAB_00453808:
    if (iVar7 == 0) {
      bVar1 = *param_2;
      if ((bVar1 == 0x78) || (bVar1 == 0x58)) {
        if (uVar8 == 0) {
          uVar8 = 0x10;
        }
        local_8 = param_2[1];
        param_2 = param_2 + 2;
      }
      else {
        if (uVar8 == 0) {
          uVar8 = 8;
        }
        param_2 = param_2 + 1;
        __crt_strtox::c_string_character_source<char>::unget
                  ((c_string_character_source<char> *)&param_2,bVar1);
      }
      goto LAB_0045384d;
    }
  }
  else {
    if ((byte)(local_8 + 0x9f) < 0x1a) {
      iVar7 = (char)local_8 + -0x57;
      goto LAB_00453808;
    }
    if ((byte)(local_8 + 0xbf) < 0x1a) {
      iVar7 = (char)local_8 + -0x37;
      goto LAB_00453808;
    }
  }
  if (uVar8 == 0) {
    uVar8 = 10;
  }
LAB_0045384d:
  while( true ) {
    if ((byte)(local_8 - 0x30) < 10) {
      uVar6 = (int)(char)local_8 - 0x30;
    }
    else if ((byte)(local_8 + 0x9f) < 0x1a) {
      uVar6 = (int)(char)local_8 - 0x57;
    }
    else if ((byte)(local_8 + 0xbf) < 0x1a) {
      uVar6 = (int)(char)local_8 - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if (uVar8 <= uVar6) break;
    uVar6 = local_10 * uVar8 + uVar6;
    local_8 = *param_2;
    bVar2 = bVar2 | (uVar6 < local_10 * uVar8 || (uint)(0xffffffff / (ulonglong)uVar8) < local_10)
                    << 2 | 8U;
    param_2 = param_2 + 1;
    local_10 = uVar6;
  }
  __crt_strtox::c_string_character_source<char>::unget
            ((c_string_character_source<char> *)&param_2,local_8);
  if ((bVar2 & 8) == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    *param_3 = pbVar3;
    return 0;
  }
  bVar4 = FUN_00454250(bVar2,local_10);
  if (bVar4) {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x22;
    if ((bVar2 & 1) != 0) {
      if ((bVar2 & 2) == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = param_2;
        }
        return 0x7fffffff;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_2;
      }
      return 0x80000000;
    }
    local_10 = 0xffffffff;
  }
  else if ((bVar2 & 2) != 0) {
    local_10 = -local_10;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
    return local_10;
  }
  return local_10;
}


