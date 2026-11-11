// Function: VirtualQuery
// Entry: 0040b8f0
// Size: 6 bytes
// Thunk: true
// External: false


SIZE_T VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}


