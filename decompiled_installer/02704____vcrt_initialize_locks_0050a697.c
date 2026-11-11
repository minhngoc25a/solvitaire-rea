// Function: ___vcrt_initialize_locks
// Entry: 0050a697
// Size: 60 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_initialize_locks
   
   Library: Visual Studio 2019 Release */

undefined4 ___vcrt_initialize_locks(void)

{
  int iVar1;
  uint uVar2;
  LPCRITICAL_SECTION p_Var3;
  
  p_Var3 = (LPCRITICAL_SECTION)&DAT_00545098;
  uVar2 = 0;
  do {
    iVar1 = ___vcrt_InitializeCriticalSectionEx(p_Var3,4000,0);
    if (iVar1 == 0) {
      uVar2 = ___vcrt_uninitialize_locks();
      return uVar2 & 0xffffff00;
    }
    DAT_005450b0 = DAT_005450b0 + 1;
    uVar2 = uVar2 + 0x18;
    p_Var3 = p_Var3 + 1;
  } while (uVar2 < 0x18);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


