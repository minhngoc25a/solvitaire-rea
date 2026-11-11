// Function: FUN_0050006c
// Entry: 0050006c
// Size: 32 bytes
// Thunk: false
// External: false


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_0050006c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = ___vcrt_getptd();
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00507afe();
    iVar1 = ___vcrt_getptd();
    *(undefined4 *)(iVar1 + 0x1c) = param_1;
    __CxxThrowException_8((int *)0x0,(byte *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


