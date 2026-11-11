// Function: FUN_004790d7
// Entry: 004790d7
// Size: 188 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004790d7(uint param_1,short *param_2,uint param_3,uint param_4,char param_5)

{
  short sVar1;
  ulonglong uVar2;
  short *psVar3;
  __acrt_ptd *p_Var4;
  undefined4 uVar5;
  short *psVar6;
  short *psVar7;
  uint local_8;
  
  psVar6 = param_2;
  if (param_5 != '\0') {
    *param_2 = 0x2d;
    psVar6 = param_2 + 1;
    param_1 = -param_1;
  }
  local_8 = (uint)(param_5 != '\0');
  psVar3 = psVar6;
  do {
    psVar7 = psVar3;
    uVar2 = (ulonglong)param_1;
    param_1 = param_1 / param_4;
    *psVar7 = (-(ushort)(9 < (uint)(uVar2 % (ulonglong)param_4)) & 0x27) + 0x30 +
              (short)(uVar2 % (ulonglong)param_4);
    local_8 = local_8 + 1;
    if (param_1 == 0) break;
    psVar3 = psVar7 + 1;
  } while (local_8 < param_3);
  if (local_8 < param_3) {
    psVar7[1] = 0;
    do {
      sVar1 = *psVar7;
      *psVar7 = *psVar6;
      psVar7 = psVar7 + -1;
      *psVar6 = sVar1;
      psVar6 = psVar6 + 1;
    } while (psVar6 < psVar7);
    uVar5 = 0;
  }
  else {
    *param_2 = 0;
    p_Var4 = FUN_0042470e();
    uVar5 = 0x22;
    *(undefined4 *)p_Var4 = 0x22;
    FUN_004243be();
  }
  return uVar5;
}


