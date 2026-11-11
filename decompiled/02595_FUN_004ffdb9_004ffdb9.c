// Function: FUN_004ffdb9
// Entry: 004ffdb9
// Size: 177 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl
FUN_004ffdb9(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00534df0;
  uStack_c = 0x4ffdc5;
  local_20 = param_5;
  local_44 = 0;
  local_34 = *(undefined4 *)(param_2 + -4);
  local_38 = __CreateFrameInfo(local_50,*(undefined4 *)(param_1 + 0x18));
  iVar1 = ___vcrt_getptd();
  local_3c = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = ___vcrt_getptd();
  local_40 = *(undefined4 *)(iVar1 + 0x14);
  iVar1 = ___vcrt_getptd();
  *(int *)(iVar1 + 0x10) = param_1;
  iVar1 = ___vcrt_getptd();
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  local_48 = 1;
  local_8 = (undefined *)0x1;
  uVar2 = FUN_004c4d85(param_2,param_4,param_5,param_6,param_7);
  local_8 = (undefined *)0xfffffffe;
  local_48 = 0;
  local_20 = uVar2;
  FUN_004fff0c();
  ExceptionList = local_14;
  return uVar2;
}


