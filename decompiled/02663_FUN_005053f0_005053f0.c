// Function: FUN_005053f0
// Entry: 005053f0
// Size: 268 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_005053f0(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  uVar2 = FUN_00505690(&local_5c,0,param_1);
  if ((char)uVar2 != '\0') {
    return 0xffffffffffffffff;
  }
  lVar1 = (ulonglong)local_8 * 4 + (ulonglong)local_4 * 4;
  uVar2 = (uint)lVar1;
  uVar3 = uVar2 + local_58;
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar2,local_58) +
                  (uint)(0xffffff5f < uVar3),uVar3 + 0xa0);
}


