// Function: FUN_0041c7f3
// Entry: 0041c7f3
// Size: 63 bytes
// Thunk: false
// External: false


void FUN_0041c7f3(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int nCmdShow;
  
  puVar1 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(code **)(puVar1[1] + 0x5c) == (code *)0x0) {
      if (param_2 == 0) {
        nCmdShow = 5;
      }
      else {
        nCmdShow = 0;
      }
      ShowWindow((HWND)*puVar1,nCmdShow);
    }
    else {
      (**(code **)(puVar1[1] + 0x5c))(puVar1,param_2);
    }
  }
  return;
}


