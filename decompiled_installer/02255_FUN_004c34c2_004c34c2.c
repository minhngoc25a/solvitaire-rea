// Function: FUN_004c34c2
// Entry: 004c34c2
// Size: 496 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c34c2(int param_1,UINT *param_2,LPWSTR param_3)

{
  short *psVar1;
  __acrt_ptd *p_Var2;
  __acrt_ptd *p_Var3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  UINT _Val;
  BOOL BVar6;
  int iVar7;
  uint local_14;
  LCID local_10;
  LCID local_c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  p_Var2 = FUN_0047dbec();
  p_Var3 = p_Var2 + 0x50;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  p_Var4 = FUN_0047dbec();
  *(uint **)(p_Var4 + 0x34c) = &local_14;
  psVar1 = (short *)(param_1 + 0x80);
  *(int *)p_Var3 = param_1;
  p_Var4 = p_Var2 + 0x54;
  *(short **)p_Var4 = psVar1;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    _TranslateName(0x51aa50,DAT_0051ab64 + -1,(int *)p_Var4);
  }
  local_14 = 0;
  if ((*(short **)p_Var3 == (short *)0x0) || (**(short **)p_Var3 == 0)) {
    if ((*(short **)p_Var4 == (short *)0x0) || (**(short **)p_Var4 == 0)) {
      local_14 = 0x104;
      local_10 = GetUserDefaultLCID();
      local_c = local_10;
    }
    else {
      _GetLcidFromCountry((byte *)&local_14);
    }
  }
  else {
    if ((*(short **)p_Var4 == (short *)0x0) || (**(short **)p_Var4 == 0)) {
      _GetLcidFromLanguage((byte *)&local_14);
    }
    else {
      _GetLcidFromLangCountry(&local_14);
    }
    if ((local_14 == 0) &&
       (uVar5 = _TranslateName(0x51a740,DAT_0051aa4c + -1,(int *)p_Var3), (char)uVar5 != '\0')) {
      if ((*(short **)p_Var4 == (short *)0x0) || (**(short **)p_Var4 == 0)) {
        _GetLcidFromLanguage((byte *)&local_14);
      }
      else {
        _GetLcidFromLangCountry(&local_14);
      }
    }
  }
  if ((((local_14 != 0) &&
       (_Val = _ProcessCodePage((wchar_t *)(-(uint)(param_1 != 0) & param_1 + 0x100U),(int)&local_14
                               ), _Val != 0)) &&
      (BVar6 = IsValidCodePage(_Val & 0xffff), BVar6 != 0)) &&
     (BVar6 = IsValidLocale(local_10,1), BVar6 != 0)) {
    if (param_2 != (UINT *)0x0) {
      *param_2 = _Val;
    }
    ___acrt_LCIDToLocaleName_16(local_10,(wchar_t *)(p_Var2 + 0x2a0),0x55,0);
    if (param_3 != (LPWSTR)0x0) {
      ___acrt_LCIDToLocaleName_16(local_10,param_3 + 0x90,0x55,0);
      iVar7 = GetLocaleInfoW(local_10,0x1001,param_3,0x40);
      if ((iVar7 != 0) && (iVar7 = GetLocaleInfoW(local_c,0x1002,param_3 + 0x40,0x40), iVar7 != 0))
      {
        FID_conflict___itow_s(_Val,param_3 + 0x80,0x10,10);
      }
    }
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


