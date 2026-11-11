// Function: FUN_0046d230
// Entry: 0046d230
// Size: 1381 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046d230(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  double dVar14;
  uint local_2c;
  uint local_24;
  
  piVar1 = (int *)(param_1 + 400);
  if ((*(int *)(param_1 + 0x18c) != 0) || (*piVar1 != 0)) {
    FUN_0046f1c0(param_1,"gamma table being rebuilt");
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x18c));
    *(undefined4 *)(param_1 + 0x18c) = 0;
    if (*piVar1 != 0) {
      iVar10 = 0;
      iVar3 = 1 << (8U - (char)*(undefined4 *)(param_1 + 0x184) & 0x1f);
      if (0 < iVar3) {
        do {
          FUN_004a48e0(param_1,*(LPVOID *)(*piVar1 + iVar10 * 4));
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar3);
      }
      FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 400));
      *(undefined4 *)(param_1 + 400) = 0;
    }
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x194));
    *(undefined4 *)(param_1 + 0x194) = 0;
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(int *)(param_1 + 0x19c) != 0) {
      iVar10 = 0;
      iVar3 = 1 << (8U - (char)*(undefined4 *)(param_1 + 0x184) & 0x1f);
      if (0 < iVar3) {
        do {
          FUN_004a48e0(param_1,*(LPVOID *)(*(int *)(param_1 + 0x19c) + iVar10 * 4));
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar3);
      }
      FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x19c));
      *(undefined4 *)(param_1 + 0x19c) = 0;
    }
    if (*(int *)(param_1 + 0x1a0) != 0) {
      iVar10 = 0;
      iVar3 = 1 << (8U - (char)*(undefined4 *)(param_1 + 0x184) & 0x1f);
      if (0 < iVar3) {
        do {
          FUN_004a48e0(param_1,*(LPVOID *)(*(int *)(param_1 + 0x1a0) + iVar10 * 4));
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar3);
      }
      FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x1a0));
      *(undefined4 *)(param_1 + 0x1a0) = 0;
    }
  }
  if (param_2 < 9) {
    if (*(int *)(param_1 + 0x188) < 1) {
      iVar3 = 100000;
    }
    else {
      iVar3 = FUN_0046ceb0(*(int *)(param_1 + 0x2c4),*(int *)(param_1 + 0x188));
    }
    FUN_0046e5f0(param_1,(int *)(param_1 + 0x18c),iVar3);
    if ((*(uint *)(param_1 + 0x7c) & 0x600080) == 0) {
      return;
    }
    iVar3 = FUN_0046ce40(*(int *)(param_1 + 0x2c4));
    FUN_0046e5f0(param_1,(int *)(param_1 + 0x198),iVar3);
    if (*(int *)(param_1 + 0x188) < 1) {
      iVar3 = *(int *)(param_1 + 0x2c4);
    }
    else {
      iVar3 = FUN_0046ce40(*(int *)(param_1 + 0x188));
    }
    FUN_0046e5f0(param_1,(int *)(param_1 + 0x194),iVar3);
    return;
  }
  if ((*(byte *)(param_1 + 0x14f) & 2) == 0) {
    bVar2 = *(byte *)(param_1 + 0x1a7);
  }
  else {
    bVar9 = *(byte *)(param_1 + 0x1a5);
    if (*(byte *)(param_1 + 0x1a5) <= *(byte *)(param_1 + 0x1a4)) {
      bVar9 = *(byte *)(param_1 + 0x1a4);
    }
    bVar2 = *(byte *)(param_1 + 0x1a6);
    if (*(byte *)(param_1 + 0x1a6) <= bVar9) {
      bVar2 = bVar9;
    }
  }
  local_24 = (uint)(byte)(0x10 - bVar2);
  if (0xe < (byte)(bVar2 - 1)) {
    local_24 = 0;
  }
  uVar7 = *(uint *)(param_1 + 0x7c) & 0x4000400;
  if ((uVar7 == 0) || (4 < (byte)local_24)) {
    iVar3 = *(int *)(param_1 + 0x188);
    if (8 < (byte)local_24) {
      local_24 = 8;
    }
    *(uint *)(param_1 + 0x184) = local_24;
    if (uVar7 == 0) {
      if (iVar3 < 1) {
        iVar3 = 100000;
      }
      else {
        iVar3 = FUN_0046ceb0(*(int *)(param_1 + 0x2c4),iVar3);
      }
      FUN_0046e450(param_1,(undefined4 *)(param_1 + 400),local_24,iVar3);
      goto LAB_0046d734;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x188);
    local_24 = 5;
    *(undefined4 *)(param_1 + 0x184) = 5;
  }
  if (0 < iVar3) {
    FUN_0046a200((double)*(int *)(param_1 + 0x2c4) * _DAT_0050db10 * (double)iVar3 + DAT_0050c088);
  }
  bVar2 = (byte)local_24;
  uVar7 = 1 << (8 - bVar2 & 0x1f);
  pvVar4 = FUN_004a4830(param_1,uVar7 * 4);
  uVar11 = 0;
  *(void **)(param_1 + 400) = pvVar4;
  if (uVar7 != 0) {
    do {
      iVar3 = FUN_004a47f0(param_1,0x200);
      *(int *)((int)pvVar4 + uVar11 * 4) = iVar3;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar7);
  }
  uVar12 = 0;
  local_2c = 0;
  uVar11 = 8 - local_24;
  do {
    uVar5 = local_2c * 0x101 & 0xffff;
    uVar6 = uVar5 + 0x80;
    if (uVar6 < 0xffff) {
      dVar14 = (double)uVar6 / _DAT_0050db18;
      FUN_00483370(uVar11);
      fVar13 = FUN_0046a200(dVar14 * _DAT_0050db18 + DAT_0050c088);
      uVar6 = (uint)fVar13;
    }
    uVar11 = (uVar6 & 0xffff) * ((1 << (0x10 - bVar2 & 0x1f)) + -1) + 0x8000;
    uVar6 = uVar11 / 0xffff + 1;
    if (uVar12 < uVar6) {
      do {
        uVar11 = 0xffU >> (bVar2 & 0x1f) & uVar12;
        uVar8 = uVar12 >> ((byte)(8 - local_24) & 0x1f);
        uVar12 = uVar12 + 1;
        *(short *)(*(int *)((int)pvVar4 + uVar11 * 4) + uVar8 * 2) = (short)(local_2c * 0x101);
        uVar11 = uVar5;
      } while (uVar12 < uVar6);
    }
    local_2c = local_2c + 1;
  } while (local_2c < 0xff);
  if (uVar12 < uVar7 << 8) {
    do {
      uVar11 = 0xff >> (bVar2 & 0x1f) & uVar12;
      uVar5 = uVar12 >> (8 - bVar2 & 0x1f);
      uVar12 = uVar12 + 1;
      *(undefined2 *)(*(int *)((int)pvVar4 + uVar11 * 4) + uVar5 * 2) = 0xffff;
    } while (uVar12 < uVar7 << 8);
  }
LAB_0046d734:
  if ((*(uint *)(param_1 + 0x7c) & 0x600080) != 0) {
    iVar3 = FUN_0046ce40(*(int *)(param_1 + 0x2c4));
    FUN_0046e450(param_1,(undefined4 *)(param_1 + 0x1a0),local_24,iVar3);
    if (*(int *)(param_1 + 0x188) < 1) {
      iVar3 = *(int *)(param_1 + 0x2c4);
    }
    else {
      iVar3 = FUN_0046ce40(*(int *)(param_1 + 0x188));
    }
    FUN_0046e450(param_1,(undefined4 *)(param_1 + 0x19c),local_24,iVar3);
  }
  return;
}


