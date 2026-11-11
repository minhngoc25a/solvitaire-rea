// Function: FUN_004765ea
// Entry: 004765ea
// Size: 59 bytes
// Thunk: false
// External: false


void FUN_004765ea(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 8);
    piVar3 = (int *)(iVar1 + 4);
    do {
      if (*piVar3 == param_2) {
        iVar2 = *(int *)(iVar1 + 8 + iVar4 * 0x10);
        if (iVar2 < 1) {
          return;
        }
        *(int *)(iVar1 + 8 + iVar4 * 0x10) = iVar2 + -1;
        return;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  return;
}


