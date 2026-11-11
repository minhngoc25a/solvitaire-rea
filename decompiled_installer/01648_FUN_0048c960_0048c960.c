// Function: FUN_0048c960
// Entry: 0048c960
// Size: 105 bytes
// Thunk: false
// External: false


ulonglong __cdecl FUN_0048c960(int param_1,uint *param_2,SIZE_T param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_0047d191(*(LPVOID *)(param_1 + 0x214));
  if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
    *(SIZE_T *)(param_1 + 0x218) = param_3;
    puVar1 = (uint *)FUN_00482949(param_3);
    *(uint **)(param_1 + 0x214) = puVar1;
    if (puVar1 != (uint *)0x0) {
      uVar2 = FUN_0044c490(puVar1,param_2,param_3);
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0047d96c();
  }
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  return uVar2;
}


