// Function: FUN_00478184
// Entry: 00478184
// Size: 104 bytes
// Thunk: false
// External: false


short * FUN_00478184(short *param_1)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  
  psVar3 = (short *)0x0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_0044be0a(param_1);
    psVar3 = HeapAlloc(DAT_00542264,0,uVar1 * 2 + 0x22);
    if (psVar3 != (short *)0x0) {
      FUN_0044ca75(psVar3,param_1);
      for (psVar2 = psVar3 + (uVar1 - 1);
          (psVar3 <= psVar2 && ((*psVar2 == 0x5c || (*psVar2 == 0x2f)))); psVar2 = psVar2 + -1) {
        *psVar2 = 0;
      }
    }
  }
  return psVar3;
}


