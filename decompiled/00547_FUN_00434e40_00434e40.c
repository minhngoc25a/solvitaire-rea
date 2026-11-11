// Function: FUN_00434e40
// Entry: 00434e40
// Size: 300 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_00434e40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  _memset(&local_c0,0,0x60);
  if (param_1 != 0) {
    uStack_a4 = *(undefined4 *)(param_1 + 0x3d0);
  }
  uStack_88 = 0xffffffff;
  uStack_84 = 0xffffffff;
  uStack_78 = 0xffffffff;
  uStack_74 = 0xffffffff;
  local_60 = local_c0;
  uStack_5c = uStack_bc;
  uStack_58 = param_2;
  local_50 = local_b0;
  uStack_4c = uStack_ac;
  uStack_48 = uStack_a8;
  uStack_44 = uStack_a4;
  uStack_3c = uStack_9c;
  uStack_38 = uStack_98;
  uStack_34 = uStack_94;
  local_40 = param_3;
  uStack_54 = param_4;
  local_30 = local_90;
  uStack_2c = uStack_8c;
  uStack_28 = 0xffffffff;
  uStack_24 = 0xffffffff;
  local_20 = local_80;
  uStack_1c = uStack_7c;
  uStack_18 = 0xffffffff;
  uStack_14 = 0xffffffff;
  local_10 = local_70;
  iStack_c = iStack_6c;
  iStack_8 = iStack_68;
  uStack_4 = uStack_64;
  if (param_5 != (int *)0x0) {
    _memset(param_5,0,0x2d8);
    param_5[0xb0] = -1;
    param_5[0xb1] = -1;
    if (param_1 != 0) {
      param_5[0xb3] = iStack_c;
      param_5[0xb4] = iStack_8;
      uVar1 = FUN_0044b290(param_1,(uint)&local_60,param_5);
      return uVar1;
    }
  }
  return 0xfffffffe;
}


