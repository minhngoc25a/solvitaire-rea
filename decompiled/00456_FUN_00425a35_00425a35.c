// Function: FUN_00425a35
// Entry: 00425a35
// Size: 43 bytes
// Thunk: false
// External: false


void FUN_00425a35(DWORD param_1)

{
  if (-1 < (int)param_1) {
    if (DAT_0054359c == 0) {
      timeBeginPeriod(1);
      DAT_0054359c = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00425a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Sleep(param_1);
    return;
  }
  return;
}


