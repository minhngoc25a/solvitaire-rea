// Function: FUN_004c2bc6
// Entry: 004c2bc6
// Size: 516 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004c2bc6(short *param_1,uint *param_2,wchar_t *param_3)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  wchar_t *pwVar3;
  short sVar4;
  bool bVar5;
  __acrt_ptd *p_Var6;
  undefined3 extraout_var;
  uint _Val;
  BOOL BVar7;
  int iVar8;
  ushort *puVar9;
  __acrt_ptd *p_Var10;
  
  p_Var6 = FUN_0047dbec();
  p_Var10 = p_Var6 + 0x50;
  p_Var2 = p_Var6 + 0x2a0;
  *(undefined4 *)(p_Var6 + 0x58) = 0;
  *(short *)p_Var2 = 0;
  p_Var1 = p_Var6 + 0x54;
  *(short **)p_Var10 = param_1;
  *(short **)p_Var1 = param_1 + 0x40;
  if (param_1[0x40] != 0) {
    _TranslateName(0x51aa50,0x16,(int *)p_Var1);
  }
  if (**(short **)p_Var10 == 0) {
    FUN_004c32ca((int)p_Var10);
  }
  else {
    if (**(short **)p_Var1 == 0) {
      _GetLocaleNameFromLanguage((undefined4 *)p_Var10);
    }
    else {
      _GetLocaleNameFromLangCountry((undefined4 *)p_Var10);
    }
    if ((*(int *)(p_Var6 + 0x58) == 0) &&
       (bVar5 = _TranslateName(0x51a740,0x40,(int *)p_Var10), CONCAT31(extraout_var,bVar5) != 0)) {
      if (**(short **)p_Var1 == 0) {
        _GetLocaleNameFromLanguage((undefined4 *)p_Var10);
      }
      else {
        _GetLocaleNameFromLangCountry((undefined4 *)p_Var10);
      }
    }
  }
  if (*(int *)(p_Var6 + 0x58) != 0) {
    if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
      _Val = FUN_004c3351((wchar_t *)(-(uint)(param_1 != (short *)0x0) & (uint)(param_1 + 0x80)),
                          (int)p_Var10);
    }
    else {
      _Val = GetACP();
    }
    if (((_Val != 0) && (_Val != 65000)) && (BVar7 = IsValidCodePage(_Val & 0xffff), BVar7 != 0)) {
      if (param_2 != (uint *)0x0) {
        *param_2 = _Val;
      }
      if (param_3 == (wchar_t *)0x0) {
        return 1;
      }
      pwVar3 = param_3 + 0x90;
      *pwVar3 = L'\0';
      p_Var10 = p_Var2;
      do {
        sVar4 = *(short *)p_Var10;
        p_Var10 = p_Var10 + 2;
      } while (sVar4 != 0);
      iVar8 = FUN_004c2925(pwVar3,0x55,(int)p_Var2,((int)p_Var10 - (int)(p_Var6 + 0x2a2) >> 1) + 1);
      if (iVar8 != 0) {
LAB_004c2dbe:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar8 = ___acrt_GetLocaleInfoEx_16(pwVar3,0x1001,param_3,0x40);
      if (iVar8 != 0) {
        pwVar3 = param_3 + 0x40;
        iVar8 = ___acrt_GetLocaleInfoEx_16(param_3 + 0x90,0x1002,pwVar3,0x40);
        if ((iVar8 != 0) &&
           (((puVar9 = FUN_004811eb((ushort *)pwVar3,0x5f), puVar9 == (ushort *)0x0 &&
             (puVar9 = FUN_004811eb((ushort *)pwVar3,0x2e), puVar9 == (ushort *)0x0)) ||
            (iVar8 = ___acrt_GetLocaleInfoEx_16(param_3 + 0x90,7,pwVar3,0x40), iVar8 != 0)))) {
          if (_Val != 0xfde9) {
            FID_conflict___itow_s(_Val,param_3 + 0x80,0x10,10);
            return 1;
          }
          iVar8 = FUN_004c2925(param_3 + 0x80,0x10,0x52dfb0,5);
          if (iVar8 == 0) {
            return 1;
          }
          goto LAB_004c2dbe;
        }
      }
    }
  }
  return 0;
}


