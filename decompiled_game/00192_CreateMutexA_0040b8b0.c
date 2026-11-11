// Function: CreateMutexA
// Entry: 0040b8b0
// Size: 6 bytes
// Thunk: true
// External: false


HANDLE CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes,BOOL bInitialOwner,LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateMutexA(lpMutexAttributes,bInitialOwner,lpName);
  return pvVar1;
}


