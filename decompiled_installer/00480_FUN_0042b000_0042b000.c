// Function: FUN_0042b000
// Entry: 0042b000
// Size: 92 bytes
// Thunk: false
// External: false


undefined4 * __cdecl
FUN_0042b000(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"sz == 0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x2fbb);
  }
  else {
    param_1[5] = 0;
  }
  uVar1 = DAT_0050c098;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_1 = param_2;
  param_1[3] = param_5;
  param_1[4] = 4;
  *(undefined8 *)(param_1 + 6) = uVar1;
  return param_1;
}


