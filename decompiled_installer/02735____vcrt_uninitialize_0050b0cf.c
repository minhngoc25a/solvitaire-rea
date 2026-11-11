// Function: ___vcrt_uninitialize
// Entry: 0050b0cf
// Size: 23 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___vcrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined4 __cdecl ___vcrt_uninitialize(char param_1)

{
  undefined4 in_EAX;
  
  if (param_1 == '\0') {
    ___vcrt_uninitialize_ptd();
    in_EAX = ___vcrt_uninitialize_locks();
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


