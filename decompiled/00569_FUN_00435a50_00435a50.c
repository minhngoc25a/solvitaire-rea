// Function: FUN_00435a50
// Entry: 00435a50
// Size: 68 bytes
// Thunk: false
// External: false


FARPROC __cdecl FUN_00435a50(int param_1,HMODULE param_2,LPCSTR param_3)

{
  FARPROC pFVar1;
  
  FUN_004277a0(param_1,4,0x52b410);
  pFVar1 = GetProcAddress(param_2,param_3);
  if (pFVar1 == (FARPROC)0x0) {
    FUN_004277a0(param_1,2,0x52b424);
  }
  return pFVar1;
}


