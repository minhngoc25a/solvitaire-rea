// Function: FUN_0041d605
// Entry: 0041d605
// Size: 75 bytes
// Thunk: false
// External: false


void FUN_0041d605(int *param_1,LPCWSTR param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == (LPCWSTR)0x0) {
    param_2 = L"";
  }
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00475fd5();
    if (*(code **)(puVar1[1] + 0x1c) == (code *)0x0) {
      SetWindowTextW((HWND)*puVar1,param_2);
    }
    else {
      (**(code **)(puVar1[1] + 0x1c))(puVar1);
    }
    FUN_00475fde();
  }
  return;
}


