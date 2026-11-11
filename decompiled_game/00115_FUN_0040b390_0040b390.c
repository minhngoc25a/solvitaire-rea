// Function: FUN_0040b390
// Entry: 0040b390
// Size: 59 bytes
// Thunk: false
// External: false


int __cdecl FUN_0040b390(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  puVar5 = (uint *)(param_1 + 0x14);
  puVar1 = puVar5 + *(int *)(param_1 + 0x10);
  if (puVar1 <= puVar5) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar4 = 0;
  while( true ) {
    if (uVar2 != 0) {
      iVar3 = 0;
      for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      return iVar4 + iVar3;
    }
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + 0x20;
    if (puVar1 <= puVar5) break;
    uVar2 = *puVar5;
  }
  return iVar4;
}


