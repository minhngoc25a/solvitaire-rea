// Function: CreateProcessA
// Entry: 0040b8c8
// Size: 6 bytes
// Thunk: true
// External: false


BOOL CreateProcessA(LPCSTR lpApplicationName,LPSTR lpCommandLine,
                   LPSECURITY_ATTRIBUTES lpProcessAttributes,
                   LPSECURITY_ATTRIBUTES lpThreadAttributes,BOOL bInheritHandles,
                   DWORD dwCreationFlags,LPVOID lpEnvironment,LPCSTR lpCurrentDirectory,
                   LPSTARTUPINFOA lpStartupInfo,LPPROCESS_INFORMATION lpProcessInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateProcessA(lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,
                         bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,
                         lpStartupInfo,lpProcessInformation);
  return BVar1;
}


