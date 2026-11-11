// Function: FUN_0041eb06
// Entry: 0041eb06
// Size: 37 bytes
// Thunk: false
// External: false


BOOL FUN_0041eb06(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  
  if ((param_1 == (LPCWSTR)0x0) || (param_2 == (LPCWSTR)0x0)) {
    BVar1 = 0;
  }
  else {
    BVar1 = CopyFileW(param_1,param_2,0);
  }
  return BVar1;
}


