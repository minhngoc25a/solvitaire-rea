// Function: FUN_004859a6
// Entry: 004859a6
// Size: 171 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_004859a6(FILE *param_1)

{
  int *piVar1;
  FILE *pFVar2;
  char *pcVar3;
  LPVOID pvVar4;
  int *piVar5;
  
  pFVar2 = (FILE *)FUN_00485a51(param_1);
  if ((char)pFVar2 != '\0') {
    pFVar2 = (FILE *)FUN_00484a7e(1);
    if (param_1 == pFVar2) {
      piVar5 = &DAT_005449a8;
    }
    else {
      pFVar2 = (FILE *)FUN_00484a7e(2);
      if (param_1 != pFVar2) goto LAB_00485a4a;
      piVar5 = &DAT_005449ac;
    }
    _DAT_005449a0 = _DAT_005449a0 + 1;
    piVar1 = &param_1->_flag;
    pFVar2 = (FILE *)*piVar1;
    if (((uint)pFVar2 & 0x4c0) == 0) {
      pcVar3 = (char *)0x282;
      LOCK();
      *piVar1 = *piVar1 | 0x282;
      UNLOCK();
      if (*piVar5 == 0) {
        pvVar4 = __malloc_base(0x1000);
        *piVar5 = (int)pvVar4;
        pcVar3 = (char *)FUN_004247be((LPVOID)0x0);
      }
      if (*piVar5 == 0) {
        param_1->_base = (char *)0x2;
        param_1->_cnt = (int)&param_1->_charbuf;
        param_1->_ptr = (char *)&param_1->_charbuf;
        param_1->_bufsiz = 2;
      }
      else {
        param_1->_cnt = *piVar5;
        pcVar3 = (char *)*piVar5;
        param_1->_ptr = pcVar3;
        param_1->_base = (char *)0x1000;
        param_1->_bufsiz = 0x1000;
      }
      return CONCAT31((int3)((uint)pcVar3 >> 8),1);
    }
  }
LAB_00485a4a:
  return (uint)pFVar2 & 0xffffff00;
}


