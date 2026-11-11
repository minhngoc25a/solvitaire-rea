// Function: __acrt_stdio_parse_mode_c
// Entry: 004c64e6
// Size: 34 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_c(struct __acrt_stdio_stream_mode &,bool &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_c(__acrt_stdio_stream_mode *param_1,bool *param_2)

{
  if (*param_2 != false) {
    return false;
  }
  *param_2 = true;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
  return true;
}


