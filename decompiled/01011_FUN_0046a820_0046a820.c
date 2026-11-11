// Function: FUN_0046a820
// Entry: 0046a820
// Size: 177 bytes
// Thunk: false
// External: false


void FUN_0046a820(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 != (int *)0x0) && (piVar5 = (int *)param_1[0xd], piVar5 != (int *)0x0)) {
    *param_1 = piVar5[1];
    param_1[5] = piVar5[2];
    param_1[0xd] = *piVar5;
    HeapFree(DAT_00542264,0,piVar5);
    puVar1 = (undefined4 *)*param_1;
    param_1[2] = 0;
    param_1[6] = -1;
    if (puVar1 != (undefined4 *)0x0) {
      iVar4 = param_1[5];
      iVar2 = param_1[1];
      if (*(undefined4 **)(iVar2 + iVar4 * 4) == puVar1) {
        iVar4 = iVar4 + -1;
        param_1[6] = iVar4;
        if (-1 < iVar4) {
          while (*(int *)(iVar2 + iVar4 * 4) == 0) {
            iVar4 = iVar4 + -1;
            param_1[6] = iVar4;
            if (iVar4 < 0) {
              return;
            }
          }
          piVar5 = *(int **)(iVar2 + iVar4 * 4);
          param_1[2] = (int)piVar5;
          piVar5 = (int *)*piVar5;
          if (piVar5 != (int *)0x0) {
            do {
              param_1[2] = (int)piVar5;
              piVar5 = (int *)*piVar5;
            } while (piVar5 != (int *)0x0);
            return;
          }
        }
      }
      else {
        param_1[6] = iVar4;
        puVar3 = *(undefined4 **)(iVar2 + iVar4 * 4);
        param_1[2] = (int)puVar3;
        for (puVar3 = (undefined4 *)*puVar3; (puVar3 != (undefined4 *)0x0 && (puVar3 != puVar1));
            puVar3 = (undefined4 *)*puVar3) {
          param_1[2] = (int)puVar3;
        }
      }
    }
  }
  return;
}


