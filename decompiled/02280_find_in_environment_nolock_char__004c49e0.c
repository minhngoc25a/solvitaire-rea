// Function: find_in_environment_nolock<char>
// Entry: 004c49e0
// Size: 85 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    int __cdecl find_in_environment_nolock<char>(char const * const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl find_in_environment_nolock<char>(char *param_1,uint param_2)

{
  char *_Str2;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = DAT_00544354;
  _Str2 = (char *)*DAT_00544354;
  piVar3 = DAT_00544354;
  while( true ) {
    if (_Str2 == (char *)0x0) {
      return -((int)piVar3 - (int)piVar1 >> 2);
    }
    iVar2 = __strnicoll(param_1,_Str2,param_2);
    if ((iVar2 == 0) &&
       ((*(char *)(param_2 + *piVar3) == '=' || (*(char *)(param_2 + *piVar3) == '\0')))) break;
    piVar3 = piVar3 + 1;
    _Str2 = (char *)*piVar3;
  }
  return (int)piVar3 - (int)piVar1 >> 2;
}


