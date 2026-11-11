// Function: FUN_00423280
// Entry: 00423280
// Size: 321 bytes
// Thunk: false
// External: false


void FUN_00423280(wchar_t *param_1,int param_2,wchar_t *param_3,int param_4)

{
  wchar_t wVar1;
  int iVar2;
  uint *puVar3;
  short *psVar4;
  wchar_t *pwVar5;
  size_t _MaxCount;
  uint uVar6;
  wchar_t *_Str1;
  int iVar7;
  
  uVar6 = 0;
  if (param_2 < 1) {
    FUN_00469d30(param_4);
    return;
  }
  if (param_1 == (wchar_t *)0x0) {
    param_1 = L"";
  }
  if (param_3 == (wchar_t *)0x0) {
    param_3 = L"";
  }
  iVar7 = 0;
  _Str1 = param_1;
  if ((*param_3 == L'\0') || (param_3[1] == L'\0')) {
    while( true ) {
      for (; (wVar1 = *_Str1, wVar1 != *param_3 && (wVar1 != L'\0')); _Str1 = _Str1 + 1) {
      }
      iVar7 = iVar7 + 1;
      if (iVar7 == param_2) break;
      if (wVar1 == L'\0') goto LAB_00423355;
      param_1 = _Str1 + 1;
      _Str1 = param_1;
    }
    uVar6 = (int)_Str1 - (int)param_1 >> 1;
  }
  else {
    pwVar5 = param_3;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    _MaxCount = (int)pwVar5 - (int)(param_3 + 1) >> 1;
    while( true ) {
      for (; (iVar2 = _wcsncmp(_Str1,param_3,_MaxCount), iVar2 != 0 && (*_Str1 != L'\0'));
          _Str1 = _Str1 + 1) {
      }
      iVar7 = iVar7 + 1;
      if (iVar7 == param_2) break;
      if (*_Str1 == L'\0') goto LAB_00423355;
      _Str1 = _Str1 + _MaxCount;
      param_1 = _Str1;
    }
    uVar6 = (int)_Str1 - (int)param_1 >> 1;
  }
LAB_00423355:
  iVar7 = FUN_004542f0((uint)_Str1);
  if (iVar7 == 0) {
    psVar4 = (short *)FUN_0044c3e0(uVar6,param_4);
    FUN_0044c204(psVar4,(int)param_1,uVar6);
    psVar4[uVar6] = 0;
    return;
  }
  puVar3 = (uint *)FUN_0047d360(param_4);
  FUN_0044c490(puVar3,(uint *)param_1,uVar6 * 2);
  iVar7 = FUN_0044c3e0(uVar6,param_4);
  *(undefined2 *)(uVar6 * 2 + iVar7) = 0;
  return;
}


