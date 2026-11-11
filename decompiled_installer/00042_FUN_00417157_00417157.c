// Function: FUN_00417157
// Entry: 00417157
// Size: 34 bytes
// Thunk: false
// External: false


void FUN_00417157(LPCWSTR param_1,LPCWSTR param_2)

{
  if (param_1 != (LPCWSTR)0x0) {
    if (param_2 == (LPCWSTR)0x0) {
      param_2 = L"";
    }
    SetEnvironmentVariableW(param_1,param_2);
  }
  return;
}


