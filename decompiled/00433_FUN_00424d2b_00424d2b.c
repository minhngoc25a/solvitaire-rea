// Function: FUN_00424d2b
// Entry: 00424d2b
// Size: 498 bytes
// Thunk: false
// External: false


HANDLE __cdecl FUN_00424d2b(uint param_1,undefined1 (*param_2) [16],int *param_3,int *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  __acrt_ptd *p_Var4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  int iVar8;
  errno_t eVar9;
  HANDLE pvVar10;
  char *pcVar11;
  int iVar12;
  undefined *puVar13;
  LPVOID pvVar14;
  
  if ((((param_2 == (undefined1 (*) [16])0x0) || ((*param_2)[0] == '\0')) || (param_3 == (int *)0x0)
      ) || (((char *)*param_3 == (char *)0x0 || (*(char *)*param_3 == '\0')))) {
    p_Var4 = FUN_0042470e();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_004243be();
    return (HANDLE)0xffffffff;
  }
  pauVar5 = FUN_00480570(param_2,0x5c);
  pauVar6 = FUN_00480570(param_2,0x2f);
  pauVar7 = param_2;
  if (pauVar6 == (undefined1 (*) [16])0x0) {
    if ((pauVar5 == (undefined1 (*) [16])0x0) &&
       (pauVar5 = FUN_00480570(param_2,0x3a), pauVar5 == (undefined1 (*) [16])0x0)) {
      do {
        puVar1 = *pauVar7;
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
      } while (*puVar1 != '\0');
      puVar1 = (undefined1 *)((int)pauVar7 + (3 - (int)(*param_2 + 1)));
      pauVar7 = __calloc_base((uint)puVar1,1);
      if (pauVar7 == (undefined1 (*) [16])0x0) {
        pvVar14 = (LPVOID)0x0;
        goto LAB_00424ed4;
      }
      iVar8 = FUN_0047faad((char *)pauVar7,(int)puVar1,0x50c220);
      if ((iVar8 != 0) ||
         (iVar8 = FUN_004807b7((char *)pauVar7,(int)puVar1,(int)param_2), iVar8 != 0))
      goto LAB_00424f11;
      FUN_004247be((LPVOID)0x0);
      pauVar5 = (undefined1 (*) [16])(*pauVar7 + 2);
    }
  }
  else if ((pauVar5 == (undefined1 (*) [16])0x0) || (pauVar5 < pauVar6)) {
    pauVar5 = pauVar6;
  }
  pvVar14 = (LPVOID)(-(uint)(param_2 != pauVar7) & (uint)pauVar7);
  pauVar5 = FUN_00480570(pauVar5,0x2e);
  if (pauVar5 == (undefined1 (*) [16])0x0) {
    pauVar5 = pauVar7;
    do {
      pcVar11 = *pauVar5;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    } while (*pcVar11 != '\0');
    iVar8 = (int)pauVar5 - (int)(*pauVar7 + 1);
    uVar2 = iVar8 + 5;
    pcVar11 = __calloc_base(uVar2,1);
    if (pcVar11 == (char *)0x0) {
      FUN_004247be((LPVOID)0x0);
      pvVar10 = (HANDLE)0xffffffff;
      goto LAB_00424f06;
    }
    iVar12 = FUN_0047faad(pcVar11,uVar2,(int)pauVar7);
    if (iVar12 != 0) {
LAB_00424f11:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    p_Var4 = FUN_0042470e();
    puVar13 = &DAT_0050c224;
    uVar3 = *(undefined4 *)p_Var4;
    do {
      iVar12 = FUN_0047faad(pcVar11 + iVar8,5,(int)puVar13);
      if (iVar12 != 0) goto LAB_00424f11;
      eVar9 = __access_s(pcVar11,0);
      if (eVar9 == 0) {
        p_Var4 = FUN_0042470e();
        *(undefined4 *)p_Var4 = uVar3;
        pvVar10 = FUN_00424f79(param_1,pcVar11,param_3,param_4);
        FUN_004247be(pcVar11);
        goto LAB_00424f06;
      }
      puVar13 = puVar13 + 5;
    } while (puVar13 != &DAT_0050c238);
    FUN_004247be(pcVar11);
  }
  else {
    eVar9 = __access_s((char *)pauVar7,0);
    if (eVar9 == 0) {
      pvVar10 = FUN_00424f79(param_1,(char *)pauVar7,param_3,param_4);
LAB_00424f06:
      FUN_004247be(pvVar14);
      return pvVar10;
    }
  }
LAB_00424ed4:
  FUN_004247be(pvVar14);
  return (HANDLE)0xffffffff;
}


