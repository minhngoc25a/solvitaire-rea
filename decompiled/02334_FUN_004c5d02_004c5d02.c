// Function: FUN_004c5d02
// Entry: 004c5d02
// Size: 53 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c5d02(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x95].RecursionCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].RecursionCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_004247be(param_1);
  }
  return;
}


