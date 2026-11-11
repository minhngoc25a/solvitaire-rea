// Function: FUN_00404214
// Entry: 00404214
// Size: 73 bytes
// Thunk: false
// External: false


bool FUN_00404214(void)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_00410024 != 0) && (DAT_00410a2c != (FILE *)0x0)) {
    fputs("registryJreSearch()\n",DAT_00410a2c);
  }
  bVar2 = false;
  if (DAT_00418d5c != '\0') {
    iVar1 = FUN_004040f7(&DAT_00410b34);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


