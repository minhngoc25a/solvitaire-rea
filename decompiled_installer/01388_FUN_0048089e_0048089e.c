// Function: FUN_0048089e
// Entry: 0048089e
// Size: 217 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048089e(int *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  __acrt_ptd *p_Var3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  
  *param_2 = 0;
  pcVar10 = (char *)0x0;
  piVar7 = param_1;
  if (*param_1 != 0) {
    do {
      pcVar5 = (char *)*piVar7;
      piVar7 = piVar7 + 1;
      pcVar2 = pcVar5 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar10 = pcVar5 + (int)(pcVar10 + (1 - (int)pcVar2));
    } while (*piVar7 != 0);
    if ((char *)0x1 < pcVar10) goto LAB_004808d9;
  }
  pcVar10 = (char *)0x1;
LAB_004808d9:
  pcVar2 = __calloc_base((uint)pcVar10,1);
  if (pcVar2 == (char *)0x0) {
    ___acrt_errno_map_os_error(8);
    p_Var3 = FUN_0042470e();
    uVar9 = 0xc;
    *(undefined4 *)p_Var3 = 0xc;
  }
  else {
    iVar4 = *param_1;
    pcVar5 = pcVar2;
    if (iVar4 != 0) {
      do {
        iVar4 = FUN_0047faad(pcVar5,(int)(pcVar2 + ((int)pcVar10 - (int)pcVar5)),iVar4);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pcVar6 = (char *)*param_1;
        pcVar8 = pcVar6 + 1;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        param_1 = param_1 + 1;
        pcVar8 = pcVar5 + ((int)pcVar6 - (int)pcVar8);
        *pcVar8 = ' ';
        pcVar5 = pcVar8 + 1;
        iVar4 = *param_1;
      } while (iVar4 != 0);
      *pcVar8 = '\0';
      *param_2 = pcVar2;
      FUN_004247be((LPVOID)0x0);
      return 0;
    }
    *param_2 = pcVar2;
    uVar9 = 0;
  }
  FUN_004247be((LPVOID)0x0);
  return uVar9;
}


