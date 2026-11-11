// Function: FUN_004c5535
// Entry: 004c5535
// Size: 91 bytes
// Thunk: false
// External: false


int FUN_004c5535(void)

{
  uint uVar1;
  int iVar2;
  int local_8;
  
  if (DAT_00544ac8 != 0) {
    return DAT_00544ac8;
  }
  iVar2 = 2;
  local_8 = 2;
  uVar1 = FUN_004c54bd();
  if ((char)uVar1 == '\0') {
    ___acrt_AppPolicyGetProcessTerminationMethodInternal_4((ulong)&local_8);
  }
  if (local_8 != 0) {
    if (local_8 == 1) goto LAB_004c5582;
    if (local_8 == 2) {
      iVar2 = 1;
      goto LAB_004c5582;
    }
    if (local_8 == 3) {
      iVar2 = 3;
      goto LAB_004c5582;
    }
  }
  iVar2 = 4;
LAB_004c5582:
  LOCK();
  UNLOCK();
  DAT_00544ac8 = iVar2;
  return iVar2;
}


