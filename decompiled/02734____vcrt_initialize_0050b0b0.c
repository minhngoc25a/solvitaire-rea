// Function: ___vcrt_initialize
// Entry: 0050b0b0
// Size: 31 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_initialize
   
   Library: Visual Studio 2019 Release */

uint ___vcrt_initialize(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = ___vcrt_initialize_locks();
  if ((char)uVar1 != '\0') {
    uVar2 = ___vcrt_initialize_ptd();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize_locks();
  }
  return uVar1 & 0xffffff00;
}


