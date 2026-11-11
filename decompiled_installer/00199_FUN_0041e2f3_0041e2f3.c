// Function: FUN_0041e2f3
// Entry: 0041e2f3
// Size: 97 bytes
// Thunk: false
// External: false


void FUN_0041e2f3(int param_1)

{
  LPVOID pvVar1;
  HACCEL pHVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 2;
  pvVar1 = HeapAlloc(DAT_00542264,0,0xc);
  *(LPVOID *)(param_1 + 4) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 2) = 9;
  *(undefined2 *)(*(int *)(param_1 + 4) + 4) = 0xfa01;
  **(undefined1 **)(param_1 + 4) = 3;
  *(undefined2 *)(*(int *)(param_1 + 4) + 8) = 9;
  *(undefined2 *)(*(int *)(param_1 + 4) + 10) = 0xfa02;
  *(undefined1 *)(*(int *)(param_1 + 4) + 6) = 7;
  pHVar2 = CreateAcceleratorTableW(*(LPACCEL *)(param_1 + 4),*(int *)(param_1 + 0x10));
  *(HACCEL *)(param_1 + 8) = pHVar2;
  return;
}


