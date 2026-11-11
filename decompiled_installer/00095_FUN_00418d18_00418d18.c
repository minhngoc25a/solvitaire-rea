// Function: FUN_00418d18
// Entry: 00418d18
// Size: 64 bytes
// Thunk: false
// External: false


void FUN_00418d18(int *param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int extraout_EDX;
  
  if (param_1 == (int *)0xffffffff) {
    FUN_00425a07((int)DAT_00542b3c);
  }
  else {
    puVar1 = (undefined4 *)FUN_004258d0((int)DAT_00542b3c,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00418cfa(extraout_ECX,extraout_EDX,(short *)*puVar1);
      FUN_00425965(DAT_00542b3c,(int)param_1);
    }
  }
  return;
}


