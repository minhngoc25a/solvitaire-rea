// Function: FUN_0042ef40
// Entry: 0042ef40
// Size: 74 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0042ef40(int *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*(code **)(*param_1 + 4) == (code *)0x0) {
    return 0xffffffe3;
  }
  if (((uint)param_1[5] <= param_3) && ((param_3 != param_1[5] || ((uint)param_1[4] < param_2)))) {
    return 0xfffffffd;
  }
  uVar1 = (**(code **)(*param_1 + 4))
                    (param_1,param_2 + param_1[2],
                     param_1[3] + param_3 + (uint)CARRY4(param_2,param_1[2]));
  return uVar1;
}


