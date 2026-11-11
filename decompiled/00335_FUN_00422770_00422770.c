// Function: FUN_00422770
// Entry: 00422770
// Size: 36 bytes
// Thunk: false
// External: false


int FUN_00422770(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  if (param_1 != (short *)0x0) {
    psVar1 = param_1 + 1;
    do {
      sVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (sVar2 != 0);
    return (int)param_1 - (int)psVar1 >> 1;
  }
  return 0;
}


