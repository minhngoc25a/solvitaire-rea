// Function: ExitWindowsEx
// Entry: 0050bc04
// Size: 6 bytes
// Thunk: true
// External: false


BOOL ExitWindowsEx(UINT uFlags,DWORD dwReason)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExitWindowsEx(uFlags,dwReason);
  return BVar1;
}


