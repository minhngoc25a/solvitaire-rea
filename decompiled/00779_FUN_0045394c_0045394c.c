// Function: FUN_0045394c
// Entry: 0045394c
// Size: 712 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00453b45) */

ulonglong __cdecl FUN_0045394c(int *param_1,byte *param_2,int *param_3,uint param_4,byte param_5)

{
  ulonglong uVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint local_24;
  uint local_20;
  uint local_14;
  byte local_c;
  
  uVar5 = FUN_004536c1((int *)&param_2);
  uVar10 = param_4;
  pbVar3 = param_2;
  if ((char)uVar5 == '\0') {
LAB_00453992:
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_00453992;
  }
  uVar1 = 0;
  local_c = *param_2;
  param_2 = param_2 + 1;
  if ((char)param_1[5] == '\0') {
    FUN_0044ef90(param_1);
  }
  uVar6 = FUN_0044e948((uint)local_c,8,(_locale_t)(param_1 + 3));
  while (uVar6 != 0) {
    local_c = *param_2;
    param_2 = param_2 + 1;
    uVar6 = FUN_0044e948((uint)local_c,8,(_locale_t)(param_1 + 3));
    uVar10 = param_4;
  }
  if (local_c == 0x2d) {
    bVar2 = param_5 | 2;
LAB_00453a26:
    local_c = *param_2;
    param_2 = param_2 + 1;
  }
  else {
    bVar2 = param_5;
    if (local_c == 0x2b) goto LAB_00453a26;
  }
  if ((uVar10 != 0) && (uVar10 != 0x10)) goto LAB_00453ab2;
  if ((byte)(local_c - 0x30) < 10) {
    iVar7 = (char)local_c + -0x30;
LAB_00453a6e:
    if (iVar7 == 0) {
      bVar9 = *param_2;
      if ((bVar9 == 0x78) || (bVar9 == 0x58)) {
        if (uVar10 == 0) {
          uVar10 = 0x10;
        }
        local_c = param_2[1];
        param_2 = param_2 + 2;
      }
      else {
        if (uVar10 == 0) {
          uVar10 = 8;
        }
        param_2 = param_2 + 1;
        __crt_strtox::c_string_character_source<char>::unget
                  ((c_string_character_source<char> *)&param_2,bVar9);
      }
      goto LAB_00453ab2;
    }
  }
  else {
    if ((byte)(local_c + 0x9f) < 0x1a) {
      iVar7 = (char)local_c + -0x57;
      goto LAB_00453a6e;
    }
    if ((byte)(local_c + 0xbf) < 0x1a) {
      iVar7 = (char)local_c + -0x37;
      goto LAB_00453a6e;
    }
  }
  if (uVar10 == 0) {
    uVar10 = 10;
  }
LAB_00453ab2:
  uVar11 = __aulldiv(0xffffffff,0xffffffff,uVar10,(int)uVar10 >> 0x1f);
  while( true ) {
    uVar6 = (uint)(uVar1 >> 0x20);
    local_14 = (uint)uVar1;
    if ((byte)(local_c - 0x30) < 10) {
      uVar8 = (int)(char)local_c - 0x30;
    }
    else if ((byte)(local_c + 0x9f) < 0x1a) {
      uVar8 = (int)(char)local_c - 0x57;
    }
    else if ((byte)(local_c + 0xbf) < 0x1a) {
      uVar8 = (int)(char)local_c - 0x37;
    }
    else {
      uVar8 = 0xffffffff;
    }
    if (uVar10 <= uVar8) break;
    uVar12 = __allmul(uVar10,(int)uVar10 >> 0x1f,local_14,uVar6);
    uVar1 = uVar12 + uVar8;
    local_20 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((uVar6 < local_20) ||
       ((uVar6 <= local_20 && (local_24 = (uint)uVar11, local_14 <= local_24)))) {
      bVar9 = 0;
    }
    else {
      bVar9 = 1;
    }
    bVar2 = bVar2 | (uVar1 < uVar12 | bVar9) << 2 | 8;
    local_c = *param_2;
    param_2 = param_2 + 1;
  }
  __crt_strtox::c_string_character_source<char>::unget
            ((c_string_character_source<char> *)&param_2,local_c);
  if ((bVar2 & 8) == 0) {
    if (param_3 == (int *)0x0) {
      return 0;
    }
    *param_3 = (int)pbVar3;
    return 0;
  }
  cVar4 = FUN_00452de9(bVar2,local_14,uVar6);
  if (cVar4 == '\0') {
    if ((bVar2 & 2) != 0) {
      uVar1 = CONCAT44(-(uVar6 + (local_14 != 0)),-local_14);
    }
  }
  else {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x22;
    if ((bVar2 & 1) != 0) {
      if ((bVar2 & 2) == 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = (int)param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = (int)param_2;
      }
      return 0x8000000000000000;
    }
    uVar1 = 0xffffffffffffffff;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)param_2;
    return uVar1;
  }
  return uVar1;
}


