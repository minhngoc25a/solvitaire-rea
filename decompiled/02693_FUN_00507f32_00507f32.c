// Function: FUN_00507f32
// Entry: 00507f32
// Size: 532 bytes
// Thunk: false
// External: false


int __cdecl FUN_00507f32(tm *param_1,uint *param_2)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  tm *ptVar5;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  if (param_1 == (tm *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return 0x16;
  }
  ptVar5 = param_1;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar5->tm_sec = -1;
    ptVar5 = (tm *)&ptVar5->tm_min;
  }
  if (param_2 == (uint *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
  }
  else {
    if ((-1 < (int)*param_2) && ((int)*param_2 < 0x7fffd280)) {
      ___tzset();
      local_10 = 0;
      local_14 = 0;
      local_c = 0;
      iVar4 = FUN_00503f8b(&local_10);
      if ((iVar4 == 0) &&
         ((iVar4 = FUN_00503fb7(&local_14), iVar4 == 0 &&
          (iVar4 = FUN_00503fe3(&local_c), iVar4 == 0)))) {
        local_8 = (void *)*param_2;
        if ((int)local_8 - 0x3f481U < 0x7ff7e97e) {
          local_8 = (void *)((int)local_8 - local_c);
          iVar4 = FUN_004f07a0(local_8,&param_1->tm_sec,(uint *)&local_8);
          if (iVar4 != 0) {
            return iVar4;
          }
          if ((local_10 != 0) && (ptVar5 = param_1, iVar4 = __isindst(param_1), iVar4 != 0)) {
            local_8 = (void *)((int)local_8 - local_14);
            iVar4 = FUN_004f07a0(ptVar5,&param_1->tm_sec,(uint *)&local_8);
            if (iVar4 != 0) {
              return iVar4;
            }
            param_1->tm_isdst = 1;
          }
        }
        else {
          iVar4 = FUN_004f07a0(local_8,&param_1->tm_sec,param_2);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_1->tm_sec;
          if ((local_10 != 0) && (iVar2 = __isindst(param_1), iVar2 != 0)) {
            local_c = local_c + local_14;
            param_1->tm_isdst = 1;
          }
          iVar4 = iVar4 - local_c;
          iVar2 = iVar4 % 0x3c;
          param_1->tm_sec = iVar2;
          if (iVar2 < 0) {
            iVar4 = iVar4 + -0x3c;
            param_1->tm_sec = iVar2 + 0x3c;
          }
          iVar2 = iVar4 / 0x3c + param_1->tm_min;
          iVar4 = iVar2 % 0x3c;
          param_1->tm_min = iVar4;
          if (iVar4 < 0) {
            iVar2 = iVar2 + -0x3c;
            param_1->tm_min = iVar4 + 0x3c;
          }
          iVar4 = iVar2 / 0x3c + param_1->tm_hour;
          iVar2 = iVar4 % 0x18;
          param_1->tm_hour = iVar2;
          if (iVar2 < 0) {
            iVar4 = iVar4 + -0x18;
            param_1->tm_hour = iVar2 + 0x18;
          }
          iVar4 = iVar4 / 0x18;
          if (iVar4 < 1) {
            if (iVar4 < 0) {
              iVar3 = param_1->tm_mday + iVar4;
              param_1->tm_wday = (param_1->tm_wday + 7 + iVar4) % 7;
              iVar2 = param_1->tm_yday;
              param_1->tm_mday = iVar3;
              if (iVar3 < 1) {
                param_1->tm_mon = 0xb;
                param_1->tm_mday = iVar3 + 0x1f;
                iVar2 = iVar2 + 0x16d;
                param_1->tm_year = param_1->tm_year + -1;
              }
              param_1->tm_yday = iVar2 + iVar4;
            }
          }
          else {
            param_1->tm_mday = param_1->tm_mday + iVar4;
            param_1->tm_yday = param_1->tm_yday + iVar4;
            param_1->tm_wday = (param_1->tm_wday + iVar4) % 7;
          }
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
  }
  return 0x16;
}


