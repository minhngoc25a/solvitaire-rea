// Function: FUN_00435a10
// Entry: 00435a10
// Size: 64 bytes
// Thunk: false
// External: false


HMODULE __cdecl FUN_00435a10(int param_1,LPCSTR param_2)

{
  HMODULE pHVar1;
  
  FUN_004277a0(param_1,4,0x52b3a8);
  pHVar1 = LoadLibraryA(param_2);
  if (pHVar1 == (HMODULE)0x0) {
    FUN_004277a0(param_1,3,0x52b3c0);
  }
  return pHVar1;
}


