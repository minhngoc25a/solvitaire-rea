// Function: FUN_00418bd4
// Entry: 00418bd4
// Size: 71 bytes
// Thunk: false
// External: false


int * FUN_00418bd4(short *param_1,wchar_t *param_2)

{
  int *piVar1;
  int extraout_ECX;
  int extraout_EDX;
  
  if (*param_1 == 5) {
    piVar1 = FUN_0046a300(*(undefined4 **)(param_1 + 4),param_2);
    if (piVar1 == (int *)0x0) {
      piVar1 = FUN_0046a3e0(*(undefined4 **)(param_1 + 4),param_2,0);
    }
    else {
      FUN_00418c6b(extraout_ECX,extraout_EDX,(short *)piVar1);
    }
    *(undefined1 *)((int)piVar1 + 3) = *(undefined1 *)((int)param_1 + 3);
  }
  else {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


