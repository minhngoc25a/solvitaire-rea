// Function: FUN_00477c06
// Entry: 00477c06
// Size: 238 bytes
// Thunk: false
// External: false


void FUN_00477c06(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *lpMem;
  int *piVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000010;
  wchar_t local_80 [64];
  
  iVar7 = 0;
  pcVar5 = (code *)0x0;
  FUN_0041e2d9(local_80,L"%d:%d:%d");
  piVar2 = FUN_0046a300(DAT_00543a18,local_80);
  if ((piVar2 != (int *)0x0) && (piVar3 = (int *)*piVar2, piVar3 != (int *)0x0)) {
    do {
      if ((piVar3[2] == in_stack_00000010) || (piVar3[2] == -1)) {
        pcVar5 = (code *)piVar3[1];
        iVar7 = iVar7 + 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
    if (iVar7 == 1) {
      (*pcVar5)();
    }
    else if ((1 < iVar7) &&
            (lpMem = HeapAlloc(DAT_00542264,0,iVar7 << 2), lpMem != (undefined4 *)0x0)) {
      puVar4 = lpMem;
      for (puVar1 = (undefined4 *)*piVar2; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        if ((puVar1[2] == in_stack_00000010) || (puVar1[2] == -1)) {
          *puVar4 = puVar1[1];
          puVar4 = puVar4 + 1;
        }
      }
      iVar6 = 0;
      do {
        (*(code *)lpMem[iVar6])();
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
      HeapFree(DAT_00542264,0,lpMem);
    }
  }
  return;
}


