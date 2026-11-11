// Function: MultiByteToWideChar
// Entry: 00454320
// Size: 6 bytes
// Thunk: true
// External: false


int MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                       LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00454320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}


