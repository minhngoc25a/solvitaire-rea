// Function: FUN_00479fd0
// Entry: 00479fd0
// Size: 78 bytes
// Thunk: false
// External: false


void FUN_00479fd0(int *param_1,int param_2,uint param_3)

{
  if (((param_3 & 0x10000) != 0) && (param_1 != (int *)0x0)) {
    (**(code **)(param_2 + 8))(param_1,1);
    (**(code **)(param_2 + 0xc))(param_1,param_1 + 0x12,param_1[1]);
    (**(code **)(param_2 + 0xc))(param_1,param_1 + 2,(int)(*param_1 + (*param_1 >> 0x1f & 7U)) >> 3)
    ;
    (**(code **)(param_2 + 0x10))(param_1);
  }
  return;
}


