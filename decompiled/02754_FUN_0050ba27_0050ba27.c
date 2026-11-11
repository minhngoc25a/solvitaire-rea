// Function: FUN_0050ba27
// Entry: 0050ba27
// Size: 141 bytes
// Thunk: false
// External: false


byte * __cdecl FUN_0050ba27(byte *param_1,byte *param_2,int *param_3)

{
  __acrt_ptd *p_Var1;
  byte *pbVar2;
  int local_14 [2];
  int local_c;
  char local_8;
  
  if (param_1 == (byte *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return (byte *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
  }
  else if (param_1 < param_2) {
    FUN_00425544(local_14,param_3);
    pbVar2 = param_2 + -1;
    if (*(int *)(local_c + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < param_1) break;
      } while ((*(byte *)(*pbVar2 + 0x19 + local_c) & 4) != 0);
      pbVar2 = param_2 + (-1 - ((int)param_2 - (int)pbVar2 & 1U));
    }
    if (local_8 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_14[0] + 0x350) = *(uint *)(local_14[0] + 0x350) & 0xfffffffd;
    return pbVar2;
  }
  return (byte *)0x0;
}


