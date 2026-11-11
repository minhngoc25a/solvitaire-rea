// Function: get_global_action_nolock
// Entry: 004c091e
// Size: 66 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    void (__cdecl** __cdecl get_global_action_nolock(int))(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_void_int ** __cdecl get_global_action_nolock(int param_1)

{
  if (param_1 == 2) {
    return (_func_void_int **)&DAT_00544a78;
  }
  if (param_1 != 6) {
    if (param_1 == 0xf) {
      return (_func_void_int **)&DAT_00544a84;
    }
    if (param_1 == 0x15) {
      return (_func_void_int **)&DAT_00544a7c;
    }
    if (param_1 != 0x16) {
      return (_func_void_int **)0x0;
    }
  }
  return (_func_void_int **)&DAT_00544a80;
}


