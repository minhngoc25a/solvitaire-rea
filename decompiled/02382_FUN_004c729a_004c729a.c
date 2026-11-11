// Function: FUN_004c729a
// Entry: 004c729a
// Size: 162 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_004c729a(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_14;
  
  local_20 = 0;
  ___acrt_lock(8);
  for (iVar2 = 3; iVar2 != DAT_00544998; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(DAT_0054499c + iVar2 * 4);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) >> 0xd & 1) != 0) {
        iVar1 = FUN_0047ccbd(*(FILE **)(DAT_0054499c + iVar2 * 4));
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_0054499c + iVar2 * 4) + 0x20));
      FUN_004247be(*(LPVOID *)(DAT_0054499c + iVar2 * 4));
      *(undefined4 *)(DAT_0054499c + iVar2 * 4) = 0;
    }
  }
  FUN_004c733c();
  ExceptionList = local_14;
  return local_20;
}


