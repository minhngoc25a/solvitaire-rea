// Function: FUN_004030d5
// Entry: 004030d5
// Size: 168 bytes
// Thunk: false
// External: false


void __cdecl FUN_004030d5(char *param_1,size_t param_2)

{
  int iVar1;
  char *pcVar2;
  char local_214 [260];
  char local_110 [260];
  
  pcVar2 = local_214;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  pcVar2 = local_110;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  GetCurrentDirectoryA(0x104,&DAT_00418fe0);
  iVar1 = FUN_0040206e(8,local_110);
  if (iVar1 != 0) {
    strncpy(local_214,param_1,param_2);
    FUN_004025e6(local_214,local_110);
    _chdir(local_214);
    if (DAT_00410a2c != (FILE *)0x0) {
      fprintf(DAT_00410a2c,"Working dir:\t%s\n",local_214);
    }
  }
  return;
}


