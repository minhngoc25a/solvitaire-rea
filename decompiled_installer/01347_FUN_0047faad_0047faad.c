// Function: FUN_0047faad
// Entry: 0047faad
// Size: 90 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0047faad(char *param_1,int param_2,int param_3)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;
  undefined4 uStack_10;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (int)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      p_Var2 = FUN_0042470e();
      uStack_10 = 0x22;
      goto LAB_0047fad3;
    }
    *param_1 = '\0';
  }
  p_Var2 = FUN_0042470e();
  uStack_10 = 0x16;
LAB_0047fad3:
  *(undefined4 *)p_Var2 = uStack_10;
  FUN_004243be();
  return uStack_10;
}


