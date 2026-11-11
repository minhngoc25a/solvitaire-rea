// Function: FUN_0041df30
// Entry: 0041df30
// Size: 66 bytes
// Thunk: false
// External: false


void FUN_0041df30(int param_1)

{
  LPWSTR lpBuffer;
  BOOL BVar1;
  DWORD local_8;
  
  lpBuffer = (LPWSTR)FUN_0044c3e0(0x400,param_1);
  local_8 = 0x400;
  BVar1 = GetUserNameW(lpBuffer,&local_8);
  if (BVar1 == 0) {
    FUN_00469d30(param_1);
  }
  else {
    FUN_0044c470(0x401 - local_8);
  }
  return;
}


