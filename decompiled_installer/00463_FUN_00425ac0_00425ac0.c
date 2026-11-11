// Function: FUN_00425ac0
// Entry: 00425ac0
// Size: 162 bytes
// Thunk: false
// External: false


int __cdecl FUN_00425ac0(undefined4 param_1,int *param_2,uint *param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint local_60 [4];
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_28 = DAT_0050c098;
  uVar1 = uStack_28;
  uStack_2c = 0;
  local_30 = 4;
  uStack_28._0_4_ = (undefined4)DAT_0050c098;
  uStack_28._4_4_ = (undefined4)((ulonglong)DAT_0050c098 >> 0x20);
  local_40 = *param_2;
  iStack_34 = param_2[3];
  iStack_38 = param_2[2];
  iStack_3c = param_2[1];
  local_50 = param_2[7];
  uStack_4c = 0;
  uStack_48 = (undefined4)uStack_28;
  uStack_44 = uStack_28._4_4_;
  uStack_c = 0;
  uStack_8 = (undefined4)uStack_28;
  uStack_4 = uStack_28._4_4_;
  if (param_3 == (uint *)0x0) {
    return -2;
  }
  *param_3 = 0;
  uStack_28 = uVar1;
  local_20 = local_40;
  iStack_1c = iStack_3c;
  iStack_18 = iStack_38;
  iStack_14 = iStack_34;
  local_10 = local_50;
  iVar2 = FUN_00443ae0(&local_20,local_60);
  if (iVar2 == 0) {
    *param_3 = local_60[0];
    iVar2 = 0;
  }
  return iVar2;
}


