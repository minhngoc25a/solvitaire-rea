// Function: FUN_00430110
// Entry: 00430110
// Size: 185 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00430110(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(code **)(param_1 + 4) != (code *)0x0) {
    (**(code **)(param_1 + 4))(param_1);
  }
  if ((undefined4 *)(param_1 + 0x90) != (undefined4 *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x90));
  }
  if ((undefined4 *)(param_1 + 0x94) != (undefined4 *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x94));
  }
  pvVar1 = *(LPVOID *)(param_1 + 0xa4);
  if (pvVar1 != (LPVOID)0x0) {
    if ((undefined4 *)(param_1 + 0x80) == (undefined4 *)0x0) {
      FUN_0047d191(pvVar1);
    }
    else if (*(code **)(param_1 + 0x8c) != (code *)0x0) {
      (**(code **)(param_1 + 0x8c))(pvVar1,*(undefined4 *)(param_1 + 0x80));
    }
  }
  if (*(int *)(param_1 + 0x16c) == 0) {
    (**(code **)(param_1 + 0x13c))();
  }
  FreeLibrary(*(HMODULE *)(param_1 + 0x150));
  FreeLibrary(*(HMODULE *)(param_1 + 0x15c));
  FreeLibrary(*(HMODULE *)(param_1 + 0x130));
  if (((*(int *)(param_1 + 0x38) == param_1 + 0x3c) && (param_1 != -0x3c)) &&
     ((undefined4 *)(param_1 + 0x70) != (undefined4 *)0x0)) {
    CloseHandle(*(HANDLE *)(param_1 + 0x70));
  }
  return 0;
}


