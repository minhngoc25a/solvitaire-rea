// Function: EnumWindows
// Entry: 0040b970
// Size: 6 bytes
// Thunk: true
// External: false


BOOL EnumWindows(WNDENUMPROC lpEnumFunc,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumWindows(lpEnumFunc,lParam);
  return BVar1;
}


