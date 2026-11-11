// Function: FUN_0041903f
// Entry: 0041903f
// Size: 145 bytes
// Thunk: false
// External: false


double * __cdecl FUN_0041903f(short *param_1,int *param_2,int param_3,int param_4,double *param_5)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int extraout_EDX;
  
  iVar1 = FUN_00420390((int)(param_2 + 6),param_4);
  iVar1 = iVar1 + 1;
  if (0 < iVar1) {
    do {
      piVar2 = FUN_0046a8d1(param_1);
      if (piVar2 != (int *)0x0) {
        if (param_4 == *param_2) {
          if ((param_3 == 0) || (param_2[5] == 0x15)) {
            FUN_00418f7a(extraout_ECX,extraout_EDX,(short *)piVar2,param_2[5],param_2[1],param_5);
          }
          else {
            FUN_00418d88(extraout_ECX,extraout_EDX,(short *)piVar2,(int)param_5,0,(char *)param_3);
          }
          param_5 = (double *)((int)param_5 + param_2[1]);
        }
        else {
          FUN_004193c1(extraout_ECX,extraout_EDX,(short *)piVar2);
          param_5 = FUN_0041903f((short *)piVar2,param_2,param_3,param_4 + 1,param_5);
        }
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return param_5;
}


