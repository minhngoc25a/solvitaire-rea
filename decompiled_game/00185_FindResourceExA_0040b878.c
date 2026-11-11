// Function: FindResourceExA
// Entry: 0040b878
// Size: 6 bytes
// Thunk: true
// External: false


HRSRC FindResourceExA(HMODULE hModule,LPCSTR lpType,LPCSTR lpName,WORD wLanguage)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceExA(hModule,lpType,lpName,wLanguage);
  return pHVar1;
}


