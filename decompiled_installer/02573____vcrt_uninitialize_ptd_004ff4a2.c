// Function: ___vcrt_uninitialize_ptd
// Entry: 004ff4a2
// Size: 27 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_uninitialize_ptd
   
   Library: Visual Studio 2019 Release */

undefined4 ___vcrt_uninitialize_ptd(void)

{
  DWORD DVar1;
  
  DVar1 = DAT_00541fe0;
  if (DAT_00541fe0 != 0xffffffff) {
    DVar1 = ___vcrt_FlsFree(DAT_00541fe0);
    DAT_00541fe0 = 0xffffffff;
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}


