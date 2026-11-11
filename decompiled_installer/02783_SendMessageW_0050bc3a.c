// Function: SendMessageW
// Entry: 0050bc3a
// Size: 6 bytes
// Thunk: true
// External: false


LRESULT SendMessageW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bc3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageW(hWnd,Msg,wParam,lParam);
  return LVar1;
}


