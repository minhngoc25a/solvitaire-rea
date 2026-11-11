// Function: FUN_004894ef
// Entry: 004894ef
// Size: 83 bytes
// Thunk: false
// External: false


char * __cdecl FUN_004894ef(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00482949((SIZE_T)(pcVar4 + (1 - (int)(param_1 + 1))));
    if (pcVar2 != (char *)0x0) {
      iVar3 = FUN_0047faad(pcVar2,(int)(pcVar4 + (1 - (int)(param_1 + 1))),(int)param_1);
      if (iVar3 == 0) {
        return pcVar2;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (char *)0x0;
}


