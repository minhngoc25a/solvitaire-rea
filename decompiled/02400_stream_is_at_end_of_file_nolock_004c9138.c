// Function: stream_is_at_end_of_file_nolock
// Entry: 004c9138
// Size: 133 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl stream_is_at_end_of_file_nolock(class __crt_stdio_stream)
   
   Library: Visual Studio 2019 Release */

bool __cdecl stream_is_at_end_of_file_nolock(int *param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD unaff_ESI;
  LARGE_INTEGER local_14;
  DWORD local_c;
  int local_8;
  
  if (((uint)param_1[3] >> 3 & 1) != 0) {
    return true;
  }
  if (((((param_1[3] & 0xc0U) == 0) || (*param_1 != param_1[1])) &&
      (hFile = (HANDLE)FUN_004c58b7(param_1[4]), hFile != (HANDLE)0xffffffff)) &&
     ((BVar1 = SetFilePointerEx(hFile,(LARGE_INTEGER)(ZEXT48(&local_c) << 0x20),(PLARGE_INTEGER)0x1,
                                unaff_ESI), BVar1 != 0 &&
      (BVar1 = GetFileSizeEx(hFile,&local_14), BVar1 != 0)))) {
    if ((local_c == local_14.s.LowPart) && (local_8 == local_14.s.HighPart)) {
      return true;
    }
    return false;
  }
  return false;
}


