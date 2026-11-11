// Function: FUN_0046eae0
// Entry: 0046eae0
// Size: 128 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046eae0(uint param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  uint *puVar1;
  
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      if (param_3 != (undefined4 *)0x0) {
        for (; param_4 != 0; param_4 = param_4 + -1) {
          FUN_0046eb60(param_1,(uint *)0x0,(uint *)*param_3);
          param_3 = param_3 + 1;
        }
      }
    }
    else if (param_4 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        do {
          puVar1 = (uint *)*param_3;
          param_3 = param_3 + 1;
          FUN_0046eb60(param_1,(uint *)*param_2,puVar1);
          param_4 = param_4 + -1;
          param_2 = param_2 + 1;
        } while (param_4 != 0);
        return;
      }
      do {
        FUN_0046eb60(param_1,(uint *)*param_2,(uint *)0x0);
        param_2 = param_2 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  return;
}


