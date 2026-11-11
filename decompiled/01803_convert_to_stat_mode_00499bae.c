// Function: convert_to_stat_mode
// Entry: 00499bae
// Size: 174 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    unsigned short __cdecl convert_to_stat_mode(int,wchar_t const * const)
   
   Library: Visual Studio 2019 Release */

ushort __cdecl convert_to_stat_mode(int param_1,wchar_t *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 (*_Str1) [16];
  int iVar3;
  
  if (((uint)param_1 >> 4 & 1) == 0) {
    bVar1 = FUN_00499b55(param_2);
    uVar2 = 0x8100;
    if (bVar1) goto LAB_00499bd4;
  }
  else {
LAB_00499bd4:
    uVar2 = 0x4140;
  }
  uVar2 = ~(param_1 << 7) & 0x80U | uVar2;
  if (param_2 != (wchar_t *)0x0) {
    _Str1 = FUN_004806a7((undefined1 (*) [16])param_2,0x2e);
    if (_Str1 != (undefined1 (*) [16])0x0) {
      iVar3 = __wcsicmp((wchar_t *)_Str1,L".exe");
      if (iVar3 != 0) {
        iVar3 = __wcsicmp((wchar_t *)_Str1,L".cmd");
        if (iVar3 != 0) {
          iVar3 = __wcsicmp((wchar_t *)_Str1,L".bat");
          if (iVar3 != 0) {
            iVar3 = __wcsicmp((wchar_t *)_Str1,L".com");
            if (iVar3 != 0) goto LAB_00499c44;
          }
        }
      }
      uVar2 = uVar2 | 0x40;
    }
  }
LAB_00499c44:
  return (ushort)(uVar2 >> 6) & 7 | (ushort)uVar2 | (ushort)(uVar2 >> 3) & 0x38;
}


