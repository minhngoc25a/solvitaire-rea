// Function: FUN_004fde0d
// Entry: 004fde0d
// Size: 188 bytes
// Thunk: false
// External: false


undefined4
FUN_004fde0d(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *lpMem;
  int *piVar3;
  undefined4 uVar4;
  wchar_t local_84 [64];
  
  FUN_0041e2d9(local_84,L"%d:%d:%d");
  piVar3 = FUN_0046a300(DAT_00543a18,local_84);
  if (piVar3 == (int *)0x0) {
LAB_004fde76:
    uVar4 = 0;
  }
  else {
    piVar1 = (int *)*piVar3;
    lpMem = (int *)0x0;
    do {
      while( true ) {
        piVar2 = lpMem;
        lpMem = piVar1;
        if (lpMem == (int *)0x0) goto LAB_004fde76;
        piVar1 = (int *)*lpMem;
        if (param_2 != 0) break;
        HeapFree(DAT_00542264,0,lpMem);
        lpMem = piVar2;
        if (piVar1 == (int *)0x0) {
          FUN_004b7850(DAT_00543a18);
          goto LAB_004fde76;
        }
      }
    } while ((lpMem[1] != param_2) || ((lpMem[2] != param_5 && (param_5 != -1))));
    if (piVar2 == (int *)0x0) {
      *piVar3 = (int)piVar1;
    }
    else {
      *piVar2 = (int)piVar1;
    }
    HeapFree(DAT_00542264,0,lpMem);
    if (*piVar3 == 0) {
      FUN_004b7850(DAT_00543a18);
    }
    uVar4 = 1;
  }
  return uVar4;
}


