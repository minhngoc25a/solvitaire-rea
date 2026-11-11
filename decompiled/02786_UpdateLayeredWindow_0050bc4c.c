// Function: UpdateLayeredWindow
// Entry: 0050bc4c
// Size: 6 bytes
// Thunk: true
// External: false


BOOL UpdateLayeredWindow(HWND hWnd,HDC hdcDst,POINT *pptDst,SIZE *psize,HDC hdcSrc,POINT *pptSrc,
                        COLORREF crKey,BLENDFUNCTION *pblend,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0050bc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateLayeredWindow(hWnd,hdcDst,pptDst,psize,hdcSrc,pptSrc,crKey,pblend,dwFlags);
  return BVar1;
}


