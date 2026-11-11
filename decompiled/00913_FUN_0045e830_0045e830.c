// Function: FUN_0045e830
// Entry: 0045e830
// Size: 114 bytes
// Thunk: false
// External: false


void __cdecl FUN_0045e830(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0xa4);
  iVar4 = *piVar1;
  if (iVar4 == 0 && piVar1[1] == 0) {
    piVar3 = (int *)piVar1[0xe];
    while (piVar3 != (int *)0x0) {
      if (piVar3[1] == 0) {
        iVar4 = iVar4 + piVar3[4];
      }
      piVar2 = (int *)*piVar3;
      FUN_0047d191(piVar3);
      piVar1[0xe] = (int)piVar2;
      piVar3 = piVar2;
    }
  }
  FUN_004948c0(param_1,piVar1[2] + iVar4);
  piVar1[2] = 0;
  piVar1[3] = 0;
  *piVar1 = 0;
  piVar1[1] = 0;
  return;
}


