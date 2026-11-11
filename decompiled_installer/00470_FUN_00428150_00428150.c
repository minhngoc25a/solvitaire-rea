// Function: FUN_00428150
// Entry: 00428150
// Size: 100 bytes
// Thunk: false
// External: false


undefined4 * __cdecl
FUN_00428150(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,uint param_6)

{
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    param_1[3] = 0;
    param_1[7] = 0;
  }
  uVar1 = 8;
  if (param_6 < 8) {
    uVar1 = param_6;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined8 *)(param_1 + 4) = param_5;
  param_1[6] = uVar1;
  return param_1;
}


