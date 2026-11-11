// Function: SetWindowPos
// Entry: 0040b9c8
// Size: 6 bytes
// Thunk: true
// External: false


BOOL SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  return BVar1;
}


