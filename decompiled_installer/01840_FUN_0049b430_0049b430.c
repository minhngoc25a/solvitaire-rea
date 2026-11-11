// Function: FUN_0049b430
// Entry: 0049b430
// Size: 239 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049b430(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  undefined4 uStack_2c;
  undefined4 uStack_4;
  
  if ((param_3[2] != param_1[4]) && (param_1[4] != 0)) {
    pvVar1 = (LPVOID)*param_1;
    if ((code *)param_1[6] == (code *)0x0) {
      if ((param_2 == 0) || (*(code **)(param_2 + 4) == (code *)0x0)) {
        FUN_0047d191(pvVar1);
      }
      else {
        (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8),pvVar1);
      }
    }
    else {
      (*(code *)param_1[6])(pvVar1,param_2);
    }
    *param_1 = 0;
    param_1[1] = uStack_2c;
    param_1[2] = 0xffffffff;
    param_1[3] = 0xffffffff;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = uStack_4;
  }
  param_1[4] = param_3[2];
  uVar2 = param_3[1];
  param_1[2] = *param_3;
  param_1[3] = uVar2;
  if ((code *)param_3[2] == (code *)0x0) {
    return;
  }
  (*(code *)param_3[2])(param_1,param_2,param_3);
  return;
}


