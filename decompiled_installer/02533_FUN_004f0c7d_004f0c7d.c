// Function: FUN_004f0c7d
// Entry: 004f0c7d
// Size: 194 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004f0c7d(char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_18;
  int local_8;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_004f0cc1:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = '\0';
          return 0;
        }
        if (param_3 != 0) {
          local_8 = param_4;
          pcVar3 = param_1;
          iVar4 = param_2;
          if (param_4 == -1) {
            do {
              cVar1 = pcVar3[param_3 - (int)param_1];
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              if (cVar1 == '\0') {
                return 0;
              }
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            iVar4 = 0;
          }
          else {
            do {
              cVar1 = pcVar3[param_3 - (int)param_1];
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              if (cVar1 == '\0') {
                return 0;
              }
              iVar4 = iVar4 + -1;
            } while ((iVar4 != 0) && (local_8 = local_8 + -1, local_8 != 0));
            if (local_8 == 0) {
              *pcVar3 = '\0';
            }
          }
          if (iVar4 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = '\0';
            return 0x50;
          }
          *param_1 = '\0';
          p_Var2 = FUN_0042470e();
          uStack_18 = 0x22;
          goto LAB_004f0cae;
        }
        *param_1 = '\0';
      }
    }
  }
  else if (param_1 != (char *)0x0) goto LAB_004f0cc1;
  p_Var2 = FUN_0042470e();
  uStack_18 = 0x16;
LAB_004f0cae:
  *(undefined4 *)p_Var2 = uStack_18;
  FUN_004243be();
  return uStack_18;
}


