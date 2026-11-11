// Function: FUN_00424090
// Entry: 00424090
// Size: 144 bytes
// Thunk: false
// External: false


int FUN_00424090(undefined4 *param_1,short *param_2)

{
  SIZE_T dwBytes;
  short sVar1;
  LPVOID pvVar2;
  short *psVar3;
  int iVar4;
  
  if (param_2 != (short *)0x0) {
    psVar3 = param_2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar4 = (int)psVar3 - (int)(param_2 + 1) >> 1;
    dwBytes = iVar4 * 2 + 10;
    if ((LPVOID)*param_1 == (LPVOID)0x0) {
      pvVar2 = HeapAlloc(DAT_0054358c,0,dwBytes);
    }
    else {
      pvVar2 = HeapReAlloc(DAT_0054358c,0,(LPVOID)*param_1,dwBytes);
    }
    *param_1 = pvVar2;
    FUN_0047d0c0((int)pvVar2,(undefined4 *)param_2,iVar4);
    return iVar4 * 2 + 2;
  }
  if ((LPVOID)*param_1 != (LPVOID)0x0) {
    HeapFree(DAT_0054358c,0,(LPVOID)*param_1);
    *param_1 = 0;
  }
  return 2;
}


