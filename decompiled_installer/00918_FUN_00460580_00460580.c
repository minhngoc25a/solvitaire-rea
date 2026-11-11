// Function: FUN_00460580
// Entry: 00460580
// Size: 123 bytes
// Thunk: false
// External: false


void __cdecl
FUN_00460580(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint local_8;
  int iStack_4;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    iStack_4 = 0;
    local_8 = 0;
  }
  else {
    local_8 = *(uint *)(iVar1 + 0x10) + *(uint *)(iVar1 + 8);
    iStack_4 = *(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 0xc) +
               (uint)CARRY4(*(uint *)(iVar1 + 0x10),*(uint *)(iVar1 + 8));
  }
  if ((iStack_4 <= param_3) &&
     (((iStack_4 < param_3 || (local_8 < param_2)) &&
      (iVar1 = FUN_00460b20(param_1,local_8,iStack_4,param_2 - local_8,
                            (param_3 - iStack_4) - (uint)(param_2 < local_8),1), iVar1 != 0)))) {
    return;
  }
  FUN_00460b20(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


