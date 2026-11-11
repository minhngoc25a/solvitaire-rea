// Function: FUN_004c4b57
// Entry: 004c4b57
// Size: 189 bytes
// Thunk: false
// External: false


LPVOID __cdecl FUN_004c4b57(int *param_1)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  int *piVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  
  if (param_1 == (int *)0x0) {
    pvVar5 = (LPVOID)0x0;
  }
  else {
    iVar7 = 0;
    iVar9 = *param_1;
    piVar4 = param_1;
    while (iVar9 != 0) {
      piVar4 = piVar4 + 1;
      iVar7 = iVar7 + 1;
      iVar9 = *piVar4;
    }
    pvVar5 = __calloc_base(iVar7 + 1,4);
    if (pvVar5 == (LPVOID)0x0) {
LAB_004c4c03:
                    /* WARNING: Subroutine does not return */
      FUN_0047d96c();
    }
    psVar8 = (short *)*param_1;
    if (psVar8 != (short *)0x0) {
      iVar9 = (int)pvVar5 - (int)param_1;
      do {
        psVar1 = psVar8 + 1;
        do {
          sVar3 = *psVar8;
          psVar8 = psVar8 + 1;
        } while (sVar3 != 0);
        uVar2 = ((int)psVar8 - (int)psVar1 >> 1) + 1;
        pvVar6 = __calloc_base(uVar2,2);
        *(LPVOID *)(iVar9 + (int)param_1) = pvVar6;
        FUN_004247be((LPVOID)0x0);
        if (*(int *)(iVar9 + (int)param_1) == 0) goto LAB_004c4c03;
        iVar7 = FUN_0047f91c(*(short **)(iVar9 + (int)param_1),uVar2,*param_1);
        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        psVar8 = (short *)*param_1;
      } while (psVar8 != (short *)0x0);
    }
    FUN_004247be((LPVOID)0x0);
  }
  return pvVar5;
}


