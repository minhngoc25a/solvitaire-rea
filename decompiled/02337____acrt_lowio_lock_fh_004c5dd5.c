// Function: ___acrt_lowio_lock_fh
// Entry: 004c5dd5
// Size: 35 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_lowio_lock_fh
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_lowio_lock_fh(uint param_1)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_00544378)[(int)param_1 >> 6]));
  return;
}


