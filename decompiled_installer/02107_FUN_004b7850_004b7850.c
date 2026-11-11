// Function: FUN_004b7850
// Entry: 004b7850
// Size: 132 bytes
// Thunk: false
// External: false


uint FUN_004b7850(int *param_1)

{
  int *piVar1;
  int *extraout_ECX;
  int *piVar2;
  int *extraout_EDX;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    piVar3 = (int *)(param_1[1] + param_1[5] * 4);
    piVar2 = param_1 + 2;
    if ((int *)*piVar3 == piVar1) {
      *piVar3 = *piVar1;
    }
    else {
      piVar3 = piVar2;
      if ((int *)*piVar2 != (int *)0x0) {
        *(int *)*piVar2 = *piVar1;
      }
    }
    param_1[10] = param_1[10] + -1;
    *param_1 = *piVar2;
    param_1[5] = param_1[6];
    *piVar2 = 0;
    if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
      HeapFree(DAT_00542264,0,(LPVOID)piVar1[1]);
      piVar2 = extraout_ECX;
      piVar3 = extraout_EDX;
    }
    if ((int *)param_1[4] != (int *)0x0) {
      FUN_004a3931((int)piVar2,(int)piVar3,(int)(piVar1 + 2),(int *)param_1[4]);
    }
    FUN_00478c4a((int *)param_1[0xe],(int)piVar1);
  }
  return -(uint)(*param_1 != 0) & *param_1 + 8U;
}


