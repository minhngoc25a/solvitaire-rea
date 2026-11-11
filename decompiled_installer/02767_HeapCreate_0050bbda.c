// Function: HeapCreate
// Entry: 0050bbda
// Size: 6 bytes
// Thunk: true
// External: false


HANDLE HeapCreate(DWORD flOptions,SIZE_T dwInitialSize,SIZE_T dwMaximumSize)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bbda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapCreate(flOptions,dwInitialSize,dwMaximumSize);
  return pvVar1;
}


