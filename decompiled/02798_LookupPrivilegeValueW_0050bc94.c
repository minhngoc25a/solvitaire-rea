// Function: LookupPrivilegeValueW
// Entry: 0050bc94
// Size: 6 bytes
// Thunk: true
// External: false


BOOL LookupPrivilegeValueW(LPCWSTR lpSystemName,LPCWSTR lpName,PLUID lpLuid)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LookupPrivilegeValueW(lpSystemName,lpName,lpLuid);
  return BVar1;
}


