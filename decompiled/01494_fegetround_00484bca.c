// Function: fegetround
// Entry: 00484bca
// Size: 13 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _fegetround
   
   Library: Visual Studio 2019 Release */

void __cdecl fegetround(void)

{
  uint uVar1;
  
  uVar1 = ___acrt_fenv_get_control();
  ___acrt_fenv_get_common_round_control(uVar1);
  return;
}


