// Function: FUN_004bf95b
// Entry: 004bf95b
// Size: 160 bytes
// Thunk: false
// External: false


float10 __cdecl
FUN_004bf95b(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  iVar1 = 0;
  do {
    if ((&DAT_0051a568)[iVar1 * 2] == param_2) {
      local_20 = *(int *)(&UNK_0051a56c + iVar1 * 8);
      if (local_20 != 0) {
        local_1c = param_3;
        local_18 = param_4;
        local_14 = param_5;
        local_10 = param_6;
        local_c = param_7;
        local_24 = param_1;
        uStack_8 = param_8;
        __ctrlfp();
        iVar1 = FUN_004f071c(&local_24);
        if (iVar1 == 0) {
          FUN_004bf687(param_1);
        }
        return (float10)(double)CONCAT44(uStack_8,local_c);
      }
      goto LAB_004bf97b;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  local_20 = 0;
LAB_004bf97b:
  __ctrlfp();
  FUN_004bf687(param_1);
  return (float10)(double)CONCAT44(param_8,param_7);
}


