// Function: FUN_0040206e
// Entry: 0040206e
// Size: 250 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0040206e(uint param_1,undefined1 *param_2)

{
  char cVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  int iVar3;
  
  if ((DAT_00410024 != 0) && (DAT_00410a2c != (FILE *)0x0)) {
    fprintf(DAT_00410a2c,"Resource %d:\t",param_1);
  }
  hResInfo = FindResourceExA(DAT_004190e4,(LPCSTR)0xa,(LPCSTR)(param_1 & 0xffff),0x400);
  if (hResInfo == (HRSRC)0x0) {
    SetLastError(0);
    *param_2 = 0;
  }
  else {
    hResData = LoadResource(DAT_004190e4,hResInfo);
    if ((hResData != (HGLOBAL)0x0) && (pvVar2 = LockResource(hResData), pvVar2 != (LPVOID)0x0)) {
      iVar3 = 0;
      do {
        cVar1 = *(char *)((int)pvVar2 + iVar3);
        param_2[iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      } while (cVar1 != '\0');
      if (DAT_00410024 == 0) {
        return 1;
      }
      if (DAT_00410a2c == (FILE *)0x0) {
        return 1;
      }
      fprintf(DAT_00410a2c,"%s\n",param_2);
      return 1;
    }
  }
  if ((DAT_00410024 != 0) && (DAT_00410a2c != (FILE *)0x0)) {
    fputs("<NULL>\n",DAT_00410a2c);
  }
  return 0;
}


