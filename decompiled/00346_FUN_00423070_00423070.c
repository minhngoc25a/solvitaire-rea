// Function: FUN_00423070
// Entry: 00423070
// Size: 467 bytes
// Thunk: false
// External: false


void FUN_00423070(float param_1,uint param_2,int param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  bool bVar3;
  wchar_t *pwVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  pwVar4 = (wchar_t *)FUN_0044c3e0(0x400,param_3);
  if (param_1 == INFINITY) {
    *(undefined4 *)pwVar4 = u__Infinity_0052bac0._0_4_;
    *(undefined4 *)(pwVar4 + 2) = u__Infinity_0052bac0._4_4_;
    *(undefined4 *)(pwVar4 + 4) = u__Infinity_0052bac0._8_4_;
    *(undefined4 *)(pwVar4 + 6) = u__Infinity_0052bac0._12_4_;
    *(undefined4 *)(pwVar4 + 8) = u__Infinity_0052bac0._16_4_;
    FUN_0044c470(0x3f7);
    return;
  }
  if (param_1 == -INFINITY) {
    *(undefined4 *)pwVar4 = u__Infinity_0052baac._0_4_;
    *(undefined4 *)(pwVar4 + 2) = u__Infinity_0052baac._4_4_;
    *(undefined4 *)(pwVar4 + 4) = u__Infinity_0052baac._8_4_;
    *(undefined4 *)(pwVar4 + 6) = u__Infinity_0052baac._12_4_;
    *(undefined4 *)(pwVar4 + 8) = u__Infinity_0052baac._16_4_;
    FUN_0044c470(0x3f7);
    return;
  }
  bVar3 = FUN_0047d27a(SUB84((double)param_1,0),(uint)((ulonglong)(double)param_1 >> 0x20));
  if (CONCAT31(extraout_var,bVar3) != 0) {
    builtin_wcsncpy(pwVar4,L"NaN",4);
    FUN_0044c470(0x3fd);
    return;
  }
  if (param_2 == 0xffffffff) {
    local_40 = DAT_0052ce18;
    local_3c = DAT_0052ce1c;
    local_38 = DAT_0052ce20;
    uVar8 = 0xffffffff;
  }
  else {
    if ((int)param_2 < 0x201) {
      uVar8 = param_2 & ((int)param_2 < 0) - 1;
    }
    else {
      uVar8 = 0x200;
    }
    FUN_0041e2d9((wchar_t *)&local_40,L"%%.%df");
  }
  iVar5 = FUN_0041e2d9(pwVar4,(wchar_t *)&local_40);
  if ((uVar8 == 0xffffffff) && (pwVar7 = pwVar4 + iVar5 + -1, pwVar4[iVar5 + -1] == L'0')) {
    wVar2 = *pwVar4;
    while (wVar2 != L'\0') {
      if (wVar2 == L'.') goto LAB_00423210;
      pwVar1 = pwVar4 + 1;
      pwVar4 = pwVar4 + 1;
      wVar2 = *pwVar1;
    }
  }
LAB_00423231:
  FUN_0044c470(0x400 - iVar5);
  return;
LAB_00423210:
  do {
    iVar6 = iVar5;
    pwVar4 = pwVar7 + -1;
    *pwVar7 = L'\0';
    iVar5 = iVar6 + -1;
    pwVar7 = pwVar4;
  } while (*pwVar4 == L'0');
  if (*pwVar4 == L'.') {
    iVar5 = iVar6 + -2;
    *pwVar4 = L'\0';
  }
  goto LAB_00423231;
}


