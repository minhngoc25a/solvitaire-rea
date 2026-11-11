// Function: ShellExecuteA
// Entry: 0040ba20
// Size: 6 bytes
// Thunk: true
// External: false


HINSTANCE ShellExecuteA(HWND hwnd,LPCSTR lpOperation,LPCSTR lpFile,LPCSTR lpParameters,
                       LPCSTR lpDirectory,INT nShowCmd)

{
  HINSTANCE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ba20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,nShowCmd);
  return pHVar1;
}


