// Function: FUN_00425b70
// Entry: 00425b70
// Size: 146 bytes
// Thunk: false
// External: false


int __cdecl FUN_00425b70(int param_1,int *param_2,void *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iStack_14 = param_2[3];
  uStack_48 = (undefined4)DAT_0050c098;
  uStack_44 = (undefined4)((ulonglong)DAT_0050c098 >> 0x20);
  local_20 = *param_2;
  iStack_18 = param_2[2];
  iStack_1c = param_2[1];
  local_10 = param_2[7];
  uStack_c = 0;
  uStack_8 = uStack_48;
  uStack_4 = uStack_44;
  iVar1 = FUN_0042b060(&local_20,param_3,(int *)(param_1 + 0x20));
  if (iVar1 == 0) {
    *param_4 = (int *)(param_1 + 0x20);
    iVar1 = 0;
  }
  return iVar1;
}


