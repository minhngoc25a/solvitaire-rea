// Function: FUN_0041915d
// Entry: 0041915d
// Size: 117 bytes
// Thunk: false
// External: false


void __fastcall FUN_0041915d(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int *piVar1;
  double *pdVar2;
  int extraout_ECX;
  int extraout_EDX;
  
  FUN_004193e7(param_1,param_2,param_3);
  if (param_4 != (int *)0x0) {
    FUN_0046a7e0(param_4);
    FUN_0046a600(param_4);
    while( true ) {
      pdVar2 = (double *)FUN_0046a560(param_4);
      if (pdVar2 == (double *)0x0) break;
      piVar1 = FUN_00418bd4(param_3,*(wchar_t **)(*param_4 + 4));
      if (piVar1 != (int *)0x0) {
        if ((param_5 == 0) || (param_4[8] == 0x15)) {
          FUN_00418f7a(extraout_ECX,extraout_EDX,(short *)piVar1,param_4[8],param_4[7],pdVar2);
        }
        else {
          FUN_00418d88(extraout_ECX,extraout_EDX,(short *)piVar1,(int)pdVar2,0,(char *)param_5);
        }
      }
    }
    FUN_0046a820(param_4);
  }
  return;
}


