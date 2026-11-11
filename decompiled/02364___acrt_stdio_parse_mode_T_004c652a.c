// Function: __acrt_stdio_parse_mode_T
// Entry: 004c652a
// Size: 31 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl __acrt_stdio_parse_mode_T(struct __acrt_stdio_stream_mode &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_parse_mode_T(__acrt_stdio_stream_mode *param_1)

{
  if ((*(uint *)param_1 & 0x1000) != 0) {
    return false;
  }
  *(uint *)param_1 = *(uint *)param_1 | 0x1000;
  return true;
}


