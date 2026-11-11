// Function: ___acrt_locale_free_numeric
// Entry: 004c23c9
// Size: 105 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    ___acrt_locale_free_numeric
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_locale_free_numeric(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_00541368) {
      FUN_004247be((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_0054136c) {
      FUN_004247be((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_00541370) {
      FUN_004247be((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_00541398) {
      FUN_004247be((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_0054139c) {
      FUN_004247be((undefined *)param_1[0xd]);
    }
  }
  return;
}


