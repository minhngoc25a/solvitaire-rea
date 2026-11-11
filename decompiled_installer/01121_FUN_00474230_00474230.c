// Function: FUN_00474230
// Entry: 00474230
// Size: 23 bytes
// Thunk: false
// External: false


void FUN_00474230(int param_1)

{
  if (*(code **)(param_1 + 0x5c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0047423f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x5c))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


