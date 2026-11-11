// Function: FUN_004c4de2
// Entry: 004c4de2
// Size: 246 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004c4de2(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *local_44;
  undefined1 *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  code *local_14;
  undefined *local_10;
  undefined4 local_c;
  code *local_8;
  
  local_24 = &stack0xfffffffc;
  local_28 = &stack0xffffffb8;
  if (param_1 == (int *)0x123) {
    *param_2 = 0x4c4eac;
    local_c = 1;
  }
  else {
    local_40 = &LAB_004c4fab;
    local_3c = DAT_0053fbc0 ^ (uint)&local_44;
    local_38 = param_5;
    local_34 = param_2;
    local_30 = param_6;
    local_2c = param_7;
    local_20 = 0;
    local_44 = ExceptionList;
    ExceptionList = &local_44;
    iVar1 = FUN_0050a94d(*param_1);
    *param_1 = iVar1;
    local_c = 1;
    local_1c = param_1;
    local_18 = param_3;
    iVar1 = ___vcrt_getptd();
    local_8 = *(code **)(iVar1 + 8);
    local_10 = PTR_guard_check_icall_00532084;
    (*(code *)PTR_guard_check_icall_00532084)();
    local_14 = local_8;
    (*local_8)(*param_1,&local_1c);
    local_c = 0;
    if (local_20 != 0) {
      *local_44 = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_44;
  }
  return local_c;
}


