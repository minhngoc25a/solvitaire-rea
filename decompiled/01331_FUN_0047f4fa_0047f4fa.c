// Function: FUN_0047f4fa
// Entry: 0047f4fa
// Size: 474 bytes
// Thunk: false
// External: false


void __cdecl FUN_0047f4fa(short *param_1,wchar_t *param_2)

{
  size_t *psVar1;
  wchar_t wVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 uVar5;
  int *piVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  wchar_t *local_40;
  size_t *local_3c;
  int local_38;
  size_t local_34 [2];
  int local_2c [3];
  int local_20 [3];
  int local_14 [3];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_40 = param_2;
  _memset(param_1,0,0x1ca);
  uVar8 = 0;
  local_3c = local_34;
LAB_0047f537:
  do {
    sVar3 = 0;
    uVar9 = uVar8;
    while( true ) {
      if (3 < uVar9) goto LAB_0047f6c5;
      if (sVar3 == 2) {
        pwVar7 = local_40;
        do {
          wVar2 = *pwVar7;
          pwVar7 = pwVar7 + 1;
        } while (wVar2 != L'\0');
        sVar4 = (int)pwVar7 - (int)(local_40 + 1) >> 1;
      }
      else {
        sVar4 = _wcscspn(local_40,L"-_.");
      }
      uVar8 = uVar9 + 1;
      psVar1 = local_3c + 3;
      local_3c[-1] = (size_t)local_40;
      *local_3c = sVar4;
      local_3c[1] = sVar3;
      wVar2 = local_40[sVar4];
      local_40 = local_40 + sVar4 + 1;
      if (wVar2 == L'\0') goto LAB_0047f5aa;
      local_3c = psVar1;
      if (wVar2 == L'-') goto LAB_0047f537;
      if (wVar2 != L'.') break;
      sVar3 = 2;
      uVar9 = uVar8;
    }
  } while (wVar2 == L'_');
LAB_0047f5aa:
  if (uVar9 == 0) {
    FUN_0047f31b(param_1,&local_38);
  }
  else {
    if (uVar9 == 1) {
      uVar5 = FUN_0047f31b(param_1,&local_38);
      if ((((char)uVar5 == '\0') ||
          (uVar5 = FUN_0047f38d((int)param_1,local_2c), (char)uVar5 != '\0')) ||
         (uVar5 = FUN_0047f3fd((int)param_1,local_2c), (char)uVar5 != '\0')) goto LAB_0047f6c5;
      piVar6 = local_2c;
    }
    else if (uVar9 == 2) {
      uVar5 = FUN_0047f31b(param_1,&local_38);
      if (((char)uVar5 == '\0') ||
         (((uVar5 = FUN_0047f38d((int)param_1,local_2c), (char)uVar5 != '\0' &&
           ((uVar5 = FUN_0047f3fd((int)param_1,local_20), (char)uVar5 != '\0' ||
            (uVar5 = FUN_0047f4bb((int)param_1,local_20), (char)uVar5 != '\0')))) ||
          (uVar5 = FUN_0047f3fd((int)param_1,local_2c), (char)uVar5 == '\0')))) goto LAB_0047f6c5;
      piVar6 = local_20;
    }
    else {
      if (((uVar9 != 3) || (uVar5 = FUN_0047f31b(param_1,&local_38), (char)uVar5 == '\0')) ||
         ((uVar5 = FUN_0047f38d((int)param_1,local_2c), (char)uVar5 == '\0' ||
          (uVar5 = FUN_0047f3fd((int)param_1,local_20), (char)uVar5 == '\0')))) goto LAB_0047f6c5;
      piVar6 = local_14;
    }
    FUN_0047f4bb((int)param_1,piVar6);
  }
LAB_0047f6c5:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


