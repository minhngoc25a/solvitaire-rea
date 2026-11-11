// Function: FUN_00493a20
// Entry: 00493a20
// Size: 30 bytes
// Thunk: false
// External: false


int __cdecl FUN_00493a20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x300);
  *(undefined4 **)(param_1 + 0x304) = puVar1;
  iVar2 = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


