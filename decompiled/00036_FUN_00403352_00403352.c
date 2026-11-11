// Function: FUN_00403352
// Entry: 00403352
// Size: 126 bytes
// Thunk: false
// External: false


undefined4 FUN_00403352(void)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_110 [264];
  
  pcVar4 = local_110;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  strcpy(local_110,&DAT_00410b34);
  strcat(local_110,"\\bin");
  BVar1 = FUN_004032b9(local_110);
  uVar3 = 1;
  if (BVar1 == 0) {
    if (DAT_00410a2c != (FILE *)0x0) {
      fprintf(DAT_00410a2c,"Error:\t\t%s\n","appendToPathVar failed.");
    }
    uVar3 = 0;
  }
  return uVar3;
}


