// Function: FUN_004bb358
// Entry: 004bb358
// Size: 52 bytes
// Thunk: false
// External: false


void __cdecl FUN_004bb358(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  piVar2 = FUN_00478ad9(*(int **)(param_1 + 0xc0));
  *piVar2 = *(int *)(iVar1 + param_4 * 4);
  piVar2[1] = param_2;
  piVar2[2] = param_3;
  *(int **)(iVar1 + param_4 * 4) = piVar2;
  return;
}


