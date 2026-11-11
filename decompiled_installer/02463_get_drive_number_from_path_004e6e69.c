// Function: get_drive_number_from_path
// Entry: 004e6e69
// Size: 43 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int __cdecl get_drive_number_from_path(wchar_t const * const)
   
   Library: Visual Studio 2019 Release */

int __cdecl get_drive_number_from_path(wchar_t *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(ushort)*param_1;
  if ((*param_1 != L'\0') && (param_1[1] == L':')) {
    if (uVar1 - 0x61 < 0x1a) {
      uVar1 = uVar1 - 0x20;
    }
    return uVar1 - 0x40;
  }
  return 0;
}


