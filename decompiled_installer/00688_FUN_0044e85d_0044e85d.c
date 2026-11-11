// Function: FUN_0044e85d
// Entry: 0044e85d
// Size: 144 bytes
// Thunk: false
// External: false


int __cdecl FUN_0044e85d(byte *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  uint uVar4;
  int local_14;
  int local_10;
  char local_8;
  
  if (param_1 == (byte *)0x0) {
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    iVar3 = 0x7fffffff;
  }
  else if (param_2 == (byte *)0x0) {
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    iVar3 = 0x7fffffff;
  }
  else {
    FUN_00425544(&local_14,param_3);
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar4 = (uint)*(byte *)((uint)bVar1 + *(int *)(local_10 + 0x94));
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar3 = uVar4 - *(byte *)((uint)bVar1 + *(int *)(local_10 + 0x94));
      if (iVar3 != 0) break;
    } while (uVar4 != 0);
    if (local_8 != '\0') {
      *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    }
  }
  return iVar3;
}


