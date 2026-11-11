// Function: ___scrt_is_ucrt_dll_in_use
// Entry: 0050b223
// Size: 12 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_005451fc != 0;
}


