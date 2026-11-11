// Function: ___acrt_lock
// Entry: 0047fc6a
// Size: 23 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_lock
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_lock(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_00544200 + param_1 * 0x18));
  return;
}


