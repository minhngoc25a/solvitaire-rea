// Function: convert_filetime_to_time_t<__int64>
// Entry: 0049a118
// Size: 135 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __int64 __cdecl convert_filetime_to_time_t<__int64>(struct _FILETIME,__int64)
   
   Library: Visual Studio 2019 Release */

__int64 __cdecl convert_filetime_to_time_t<__int64>(_FILETIME param_1,__int64 param_2)

{
  BOOL BVar1;
  __int64 _Var2;
  int local_2c;
  _SYSTEMTIME local_28;
  _SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  if ((((param_1.dwLowDateTime != 0) || (param_1.dwHighDateTime != 0)) &&
      (BVar1 = FileTimeToSystemTime(&param_1,&local_28), BVar1 != 0)) &&
     (BVar1 = SystemTimeToTzSpecificLocalTime((TIME_ZONE_INFORMATION *)0x0,&local_28,&local_18),
     BVar1 != 0)) {
    local_2c = -1;
    __crt_integer_traits<__int64>::
    loctotime<unsigned_short&,unsigned_short&,unsigned_short&,unsigned_short&,unsigned_short&,unsigned_short&,int>
              (&local_18.wYear,&local_18.wMonth,&local_18.wDay,&local_18.wHour,&local_18.wMinute,
               &local_18.wSecond,&local_2c);
  }
  _Var2 = FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return _Var2;
}


