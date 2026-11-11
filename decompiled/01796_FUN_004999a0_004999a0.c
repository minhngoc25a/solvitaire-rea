// Function: FUN_004999a0
// Entry: 004999a0
// Size: 102 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_004999a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined *param_5,
            undefined *param_6)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return -(uint)(param_4 != 0) & 0xffffffe7;
  }
  uVar1 = (*(code *)param_5)(param_1,param_2,param_3,param_4);
  if (uVar1 != 0xffffffe2) {
    uVar2 = (*(code *)param_6)(param_1,param_2,param_3,param_4);
    if (uVar2 != 0xffffffe2) {
      if (uVar2 == 0xffffffeb) {
        return uVar1;
      }
      if ((int)uVar2 < (int)uVar1) {
        uVar2 = uVar1;
      }
      return uVar2;
    }
  }
  return 0xffffffe2;
}


