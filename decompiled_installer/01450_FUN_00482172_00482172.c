// Function: FUN_00482172
// Entry: 00482172
// Size: 87 bytes
// Thunk: false
// External: false


int * FUN_00482172(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  do {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 < 0) goto LAB_004821a8;
    if (*(int *)(param_1 + 8) <= iVar1) break;
    piVar2 = *(int **)(*(int *)(param_1 + 0xc) + iVar1 * 4);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      *param_2 = iVar1;
      piVar3 = piVar2;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  } while (piVar3 == (int *)0x0);
  if (piVar3 == (int *)0x0) {
LAB_004821a8:
    if (*(int *)(param_1 + 0x10) != 0) {
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + 8);
      *param_2 = (int)piVar2;
      piVar3 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        return piVar2;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  return piVar3;
}


