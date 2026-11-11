// Function: FUN_00493320
// Entry: 00493320
// Size: 196 bytes
// Thunk: false
// External: false


void __cdecl FUN_00493320(int *param_1,int *param_2,undefined4 *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  while( true ) {
    pcVar3 = (char *)*param_1;
    cVar1 = *pcVar3;
    if (((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\n')) break;
    *param_1 = (int)(pcVar3 + 1);
  }
  *param_2 = (int)pcVar3;
  pcVar3 = (char *)*param_1;
  cVar1 = *pcVar3;
  while (((cVar1 != '\0' && (cVar1 != ',')) &&
         ((cVar1 != ':' && ((cVar1 != '\n' && (cVar1 != '#'))))))) {
    pcVar3 = pcVar3 + 1;
    *param_1 = (int)pcVar3;
    cVar1 = *pcVar3;
  }
  *param_4 = *pcVar3;
  pcVar3 = (char *)*param_1;
  pcVar2 = pcVar3;
  if (pcVar3 != (char *)*param_2) {
    do {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + -1;
        *param_3 = pcVar2;
        cVar1 = *pcVar2;
      } while (cVar1 == ' ');
    } while ((cVar1 == '\t') || (cVar1 == '\n'));
  }
  *param_3 = pcVar3;
  if (*param_4 == '#') {
    pcVar3 = (char *)*param_1;
    cVar1 = *pcVar3;
    while (((cVar1 != '\0' && (cVar1 != ',')) && (cVar1 != '\n'))) {
      pcVar3 = pcVar3 + 1;
      *param_1 = (int)pcVar3;
      cVar1 = *pcVar3;
    }
    *param_4 = *pcVar3;
  }
  if (*(char *)*param_1 != '\0') {
    *param_1 = (int)((char *)*param_1 + 1);
  }
  return;
}


