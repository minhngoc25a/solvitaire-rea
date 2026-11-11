// Function: FUN_00423250
// Entry: 00423250
// Size: 38 bytes
// Thunk: false
// External: false


int FUN_00423250(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  if (param_1 != (short *)0x0) {
    psVar1 = param_1 + 1;
    do {
      sVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (sVar2 != 0);
    return ((int)param_1 - (int)psVar1 >> 1) * 2;
  }
  return 0;
}


