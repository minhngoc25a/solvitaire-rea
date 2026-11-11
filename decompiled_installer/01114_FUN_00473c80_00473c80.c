// Function: FUN_00473c80
// Entry: 00473c80
// Size: 369 bytes
// Thunk: false
// External: false


void __cdecl FUN_00473c80(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  puVar5 = param_2 + *(int *)(param_1 + 4);
  puVar1 = param_2;
  if (*(char *)(param_1 + 10) == '\x02') {
    if (*(char *)(param_1 + 9) == '\b') {
      if (param_3 == 0) {
        puVar1 = param_2 + 1;
      }
      for (puVar3 = param_2 + (2 - (uint)(param_3 != 0)); puVar3 < puVar5; puVar3 = puVar3 + 2) {
        *puVar1 = *puVar3;
        puVar1 = puVar1 + 1;
      }
      uVar2 = 8;
    }
    else {
      if (*(char *)(param_1 + 9) != '\x10') {
        return;
      }
      puVar3 = param_2 + (uint)(param_3 == 0) * 2 + 2;
      if (param_3 == 0) {
        puVar1 = param_2 + 2;
      }
      for (; puVar3 < puVar5; puVar3 = puVar3 + 4) {
        *puVar1 = *puVar3;
        puVar1[1] = puVar3[1];
        puVar1 = puVar1 + 2;
      }
      uVar2 = 0x10;
    }
    *(undefined1 *)(param_1 + 0xb) = uVar2;
    *(undefined1 *)(param_1 + 10) = 1;
    if (*(char *)(param_1 + 8) == '\x04') {
      *(undefined1 *)(param_1 + 8) = 0;
      *(int *)(param_1 + 4) = (int)puVar1 - (int)param_2;
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 10) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 9) == '\b') {
      iVar4 = 1;
      if (param_3 == 0) {
        iVar4 = 4;
        puVar1 = param_2 + 3;
      }
      for (puVar3 = param_2 + iVar4; puVar3 < puVar5; puVar3 = puVar3 + 4) {
        *puVar1 = *puVar3;
        puVar1[1] = puVar3[1];
        puVar1[2] = puVar3[2];
        puVar1 = puVar1 + 3;
      }
      uVar2 = 0x18;
    }
    else {
      if (*(char *)(param_1 + 9) != '\x10') {
        return;
      }
      iVar4 = 2;
      if (param_3 == 0) {
        iVar4 = 8;
        puVar1 = param_2 + 6;
      }
      for (puVar3 = param_2 + iVar4; puVar3 < puVar5; puVar3 = puVar3 + 8) {
        *puVar1 = *puVar3;
        puVar1[1] = puVar3[1];
        puVar1[2] = puVar3[2];
        puVar1[3] = puVar3[3];
        puVar1[4] = puVar3[4];
        puVar1[5] = puVar3[5];
        puVar1 = puVar1 + 6;
      }
      uVar2 = 0x30;
    }
    *(undefined1 *)(param_1 + 0xb) = uVar2;
    *(undefined1 *)(param_1 + 10) = 3;
    if (*(char *)(param_1 + 8) == '\x06') {
      *(undefined1 *)(param_1 + 8) = 2;
    }
  }
  *(int *)(param_1 + 4) = (int)puVar1 - (int)param_2;
  return;
}


