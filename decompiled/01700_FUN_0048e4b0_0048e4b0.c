// Function: FUN_0048e4b0
// Entry: 0048e4b0
// Size: 136 bytes
// Thunk: false
// External: false


UINT FUN_0048e4b0(void)

{
  byte bVar1;
  undefined1 (*pauVar2) [16];
  UINT UVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  pauVar2 = (undefined1 (*) [16])_setlocale(2,(char *)0x0);
  if (pauVar2 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048e4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar3 = GetACP();
    return UVar3;
  }
  if (((*pauVar2)[0] == 'C') && ((*pauVar2)[1] == '\0')) {
    return 0;
  }
  pauVar2 = FUN_00480570(pauVar2,0x2e);
  if (pauVar2 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048e4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar3 = GetACP();
    return UVar3;
  }
  pbVar4 = &DAT_00529720;
  pbVar6 = *pauVar2 + 1;
  do {
    bVar1 = *pbVar6;
    bVar7 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_0048e514:
      uVar5 = -(uint)bVar7 | 1;
      goto LAB_0048e519;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar7 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_0048e514;
    pbVar6 = pbVar6 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_0048e519:
  if (uVar5 == 0) {
    UVar3 = 0xfde9;
  }
  else {
    UVar3 = FUN_00491880(*pauVar2 + 1);
    if ((int)UVar3 < 1) {
                    /* WARNING: Could not recover jumptable at 0x0048e532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UVar3 = GetACP();
      return UVar3;
    }
  }
  return UVar3;
}


