// Function: FUN_0046b550
// Entry: 0046b550
// Size: 1235 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046b550(uint *param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar2 = param_1;
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    if ((*(int *)(param_2 + 0x88) != 0) && ((*(uint *)(param_2 + 0xe8) & param_3 & 0x4000) != 0)) {
      if (param_4 == -1) {
        iVar4 = 0;
        if (0 < *(int *)(param_2 + 0x80)) {
          iVar5 = 0;
          do {
            FUN_004a48e0((int)param_1,*(LPVOID *)(iVar5 + 4 + *(int *)(param_2 + 0x88)));
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 0x1c;
          } while (iVar4 < *(int *)(param_2 + 0x80));
        }
        FUN_004a48e0((int)param_1,*(LPVOID *)(param_2 + 0x88));
        *(undefined4 *)(param_2 + 0x88) = 0;
        *(undefined4 *)(param_2 + 0x80) = 0;
        *(undefined4 *)(param_2 + 0x84) = 0;
      }
      else {
        FUN_004a48e0((int)param_1,*(LPVOID *)(*(int *)(param_2 + 0x88) + 4 + param_4 * 0x1c));
        *(undefined4 *)(*(int *)(param_2 + 0x88) + 4 + param_4 * 0x1c) = 0;
      }
    }
    puVar1 = (uint *)(param_2 + 8);
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x2000) != 0) {
      *puVar1 = *puVar1 & 0xffffffef;
      FUN_004a48e0((int)param_1,*(LPVOID *)(param_2 + 0x9c));
      *(undefined4 *)(param_2 + 0x9c) = 0;
      *(undefined2 *)(param_2 + 0x16) = 0;
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x100) != 0) {
      FUN_004a48e0((int)param_1,*(LPVOID *)(param_2 + 0x100));
      FUN_004a48e0((int)param_1,*(LPVOID *)(param_2 + 0x104));
      *(undefined4 *)(param_2 + 0x100) = 0;
      *puVar1 = *puVar1 & 0xffffbfff;
      *(undefined4 *)(param_2 + 0x104) = 0;
    }
    if ((char)((byte)*(undefined4 *)(param_2 + 0xe8) & (byte)param_3) < '\0') {
      FUN_004a48e0((int)param_1,*(LPVOID *)(param_2 + 0xd0));
      FUN_004a48e0((int)param_1,*(LPVOID *)(param_2 + 0xdc));
      *(undefined4 *)(param_2 + 0xd0) = 0;
      *(undefined4 *)(param_2 + 0xdc) = 0;
      if (*(int *)(param_2 + 0xe0) != 0) {
        iVar4 = 0;
        if (*(char *)(param_2 + 0xe5) != '\0') {
          iVar5 = 0;
          do {
            FUN_004a48e0((int)param_1,*(LPVOID *)(*(int *)(param_2 + 0xe0) + iVar5));
            iVar5 = iVar5 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(byte *)(param_2 + 0xe5));
        }
        FUN_004a48e0((int)param_1,*(LPVOID *)(param_2 + 0xe0));
        *(undefined4 *)(param_2 + 0xe0) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
    }
    uVar6 = *(uint *)(param_2 + 0xe8);
    if ((uVar6 & param_3 & 0x10) != 0) {
      FUN_004a48e0((int)param_1,*(LPVOID *)(param_2 + 0x74));
      FUN_004a48e0((int)param_1,*(LPVOID *)(param_2 + 0x78));
      uVar6 = *(uint *)(param_2 + 0xe8);
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
      *(undefined4 *)(param_2 + 0x74) = 0;
      *(undefined4 *)(param_2 + 0x78) = 0;
    }
    if ((*(int *)(param_2 + 0xf4) != 0) && ((uVar6 & param_3 & 0x20) != 0)) {
      if (param_4 == -1) {
        iVar4 = 0;
        if (0 < *(int *)(param_2 + 0xf8)) {
          iVar5 = 0;
          do {
            FUN_004a48e0((int)param_1,*(LPVOID *)(iVar5 + *(int *)(param_2 + 0xf4)));
            FUN_004a48e0((int)param_1,*(LPVOID *)(iVar5 + 8 + *(int *)(param_2 + 0xf4)));
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 0x10;
          } while (iVar4 < *(int *)(param_2 + 0xf8));
        }
        param_1 = (uint *)(param_2 + 8);
        FUN_004a48e0((int)puVar2,*(LPVOID *)(param_2 + 0xf4));
        *(undefined4 *)(param_2 + 0xf4) = 0;
        *(undefined4 *)(param_2 + 0xf8) = 0;
        *param_1 = *param_1 & 0xffffdfff;
      }
      else {
        FUN_004a48e0((int)param_1,*(LPVOID *)(*(int *)(param_2 + 0xf4) + param_4 * 0x10));
        FUN_004a48e0((int)param_1,*(LPVOID *)(*(int *)(param_2 + 0xf4) + 8 + param_4 * 0x10));
        iVar4 = *(int *)(param_2 + 0xf4);
        *(undefined4 *)(iVar4 + param_4 * 0x10) = 0;
        *(undefined4 *)(iVar4 + 8 + param_4 * 0x10) = 0;
      }
    }
    if ((*(int *)(param_2 + 0xec) != 0) && ((*(uint *)(param_2 + 0xe8) & param_3 & 0x200) != 0)) {
      if (param_4 == -1) {
        iVar4 = 0;
        if (0 < *(int *)(param_2 + 0xf0)) {
          iVar5 = 0;
          do {
            FUN_004a48e0((int)puVar2,*(LPVOID *)(iVar5 + 8 + *(int *)(param_2 + 0xec)));
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 0x14;
          } while (iVar4 < *(int *)(param_2 + 0xf0));
        }
        FUN_004a48e0((int)puVar2,*(LPVOID *)(param_2 + 0xec));
        *(undefined4 *)(param_2 + 0xec) = 0;
        *(undefined4 *)(param_2 + 0xf0) = 0;
      }
      else {
        FUN_004a48e0((int)puVar2,*(LPVOID *)(*(int *)(param_2 + 0xec) + 8 + param_4 * 0x14));
        *(undefined4 *)(*(int *)(param_2 + 0xec) + 8 + param_4 * 0x14) = 0;
      }
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 8) != 0) {
      FUN_004a48e0((int)puVar2,*(LPVOID *)(param_2 + 0xcc));
      *(undefined4 *)(param_2 + 0xcc) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
    }
    if ((*(uint *)(param_2 + 0xe8) & param_3 & 0x1000) != 0) {
      FUN_004a48e0((int)puVar2,*(LPVOID *)(param_2 + 0x10));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined2 *)(param_2 + 0x14) = 0;
    }
    uVar6 = *(uint *)(param_2 + 0xe8);
    if ((uVar6 & param_3 & 0x40) != 0) {
      if (*(int *)(param_2 + 0x108) != 0) {
        uVar6 = 0;
        if (*(int *)(param_2 + 4) != 0) {
          do {
            FUN_004a48e0((int)puVar2,*(LPVOID *)(*(int *)(param_2 + 0x108) + uVar6 * 4));
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)(param_2 + 4));
        }
        FUN_004a48e0((int)puVar2,*(LPVOID *)(param_2 + 0x108));
        uVar6 = *(uint *)(param_2 + 0xe8);
        *(undefined4 *)(param_2 + 0x108) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
    }
    uVar3 = param_3 & 0xffffbddf;
    if (param_4 == -1) {
      uVar3 = param_3;
    }
    *(uint *)(param_2 + 0xe8) = ~uVar3 & uVar6;
  }
  return;
}


