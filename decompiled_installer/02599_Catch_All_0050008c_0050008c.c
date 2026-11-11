// Function: Catch_All@0050008c
// Entry: 0050008c
// Size: 25 bytes
// Thunk: false
// External: false


void Catch_All_0050008c(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = ___vcrt_getptd();
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(unaff_EBP + 8);
  __CxxThrowException_8((int *)0x0,(byte *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


