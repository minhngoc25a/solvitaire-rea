// Function: FUN_004054d0
// Entry: 004054d0
// Size: 94 bytes
// Thunk: false
// External: false


undefined4 FUN_004054d0(void)

{
  int in_EAX;
  void *pvVar1;
  size_t _Size;
  int iVar2;
  
  if (in_EAX != 0) {
    iVar2 = *(int *)(in_EAX + 0xc) + 1;
    _Size = iVar2 * 4;
    pvVar1 = malloc(_Size);
    *(void **)(in_EAX + 8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 3;
    }
    *(undefined4 *)(in_EAX + 4) = 0;
    if (0 < iVar2) {
      while( true ) {
        _Size = _Size - 4;
        *(undefined4 *)((int)pvVar1 + _Size) = 0;
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) break;
        pvVar1 = *(void **)(in_EAX + 8);
      }
    }
  }
  return 0;
}


