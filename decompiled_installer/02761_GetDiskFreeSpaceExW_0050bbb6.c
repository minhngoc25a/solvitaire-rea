// Function: GetDiskFreeSpaceExW
// Entry: 0050bbb6
// Size: 6 bytes
// Thunk: true
// External: false


BOOL GetDiskFreeSpaceExW(LPCWSTR lpDirectoryName,PULARGE_INTEGER lpFreeBytesAvailableToCaller,
                        PULARGE_INTEGER lpTotalNumberOfBytes,
                        PULARGE_INTEGER lpTotalNumberOfFreeBytes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bbb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDiskFreeSpaceExW(lpDirectoryName,lpFreeBytesAvailableToCaller,lpTotalNumberOfBytes,
                              lpTotalNumberOfFreeBytes);
  return BVar1;
}


