// Function: FUN_00432dd0
// Entry: 00432dd0
// Size: 79 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_00432dd0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    *param_1 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0xff;
  param_1[3] = 0xff;
  return param_1;
}


