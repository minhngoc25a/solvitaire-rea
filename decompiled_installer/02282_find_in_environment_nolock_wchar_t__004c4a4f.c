// Function: find_in_environment_nolock<wchar_t>
// Entry: 004c4a4f
// Size: 88 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int __cdecl find_in_environment_nolock<wchar_t>(wchar_t const * const,unsigned int)
   
   Library: Visual Studio 2019 Release */

int __cdecl find_in_environment_nolock<wchar_t>(wchar_t *param_1,uint param_2)

{
  short sVar1;
  wchar_t *_Str2;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = DAT_00544358;
  _Str2 = (wchar_t *)*DAT_00544358;
  piVar4 = DAT_00544358;
  while( true ) {
    if (_Str2 == (wchar_t *)0x0) {
      return -((int)piVar4 - (int)piVar2 >> 2);
    }
    iVar3 = __wcsnicoll(param_1,_Str2,param_2);
    if ((iVar3 == 0) && ((sVar1 = *(short *)(*piVar4 + param_2 * 2), sVar1 == 0x3d || (sVar1 == 0)))
       ) break;
    piVar4 = piVar4 + 1;
    _Str2 = (wchar_t *)*piVar4;
  }
  return (int)piVar4 - (int)piVar2 >> 2;
}


