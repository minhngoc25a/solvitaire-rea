// Function: FUN_00507afe
// Entry: 00507afe
// Size: 28 bytes
// Thunk: false
// External: false


void FUN_00507afe(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = ___vcrt_getptd();
  pcVar1 = *(code **)(iVar2 + 4);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00532084)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c09f0();
}


