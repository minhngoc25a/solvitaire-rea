// Function: FUN_0048e540
// Entry: 0048e540
// Size: 141 bytes
// Thunk: false
// External: false


UINT FUN_0048e540(void)

{
  undefined1 (*_Str2) [16];
  UINT UVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  int iVar4;
  
  _Str2 = (undefined1 (*) [16])_setlocale(2,(char *)0x0);
  if (_Str2 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048e554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetOEMCP();
    return UVar1;
  }
  if (((*_Str2)[0] == 'C') && ((*_Str2)[1] == '\0')) {
    return 0;
  }
  pauVar2 = FUN_00480570(_Str2,0x2e);
  if (pauVar2 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048e57d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetOEMCP();
    return UVar1;
  }
  iVar4 = 0;
  if (DAT_00540b30 != 0) {
    iVar3 = 0;
    do {
      iVar3 = _strncmp(*(char **)((int)&PTR_s_Chinese_Taiwan_00540b38 + iVar3),(char *)_Str2,
                       (int)pauVar2 - (int)_Str2);
      if (iVar3 == 0) {
        return (&DAT_00540b34)[iVar4 * 3];
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar4 * 0xc;
    } while ((&DAT_00540b30)[iVar4 * 3] != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0048e5b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetOEMCP();
  return UVar1;
}


