// Function: FUN_00434f70
// Entry: 00434f70
// Size: 64 bytes
// Thunk: false
// External: false


void __cdecl FUN_00434f70(int param_1)

{
  if (param_1 != 0) {
    FUN_00433b50(param_1,(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3a8));
    if (*(char *)(param_1 + 0x2d4) != '\0') {
      FID_conflict___assert
                (L"pSound->ownsDataSource == 0",
                 L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
                 0x12944);
    }
  }
  return;
}


