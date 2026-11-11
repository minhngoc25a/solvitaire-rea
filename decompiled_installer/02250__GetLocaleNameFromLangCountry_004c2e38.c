// Function: _GetLocaleNameFromLangCountry
// Entry: 004c2e38
// Size: 153 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    _GetLocaleNameFromLangCountry
   
   Library: Visual Studio 2019 Release */

void __cdecl _GetLocaleNameFromLangCountry(undefined4 *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  
  iVar4 = 2;
  psVar5 = (short *)*param_1;
  psVar1 = psVar5 + 1;
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  psVar7 = (short *)param_1[1];
  iVar6 = (int)psVar5 - (int)psVar1 >> 1;
  psVar1 = psVar7 + 1;
  param_1[4] = (uint)(iVar6 == 3);
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  param_1[5] = (uint)((int)psVar7 - (int)psVar1 >> 1 == 3);
  if (iVar6 != 3) {
    iVar4 = _GetPrimaryLen((ushort *)*param_1);
  }
  param_1[3] = iVar4;
  ___acrt_EnumSystemLocalesEx_16((_func_int_wchar_t_ptr_ulong_long *)&DAT_004c2ed1,3,0,(void *)0x0);
  uVar3 = param_1[2];
  if ((uVar3 >> 8 & 1) == 0 || ((uVar3 & 7) == 0 || (uVar3 >> 9 & 1) == 0)) {
    param_1[2] = 0;
  }
  return;
}


