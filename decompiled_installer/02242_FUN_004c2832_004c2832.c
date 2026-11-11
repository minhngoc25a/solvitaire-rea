// Function: FUN_004c2832
// Entry: 004c2832
// Size: 243 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004c2832(short *param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_18;
  int local_8;
  
  if (param_4 == 0) {
    if (param_1 != (short *)0x0) goto LAB_004c2877;
    if (param_2 != 0) goto LAB_004c285d;
    goto LAB_004c291e;
  }
  if (param_1 != (short *)0x0) {
LAB_004c2877:
    if (param_2 != 0) {
      if ((param_4 == 0) || (param_3 != (short *)0x0)) {
        local_8 = param_4;
        psVar3 = param_1;
        iVar5 = param_2;
        do {
          if (*psVar3 == 0) {
            if (param_4 != -1) {
              if (param_4 == 0) goto LAB_004c28eb;
              goto LAB_004c28ca;
            }
            iVar4 = (int)param_3 - (int)psVar3;
            goto LAB_004c28b0;
          }
          psVar3 = psVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *param_1 = 0;
    }
  }
LAB_004c285d:
  p_Var2 = FUN_0042470e();
  uStack_18 = 0x16;
  goto LAB_004c2864;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
LAB_004c28b0:
    sVar1 = *(short *)(iVar4 + (int)psVar3);
    *psVar3 = sVar1;
    psVar3 = psVar3 + 1;
    if (sVar1 == 0) break;
  }
  goto LAB_004c28f2;
  while ((iVar5 = iVar5 + -1, iVar5 != 0 && (local_8 = local_8 + -1, local_8 != 0))) {
LAB_004c28ca:
    sVar1 = *param_3;
    param_3 = param_3 + 1;
    *psVar3 = sVar1;
    psVar3 = psVar3 + 1;
    if (sVar1 == 0) goto LAB_004c291e;
  }
LAB_004c28eb:
  if (local_8 == 0) {
    *psVar3 = 0;
  }
LAB_004c28f2:
  if (iVar5 == 0) {
    if (param_4 == -1) {
      param_1[param_2 + -1] = 0;
      uStack_18 = 0x50;
    }
    else {
      *param_1 = 0;
      p_Var2 = FUN_0042470e();
      uStack_18 = 0x22;
LAB_004c2864:
      *(undefined4 *)p_Var2 = uStack_18;
      FUN_004243be();
    }
  }
  else {
LAB_004c291e:
    uStack_18 = 0;
  }
  return uStack_18;
}


