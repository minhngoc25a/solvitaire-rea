// Function: FormatMessageA
// Entry: 0040b868
// Size: 6 bytes
// Thunk: true
// External: false


DWORD FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,
                    LPSTR lpBuffer,DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}


