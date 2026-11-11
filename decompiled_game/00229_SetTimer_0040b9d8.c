// Function: SetTimer
// Entry: 0040b9d8
// Size: 6 bytes
// Thunk: true
// External: false


UINT_PTR SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc)

{
  UINT_PTR UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTimer(hWnd,nIDEvent,uElapse,lpTimerFunc);
  return UVar1;
}


