// Function: FUN_0042be10
// Entry: 0042be10
// Size: 76 bytes
// Thunk: false
// External: false


void * __cdecl FUN_0042be10(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    _memset(param_1,0,0x54);
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 1;
  return param_1;
}


