// Function: FUN_004040f7
// Entry: 004040f7
// Size: 285 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004040f7(char *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if ((DAT_00410024 != 0) && (DAT_00410a2c != (FILE *)0x0)) {
    fputs("findRegistryJavaHome()\n",DAT_00410a2c);
  }
  if (DAT_00418c50 == 0) {
    FUN_00404098("SOFTWARE\\JavaSoft\\Java Runtime Environment");
  }
  FUN_00404098("SOFTWARE\\JavaSoft\\Java Development Kit");
  if (DAT_00418c50 == 0) {
    FUN_00404098("SOFTWARE\\JavaSoft\\JRE");
  }
  FUN_00404098("SOFTWARE\\JavaSoft\\JDK");
  if (DAT_00418c4c == 0) {
    if (DAT_00418c50 == 0) {
      FUN_00404098("SOFTWARE\\IBM\\Java Runtime Environment");
    }
    FUN_00404098("SOFTWARE\\IBM\\Java Development Kit");
  }
  if (DAT_00418c4c == 0) {
    if (DAT_00418c50 == 0) {
      FUN_00404098("SOFTWARE\\IBM\\Java2 Runtime Environment");
    }
    FUN_00404098("SOFTWARE\\IBM\\Java Development Kit");
  }
  uVar1 = 0;
  if (DAT_00418c4c != 0) {
    strcpy(param_1,&DAT_00418edc);
    if (DAT_00410a2c != (FILE *)0x0) {
      puVar2 = &DAT_0040d540;
      if ((DAT_00418c4c & 0x100) == 0) {
        puVar2 = &DAT_0040d543;
      }
      fprintf(DAT_00410a2c,"Runtime used:\t%s (%s-bit)\n",&DAT_00418e5c,puVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}


