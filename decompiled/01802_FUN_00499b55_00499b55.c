// Function: FUN_00499b55
// Entry: 00499b55
// Size: 89 bytes
// Thunk: false
// External: false


bool __cdecl FUN_00499b55(wchar_t *param_1)

{
  bool bVar1;
  wchar_t wVar2;
  int extraout_ECX;
  
  if (param_1 != (wchar_t *)0x0) {
    wVar2 = *param_1;
    if ((((0x40 < (ushort)wVar2) && ((ushort)wVar2 < 0x5b)) ||
        ((0x60 < (ushort)wVar2 && ((ushort)wVar2 < 0x7b)))) && (param_1[1] == L':')) {
      wVar2 = param_1[2];
    }
    if (wVar2 == L'\0') {
      return true;
    }
    bVar1 = is_slash(wVar2);
    if (bVar1) {
      return *(short *)(extraout_ECX + 2) == 0;
    }
  }
  return false;
}


