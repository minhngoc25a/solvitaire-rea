// Function: ___acrt_locale_free_lc_time_if_unreferenced
// Entry: 004c0e82
// Size: 49 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_locale_free_lc_time_if_unreferenced
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_0050e1e8)) &&
     (param_1[0x2c] == (undefined *)0x0)) {
    ___acrt_locale_free_time(param_1);
    FUN_004247be(param_1);
  }
  return;
}


