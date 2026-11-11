// Function: FUN_0047e31f
// Entry: 0047e31f
// Size: 965 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0047e31f(wchar_t *param_1,short *param_2,int param_3,short *param_4,int param_5,
            undefined4 *param_6)

{
  wchar_t wVar1;
  char cVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  __acrt_ptd *p_Var8;
  uint uVar9;
  bool bVar10;
  int local_200 [4];
  short *local_1f0;
  uint local_1ec;
  undefined4 *local_1e8;
  undefined4 local_1e4;
  __acrt_ptd *local_1e0;
  __acrt_ptd *local_1dc;
  __acrt_ptd *local_1d8;
  short local_1d4 [128];
  ushort local_d4;
  ushort local_d2;
  ushort local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  wchar_t local_b4;
  undefined1 local_b2 [170];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_1e8 = param_6;
  local_1f0 = param_2;
  if (param_1 == (wchar_t *)0x0) goto LAB_0047e6c9;
  local_1e4 = 0;
  if ((*param_1 == L'C') && (param_1[1] == L'\0')) {
    iVar3 = FUN_0047f91c(param_2,param_3,0x52de90);
    if (iVar3 == 0) {
      *local_1e8 = 0;
      goto LAB_0047e6c9;
    }
    goto LAB_0047e6d8;
  }
  p_Var4 = FUN_0047dbec();
  local_1d8 = p_Var4 + 0x68;
  p_Var8 = p_Var4 + 0x172;
  local_1e0 = p_Var4 + 0x6c;
  local_1dc = p_Var8;
  FUN_0047f703(local_200,param_4,param_5,(int)(p_Var4 + 0x50));
  pwVar7 = param_1;
  do {
    wVar1 = *pwVar7;
    pwVar7 = pwVar7 + 1;
  } while (wVar1 != L'\0');
  uVar9 = (int)pwVar7 - (int)(param_1 + 1) >> 1;
  p_Var4 = p_Var8;
  pwVar7 = param_1;
  local_1ec = uVar9;
  if (uVar9 < 0x83) {
    do {
      wVar1 = *(wchar_t *)p_Var4;
      bVar10 = (ushort)wVar1 < (ushort)*pwVar7;
      if (wVar1 != *pwVar7) {
LAB_0047e415:
        uVar5 = -(uint)bVar10 | 1;
        goto LAB_0047e41a;
      }
      if (wVar1 == L'\0') break;
      wVar1 = *(wchar_t *)(p_Var4 + 2);
      bVar10 = (ushort)wVar1 < (ushort)pwVar7[1];
      if (wVar1 != pwVar7[1]) goto LAB_0047e415;
      p_Var4 = p_Var4 + 4;
      pwVar7 = pwVar7 + 2;
    } while (wVar1 != L'\0');
    uVar5 = 0;
LAB_0047e41a:
    p_Var4 = local_1e0;
    pwVar7 = param_1;
    if (uVar5 != 0) {
      do {
        wVar1 = *(wchar_t *)p_Var4;
        bVar10 = (ushort)wVar1 < (ushort)*pwVar7;
        if (wVar1 != *pwVar7) {
LAB_0047e450:
          uVar5 = -(uint)bVar10 | 1;
          goto LAB_0047e455;
        }
        if (wVar1 == L'\0') break;
        wVar1 = *(wchar_t *)(p_Var4 + 2);
        bVar10 = (ushort)wVar1 < (ushort)pwVar7[1];
        if (wVar1 != pwVar7[1]) goto LAB_0047e450;
        p_Var4 = p_Var4 + 4;
        pwVar7 = pwVar7 + 2;
      } while (wVar1 != L'\0');
      uVar5 = 0;
LAB_0047e455:
      if (uVar5 != 0) goto LAB_0047e45d;
    }
LAB_0047e690:
    *local_1e8 = *(undefined4 *)local_1d8;
    iVar3 = FUN_0047f91c(local_1f0,param_3,(int)p_Var8);
    if (iVar3 != 0) {
LAB_0047e6d8:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  else {
LAB_0047e45d:
    bVar10 = FUN_004819f7();
    iVar3 = FUN_0047e796(local_1d4,param_1);
    p_Var4 = local_1d8;
    if (iVar3 == 0) {
      if (bVar10) {
        iVar3 = FUN_004c2bc6(local_1d4,(uint *)local_1d8,local_1d4);
      }
      else {
        iVar3 = FUN_004c34c2((int)local_1d4,(UINT *)local_1d8,local_1d4);
      }
      p_Var8 = local_1dc;
      if (iVar3 == 0) goto LAB_0047e4fb;
      FUN_0047e726((short *)local_1dc,0x83,(int)local_1d4);
      pwVar7 = &local_b4;
      do {
        wVar1 = *pwVar7;
        pwVar7 = pwVar7 + 1;
      } while (wVar1 != (wchar_t)local_1e4);
      FUN_0047f7c1(local_200,(int)&local_b4,((int)pwVar7 - (int)local_b2 >> 1) + 1);
LAB_0047e65a:
      if ((*param_1 == L'\0') || (0x82 < local_1ec)) {
        *(ushort *)local_1e0 = 0;
      }
      else {
        iVar3 = FUN_004c2925((short *)local_1e0,0x83,(int)param_1,uVar9 + 1);
        if (iVar3 != 0) goto LAB_0047e6d8;
      }
      goto LAB_0047e690;
    }
LAB_0047e4fb:
    iVar3 = ___acrt_IsValidLocaleName_4(param_1);
    if (iVar3 != 0) {
      uVar5 = get_default_code_page(param_1);
      p_Var8 = local_1dc;
      iVar3 = uVar9 + 1;
      *(uint *)p_Var4 = uVar5 & 0xffff;
      iVar6 = FUN_004c2925((short *)local_1dc,0x83,(int)param_1,iVar3);
      pwVar7 = param_1;
      if (iVar6 != 0) goto LAB_0047e6d8;
LAB_0047e64f:
      FUN_0047f77d(local_200,(int)pwVar7,iVar3);
      goto LAB_0047e65a;
    }
    cVar2 = FUN_0047f4fa(local_1d4,param_1);
    if ((cVar2 != '\0') && (iVar3 = ___acrt_IsValidLocaleName_4(&local_b4), iVar3 != 0)) {
      if (local_d4 == 0) {
        uVar5 = get_default_code_page(&local_b4);
      }
      else {
        uVar5 = (uint)local_d4;
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 + 0x20;
        }
        if (uVar5 == 0x75) {
          uVar5 = (uint)local_d2;
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 + 0x20;
          }
          if (uVar5 != 0x74) goto LAB_0047e5c7;
          uVar5 = (uint)local_d0;
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 + 0x20;
          }
          if (((uVar5 != 0x66) || (local_ce != 0x38)) || (local_cc != 0)) goto LAB_0047e5c7;
        }
        else {
LAB_0047e5c7:
          if (((local_ce != 0x2d) || (local_cc != 0x38)) || (local_ca != 0)) goto LAB_0047e6bc;
        }
        uVar5 = 0xfde9;
      }
      p_Var8 = local_1dc;
      *(uint *)p_Var4 = uVar5 & 0xffff;
      iVar3 = FUN_004c2925((short *)local_1dc,0x83,(int)param_1,uVar9 + 1);
      if (iVar3 != 0) goto LAB_0047e6d8;
      pwVar7 = &local_b4;
      do {
        wVar1 = *pwVar7;
        pwVar7 = pwVar7 + 1;
      } while (wVar1 != (wchar_t)local_1e4);
      iVar3 = ((int)pwVar7 - (int)local_b2 >> 1) + 1;
      pwVar7 = &local_b4;
      goto LAB_0047e64f;
    }
  }
LAB_0047e6bc:
  FUN_0047f74d(local_200);
LAB_0047e6c9:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


