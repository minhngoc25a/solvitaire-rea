// Function: FUN_00420130
// Entry: 00420130
// Size: 129 bytes
// Thunk: false
// External: false


int FUN_00420130(short *param_1,byte *param_2,int param_3)

{
  short sVar1;
  char *lpMem;
  int iVar2;
  short *psVar3;
  SIZE_T dwBytes;
  
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  psVar3 = param_1;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  dwBytes = (int)psVar3 - (int)(param_1 + 1) >> 1;
  lpMem = HeapAlloc(DAT_00542264,0,dwBytes);
  if (lpMem != (char *)0x0) {
    iVar2 = 0;
    if (0 < (int)dwBytes) {
      do {
        lpMem[iVar2] = (char)param_1[iVar2];
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)dwBytes);
    }
    iVar2 = FUN_00479c50(lpMem,dwBytes,param_2,param_3);
    HeapFree(DAT_00542264,0,lpMem);
    return iVar2;
  }
  return 0;
}


