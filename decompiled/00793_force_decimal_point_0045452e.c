// Function: force_decimal_point
// Entry: 0045452e
// Size: 92 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    void __cdecl __crt_stdio_output::force_decimal_point(char *,struct __crt_locale_pointers *
   const)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void __cdecl __crt_stdio_output::force_decimal_point(char *param_1,__crt_locale_pointers *param_2)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  
  piVar2 = *(int **)param_2;
  bVar3 = *param_1;
  if (*(char *)((uint)bVar3 + piVar2[0x25]) != 'e') {
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
    } while ((*(byte *)(*piVar2 + (uint)bVar3 * 2) & 4) != 0);
  }
  if (*(char *)((uint)bVar3 + piVar2[0x25]) == 'x') {
    param_1 = param_1 + 2;
    bVar3 = *param_1;
  }
  *param_1 = **(byte **)piVar2[0x22];
  do {
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    *param_1 = bVar3;
    bVar4 = bVar3 != 0;
    bVar3 = bVar1;
  } while (bVar4);
  return;
}


