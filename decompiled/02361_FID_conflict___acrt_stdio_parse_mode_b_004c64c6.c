// Function: FID_conflict:__acrt_stdio_parse_mode_b
// Entry: 004c64c6
// Size: 32 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Different Base Names
    bool __cdecl __acrt_stdio_parse_mode_b(struct __acrt_stdio_stream_mode &)
    bool __cdecl __acrt_stdio_parse_mode_t(struct __acrt_stdio_stream_mode &)
   
   Library: Visual Studio 2019 Release */

uint __cdecl FID_conflict___acrt_stdio_parse_mode_b(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xc000) != 0) {
    return uVar1 & 0xffffff00;
  }
  *param_1 = uVar1 | 0x4000;
  return CONCAT31((int3)((uVar1 | 0x4000) >> 8),1);
}


