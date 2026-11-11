// Function: GetWindowRect
// Entry: 0040b9b8
// Size: 6 bytes
// Thunk: true
// External: false


BOOL GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}


