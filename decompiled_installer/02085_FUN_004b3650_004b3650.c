// Function: FUN_004b3650
// Entry: 004b3650
// Size: 110 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b3650(int param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x54);
  *(undefined4 **)(param_1 + 0x1b4) = puVar1;
  iVar2 = 0;
  *puVar1 = &LAB_004b36c0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc4) + 0x54);
    puVar1 = puVar1 + 0xb;
    do {
      _Dst = (void *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
      *puVar3 = _Dst;
      _memset(_Dst,0,0x100);
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x16;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return;
}


