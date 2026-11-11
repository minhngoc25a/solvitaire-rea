// Function: replace_current_thread_locale_nolock
// Entry: 0047deb2
// Size: 75 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * const,struct
   __crt_locale_data * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    ___acrt_release_locale_ref(*(int *)(param_1 + 0x4c));
    ppuVar1 = *(undefined ***)(param_1 + 0x4c);
    if (((ppuVar1 != DAT_005441f4) && (ppuVar1 != &PTR_DAT_00540690)) &&
       (ppuVar1[3] == (undefined *)0x0)) {
      ___acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x4c) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    ___acrt_add_locale_ref((int)param_2);
  }
  return;
}


