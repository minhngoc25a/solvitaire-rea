// Function: FUN_004c3ef4
// Entry: 004c3ef4
// Size: 203 bytes
// Thunk: false
// External: false


int __cdecl FUN_004c3ef4(byte *param_1,byte *param_2,uint param_3,int *param_4)

{
  byte bVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  uint uVar4;
  int local_18;
  int local_14;
  char local_c;
  
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
  else if (param_3 < 0x80000000) {
    if (param_3 == 0) {
      iVar3 = 0;
    }
    else {
      FUN_00425544(&local_18,param_4);
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = (uint)*(byte *)((uint)bVar1 + *(int *)(local_14 + 0x94));
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        iVar3 = uVar4 - *(byte *)((uint)bVar1 + *(int *)(local_14 + 0x94));
        if ((iVar3 != 0) || (uVar4 == 0)) break;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      if (local_c != '\0') {
        *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
      }
    }
  }
  else {
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    iVar3 = 0x7fffffff;
  }
  return iVar3;
}


