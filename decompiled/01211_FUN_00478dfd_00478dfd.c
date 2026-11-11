// Function: FUN_00478dfd
// Entry: 00478dfd
// Size: 41 bytes
// Thunk: false
// External: false


void FUN_00478dfd(uint param_1,uint param_2,LPSYSTEMTIME param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  FILETIME local_c;
  
  bVar1 = FUN_00478d9b(param_1,param_2,&local_c.dwLowDateTime);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FileTimeToSystemTime(&local_c,param_3);
  }
  return;
}


