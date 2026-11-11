// Function: common_getenv_nolock<char>
// Entry: 0042496f
// Size: 109 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    char * __cdecl common_getenv_nolock<char>(char const * const)
   
   Library: Visual Studio 2019 Release */

char * __cdecl common_getenv_nolock<char>(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint _MaxCount;
  
  piVar2 = (int *)thunk_FUN_0047fe0c();
  if ((piVar2 != (int *)0x0) && (param_1 != (char *)0x0)) {
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _MaxCount = (int)pcVar5 - (int)(param_1 + 1);
    for (; pcVar5 = (char *)*piVar2, pcVar5 != (char *)0x0; piVar2 = piVar2 + 1) {
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (((_MaxCount < (uint)((int)pcVar4 - (int)(pcVar5 + 1))) && (pcVar5[_MaxCount] == '=')) &&
         (iVar3 = __strnicoll(pcVar5,param_1,_MaxCount), iVar3 == 0)) {
        return (char *)(*piVar2 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}


