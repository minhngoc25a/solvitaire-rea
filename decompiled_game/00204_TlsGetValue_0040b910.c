// Function: TlsGetValue
// Entry: 0040b910
// Size: 6 bytes
// Thunk: true
// External: false


LPVOID TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}


