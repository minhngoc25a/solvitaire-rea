// Function: FUN_004d0fa0
// Entry: 004d0fa0
// Size: 132 bytes
// Thunk: false
// External: false


void __cdecl FUN_004d0fa0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0x11e;
  puVar1 = (undefined2 *)(param_1 + 0x94);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  iVar2 = 0x1e;
  puVar1 = (undefined2 *)(param_1 + 0x988);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  iVar2 = 0x13;
  puVar1 = (undefined2 *)(param_1 + 0xa7c);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined2 *)(param_1 + 0x494) = 1;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  return;
}


