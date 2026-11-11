// Function: ___scrt_acquire_startup_lock
// Entry: 0050aa9b
// Size: 50 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___scrt_acquire_startup_lock(void)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    while( true ) {
      iVar3 = 0;
      LOCK();
      iVar1 = *(int *)((int)Self + 4);
      if (DAT_005450bc != 0) {
        iVar3 = DAT_005450bc;
        iVar1 = DAT_005450bc;
      }
      DAT_005450bc = iVar1;
      UNLOCK();
      if (iVar3 == 0) break;
      if (*(int *)((int)Self + 4) == iVar3) {
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
    }
  }
  return 0;
}


