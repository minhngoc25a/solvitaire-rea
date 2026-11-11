// Function: FUN_00439040
// Entry: 00439040
// Size: 113 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00439040(int param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4d6e);
  }
  *param_3 = FUN_00439040;
  param_3[1] = &LAB_00438ff0;
  param_3[2] = &LAB_00438680;
  param_3[3] = &LAB_00438780;
  param_3[4] = &LAB_004388c0;
  param_3[5] = &LAB_00438820;
  param_3[6] = &LAB_00438b60;
  param_3[7] = &LAB_00438ba0;
  param_3[8] = &LAB_00438dd0;
  param_3[9] = &LAB_00438be0;
  param_3[10] = 0;
  return 0;
}


