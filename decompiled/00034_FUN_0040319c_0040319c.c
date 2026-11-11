// Function: FUN_0040319c
// Entry: 0040319c
// Size: 285 bytes
// Thunk: false
// External: false


void FUN_0040319c(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined1 *puVar4;
  char local_40c [1028];
  
  puVar4 = &DAT_00419168;
  if (DAT_00418d5c == '\0') {
    uVar3 = 0x66;
  }
  else {
    FUN_0040206e(0x67,&DAT_00419168);
    strcat(&DAT_00419168," ");
    strcat(&DAT_00419168,&DAT_00418c5c);
    if (DAT_00418ddc != '\0') {
      strcat(&DAT_00419168," - ");
      strcat(&DAT_00419168,&DAT_00418cdc);
    }
    if (DAT_00418c54 != 0) {
      strcat(&DAT_00419168," (64-bit)");
    }
    if (DAT_00418c58 != 0) {
      pcVar2 = local_40c;
      for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      iVar1 = FUN_0040206e(0x68,local_40c);
      if (iVar1 != 0) {
        strcat(&DAT_00419168,"\n");
        strcat(&DAT_00419168,local_40c);
      }
    }
    puVar4 = &DAT_00419568;
    uVar3 = 0x15;
  }
  FUN_0040206e(uVar3,puVar4);
  return;
}


