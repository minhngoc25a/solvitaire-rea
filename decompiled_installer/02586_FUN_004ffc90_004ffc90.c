// Function: FUN_004ffc90
// Entry: 004ffc90
// Size: 20 bytes
// Thunk: false
// External: false


void FUN_004ffc90(void)

{
  int iVar1;
  
  iVar1 = ___vcrt_getptd();
  if (0 < *(int *)(iVar1 + 0x18)) {
    iVar1 = ___vcrt_getptd();
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
  }
  return;
}


