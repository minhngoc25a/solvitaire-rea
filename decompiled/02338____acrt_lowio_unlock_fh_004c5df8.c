// Function: ___acrt_lowio_unlock_fh
// Entry: 004c5df8
// Size: 35 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_lowio_unlock_fh(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_00544378)[(int)param_1 >> 6]));
  return;
}


