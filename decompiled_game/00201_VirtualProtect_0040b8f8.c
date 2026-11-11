// Function: VirtualProtect
// Entry: 0040b8f8
// Size: 6 bytes
// Thunk: true
// External: false


BOOL VirtualProtect(LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualProtect(lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}


