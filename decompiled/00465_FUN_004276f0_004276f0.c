// Function: FUN_004276f0
// Entry: 004276f0
// Size: 163 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004276f0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xfffffffe;
  }
  puVar1 = (undefined4 *)(param_1 + 0x34);
  if (puVar1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x40d7);
  }
  else {
    WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      pcVar2 = *(code **)(param_1 + uVar3 * 8);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(*(undefined4 *)(param_1 + 4 + uVar3 * 8),param_2,param_3);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  if (puVar1 == (undefined4 *)0x0) {
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x40e5);
    return 0;
  }
  SetEvent((HANDLE)*puVar1);
  return 0;
}


