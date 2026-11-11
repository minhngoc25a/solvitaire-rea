// Function: FUN_00454326
// Entry: 00454326
// Size: 164 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00454326(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int local_60 [6];
  undefined4 local_48;
  undefined1 local_44;
  int *local_38;
  int *local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c [2];
  
  FUN_004245c7(local_60,param_5);
  local_14 = param_6;
  local_10 = param_4;
  local_c[0] = param_3;
  local_24 = param_1;
  local_20 = param_2;
  if ((param_3 == 0) || (param_4 == 0)) {
    local_44 = 1;
    local_48 = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_60);
    uVar1 = 0xffffffff;
  }
  else {
    local_38 = local_c;
    local_18 = param_3;
    local_34 = local_60;
    local_1c = param_3;
    local_30 = &local_24;
    local_2c = &local_10;
    local_28 = &local_14;
    uVar1 = operator()<>(&local_1c,&local_38);
  }
  FUN_0042460f(local_60);
  return uVar1;
}


