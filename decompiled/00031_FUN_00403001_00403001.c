// Function: FUN_00403001
// Entry: 00403001
// Size: 212 bytes
// Thunk: false
// External: false


undefined4 FUN_00403001(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  _SECURITY_ATTRIBUTES local_98;
  char local_8c [132];
  
  pcVar4 = local_8c;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  FUN_0040206e(0x17,local_8c);
  uVar3 = 1;
  if (local_8c[0] != '\0') {
    if (DAT_00410a2c != (FILE *)0x0) {
      fprintf(DAT_00410a2c,"Create mutex:\t%s\n",local_8c);
    }
    local_98.nLength = 0xc;
    local_98.bInheritHandle = 1;
    local_98.lpSecurityDescriptor = (LPVOID)0x0;
    CreateMutexA(&local_98,0,local_8c);
    DVar1 = GetLastError();
    uVar3 = 1;
    if (DVar1 == 0xb7) {
      if (DAT_00410a2c != (FILE *)0x0) {
        fprintf(DAT_00410a2c,"Error:\t\t%s\n","Instance already exists.");
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


