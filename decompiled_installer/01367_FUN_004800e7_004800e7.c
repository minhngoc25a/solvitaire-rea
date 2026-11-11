// Function: FUN_004800e7
// Entry: 004800e7
// Size: 129 bytes
// Thunk: false
// External: false


undefined4 FUN_004800e7(void)

{
  LPCSTR pCVar1;
  uint uVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (DAT_00544354 == (undefined4 *)0x0) {
LAB_0048015d:
    uVar5 = 0xffffffff;
  }
  else {
    pCVar1 = (LPCSTR)*DAT_00544354;
    puVar6 = DAT_00544354;
    while (pCVar1 != (LPCSTR)0x0) {
      uVar2 = FUN_0048139c(0,0,pCVar1,-1,(LPWSTR)0x0,0);
      if (uVar2 == 0) goto LAB_0048015d;
      pwVar3 = __calloc_base(uVar2,2);
      if (pwVar3 == (wchar_t *)0x0) {
        pwVar3 = (wchar_t *)0x0;
LAB_00480157:
        FUN_004247be(pwVar3);
        goto LAB_0048015d;
      }
      iVar4 = FUN_0048139c(0,0,(LPCSTR)*puVar6,-1,pwVar3,uVar2);
      if (iVar4 == 0) goto LAB_00480157;
      FUN_004c44d0(pwVar3,0);
      FUN_004247be((LPVOID)0x0);
      puVar6 = puVar6 + 1;
      pCVar1 = (LPCSTR)*puVar6;
    }
    uVar5 = 0;
  }
  return uVar5;
}


