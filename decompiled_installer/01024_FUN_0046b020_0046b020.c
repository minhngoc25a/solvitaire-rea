// Function: FUN_0046b020
// Entry: 0046b020
// Size: 228 bytes
// Thunk: false
// External: false


undefined4 *
FUN_0046b020(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4,int param_5)

{
  undefined4 *lpMem;
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0046a620((int *)*param_4);
  lpMem = HeapAlloc(DAT_00542264,0,0x3c);
  if (lpMem != (undefined4 *)0x0) {
    if (param_5 < 1) {
      param_5 = 1;
    }
    pvVar1 = HeapAlloc(DAT_00542264,8,param_5 * 4);
    lpMem[1] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      lpMem[8] = param_2;
      lpMem[9] = param_5;
      *lpMem = 0;
      lpMem[7] = param_1;
      lpMem[4] = param_3;
      lpMem[10] = 0;
      lpMem[0xb] = 0;
      lpMem[0xc] = param_4;
      lpMem[0xd] = 0;
      iVar2 = FUN_0047a193(param_3);
      if (iVar2 != 0) {
        lpMem[0xb] = lpMem[0xb] | 2;
      }
      puVar3 = FUN_00478910(param_1 + 8U,0x10,0x10000,4);
      lpMem[0xe] = puVar3;
      pvVar1 = HeapAlloc(DAT_00542264,8,param_1 + 8U);
      lpMem[3] = pvVar1;
      *(undefined2 **)((int)pvVar1 + 4) = &DAT_0052ef5c;
      *param_4 = lpMem;
      return lpMem;
    }
    HeapFree(DAT_00542264,0,lpMem);
  }
  return (undefined4 *)0x0;
}


