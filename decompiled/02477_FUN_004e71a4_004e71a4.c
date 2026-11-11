// Function: FUN_004e71a4
// Entry: 004e71a4
// Size: 462 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004e71a4(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,int param_7)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  __acrt_ptd *p_Var5;
  int iVar6;
  uint uVar7;
  int local_40 [4];
  int local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  uVar7 = param_1 - 0x76c;
  if (((((int)uVar7 < 0x46) || (0x44d < uVar7)) || (0xb < param_2 - 1U)) ||
     (((bVar3 = FUN_004e711b(uVar7,param_2 - 1U,param_3), !bVar3 || (0x17 < param_4)) ||
      ((0x3b < param_5 || (0x3b < param_6)))))) {
    p_Var5 = FUN_0042470e();
    *(undefined4 *)p_Var5 = 0x16;
  }
  else {
    iVar6 = *(int *)("JanFebMarAprMayJunJulAugSepOctNovDec" + param_2 * 4 + 0x24) + param_3;
    iVar4 = FUN_004e7161(uVar7);
    if (((char)iVar4 != '\0') && (2 < param_2)) {
      iVar6 = iVar6 + 1;
    }
    ___tzset();
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    iVar4 = FUN_00503f8b(local_40);
    if (((iVar4 != 0) || (iVar4 = FUN_00503fb7(local_40 + 1), iVar4 != 0)) ||
       (iVar4 = FUN_00503fe3(local_40 + 2), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar4 = __crt_time_elapsed_leap_years<>(uVar7);
    lVar2 = (longlong)iVar4 * 0x15180 + (longlong)iVar6 * 0x15180 + (longlong)(int)uVar7 * 0x1e13380
            + (longlong)(int)param_4 * 0xe10 + (longlong)(int)param_5 * 0x3c + (longlong)local_40[2]
            + (longlong)(int)param_6;
    uVar1 = (uint)lVar2;
    local_40[3] = uVar1 + 0x7c6beb00;
    local_30 = (int)((ulonglong)lVar2 >> 0x20) - (uint)(uVar1 < 0x83941500);
    if (param_7 != 1) {
      local_2c.tm_mon = param_2 + -1;
      local_2c.tm_hour = param_4;
      local_2c.tm_min = param_5;
      local_2c.tm_sec = param_6;
      local_2c.tm_year = uVar7;
      local_2c.tm_yday = iVar6;
      if ((param_7 == -1) && (local_40[0] != 0)) {
        __isindst(&local_2c);
      }
    }
  }
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


