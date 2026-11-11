// Function: FUN_00424040
// Entry: 00424040
// Size: 72 bytes
// Thunk: false
// External: false


void FUN_00424040(undefined4 *param_1,short *param_2)

{
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
    pvVar2 = HeapAlloc(DAT_0054358c,0,iVar4 * 2 + 10);
    *param_1 = pvVar2;
    FUN_0047d0c0((int)pvVar2,(undefined4 *)param_2,iVar4);
  }
  return;
}


