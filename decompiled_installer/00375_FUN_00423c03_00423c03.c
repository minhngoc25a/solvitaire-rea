// Function: FUN_00423c03
// Entry: 00423c03
// Size: 90 bytes
// Thunk: false
// External: false


FARPROC FUN_00423c03(int *param_1,LPCWSTR param_2)

{
  undefined4 *puVar1;
  FARPROC pFVar2;
  CHAR local_108 [260];
  
  pFVar2 = (FARPROC)0x0;
  if ((param_2 != (LPCWSTR)0x0) &&
     (puVar1 = (undefined4 *)FUN_004258d0(DAT_0054357c,param_1), puVar1 != (undefined4 *)0x0)) {
    WideCharToMultiByte(0,0,param_2,-1,local_108,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    pFVar2 = GetProcAddress((HMODULE)*puVar1,local_108);
  }
  return pFVar2;
}


