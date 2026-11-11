// Function: FUN_00403b64
// Entry: 00403b64
// Size: 348 bytes
// Thunk: false
// External: false


void __cdecl FUN_00403b64(HANDLE param_1,char *param_2,uint param_3,uint *param_4)

{
  BOOL BVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  DWORD nNumberOfBytesToRead;
  char *pcVar6;
  DWORD local_420;
  char local_41c [1036];
  
  nNumberOfBytesToRead = 0x400;
  pcVar6 = local_41c;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  pcVar6 = local_41c;
  do {
    BVar1 = ReadFile(param_1,pcVar6,nNumberOfBytesToRead,&local_420,(LPOVERLAPPED)0x0);
    if ((BVar1 == 0) || (local_420 == 0)) break;
    pcVar6 = pcVar6 + local_420;
    nNumberOfBytesToRead = nNumberOfBytesToRead - local_420;
  } while (nNumberOfBytesToRead != 0);
  if ((DAT_00410024 != 0) && (DAT_00410a2c != (FILE *)0x0)) {
    fprintf(DAT_00410a2c,"Java version output: %s\n",local_41c);
  }
  *param_2 = '\0';
  pcVar6 = strchr(local_41c,0x22);
  if (pcVar6 == (char *)0x0) {
    if (DAT_00410a2c == (FILE *)0x0) {
      return;
    }
    pcVar6 = "Cannot get version string: cannot find quote\n";
  }
  else {
    pcVar6 = pcVar6 + 1;
    pcVar2 = strchr(pcVar6,0x22);
    if (pcVar2 == (char *)0x0) {
      if (DAT_00410a2c == (FILE *)0x0) {
        return;
      }
      pcVar6 = "Cannot get version string: missing end quote\n";
    }
    else {
      uVar3 = (int)pcVar2 - (int)pcVar6;
      uVar5 = uVar3;
      pcVar2 = param_2;
      if (uVar3 < param_3) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar2 = pcVar2 + 1;
        }
        param_2[uVar3] = '\0';
        pcVar6 = strstr(local_41c,"64-Bit");
        uVar5 = 1;
        if (pcVar6 == (char *)0x0) {
          pcVar6 = strstr(local_41c,"64-bit");
          uVar5 = (uint)(pcVar6 != (char *)0x0);
        }
        *param_4 = uVar5;
        return;
      }
      if (DAT_00410a2c == (FILE *)0x0) {
        return;
      }
      pcVar6 = "Cannot get version string: data too large\n";
    }
  }
  fputs(pcVar6,DAT_00410a2c);
  return;
}


