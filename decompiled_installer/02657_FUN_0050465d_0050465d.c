// Function: FUN_0050465d
// Entry: 0050465d
// Size: 322 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0050465d(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  iVar2 = FUN_004e7161(param_3);
  cVar1 = (char)iVar2;
  uStack_8._3_1_ = cVar1;
  if (param_2 == 1) {
    if (cVar1 == '\0') {
      iVar2 = *(int *)("JanFebMarAprMayJunJulAugSepOctNovDec" + param_4 * 4 + 0x24);
    }
    else {
      iVar2 = *(int *)(&DAT_005226d4 + param_4 * 4);
    }
    iVar3 = __crt_time_elapsed_leap_years<>(param_3);
    iVar3 = (int)(iVar3 + iVar2 + 1 + param_3 * 0x16d + -0x63ca) % 7;
    iVar2 = iVar2 + 1 + (param_5 * 7 - iVar3) + param_6;
    if (iVar3 <= param_6) {
      iVar2 = iVar2 + -7;
    }
    piVar4 = (int *)(&DAT_005226d8 + param_4 * 4);
    if (uStack_8._3_1_ == '\0') {
      piVar4 = &DAT_005226a4 + param_4;
    }
    if ((param_5 == 5) && (*piVar4 < iVar2)) {
      iVar2 = iVar2 + -7;
    }
  }
  else {
    if (cVar1 == '\0') {
      iVar2 = *(int *)("JanFebMarAprMayJunJulAugSepOctNovDec" + param_4 * 4 + 0x24);
    }
    else {
      iVar2 = *(int *)(&DAT_005226d4 + param_4 * 4);
    }
    iVar2 = iVar2 + param_7;
  }
  iVar3 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000;
  if (param_1 == 0) {
    DAT_005421c0 = param_3;
    DAT_005421c4 = iVar2;
    DAT_005421c8 = iVar3;
  }
  else {
    DAT_005421d0 = iVar2;
    DAT_005421d4 = iVar3;
    iVar2 = FUN_00503fb7(&local_c);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DAT_005421d4 = DAT_005421d4 + local_c * 1000;
    DAT_005421cc = param_3;
    if (DAT_005421d4 < 0) {
      DAT_005421d4 = DAT_005421d4 + 86400000;
      DAT_005421d0 = DAT_005421d0 + -1;
    }
    else if (86399999 < DAT_005421d4) {
      DAT_005421d4 = DAT_005421d4 + -86400000;
      DAT_005421d0 = DAT_005421d0 + 1;
    }
  }
  return;
}


