// Function: __alloc_osfhnd
// Entry: 004c5a51
// Size: 263 bytes
// Thunk: false
// External: false


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2019 Release */

int __cdecl __alloc_osfhnd(void)

{
  LPCRITICAL_SECTION p_Var1;
  undefined4 *puVar2;
  uint uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar4;
  void *local_14;
  
  ___acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_004c5abf:
      FUN_004c5b5b();
      ExceptionList = local_14;
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_00544378)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      puVar2 = ___acrt_lowio_create_handle_array();
      (&DAT_00544378)[iVar4] = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        DAT_00544578 = DAT_00544578 + 0x40;
        uVar3 = iVar4 << 6;
        ___acrt_lowio_lock_fh(uVar3);
        *(undefined1 *)((&DAT_00544378)[(int)uVar3 >> 6] + 0x28) = 1;
      }
      goto LAB_004c5abf;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x95].RecursionCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].RecursionCount) {
      if (((uint)lpCriticalSection[1].LockSemaphore & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((uint)lpCriticalSection[1].LockSemaphore & 1) == 0) {
          uVar3 = iVar4 * 0x40 + ((int)lpCriticalSection - (int)p_Var1) / 0x38;
          iVar4 = (uVar3 & 0x3f) * 0x38;
          *(undefined1 *)((&DAT_00544378)[(int)uVar3 >> 6] + 0x28 + iVar4) = 1;
          *(undefined4 *)((&DAT_00544378)[(int)uVar3 >> 6] + 0x18 + iVar4) = 0xffffffff;
          goto LAB_004c5abf;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


