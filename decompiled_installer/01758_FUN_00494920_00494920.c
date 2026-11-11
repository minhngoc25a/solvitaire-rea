// Function: FUN_00494920
// Entry: 00494920
// Size: 60 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00494920(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1[0xe] == 2) {
    if (param_3 == 0) {
      return 0;
    }
    if ((code *)param_1[6] != (code *)0x0) {
      uVar2 = (*(code *)param_1[6])(param_1,param_2,param_3);
      uVar1 = *param_1;
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] + (uint)CARRY4(uVar1,param_3);
      return uVar2;
    }
  }
  return 0xffffffe2;
}


