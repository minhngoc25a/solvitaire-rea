// Function: FUN_0047d0f8
// Entry: 0047d0f8
// Size: 94 bytes
// Thunk: false
// External: false


short * __cdecl FUN_0047d0f8(short *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  if (param_1 != (short *)0x0) {
    psVar2 = param_1;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    iVar3 = ((int)psVar2 - (int)(param_1 + 1) >> 1) + 1;
    psVar2 = (short *)FUN_00482949(iVar3 * 2);
    if (psVar2 != (short *)0x0) {
      iVar3 = FUN_0047f91c(psVar2,iVar3,(int)param_1);
      if (iVar3 == 0) {
        return psVar2;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (short *)0x0;
}


