// Function: FUN_004065d0
// Entry: 004065d0
// Size: 349 bytes
// Thunk: false
// External: false


int __cdecl FUN_004065d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  DWORD DVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 local_134;
  int local_130;
  int local_12c;
  int local_128;
  undefined4 local_124;
  char local_120 [272];
  
  if (param_1 == 0) {
    piVar2 = _errno();
    *piVar2 = 9;
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x134);
  *(int *)(param_1 + 0x134) = iVar1 + 1;
  if (iVar1 < 1) {
LAB_0040667b:
    sVar4 = strlen((char *)(param_1 + 0x2c));
    *(short *)(param_1 + 6) = (short)sVar4;
    uVar5 = *(uint *)(param_1 + 8) & 0xffffffd8;
    if ((uVar5 == 0) || (uVar5 == 0x10)) {
      *(uint *)(param_1 + 8) = uVar5;
      return param_1;
    }
    *(undefined4 *)(param_1 + 8) = 0x18;
  }
  else {
    piVar2 = _errno();
    iVar1 = *piVar2;
    iVar3 = findnext(*(undefined4 *)(param_1 + 0x130),&local_134);
    if (iVar3 == -1) {
      puVar8 = (undefined4 *)(param_1 + 8);
      uVar5 = 0x128;
      bVar10 = ((uint)puVar8 & 1) != 0;
      if (bVar10) {
        *(undefined1 *)(param_1 + 8) = 0;
        puVar8 = (undefined4 *)(param_1 + 9);
        uVar5 = 0x127;
      }
      puVar9 = puVar8;
      if (((uint)puVar8 & 2) != 0) {
        puVar9 = (undefined4 *)((int)puVar8 + 2);
        *(undefined2 *)puVar8 = 0;
        uVar5 = uVar5 - 2;
      }
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      puVar8 = puVar9;
      if ((uVar5 & 2) != 0) {
        puVar8 = (undefined4 *)((int)puVar9 + 2);
        *(undefined2 *)puVar9 = 0;
      }
      if (bVar10) {
        *(undefined1 *)puVar8 = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 8) = local_134;
      *(int *)(param_1 + 0x10) = local_130;
      *(int *)(param_1 + 0x14) = local_130 >> 0x1f;
      *(int *)(param_1 + 0x18) = local_12c;
      *(int *)(param_1 + 0x1c) = local_12c >> 0x1f;
      *(int *)(param_1 + 0x20) = local_128;
      *(int *)(param_1 + 0x24) = local_128 >> 0x1f;
      *(undefined4 *)(param_1 + 0x28) = local_124;
      strncpy((char *)(param_1 + 0x2c),local_120,0x104);
      if (iVar3 == 0) goto LAB_0040667b;
    }
    DVar6 = GetLastError();
    param_1 = 0;
    if (DVar6 == 0x12) {
      piVar2 = _errno();
      *piVar2 = iVar1;
    }
  }
  return param_1;
}


