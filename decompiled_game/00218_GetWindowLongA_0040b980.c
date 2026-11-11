// Function: GetWindowLongA
// Entry: 0040b980
// Size: 6 bytes
// Thunk: true
// External: false


LONG GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}


