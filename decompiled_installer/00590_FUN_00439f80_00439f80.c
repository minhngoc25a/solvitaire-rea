// Function: FUN_00439f80
// Entry: 00439f80
// Size: 195 bytes
// Thunk: false
// External: false


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 * __cdecl FUN_00439f80(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pContext != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x53ad);
  }
  if (param_2 == (int *)0x0) {
    FID_conflict___assert
              (L"pDeviceEnumerator != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x53ae);
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      piVar2 = (int *)0x1;
      goto LAB_00439ffc;
    }
    FID_conflict___assert
              (L"0",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x538b);
  }
  piVar2 = (int *)0x0;
LAB_00439ffc:
  iVar3 = 0;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
    (**(code **)(iVar3 + 8))(&stack0xffffffec);
    if (-1 < iVar1) {
      return &stack0xffffffec;
    }
  }
  return (undefined1 *)0x0;
}


