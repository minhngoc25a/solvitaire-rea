// Function: FUN_0041f910
// Entry: 0041f910
// Size: 198 bytes
// Thunk: false
// External: false


void FUN_0041f910(int *param_1,int param_2)

{
  short sVar1;
  undefined4 *puVar2;
  short *lpMem;
  int iVar3;
  byte *lpMem_00;
  char *lpMem_01;
  short *psVar4;
  
  puVar2 = (undefined4 *)FUN_004258d0(DAT_0054348c,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[6] == 0x19) {
      lpMem = FUN_004784c0(puVar2,0,-1,(int *)&param_1);
      if (lpMem != (short *)0x0) {
        iVar3 = FUN_0044c3e0((int)param_1,param_2);
        psVar4 = lpMem;
        do {
          sVar1 = *psVar4;
          psVar4 = psVar4 + 1;
          *(short *)((iVar3 - (int)lpMem) + -2 + (int)psVar4) = sVar1;
        } while (sVar1 != 0);
        HeapFree(DAT_00542264,0,lpMem);
      }
    }
    else if (puVar2[6] == 2) {
      lpMem_00 = FUN_00478690(puVar2,0,-1,(int *)&param_1);
      if (lpMem_00 != (byte *)0x0) {
        FUN_0044e730((LPCSTR)lpMem_00,param_2);
        HeapFree(DAT_00542264,0,lpMem_00);
        return;
      }
    }
    else {
      lpMem_01 = FUN_00478320(puVar2,0,-1,(int *)&param_1);
      if (lpMem_01 != (char *)0x0) {
        FUN_0044e5b0(lpMem_01,param_2);
        HeapFree(DAT_00542264,0,lpMem_01);
        return;
      }
    }
  }
  return;
}


