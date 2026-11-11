// Function: FUN_00498810
// Entry: 00498810
// Size: 84 bytes
// Thunk: false
// External: false


void __cdecl FUN_00498810(int *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_3 != 0) || (param_4 <= param_2)) {
    uVar2 = param_4;
    uVar1 = __aulldiv(param_2,param_3,param_4,0);
    FUN_00498810(param_1,(uint)uVar1,(uint)((ulonglong)uVar1 >> 0x20),uVar2);
  }
  uVar1 = __aullrem(param_2,param_3,param_4,0);
  FUN_0048cf00(param_1,"0123456789abcdef"[(int)uVar1]);
  return;
}


