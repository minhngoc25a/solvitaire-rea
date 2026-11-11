// Function: FUN_0047d717
// Entry: 0047d717
// Size: 154 bytes
// Thunk: false
// External: false


wchar_t * __cdecl FUN_0047d717(int param_1,byte *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  LPWSTR _Locale;
  byte *local_8;
  
  if (param_2 == (byte *)0x0) {
    pwVar1 = __wsetlocale(param_1,(wchar_t *)0x0);
    return pwVar1;
  }
  pwVar1 = (wchar_t *)0x0;
  iVar2 = FUN_004c0016(&local_8,(LPWSTR)0x0,(byte *)0x0,param_2,(byte *)0x7fffffff);
  if ((iVar2 != 0) && ((iVar2 == 0x16 || (iVar2 == 0x22)))) {
LAB_0047d7a7:
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _Locale = __calloc_base((uint)local_8,2);
  if (_Locale != (LPWSTR)0x0) {
    iVar2 = FUN_004c0016((undefined4 *)0x0,_Locale,local_8,param_2,(byte *)0xffffffff);
    if (iVar2 == 0) {
      pwVar1 = __wsetlocale(param_1,_Locale);
    }
    else if ((iVar2 == 0x16) || (iVar2 == 0x22)) goto LAB_0047d7a7;
  }
  FUN_004247be(_Locale);
  return pwVar1;
}


