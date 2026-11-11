// Function: FUN_004ea960
// Entry: 004ea960
// Size: 245 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004ea960(int *param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_0049b270(0x3cdf8,param_2);
    *param_1 = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 5;
    }
  }
  if (param_3[6] == 1) {
    *(undefined1 *)(puVar2 + 0x2a7) = 1;
  }
  else {
    if (param_3[6] != 2) {
      return 8;
    }
    *(undefined1 *)(puVar2 + 0x2a7) = 0;
    iVar5 = 0;
    if (1 < *param_3) {
      uVar3 = 1;
      do {
        uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
        iVar5 = iVar5 + 1;
      } while (uVar3 < *param_3);
    }
    puVar2[0x4368] = iVar5 * 2;
    puVar2[0x2e45] = param_3[7] - 1;
    puVar2[0x4057] = param_3[7] - 1;
  }
  if ((param_3[1] == 0) || (param_3[2] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((int)puVar2 + 0xa9d) = uVar1;
  *(undefined1 *)((int)puVar2 + 0xa9e) = 0;
  *param_4 = 0x1000;
  param_4[1] = *param_3;
  param_4[2] = 0x1001;
  param_4[3] = 0x111;
  param_4[4] = param_3[7];
  param_4[5] = param_3[8];
  param_4[6] = param_3[9];
  param_4[7] = param_3[1];
  param_4[8] = param_3[2];
  uVar4 = FUN_004eaa60(puVar2,(int)param_3);
  return uVar4;
}


