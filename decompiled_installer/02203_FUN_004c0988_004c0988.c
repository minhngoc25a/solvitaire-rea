// Function: FUN_004c0988
// Entry: 004c0988
// Size: 89 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint FUN_004c0988(int *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  bVar1 = (byte)DAT_0053fbc0 & 0x1f;
  uVar2 = DAT_00544a80 ^ DAT_0053fbc0;
  FUN_004c09e4();
  ExceptionList = local_14;
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}


