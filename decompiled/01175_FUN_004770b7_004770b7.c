// Function: FUN_004770b7
// Entry: 004770b7
// Size: 109 bytes
// Thunk: false
// External: false


HBRUSH FUN_004770b7(COLORREF param_1)

{
  undefined4 *puVar1;
  COLORREF *pCVar2;
  HBRUSH pHVar3;
  
  pHVar3 = (HBRUSH)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00542fc0);
  puVar1 = DAT_00543980;
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_004770ea:
      pCVar2 = (COLORREF *)FUN_004257cc((int *)&DAT_00543980,0x14);
      if (pCVar2 != (COLORREF *)0x0) {
        *pCVar2 = param_1;
        pHVar3 = CreateSolidBrush(param_1);
        pCVar2[2] = 1;
        pCVar2[1] = (COLORREF)pHVar3;
      }
LAB_00477115:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00542fc0);
      return pHVar3;
    }
    if (puVar1[2] == param_1) {
      puVar1[4] = puVar1[4] + 1;
      pHVar3 = (HBRUSH)puVar1[3];
      if (pHVar3 != (HBRUSH)0x0) goto LAB_00477115;
      goto LAB_004770ea;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


