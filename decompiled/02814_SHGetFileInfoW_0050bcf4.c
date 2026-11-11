// Function: SHGetFileInfoW
// Entry: 0050bcf4
// Size: 6 bytes
// Thunk: true
// External: false


DWORD_PTR SHGetFileInfoW(LPCWSTR pszPath,DWORD dwFileAttributes,SHFILEINFOW *psfi,UINT cbFileInfo,
                        UINT uFlags)

{
  DWORD_PTR DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SHGetFileInfoW(pszPath,dwFileAttributes,psfi,cbFileInfo,uFlags);
  return DVar1;
}


