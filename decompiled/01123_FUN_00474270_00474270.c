// Function: FUN_00474270
// Entry: 00474270
// Size: 172 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00474270(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    if (param_3 != (uint *)0x0) {
      *param_3 = *param_2;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = param_2[1];
    }
    uVar1 = param_2[6];
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)(byte)uVar1;
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = (uint)*(byte *)((int)param_2 + 0x19);
    }
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((int)param_2 + 0x1a);
    }
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)((int)param_2 + 0x1b);
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)(byte)param_2[7];
    }
    FUN_0046c850(param_1,*param_2,param_2[1],(uint)(byte)uVar1,(uint)*(byte *)((int)param_2 + 0x19),
                 (uint)(byte)param_2[7],(uint)*(byte *)((int)param_2 + 0x1a),
                 (uint)*(byte *)((int)param_2 + 0x1b));
    return 1;
  }
  return 0;
}


