// Function: FUN_004c3351
// Entry: 004c3351
// Size: 240 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004c3351(wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  uint local_8;
  
  if ((param_1 != (wchar_t *)0x0) && (uVar6 = 0, *param_1 != L'\0')) {
    pwVar5 = L"ACP";
    pwVar4 = param_1;
    do {
      wVar1 = *pwVar4;
      bVar7 = (ushort)wVar1 < (ushort)*pwVar5;
      if (wVar1 != *pwVar5) {
LAB_004c339c:
        uVar2 = -(uint)bVar7 | 1;
        goto LAB_004c33a1;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar4[1];
      bVar7 = (ushort)wVar1 < (ushort)pwVar5[1];
      if (wVar1 != pwVar5[1]) goto LAB_004c339c;
      pwVar4 = pwVar4 + 2;
      pwVar5 = pwVar5 + 2;
    } while (wVar1 != L'\0');
    uVar2 = 0;
LAB_004c33a1:
    if (uVar2 != 0) {
      iVar3 = __wcsicmp(param_1,L"utf8");
      if (iVar3 == 0) {
        return 0xfde9;
      }
      iVar3 = __wcsicmp(param_1,L"utf-8");
      if (iVar3 == 0) {
        return 0xfde9;
      }
      pwVar5 = L"OCP";
      pwVar4 = param_1;
      do {
        wVar1 = *pwVar4;
        bVar7 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_004c33f2:
          uVar6 = -(uint)bVar7 | 1;
          break;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar4[1];
        bVar7 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_004c33f2;
        pwVar4 = pwVar4 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      if (uVar6 != 0) {
        uVar6 = FUN_00453643(param_1);
        return uVar6;
      }
      uVar8 = 0x2000000b;
      goto LAB_004c342d;
    }
  }
  uVar8 = 0x20001004;
LAB_004c342d:
  iVar3 = ___acrt_GetLocaleInfoEx_16((wchar_t *)(param_2 + 0x250),uVar8,(wchar_t *)&local_8,2);
  if (iVar3 == 0) {
    return 0;
  }
  if ((int)local_8 < 3) {
    return 0xfde9;
  }
  return local_8;
}


