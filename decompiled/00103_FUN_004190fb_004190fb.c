// Function: FUN_004190fb
// Entry: 004190fb
// Size: 98 bytes
// Thunk: false
// External: false


void __fastcall FUN_004190fb(int param_1,int param_2,short *param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int extraout_EDX;
  undefined4 *puVar2;
  
  FUN_004193c1(param_1,param_2,param_3);
  if (param_4 != (undefined4 *)0x0) {
    for (puVar2 = (undefined4 *)*param_4; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      piVar1 = FUN_0046a8d1(param_3);
      if (piVar1 != (int *)0x0) {
        if ((param_5 == 0) || (param_4[0xb] == 0x15)) {
          FUN_00418f7a((int)piVar1,extraout_EDX,(short *)piVar1,param_4[0xb],param_4[10],
                       (double *)(puVar2 + 2));
        }
        else {
          FUN_00418d88((int)piVar1,extraout_EDX,(short *)piVar1,(int)(puVar2 + 2),0,(char *)param_5)
          ;
        }
      }
    }
  }
  return;
}


