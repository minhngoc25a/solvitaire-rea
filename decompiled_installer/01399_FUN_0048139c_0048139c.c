// Function: FUN_0048139c
// Entry: 0048139c
// Size: 42 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0048139c(uint param_1,uint param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  uint dwFlags;
  
  dwFlags = FUN_004813c6(param_1,param_2);
  MultiByteToWideChar(param_1,dwFlags,param_3,param_4,param_5,param_6);
  return;
}


