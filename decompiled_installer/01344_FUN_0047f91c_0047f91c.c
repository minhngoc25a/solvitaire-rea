// Function: FUN_0047f91c
// Entry: 0047f91c
// Size: 100 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0047f91c(short *param_1,int param_2,int param_3)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  undefined4 uStack_10;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      psVar3 = param_1;
      do {
        sVar1 = *(short *)((param_3 - (int)param_1) + (int)psVar3);
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        if (sVar1 == 0) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
      p_Var2 = FUN_0042470e();
      uStack_10 = 0x22;
      goto LAB_0047f944;
    }
    *param_1 = 0;
  }
  p_Var2 = FUN_0042470e();
  uStack_10 = 0x16;
LAB_0047f944:
  *(undefined4 *)p_Var2 = uStack_10;
  FUN_004243be();
  return uStack_10;
}


