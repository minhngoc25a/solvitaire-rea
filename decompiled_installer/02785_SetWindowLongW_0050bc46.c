// Function: SetWindowLongW
// Entry: 0050bc46
// Size: 6 bytes
// Thunk: true
// External: false


LONG SetWindowLongW(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bc46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongW(hWnd,nIndex,dwNewLong);
  return LVar1;
}


