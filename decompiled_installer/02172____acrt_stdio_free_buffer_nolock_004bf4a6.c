// Function: ___acrt_stdio_free_buffer_nolock
// Entry: 004bf4a6
// Size: 64 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_stdio_free_buffer_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_stdio_free_buffer_nolock(undefined4 *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 3;
  if (((*puVar1 >> 0xd & 1) != 0) && ((*puVar1 >> 6 & 1) != 0)) {
    FUN_004247be((LPVOID)param_1[1]);
    LOCK();
    *puVar1 = *puVar1 & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
  }
  return;
}


