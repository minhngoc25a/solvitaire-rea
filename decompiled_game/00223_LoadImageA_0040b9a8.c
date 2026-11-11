// Function: LoadImageA
// Entry: 0040b9a8
// Size: 6 bytes
// Thunk: true
// External: false


HANDLE LoadImageA(HINSTANCE hInst,LPCSTR name,UINT type,int cx,int cy,UINT fuLoad)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadImageA(hInst,name,type,cx,cy,fuLoad);
  return pvVar1;
}


