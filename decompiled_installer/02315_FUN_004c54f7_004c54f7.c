// Function: FUN_004c54f7
// Entry: 004c54f7
// Size: 62 bytes
// Thunk: false
// External: false


void FUN_004c54f7(void)

{
  uint uVar1;
  int local_8;
  
  if (DAT_00544ac4 == 0) {
    local_8 = 1;
    uVar1 = FUN_004c54bd();
    if ((char)uVar1 == '\0') {
      FUN_00481950((ulong)&local_8);
    }
    DAT_00544ac4 = (local_8 == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}


