// Function: FUN_0042fb10
// Entry: 0042fb10
// Size: 80 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042fb10(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x4137);
    return 0xfffffffe;
  }
  DVar1 = WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  if (DVar1 == 0) {
    return 0;
  }
  if (DVar1 == 0x102) {
    return 0xffffffde;
  }
  DVar1 = GetLastError();
  uVar2 = FUN_00435680(DVar1);
  return uVar2;
}


