// Function: FUN_00478e9c
// Entry: 00478e9c
// Size: 211 bytes
// Thunk: false
// External: false


int __cdecl FUN_00478e9c(ushort *param_1,ushort *param_2,int param_3,int *param_4)

{
  ushort uVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  uint uVar4;
  int local_18;
  int local_14 [2];
  char local_c;
  uint local_8;
  
  if (param_1 == (ushort *)0x0) {
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    iVar3 = 0x7fffffff;
  }
  else if (param_2 == (ushort *)0x0) {
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    iVar3 = 0x7fffffff;
  }
  else if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_00425544(&local_18,param_4);
    if (*(int *)(local_14[0] + 0xa8) == 0) {
      iVar3 = FUN_00478f6f(param_1,param_2,param_3);
    }
    else {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        local_8 = __towlower_internal((uint)uVar1,local_14);
        local_8 = local_8 & 0xffff;
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar4 = __towlower_internal((uint)uVar1,local_14);
        iVar3 = local_8 - (uVar4 & 0xffff);
        if ((iVar3 != 0) || (local_8 == 0)) break;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (local_c != '\0') {
      *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
    }
  }
  return iVar3;
}


