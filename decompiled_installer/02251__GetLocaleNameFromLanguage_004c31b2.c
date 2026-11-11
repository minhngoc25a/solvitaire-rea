// Function: _GetLocaleNameFromLanguage
// Entry: 004c31b2
// Size: 89 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _GetLocaleNameFromLanguage
   
   Library: Visual Studio 2019 Release */

void __cdecl _GetLocaleNameFromLanguage(undefined4 *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  bool bVar5;
  
  iVar3 = 2;
  psVar4 = (short *)*param_1;
  psVar1 = psVar4 + 1;
  do {
    sVar2 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  bVar5 = (int)psVar4 - (int)psVar1 >> 1 == 3;
  param_1[4] = (uint)bVar5;
  if (!bVar5) {
    iVar3 = _GetPrimaryLen((ushort *)*param_1);
  }
  param_1[3] = iVar3;
  ___acrt_EnumSystemLocalesEx_16((_func_int_wchar_t_ptr_ulong_long *)&DAT_004c320b,3,0,(void *)0x0);
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    param_1[2] = 0;
  }
  return;
}


