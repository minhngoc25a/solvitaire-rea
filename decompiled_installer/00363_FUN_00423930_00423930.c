// Function: FUN_00423930
// Entry: 00423930
// Size: 58 bytes
// Thunk: false
// External: false


int FUN_00423930(short *param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  
  psVar1 = param_1;
  if ((param_2 != (short *)0x0) && (sVar2 = *param_2, sVar2 != 0)) {
    do {
      *psVar1 = sVar2;
      psVar1 = psVar1 + 1;
      sVar2 = *(short *)(((int)param_2 - (int)param_1) + (int)psVar1);
    } while (sVar2 != 0);
  }
  *psVar1 = 0;
  return (int)psVar1 - (int)param_1;
}


