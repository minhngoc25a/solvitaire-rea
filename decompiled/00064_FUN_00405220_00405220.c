// Function: FUN_00405220
// Entry: 00405220
// Size: 148 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00405220(undefined4 param_1,int param_2)

{
  if (param_2 != 1) {
    if (param_2 == 0) {
      if (DAT_00410050 != 0) {
        FUN_00405080();
      }
      if (DAT_00410050 == 1) {
        DAT_00410050 = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00410054);
      }
    }
    else if ((param_2 == 3) && (DAT_00410050 != 0)) {
      FUN_00405080();
    }
    return 1;
  }
  if (DAT_00410050 == 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00410054);
  }
  DAT_00410050 = 1;
  return 1;
}


