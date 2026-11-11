// Function: GetMessageA
// Entry: 0040b9e0
// Size: 6 bytes
// Thunk: true
// External: false


BOOL GetMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax);
  return BVar1;
}


