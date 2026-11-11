// Function: FUN_00478e26
// Entry: 00478e26
// Size: 42 bytes
// Thunk: false
// External: false


longlong FUN_00478e26(SYSTEMTIME *param_1)

{
  BOOL BVar1;
  longlong lVar2;
  _FILETIME local_c;
  
  BVar1 = SystemTimeToFileTime(param_1,&local_c);
  if (BVar1 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = FUN_00478ddd(&local_c.dwLowDateTime);
  }
  return lVar2;
}


