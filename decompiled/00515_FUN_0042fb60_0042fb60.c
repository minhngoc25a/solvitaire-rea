// Function: FUN_0042fb60
// Entry: 0042fb60
// Size: 53 bytes
// Thunk: false
// External: false


void * __cdecl FUN_0042fb60(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
    return (void *)0x0;
  }
  _memset(param_1,0,0x7c);
  return param_1;
}


