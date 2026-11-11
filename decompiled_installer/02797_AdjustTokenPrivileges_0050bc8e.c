// Function: AdjustTokenPrivileges
// Entry: 0050bc8e
// Size: 6 bytes
// Thunk: true
// External: false


BOOL AdjustTokenPrivileges
               (HANDLE TokenHandle,BOOL DisableAllPrivileges,PTOKEN_PRIVILEGES NewState,
               DWORD BufferLength,PTOKEN_PRIVILEGES PreviousState,PDWORD ReturnLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bc8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AdjustTokenPrivileges
                    (TokenHandle,DisableAllPrivileges,NewState,BufferLength,PreviousState,
                     ReturnLength);
  return BVar1;
}


