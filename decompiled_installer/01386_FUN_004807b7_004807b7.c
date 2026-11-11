// Function: FUN_004807b7
// Entry: 004807b7
// Size: 99 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004807b7(char *param_1,int param_2,int param_3)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_10;
  
  if ((param_1 != (char *)0x0) && (pcVar3 = param_1, iVar4 = param_3, param_2 != 0)) {
    while (iVar4 != 0) {
      if (*pcVar3 == '\0') {
        iVar4 = param_3 - (int)pcVar3;
        do {
          cVar1 = pcVar3[iVar4];
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
        goto LAB_004807dd;
      }
      param_2 = param_2 + -1;
      pcVar3 = pcVar3 + 1;
      iVar4 = param_2;
    }
    *param_1 = '\0';
  }
  p_Var2 = FUN_0042470e();
  uStack_10 = 0x16;
LAB_004807dd:
  *(undefined4 *)p_Var2 = uStack_10;
  FUN_004243be();
  return uStack_10;
}


