// Function: FUN_00405e90
// Entry: 00405e90
// Size: 79 bytes
// Thunk: false
// External: false


undefined4 FUN_00405e90(void)

{
  int *piVar1;
  
  FUN_00423f50();
  FUN_0041eb78(DAT_005423d4,(wchar_t *)&DAT_005361c0,3);
  piVar1 = DAT_005423d0;
  if (DAT_005423d0 != (int *)0x0) {
    FUN_00423f50();
    (**(code **)(*piVar1 + 8))(piVar1);
    CoUninitialize();
  }
  return 0;
}


