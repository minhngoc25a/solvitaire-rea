// Function: FUN_00479aec
// Entry: 00479aec
// Size: 63 bytes
// Thunk: false
// External: false


void __cdecl FUN_00479aec(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar3 = (param_3 - 1U >> 2) + 1;
    puVar1 = (undefined1 *)(param_1 + 2);
    puVar2 = (undefined1 *)(param_2 + 2);
    do {
      puVar1[-2] = puVar2[-2];
      puVar1[-1] = puVar2[-1];
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      iVar3 = iVar3 + -1;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  return;
}


