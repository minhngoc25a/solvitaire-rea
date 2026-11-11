// Function: FUN_004818de
// Entry: 004818de
// Size: 49 bytes
// Thunk: false
// External: false


void FUN_004818de(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_00481dc9();
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00532084)(param_1,param_2,param_3,param_4);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047d96c();
}


