// Function: CreatePipe
// Entry: 0040b8e0
// Size: 6 bytes
// Thunk: true
// External: false


BOOL CreatePipe(PHANDLE hReadPipe,PHANDLE hWritePipe,LPSECURITY_ATTRIBUTES lpPipeAttributes,
               DWORD nSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreatePipe(hReadPipe,hWritePipe,lpPipeAttributes,nSize);
  return BVar1;
}


