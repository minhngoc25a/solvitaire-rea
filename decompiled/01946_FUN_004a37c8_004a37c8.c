// Function: FUN_004a37c8
// Entry: 004a37c8
// Size: 184 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a37c8(ushort *param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_14;
  int local_10 [2];
  char local_8;
  
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
  else {
    FUN_00425544(&local_14,param_3);
    if (*(int *)(local_10[0] + 0xa8) == 0) {
      iVar3 = FUN_004a3880(param_1,param_2);
    }
    else {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = __towlower_internal((uint)uVar1,local_10);
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar5 = __towlower_internal((uint)uVar1,local_10);
        iVar3 = (uVar4 & 0xffff) - (uVar5 & 0xffff);
        if (iVar3 != 0) break;
      } while ((uVar4 & 0xffff) != 0);
    }
    if (local_8 != '\0') {
      *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    }
  }
  return iVar3;
}


