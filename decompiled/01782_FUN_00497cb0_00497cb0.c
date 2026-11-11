// Function: FUN_00497cb0
// Entry: 00497cb0
// Size: 67 bytes
// Thunk: false
// External: false


void __cdecl FUN_00497cb0(int param_1)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (param_1 == 0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0;
    return;
  }
  iVar2 = 0;
  do {
    if ((&DAT_00518a48)[iVar2 * 2] == param_1) {
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = *(undefined4 *)(&UNK_00518a4c + iVar2 * 8);
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x2e);
  p_Var1 = FUN_0042470e();
  *(undefined4 *)p_Var1 = 0x16;
  return;
}


