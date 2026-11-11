// Function: LocalFree
// Entry: 0040b870
// Size: 6 bytes
// Thunk: true
// External: false


HLOCAL LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


