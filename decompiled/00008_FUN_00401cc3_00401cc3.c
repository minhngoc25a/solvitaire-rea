// Function: FUN_00401cc3
// Entry: 00401cc3
// Size: 94 bytes
// Thunk: false
// External: false


void __cdecl FUN_00401cc3(char *param_1,size_t param_2)

{
  int iVar1;
  char *pcVar2;
  char local_110 [264];
  
  pcVar2 = local_110;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  strncpy(local_110,param_1,param_2);
  strcat(local_110,"\\launch4j.log");
  fopen(local_110,"a");
  return;
}


