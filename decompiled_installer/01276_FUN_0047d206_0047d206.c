// Function: FUN_0047d206
// Entry: 0047d206
// Size: 55 bytes
// Thunk: false
// External: false


short * FUN_0047d206(short *param_1,int param_2,int param_3)

{
  short *psVar1;
  bool bVar2;
  
  psVar1 = param_1;
  if ((param_3 < 1) && (param_3 < 0)) {
    bVar2 = param_2 != 0;
    param_2 = -param_2;
    *param_1 = 0x2d;
    param_3 = -(param_3 + (uint)bVar2);
    psVar1 = param_1 + 1;
  }
  FUN_0047d1ac(psVar1,param_2,param_3);
  return param_1;
}


