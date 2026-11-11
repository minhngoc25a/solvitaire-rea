// Function: __wsetlocale
// Entry: 0047e29c
// Size: 131 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __wsetlocale
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl __wsetlocale(int _Category,wchar_t *_Locale)

{
  __acrt_ptd *p_Var1;
  undefined4 *local_2c;
  __acrt_ptd **local_28;
  wchar_t **local_24;
  int *local_20;
  wchar_t **local_1c;
  __acrt_ptd **local_18;
  undefined4 local_14;
  wchar_t *local_10;
  __acrt_ptd *local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_10 = (wchar_t *)0x0;
  local_14 = 0;
  if (5 < (uint)_Category) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_004243be();
    return (wchar_t *)0x0;
  }
  local_c = FUN_0047dbec();
  ___acrt_eagerly_load_locale_apis();
  FUN_004c0eb3();
  *(uint *)(local_c + 0x350) = *(uint *)(local_c + 0x350) | 0x10;
  local_18 = &local_c;
  local_2c = &local_14;
  local_28 = &local_c;
  local_24 = &local_10;
  local_20 = &_Category;
  local_1c = &_Locale;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_135d2772fca65dc1248eeaa1b56e886a>,<lambda_2a444430fde8c29194d880d93eed5e8f>&,<lambda_8dff2cf36a5417162780cd64fa2883ef>&>
            (&local_5,(<lambda_135d2772fca65dc1248eeaa1b56e886a> *)&local_5,
             (<lambda_2a444430fde8c29194d880d93eed5e8f> *)&local_2c,
             (<lambda_8dff2cf36a5417162780cd64fa2883ef> *)&local_18);
  return local_10;
}


