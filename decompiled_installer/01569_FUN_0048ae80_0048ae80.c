// Function: FUN_0048ae80
// Entry: 0048ae80
// Size: 292 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048ae80(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
      ((piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0 && (*piVar2 == param_1)))) &&
     (piVar2[1] - 0x3f34U < 0x20)) {
    iVar3 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    if (((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x24) != 0)) &&
       ((piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0 &&
        ((*piVar2 == param_1 && (piVar2[1] - 0x3f34U < 0x20)))))) {
      iVar3 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (*(uint *)(iVar3 + 0xc) != 0) {
        *(uint *)(param_1 + 0x30) = *(uint *)(iVar3 + 0xc) & 1;
      }
      iVar1 = iVar3 + 0x534;
      *(undefined4 *)(iVar3 + 4) = 0x3f34;
      *(int *)(iVar3 + 0x70) = iVar1;
      *(int *)(iVar3 + 0x54) = iVar1;
      *(int *)(iVar3 + 0x50) = iVar1;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x18) = 0x8000;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      *(undefined4 *)(iVar3 + 0x40) = 0;
      *(undefined4 *)(iVar3 + 0x1bc4) = 1;
      *(undefined4 *)(iVar3 + 0x1bc8) = 0xffffffff;
      return 0;
    }
  }
  return 0xfffffffe;
}


