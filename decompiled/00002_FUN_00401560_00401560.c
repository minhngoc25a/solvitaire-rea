// Function: FUN_00401560
// Entry: 00401560
// Size: 106 bytes
// Thunk: false
// External: false


bool FUN_00401560(LPCWSTR param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00423f50();
  FUN_00424040(&param_1,param_1);
  iVar1 = SHCreateDirectory((HWND)0x0,param_1);
  FUN_00424120(extraout_ECX,extraout_EDX,param_1);
  return (iVar1 == 0x50 || iVar1 == 0) || iVar1 == 0xb7;
}


