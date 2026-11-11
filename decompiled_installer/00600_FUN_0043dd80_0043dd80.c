// Function: FUN_0043dd80
// Entry: 0043dd80
// Size: 126 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0043dd80(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pDevice != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x5f6d);
  }
  piVar1 = *(int **)(param_1 + 0xb50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0xb4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0xb48);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0xb44);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0xb40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return 0;
}


