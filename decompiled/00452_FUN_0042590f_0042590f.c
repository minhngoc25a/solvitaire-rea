// Function: FUN_0042590f
// Entry: 0042590f
// Size: 86 bytes
// Thunk: false
// External: false


int * FUN_0042590f(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (((int)param_2 < 0) || (*(int *)(param_1 + 8) <= (int)param_2)) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x10); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1 + 2 == param_2) {
        piVar2 = param_2;
      }
    }
  }
  else {
    piVar2 = *(int **)(*(int *)(param_1 + 0xc) + (int)param_2 * 4);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      piVar2 = (int *)0x0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return piVar2;
}


