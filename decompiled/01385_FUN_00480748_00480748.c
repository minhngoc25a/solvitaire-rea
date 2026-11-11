// Function: FUN_00480748
// Entry: 00480748
// Size: 111 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00480748(short *param_1,int param_2,int param_3)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  int iVar4;
  undefined4 uStack_14;
  
  if ((param_1 != (short *)0x0) && (psVar3 = param_1, iVar4 = param_3, param_2 != 0)) {
    while (iVar4 != 0) {
      if (*psVar3 == 0) {
        iVar4 = param_3 - (int)psVar3;
        do {
          sVar1 = *(short *)(iVar4 + (int)psVar3);
          *psVar3 = sVar1;
          psVar3 = psVar3 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        *param_1 = 0;
        p_Var2 = FUN_0042470e();
        uStack_14 = 0x22;
        goto LAB_00480771;
      }
      param_2 = param_2 + -1;
      psVar3 = psVar3 + 1;
      iVar4 = param_2;
    }
    *param_1 = 0;
  }
  p_Var2 = FUN_0042470e();
  uStack_14 = 0x16;
LAB_00480771:
  *(undefined4 *)p_Var2 = uStack_14;
  FUN_004243be();
  return uStack_14;
}


