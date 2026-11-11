// Function: FUN_00405180
// Entry: 00405180
// Size: 139 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00405180(int param_1)

{
  int *_Memory;
  int *piVar1;
  
  if (DAT_00410050 == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00410054);
  if (DAT_0041004c == (int *)0x0) {
LAB_004051d0:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00410054);
  }
  else {
    _Memory = DAT_0041004c;
    if (*DAT_0041004c == param_1) {
      DAT_0041004c = (int *)DAT_0041004c[2];
    }
    else {
      do {
        piVar1 = _Memory;
        _Memory = (int *)piVar1[2];
        if (_Memory == (int *)0x0) goto LAB_004051d0;
      } while (*_Memory != param_1);
      piVar1[2] = _Memory[2];
    }
    free(_Memory);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00410054);
  }
  return 0;
}


