// Function: FUN_004025e6
// Entry: 004025e6
// Size: 67 bytes
// Thunk: false
// External: false


void __cdecl FUN_004025e6(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (param_1[~uVar2 - 2] != '\\') {
    strcat(param_1,"\\");
  }
  strcat(param_1,param_2);
  return;
}


