// Function: FUN_0040ae80
// Entry: 0040ae80
// Size: 63 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0040ae80(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(int *)(param_1 + 0x10) - iVar1;
  if (uVar2 == 0) {
    puVar3 = (uint *)(param_1 + 0x14) + iVar1;
    puVar4 = (uint *)(param_2 + 0x14 + iVar1 * 4);
    while( true ) {
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + -1;
      if (*puVar3 != *puVar4) break;
      if (puVar3 <= (uint *)(param_1 + 0x14)) {
        return 0;
      }
    }
    uVar2 = -(uint)(*puVar3 < *puVar4) | 1;
  }
  return uVar2;
}


