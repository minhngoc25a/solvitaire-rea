// Function: fegetenv
// Entry: 005011f8
// Size: 29 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _fegetenv
   
   Library: Visual Studio 2019 Release */

undefined4 __cdecl fegetenv(uint *param_1)

{
  uint uVar1;
  
  uVar1 = ___acrt_fenv_get_control();
  *param_1 = uVar1;
  uVar1 = FUN_004c7345();
  param_1[1] = uVar1;
  return 0;
}


