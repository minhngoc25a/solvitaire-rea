// Function: FindWindowExA
// Entry: 0040b988
// Size: 6 bytes
// Thunk: true
// External: false


HWND FindWindowExA(HWND hWndParent,HWND hWndChildAfter,LPCSTR lpszClass,LPCSTR lpszWindow)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowExA(hWndParent,hWndChildAfter,lpszClass,lpszWindow);
  return pHVar1;
}


