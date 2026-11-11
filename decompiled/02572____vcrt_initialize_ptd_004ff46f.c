// Function: ___vcrt_initialize_ptd
// Entry: 004ff46f
// Size: 51 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_initialize_ptd
   
   Library: Visual Studio 2019 Release */

uint ___vcrt_initialize_ptd(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = ___vcrt_FlsAlloc(&LAB_004ff55d);
  DAT_00541fe0 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = ___vcrt_FlsSetValue(uVar1,&DAT_00544af0);
    if (iVar2 != 0) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize_ptd();
  }
  return uVar1 & 0xffffff00;
}


