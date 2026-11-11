// Function: CreateMutexW
// Entry: 0050bb92
// Size: 6 bytes
// Thunk: true
// External: false


HANDLE CreateMutexW(LPSECURITY_ATTRIBUTES lpMutexAttributes,BOOL bInitialOwner,LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bb92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateMutexW(lpMutexAttributes,bInitialOwner,lpName);
  return pvVar1;
}


