// Function: FUN_00477069
// Entry: 00477069
// Size: 78 bytes
// Thunk: false
// External: false


void FUN_00477069(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  LPVOID pvVar4;
  
  puVar2 = (undefined4 *)FUN_00423ccb(DAT_00542fa4);
  piVar1 = puVar2 + 3;
  if (puVar2[4] == puVar2[5]) {
    iVar3 = puVar2[5] + 10;
    puVar2[5] = iVar3;
    pvVar4 = HeapReAlloc(DAT_00542264,8,(LPVOID)*piVar1,iVar3 * 4);
    *piVar1 = (int)pvVar4;
  }
  *(undefined4 *)(*piVar1 + puVar2[4] * 4) = *puVar2;
  puVar2[4] = puVar2[4] + 1;
  *puVar2 = param_1;
  return;
}


