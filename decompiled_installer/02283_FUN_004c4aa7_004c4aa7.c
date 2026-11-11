// Function: FUN_004c4aa7
// Entry: 004c4aa7
// Size: 175 bytes
// Thunk: false
// External: false


LPVOID __cdecl FUN_004c4aa7(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  if (param_1 == (int *)0x0) {
    pvVar4 = (LPVOID)0x0;
  }
  else {
    iVar6 = 0;
    iVar8 = *param_1;
    piVar3 = param_1;
    while (iVar8 != 0) {
      piVar3 = piVar3 + 1;
      iVar6 = iVar6 + 1;
      iVar8 = *piVar3;
    }
    pvVar4 = __calloc_base(iVar6 + 1,4);
    if (pvVar4 == (LPVOID)0x0) {
LAB_004c4b45:
                    /* WARNING: Subroutine does not return */
      FUN_0047d96c();
    }
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)0x0) {
      iVar8 = (int)pvVar4 - (int)param_1;
      do {
        pcVar1 = pcVar7 + 1;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        pvVar5 = __calloc_base((uint)(pcVar7 + (1 - (int)pcVar1)),1);
        *(LPVOID *)(iVar8 + (int)param_1) = pvVar5;
        FUN_004247be((LPVOID)0x0);
        if (*(int *)(iVar8 + (int)param_1) == 0) goto LAB_004c4b45;
        iVar6 = FUN_0047faad(*(char **)(iVar8 + (int)param_1),(int)(pcVar7 + (1 - (int)pcVar1)),
                             *param_1);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        pcVar7 = (char *)*param_1;
      } while (pcVar7 != (char *)0x0);
    }
    FUN_004247be((LPVOID)0x0);
  }
  return pvVar4;
}


