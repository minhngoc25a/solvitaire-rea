// Function: ___acrt_unlock
// Entry: 0047fc81
// Size: 23 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_unlock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_unlock(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_00544200 + param_1 * 0x18));
  return;
}


