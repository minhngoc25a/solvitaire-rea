// Function: FUN_00435dd0
// Entry: 00435dd0
// Size: 112 bytes
// Thunk: false
// External: false


void __cdecl FUN_00435dd0(uint param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  uint local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = 0;
  local_18 = (ulonglong)param_1;
  local_10 = 0;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"notification.pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x48d2);
  }
  if (*(code **)((int)local_18 + 0x14) != (code *)0x0) {
    (**(code **)((int)local_18 + 0x14))(&local_18);
  }
  if ((*(code **)((int)local_18 + 0x18) != (code *)0x0) && (local_18._4_4_ == 1)) {
    (**(code **)((int)local_18 + 0x18))((int)local_18);
  }
  return;
}


