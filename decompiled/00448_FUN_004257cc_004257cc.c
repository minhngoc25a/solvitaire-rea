// Function: FUN_004257cc
// Entry: 004257cc
// Size: 47 bytes
// Thunk: false
// External: false


int * __cdecl FUN_004257cc(int *param_1,SIZE_T param_2)

{
  int *piVar1;
  
  piVar1 = HeapAlloc(DAT_00542264,8,param_2);
  if (piVar1 != (int *)0x0) {
    if (*param_1 != 0) {
      *(int **)(*param_1 + 4) = piVar1;
      *piVar1 = *param_1;
    }
    *param_1 = (int)piVar1;
  }
  return piVar1 + 2;
}


