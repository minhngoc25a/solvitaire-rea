// Function: FUN_0047fe64
// Entry: 0047fe64
// Size: 225 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0047fe64(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *local_8;
  
  iVar5 = 0;
  cVar1 = *param_1;
  pcVar4 = param_1;
  while (cVar1 != '\0') {
    if (cVar1 != '=') {
      iVar5 = iVar5 + 1;
    }
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    cVar1 = *pcVar4;
  }
  puVar2 = __calloc_base(iVar5 + 1,4);
  local_8 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004247be((LPVOID)0x0);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + (int)pcVar4) {
      pcVar4 = param_1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + (1 - (int)(param_1 + 1));
      if (*param_1 != '=') {
        pcVar3 = __calloc_base((uint)pcVar4,1);
        if (pcVar3 == (char *)0x0) {
          free_environment<>(puVar2);
          FUN_004247be((LPVOID)0x0);
          FUN_004247be((LPVOID)0x0);
          return (undefined4 *)0x0;
        }
        iVar5 = FUN_0047faad(pcVar3,(int)pcVar4,(int)param_1);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *local_8 = pcVar3;
        local_8 = local_8 + 1;
        FUN_004247be((LPVOID)0x0);
      }
    }
    FUN_004247be((LPVOID)0x0);
  }
  return puVar2;
}


