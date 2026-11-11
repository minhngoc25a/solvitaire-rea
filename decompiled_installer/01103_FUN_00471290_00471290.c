// Function: FUN_00471290
// Entry: 00471290
// Size: 263 bytes
// Thunk: false
// External: false


void __cdecl FUN_00471290(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if ((char)param_1[2] == '\x06') {
    puVar3 = (undefined1 *)(param_1[1] + param_2);
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar4 = puVar3;
      if (iVar5 != 0) {
        do {
          uVar1 = puVar3[-1];
          puVar4[-1] = puVar3[-2];
          puVar4[-2] = puVar3[-3];
          puVar4[-3] = puVar3[-4];
          puVar4[-4] = uVar1;
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + -4;
          puVar4 = puVar4 + -4;
        } while (iVar5 != 0);
        return;
      }
    }
    else {
      puVar4 = puVar3;
      if (iVar5 != 0) {
        do {
          uVar1 = puVar3[-1];
          uVar2 = puVar3[-2];
          puVar4[-1] = puVar3[-3];
          puVar4[-2] = puVar3[-4];
          puVar4[-3] = puVar3[-5];
          puVar4[-4] = puVar3[-6];
          puVar4[-5] = puVar3[-7];
          puVar4[-6] = puVar3[-8];
          puVar4[-7] = uVar1;
          puVar4[-8] = uVar2;
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + -8;
          puVar4 = puVar4 + -8;
        } while (iVar5 != 0);
        return;
      }
    }
  }
  else if ((char)param_1[2] == '\x04') {
    puVar3 = (undefined1 *)(param_1[1] + param_2);
    puVar4 = puVar3;
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (iVar5 != 0) {
        do {
          uVar1 = puVar3[-1];
          puVar3 = puVar3 + -2;
          puVar4[-1] = *puVar3;
          puVar4[-2] = uVar1;
          iVar5 = iVar5 + -1;
          puVar4 = puVar4 + -2;
        } while (iVar5 != 0);
        return;
      }
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar1 = puVar3[-1];
        uVar2 = puVar3[-2];
        puVar4[-1] = puVar3[-3];
        puVar4[-2] = puVar3[-4];
        puVar4[-3] = uVar1;
        puVar4[-4] = uVar2;
        puVar3 = puVar3 + -4;
        puVar4 = puVar4 + -4;
      }
    }
  }
  return;
}


