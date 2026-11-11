// Function: ___acrt_locale_release_lc_time_reference
// Entry: 004c0e59
// Size: 41 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * __cdecl ___acrt_locale_release_lc_time_reference(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_0050e1e8)) {
    LOCK();
    ppuVar1 = param_1 + 0x2c;
    puVar2 = *ppuVar1;
    *ppuVar1 = *ppuVar1 + -1;
    UNLOCK();
    return puVar2 + -1;
  }
  return (undefined *)0x7fffffff;
}


