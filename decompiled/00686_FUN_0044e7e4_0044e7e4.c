// Function: FUN_0044e7e4
// Entry: 0044e7e4
// Size: 48 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0044e7e4(int *param_1,SIZE_T param_2)

{
  int *piVar1;
  
  piVar1 = HeapAlloc(DAT_00542264,8,param_2);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *param_1;
    *param_1 = (int)piVar1;
    if (*piVar1 != 0) {
      *(int **)(*piVar1 + 4) = piVar1;
    }
    piVar1[1] = (int)param_1;
  }
  return piVar1 + 2;
}


