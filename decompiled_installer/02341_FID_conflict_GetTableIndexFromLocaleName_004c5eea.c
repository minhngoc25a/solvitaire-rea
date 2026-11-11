// Function: FID_conflict:GetTableIndexFromLocaleName
// Entry: 004c5eea
// Size: 80 bytes
// Thunk: false
// External: false


/* Library Function - Multiple Matches With Different Base Names
    int __cdecl GetTableIndexFromLocaleName(wchar_t const *)
    int __cdecl ATL::_AtlGetTableIndexFromLocaleName(wchar_t const *)
    _GetTableIndexFromLocaleName
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __cdecl FID_conflict_GetTableIndexFromLocaleName(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0xe3;
  do {
    iVar3 = (iVar2 + iVar4) / 2;
    iVar1 = FUN_00478f6f(param_1,*(ushort **)(&UNK_0051b2a0 + iVar3 * 8),0x55);
    if (iVar1 == 0) {
      return *(undefined4 *)(&UNK_0051b2a4 + iVar3 * 8);
    }
    if (iVar1 < 0) {
      iVar2 = iVar3 + -1;
    }
    else {
      iVar4 = iVar3 + 1;
    }
  } while (iVar4 <= iVar2);
  return 0xffffffff;
}


