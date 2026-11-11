// Function: FUN_0045861d
// Entry: 0045861d
// Size: 527 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0045861d(int *param_1,char *param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint local_10;
  char local_8;
  
  uVar5 = FUN_004536c1((int *)&param_2);
  pcVar3 = param_2;
  if ((char)uVar5 == '\0') {
LAB_00458662:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_00458662;
  }
  local_10 = 0;
  local_8 = *param_2;
  pcVar9 = param_2 + 1;
  if (local_8 == '-') {
    bVar2 = param_5 | 2;
LAB_004586a7:
    local_8 = *pcVar9;
    pcVar9 = param_2 + 2;
  }
  else {
    bVar2 = param_5;
    if (local_8 == '+') goto LAB_004586a7;
  }
  uVar8 = param_4;
  param_2 = pcVar9;
  if ((param_4 != 0) && (param_4 != 0x10)) goto LAB_0045872e;
  if ((byte)(local_8 - 0x30U) < 10) {
    iVar6 = local_8 + -0x30;
LAB_004586e7:
    if (iVar6 == 0) {
      cVar1 = *pcVar9;
      param_2 = pcVar9 + 1;
      if ((cVar1 == 'x') || (cVar1 == 'X')) {
        if (param_4 == 0) {
          uVar8 = 0x10;
        }
        local_8 = *param_2;
        param_2 = pcVar9 + 2;
      }
      else {
        if (param_4 == 0) {
          uVar8 = 8;
        }
        __crt_strtox::c_string_character_source<char>::unget
                  ((c_string_character_source<char> *)&param_2,cVar1);
      }
      goto LAB_0045872e;
    }
  }
  else {
    if ((byte)(local_8 + 0x9fU) < 0x1a) {
      iVar6 = local_8 + -0x57;
      goto LAB_004586e7;
    }
    if ((byte)(local_8 + 0xbfU) < 0x1a) {
      iVar6 = local_8 + -0x37;
      goto LAB_004586e7;
    }
  }
  if (param_4 == 0) {
    uVar8 = 10;
  }
LAB_0045872e:
  while( true ) {
    if ((byte)(local_8 - 0x30U) < 10) {
      uVar7 = (int)local_8 - 0x30;
    }
    else if ((byte)(local_8 + 0x9fU) < 0x1a) {
      uVar7 = (int)local_8 - 0x57;
    }
    else if ((byte)(local_8 + 0xbfU) < 0x1a) {
      uVar7 = (int)local_8 - 0x37;
    }
    else {
      uVar7 = 0xffffffff;
    }
    if (uVar8 <= uVar7) break;
    local_8 = *param_2;
    uVar7 = uVar7 + local_10 * uVar8;
    bVar2 = bVar2 | (uVar7 < local_10 * uVar8 || (uint)(0xffffffff / (ulonglong)uVar8) < local_10)
                    << 2 | 8U;
    param_2 = param_2 + 1;
    local_10 = uVar7;
  }
  __crt_strtox::c_string_character_source<char>::unget
            ((c_string_character_source<char> *)&param_2,local_8);
  if ((bVar2 & 8) == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    *param_3 = pcVar3;
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


