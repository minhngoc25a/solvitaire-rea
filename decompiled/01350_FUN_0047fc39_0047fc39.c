// Function: FUN_0047fc39
// Entry: 0047fc39
// Size: 49 bytes
// Thunk: false
// External: false


undefined4 FUN_0047fc39(void)

{
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_00544350 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_005441e8 + DAT_00544350 * 0x18);
    iVar1 = DAT_00544350;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_00544350 = DAT_00544350 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
      in_EAX = extraout_EAX;
    } while (iVar1 != 0);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


