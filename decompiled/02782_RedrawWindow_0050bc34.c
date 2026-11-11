// Function: RedrawWindow
// Entry: 0050bc34
// Size: 6 bytes
// Thunk: true
// External: false


BOOL RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return BVar1;
}


