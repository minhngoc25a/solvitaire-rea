// Function: FUN_00403e88
// Entry: 00403e88
// Size: 528 bytes
// Thunk: false
// External: false


void __cdecl FUN_00403e88(LPCSTR param_1,uint param_2)

{
  DWORD DVar1;
  bool bVar2;
  undefined *puVar3;
  LSTATUS LVar4;
  DWORD dwIndex;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  HKEY local_338;
  DWORD local_334;
  _FILETIME local_330;
  char local_328 [260];
  char local_224 [260];
  char local_120 [272];
  
  uVar6 = param_2 & 0x100;
  if (DAT_00410a2c != (FILE *)0x0) {
    puVar3 = &DAT_0040d540;
    if (uVar6 == 0) {
      puVar3 = &DAT_0040d543;
    }
    fprintf(DAT_00410a2c,"%s-bit search:\t%s...\n",puVar3,param_1);
  }
  LVar4 = RegOpenKeyExA((HKEY)0x80000002,param_1,0,uVar6 | 0x20019,&local_338);
  if (LVar4 == 0) {
    pcVar7 = local_328;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    pcVar7 = local_224;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    pcVar7 = local_120;
    for (iVar5 = 0x41; dwIndex = 0, iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    while( true ) {
      local_334 = 0x104;
      DVar1 = dwIndex + 1;
      LVar4 = RegEnumKeyExA(local_338,dwIndex,local_224,&local_334,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,&local_330);
      if (LVar4 != 0) break;
      strcpy(local_328,param_1);
      FUN_004025e6(local_328,local_224);
      if (DAT_00410a2c != (FILE *)0x0) {
        fprintf(DAT_00410a2c,"Check:\t\t%s\n",local_328);
      }
      FUN_004023b8(local_120,local_224);
      bVar2 = FUN_00403dc7(local_120,uVar6);
      if ((CONCAT31(extraout_var,bVar2) != 0) &&
         (iVar5 = FUN_0040293e(local_328,param_2), iVar5 != 0)) {
        strcpy(&DAT_00418e5c,local_120);
        DAT_00418c4c = param_2;
        if (DAT_00410a2c != (FILE *)0x0) {
          fprintf(DAT_00410a2c,"Match:\t\t%s\n",local_120);
        }
        break;
      }
      dwIndex = DVar1;
      if (DAT_00410a2c != (FILE *)0x0) {
        fprintf(DAT_00410a2c,"Ignore:\t\t%s\n",local_120);
      }
    }
    RegCloseKey(local_338);
  }
  return;
}


