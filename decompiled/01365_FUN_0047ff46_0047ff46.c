// Function: FUN_0047ff46
// Entry: 0047ff46
// Size: 285 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0047ff46(short *param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  undefined4 *puVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  undefined4 *local_c;
  
  iVar7 = 0;
  sVar2 = *param_1;
  psVar5 = param_1;
  while (sVar2 != 0) {
    if (sVar2 != 0x3d) {
      iVar7 = iVar7 + 1;
    }
    psVar6 = psVar5;
    do {
      sVar2 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar2 != 0);
    psVar5 = psVar5 + ((int)psVar6 - (int)(psVar5 + 1) >> 1) + 1;
    sVar2 = *psVar5;
  }
  puVar4 = __calloc_base(iVar7 + 1,4);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_004247be((LPVOID)0x0);
    puVar4 = (undefined4 *)0x0;
  }
  else {
    sVar2 = *param_1;
    local_c = puVar4;
    while (sVar2 != 0) {
      psVar5 = param_1;
      do {
        sVar3 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar3 != 0);
      uVar1 = ((int)psVar5 - (int)(param_1 + 1) >> 1) + 1;
      if (sVar2 != 0x3d) {
        psVar5 = __calloc_base(uVar1,2);
        if (psVar5 == (short *)0x0) {
          free_environment<>(puVar4);
          FUN_004247be((LPVOID)0x0);
          FUN_004247be((LPVOID)0x0);
          return (undefined4 *)0x0;
        }
        iVar7 = FUN_0047f91c(psVar5,uVar1,(int)param_1);
        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *local_c = psVar5;
        local_c = local_c + 1;
        FUN_004247be((LPVOID)0x0);
      }
      param_1 = param_1 + uVar1;
      sVar2 = *param_1;
    }
    FUN_004247be((LPVOID)0x0);
  }
  return puVar4;
}


