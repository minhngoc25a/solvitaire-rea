// Function: FUN_00435510
// Entry: 00435510
// Size: 91 bytes
// Thunk: false
// External: false


char * __cdecl FUN_00435510(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
    if (param_2 == (undefined4 *)0x0) {
      pcVar2 = (char *)FUN_00482949((SIZE_T)pcVar3);
    }
    else {
      if ((code *)param_2[1] == (code *)0x0) {
        return (char *)0x0;
      }
      pcVar2 = (char *)(*(code *)param_2[1])(pcVar3,*param_2);
    }
    if (pcVar2 != (char *)0x0) {
      FUN_00435340(pcVar2,(uint)pcVar3,(int)param_1);
      return pcVar2;
    }
  }
  return (char *)0x0;
}


