// Function: FUN_00479193
// Entry: 00479193
// Size: 90 bytes
// Thunk: false
// External: false


bool FUN_00479193(uint param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
                 uint *param_7,uint *param_8)

{
  int iVar1;
  _SYSTEMTIME local_14;
  
  iVar1 = FUN_00478dfd(param_1,param_2,&local_14);
  if (iVar1 != 0) {
    *param_3 = (uint)local_14.wYear;
    *param_4 = (uint)local_14.wMonth;
    *param_5 = (uint)local_14.wDay;
    *param_6 = (uint)local_14.wHour;
    *param_7 = (uint)local_14.wMinute;
    *param_8 = (uint)local_14.wSecond;
  }
  return iVar1 != 0;
}


