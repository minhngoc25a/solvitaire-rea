// Function: FUN_00493a00
// Entry: 00493a00
// Size: 24 bytes
// Thunk: false
// External: false


int __cdecl FUN_00493a00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x300); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


