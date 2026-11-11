// Function: FUN_00500a05
// Entry: 00500a05
// Size: 32 bytes
// Thunk: false
// External: false


void FUN_00500a05(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047da3b();
}


