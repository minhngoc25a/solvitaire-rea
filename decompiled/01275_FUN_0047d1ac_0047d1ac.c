// Function: FUN_0047d1ac
// Entry: 0047d1ac
// Size: 90 bytes
// Thunk: false
// External: false


short * FUN_0047d1ac(short *param_1,undefined4 param_2,undefined4 param_3)

{
  short extraout_CX;
  short *psVar1;
  short *psVar2;
  longlong lVar3;
  short local_40 [32];
  
  lVar3 = CONCAT44(param_3,param_2);
  psVar2 = local_40;
  do {
    lVar3 = __aulldvrm((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),10,0);
    *psVar2 = extraout_CX + 0x30;
    psVar2 = psVar2 + 1;
    psVar1 = param_1;
  } while (lVar3 != 0);
  do {
    psVar2 = psVar2 + -1;
    *psVar1 = *psVar2;
    psVar1 = psVar1 + 1;
  } while (psVar2 != local_40);
  *psVar1 = 0;
  return param_1;
}


