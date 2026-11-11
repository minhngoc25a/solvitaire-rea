// Function: __acrt_stdio_parse_mode_D
// Entry: 004c6549
// Size: 27 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_D(struct __acrt_stdio_stream_mode &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_D(__acrt_stdio_stream_mode *param_1)

{
  if ((*(uint *)param_1 & 0x40) != 0) {
    return false;
  }
  *(uint *)param_1 = *(uint *)param_1 | 0x40;
  return true;
}


