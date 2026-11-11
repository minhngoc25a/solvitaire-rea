// Function: _wcscmp
// Entry: 0044ca04
// Size: 64 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _wcscmp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _wcscmp(wchar_t *_Str1,wchar_t *_Str2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)(ushort)*_Str2;
  iVar2 = (ushort)*_Str1 - uVar1;
  if (iVar2 == 0) {
    iVar3 = (int)_Str1 - (int)_Str2;
    do {
      if ((short)uVar1 == 0) break;
      _Str2 = _Str2 + 1;
      uVar1 = (uint)(ushort)*_Str2;
      iVar2 = *(ushort *)(iVar3 + (int)_Str2) - uVar1;
    } while (iVar2 == 0);
  }
  return (iVar2 >> 0x1f) - (-iVar2 >> 0x1f);
}


