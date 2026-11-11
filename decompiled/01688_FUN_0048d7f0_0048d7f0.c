// Function: FUN_0048d7f0
// Entry: 0048d7f0
// Size: 301 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048d7f0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  
  param_1[0xc] = param_2[0xc];
  param_1[1] = 0;
  uVar1 = param_2[1];
  puVar5 = (uint *)*param_2;
  piVar3 = FUN_0048d4d0(param_1,(LPVOID)(uVar1 + 1));
  if (piVar3 == (int *)0x0) {
    FUN_004873c0(1,"Out of memory");
  }
  else {
    if (uVar1 != 0) {
      FUN_0044c490((uint *)(param_1[1] + *param_1),puVar5,uVar1);
    }
    param_1[1] = param_1[1] + uVar1;
    *(undefined1 *)(param_1[1] + *param_1) = 0;
  }
  param_1[4] = 0;
  piVar3 = param_1 + 3;
  puVar5 = (uint *)param_2[3];
  uVar1 = param_2[4];
  piVar4 = FUN_0048d4d0(piVar3,(LPVOID)(param_1[4] + 1 + uVar1));
  if (piVar4 == (int *)0x0) {
    FUN_004873c0(1,"Out of memory");
  }
  else {
    if (uVar1 != 0) {
      FUN_0044c490((uint *)(*piVar3 + param_1[4]),puVar5,uVar1);
    }
    param_1[4] = param_1[4] + uVar1;
    *(undefined1 *)(param_1[4] + *piVar3) = 0;
  }
  param_1[7] = 0;
  piVar4 = param_1 + 6;
  iVar2 = param_2[7];
  puVar5 = (uint *)param_2[6];
  piVar3 = FUN_0048d4d0(piVar4,(LPVOID)((param_1[7] + iVar2) * 2 + 2));
  if (piVar3 != (int *)0x0) {
    if (iVar2 != 0) {
      FUN_0044c490((uint *)(*piVar4 + param_1[7] * 2),puVar5,iVar2 * 2);
    }
    param_1[7] = param_1[7] + iVar2;
    *(undefined2 *)(*piVar4 + param_1[7] * 2) = 0;
    return;
  }
  FUN_004873c0(1,"Out of memory");
  return;
}


