// Function: FUN_004b6eb0
// Entry: 004b6eb0
// Size: 154 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b6eb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  iVar2 = *(int *)(param_1 + 0x1c0);
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x7fc);
  piVar1 = (int *)(iVar3 + 0x3fc);
  iVar3 = 0;
  *(int **)(iVar2 + 0x28) = piVar1;
  uVar4 = 0;
  piVar6 = piVar1;
  do {
    piVar1[uVar4] = uVar4;
    *piVar6 = iVar3;
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + -1;
  } while ((int)uVar4 < 0x10);
  uVar5 = uVar4;
  piVar6 = piVar1 + -uVar4;
  do {
    piVar1[uVar4] = uVar5;
    *piVar6 = -uVar5;
    uVar4 = uVar4 + 1;
    uVar5 = uVar5 + (~uVar4 & 1);
    piVar6 = piVar6 + -1;
  } while ((int)uVar4 < 0x30);
  if (uVar4 < 0x100) {
    piVar6 = piVar1 + -uVar4;
    do {
      piVar1[uVar4] = uVar5;
      uVar4 = uVar4 + 1;
      *piVar6 = -uVar5;
      piVar6 = piVar6 + -1;
    } while ((int)uVar4 < 0x100);
  }
  return;
}


