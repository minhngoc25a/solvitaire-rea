// Function: ___vcrt_uninitialize_locks
// Entry: 0050a6d3
// Size: 47 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_uninitialize_locks
   
   Library: Visual Studio 2019 Release */

undefined4 ___vcrt_uninitialize_locks(void)

{
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_005450b0 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_00545080 + DAT_005450b0 * 0x18);
    iVar1 = DAT_005450b0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_005450b0 = DAT_005450b0 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
      in_EAX = extraout_EAX;
    } while (iVar1 != 0);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


