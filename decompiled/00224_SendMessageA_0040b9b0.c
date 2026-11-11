// Function: SendMessageA
// Entry: 0040b9b0
// Size: 6 bytes
// Thunk: true
// External: false


LRESULT SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


