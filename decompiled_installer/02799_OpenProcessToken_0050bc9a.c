// Function: OpenProcessToken
// Entry: 0050bc9a
// Size: 6 bytes
// Thunk: true
// External: false


BOOL OpenProcessToken(HANDLE ProcessHandle,DWORD DesiredAccess,PHANDLE TokenHandle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bc9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
  return BVar1;
}


