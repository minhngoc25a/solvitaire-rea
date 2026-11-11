// Function: __acrt_stdio_parse_mode_n
// Entry: 004c6508
// Size: 34 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_n(struct __acrt_stdio_stream_mode &,bool &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_n(__acrt_stdio_stream_mode *param_1,bool *param_2)

{
  if (*param_2 != false) {
    return false;
  }
  *param_2 = true;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
  return true;
}


