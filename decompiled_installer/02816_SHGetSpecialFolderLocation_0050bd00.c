// Function: SHGetSpecialFolderLocation
// Entry: 0050bd00
// Size: 6 bytes
// Thunk: true
// External: false


HRESULT SHGetSpecialFolderLocation(HWND hwnd,int csidl,LPITEMIDLIST *ppidl)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SHGetSpecialFolderLocation(hwnd,csidl,ppidl);
  return HVar1;
}


