// Function: FUN_00507833
// Entry: 00507833
// Size: 170 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00507833(byte *param_1,uint param_2,int *param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_3 == (int *)0x0) {
    param_3 = &DAT_00544bfc;
  }
  uVar1 = (short)param_2 + 0x2400;
  if (*param_3 == 0) {
    if (0x3ff < uVar1) {
      if ((ushort)((short)param_2 + 0x2800U) < 0x400) {
        *param_3 = ((param_2 & 0x27ff) + 0x40) * 0x400;
        return 0;
      }
      uVar2 = FUN_004c718e(param_1,param_2 & 0xffff,param_3,param_4);
      return uVar2;
    }
  }
  else if (uVar1 < 0x400) {
    local_c = 0;
    local_8 = 0;
    uVar2 = FUN_004c718e(param_1,(param_2 & 0x23ff) + *param_3,&local_c,param_4);
    uVar2 = FUN_005011e4(uVar2,param_3);
    return uVar2;
  }
  uVar2 = FUN_005011c2(param_3,param_4);
  return uVar2;
}


