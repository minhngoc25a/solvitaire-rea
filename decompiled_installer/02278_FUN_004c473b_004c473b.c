// Function: FUN_004c473b
// Entry: 004c473b
// Size: 650 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004c473b(wchar_t *param_1,int param_2)

{
  uint uVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  __acrt_ptd *p_Var4;
  wchar_t *pwVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  LPCWSTR lpName;
  BOOL BVar10;
  undefined4 uVar11;
  wchar_t *pwVar12;
  int *local_8;
  
  if (param_1 == (wchar_t *)0x0) {
    p_Var4 = FUN_0042470e();
    *(undefined4 *)p_Var4 = 0x16;
    return 0xffffffff;
  }
  pwVar5 = (wchar_t *)FUN_004811eb((ushort *)param_1,0x3d);
  if ((pwVar5 == (wchar_t *)0x0) || (pwVar5 == param_1)) {
    p_Var4 = FUN_0042470e();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_004247be(param_1);
    return 0xffffffff;
  }
  wVar2 = pwVar5[1];
  FUN_004c4a35();
  uVar11 = 0;
  local_8 = DAT_00544358;
  if (DAT_00544358 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_00544354 == (LPVOID)0x0)) {
      if (wVar2 == L'\0') goto LAB_004c4987;
      if (DAT_00544354 == (LPVOID)0x0) {
        DAT_00544354 = __calloc_base(1,4);
        FUN_004247be((LPVOID)0x0);
        if (DAT_00544354 == (LPVOID)0x0) goto LAB_004c47c4;
        local_8 = DAT_00544358;
        if (DAT_00544358 != (int *)0x0) goto LAB_004c4838;
      }
      DAT_00544358 = __calloc_base(1,4);
      FUN_004247be((LPVOID)0x0);
      if (DAT_00544358 != (int *)0x0) goto LAB_004c4834;
    }
    else {
      iVar6 = thunk_FUN_0047fe38();
      if (iVar6 == 0) {
        p_Var4 = FUN_0042470e();
        *(undefined4 *)p_Var4 = 0x16;
      }
      else {
        FUN_004c4a35();
LAB_004c4834:
        local_8 = DAT_00544358;
        if (DAT_00544358 != (int *)0x0) goto LAB_004c4838;
      }
    }
  }
  else {
LAB_004c4838:
    uVar7 = (int)pwVar5 - (int)param_1 >> 1;
    DAT_00544358 = local_8;
    uVar8 = find_in_environment_nolock<wchar_t>(param_1,uVar7);
    if ((-1 < (int)uVar8) && (*local_8 != 0)) {
      FUN_004247be((LPVOID)local_8[uVar8]);
      if (wVar2 == L'\0') {
        for (; local_8[uVar8] != 0; uVar8 = uVar8 + 1) {
          local_8[uVar8] = local_8[uVar8 + 1];
        }
        piVar9 = __recalloc_base(local_8,uVar8,4);
        FUN_004247be((LPVOID)0x0);
        pwVar5 = param_1;
        if (piVar9 != (int *)0x0) {
LAB_004c48f9:
          DAT_00544358 = piVar9;
        }
      }
      else {
        pwVar5 = (wchar_t *)0x0;
        local_8[uVar8] = (int)param_1;
      }
      if (param_2 == 0) {
LAB_004c4997:
        FUN_004247be(pwVar5);
        return 0;
      }
      pwVar12 = param_1;
      do {
        wVar3 = *pwVar12;
        pwVar12 = pwVar12 + 1;
      } while (wVar3 != L'\0');
      uVar8 = ((int)pwVar12 - (int)(param_1 + 1) >> 1) + 2;
      lpName = __calloc_base(uVar8,2);
      if (lpName == (LPCWSTR)0x0) {
        FUN_004247be((LPVOID)0x0);
        param_1 = pwVar5;
      }
      else {
        iVar6 = FUN_0047f91c(lpName,uVar8,(int)param_1);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[uVar7] = L'\0';
        BVar10 = SetEnvironmentVariableW
                           (lpName,(LPCWSTR)(-(uint)(wVar2 != L'\0') & (uint)(lpName + uVar7 + 1)));
        if (BVar10 != 0) {
          FUN_004247be(lpName);
          goto LAB_004c4997;
        }
        p_Var4 = FUN_0042470e();
        *(undefined4 *)p_Var4 = 0x2a;
        FUN_004247be(lpName);
        uVar11 = 0xffffffff;
        param_1 = pwVar5;
      }
      goto LAB_004c4987;
    }
    if (wVar2 == L'\0') goto LAB_004c4987;
    uVar1 = -uVar8 + 2;
    if ((-uVar8 <= uVar1) && (uVar1 < 0x3fffffff)) {
      piVar9 = __recalloc_base(local_8,uVar1,4);
      FUN_004247be((LPVOID)0x0);
      if (piVar9 != (int *)0x0) {
        piVar9[-uVar8] = (int)param_1;
        piVar9[1 - uVar8] = 0;
        pwVar5 = (wchar_t *)0x0;
        goto LAB_004c48f9;
      }
    }
  }
LAB_004c47c4:
  uVar11 = 0xffffffff;
LAB_004c4987:
  FUN_004247be(param_1);
  return uVar11;
}


