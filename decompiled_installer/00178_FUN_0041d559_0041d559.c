// Function: FUN_0041d559
// Entry: 0041d559
// Size: 112 bytes
// Thunk: false
// External: false


void FUN_0041d559(int *param_1,WPARAM param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (int *)0xffffffff) {
    iVar1 = FUN_00423ccb(DAT_00542fa4);
    if (param_2 == 0xffffffff) {
      param_2 = DAT_00542fa8;
    }
    *(WPARAM *)(iVar1 + 8) = param_2;
  }
  else {
    puVar2 = (undefined4 *)FUN_004258d0(DAT_00542fa0,param_1);
    if (puVar2 != (undefined4 *)0x0) {
      if (*(code **)(puVar2[1] + 0x9c) == (code *)0x0) {
        if (param_2 == 0xffffffff) {
          param_2 = DAT_00542fa8;
        }
        SendMessageW((HWND)*puVar2,0x30,param_2,1);
      }
      else {
        (**(code **)(puVar2[1] + 0x9c))(puVar2,param_2);
      }
    }
  }
  return;
}


