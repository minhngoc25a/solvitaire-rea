// Function: FUN_00403dc7
// Entry: 00403dc7
// Size: 193 bytes
// Thunk: false
// External: false


bool __cdecl FUN_00403dc7(char *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  bool bVar4;
  
  if (DAT_00418d5c != '\0') {
    iVar1 = strcmp(param_1,&DAT_00418d5c);
    if (iVar1 < 0) {
      bVar4 = false;
      goto LAB_00403e3a;
    }
  }
  if (DAT_00418ddc != '\0') {
    bVar4 = false;
    iVar1 = strcmp(param_1,&DAT_00418ddc);
    if (0 < iVar1) goto LAB_00403e3a;
  }
  if (((DAT_00418c54 == 0) || (bVar4 = false, param_2 != 0)) && (bVar4 = true, DAT_00410018 != 0)) {
    bVar4 = param_2 == 0;
  }
LAB_00403e3a:
  if (DAT_00410a2c != (FILE *)0x0) {
    pcVar3 = "OK";
    if (!bVar4) {
      pcVar3 = "Ignore";
    }
    puVar2 = &DAT_0040d540;
    if (param_2 == 0) {
      puVar2 = &DAT_0040d543;
    }
    fprintf(DAT_00410a2c,"Version string: %s / %s-Bit (%s)\n",param_1,puVar2,pcVar3);
  }
  return bVar4;
}


