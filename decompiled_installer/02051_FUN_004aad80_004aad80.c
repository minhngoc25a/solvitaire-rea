// Function: FUN_004aad80
// Entry: 004aad80
// Size: 1214 bytes
// Thunk: false
// External: false


void __cdecl FUN_004aad80(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x188);
  uVar1 = *(uint *)(param_1 + 0x34);
  uVar4 = *(int *)(param_1 + 0x30) * iVar2;
  if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c),iVar2);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 1;
    *(undefined4 *)(param_1 + 0x124) = 1;
  }
  else if (uVar4 < uVar1 * 2 || uVar4 + uVar1 * -2 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 2,iVar2);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 2,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 2;
    *(undefined4 *)(param_1 + 0x124) = 2;
  }
  else if (uVar4 < uVar1 * 3 || uVar4 + uVar1 * -3 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 3,iVar2);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 3,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 3;
    *(undefined4 *)(param_1 + 0x124) = 3;
  }
  else if (uVar4 < uVar1 * 4 || uVar4 + uVar1 * -4 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) << 2,iVar2);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) << 2,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 4;
    *(undefined4 *)(param_1 + 0x124) = 4;
  }
  else if (uVar4 < uVar1 * 5 || uVar4 + uVar1 * -5 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 5,iVar2);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 5,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 5;
    *(undefined4 *)(param_1 + 0x124) = 5;
  }
  else if (uVar4 < uVar1 * 6 || uVar4 + uVar1 * -6 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 6,iVar2);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 6,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 6;
    *(undefined4 *)(param_1 + 0x124) = 6;
  }
  else if (uVar4 < uVar1 * 7 || uVar4 + uVar1 * -7 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 7,iVar2);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 7,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 7;
    *(undefined4 *)(param_1 + 0x124) = 7;
  }
  else if (uVar4 < uVar1 * 8 || uVar4 + uVar1 * -8 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) << 3,iVar2);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) << 3,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 8;
    *(undefined4 *)(param_1 + 0x124) = 8;
  }
  else if (uVar4 < uVar1 * 9 || uVar4 + uVar1 * -9 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 9,iVar2);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 9,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 9;
    *(undefined4 *)(param_1 + 0x124) = 9;
  }
  else if (uVar4 < uVar1 * 10 || uVar4 + uVar1 * -10 == 0) {
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 10,*(int *)(param_1 + 0x188));
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 10,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 10;
    *(undefined4 *)(param_1 + 0x124) = 10;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x188);
    if (uVar4 < uVar1 * 0xb || uVar4 + uVar1 * -0xb == 0) {
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 0xb,iVar2);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 0xb,*(int *)(param_1 + 0x188));
      *(undefined4 *)(param_1 + 0x120) = 0xb;
      *(undefined4 *)(param_1 + 0x124) = 0xb;
    }
    else if (uVar4 < uVar1 * 0xc || uVar4 + uVar1 * -0xc == 0) {
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 0xc,iVar2);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 0xc,*(int *)(param_1 + 0x188));
      *(undefined4 *)(param_1 + 0x120) = 0xc;
      *(undefined4 *)(param_1 + 0x124) = 0xc;
    }
    else if (uVar4 < uVar1 * 0xd || uVar4 + uVar1 * -0xd == 0) {
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 0xd,iVar2);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 0xd,*(int *)(param_1 + 0x188));
      *(undefined4 *)(param_1 + 0x120) = 0xd;
      *(undefined4 *)(param_1 + 0x124) = 0xd;
    }
    else if (uVar4 < uVar1 * 0xe || uVar4 + uVar1 * -0xe == 0) {
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 0xe,iVar2);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 0xe,*(int *)(param_1 + 0x188));
      *(undefined4 *)(param_1 + 0x120) = 0xe;
      *(undefined4 *)(param_1 + 0x124) = 0xe;
    }
    else if (uVar4 < uVar1 * 0xf || uVar4 + uVar1 * -0xf == 0) {
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) * 0xf,iVar2);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) * 0x10 - *(int *)(param_1 + 0x20),
                           *(int *)(param_1 + 0x188));
      *(undefined4 *)(param_1 + 0x120) = 0xf;
      *(undefined4 *)(param_1 + 0x124) = 0xf;
    }
    else {
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x1c) << 4,iVar2);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar2 = FUN_004b7740(*(int *)(param_1 + 0x20) << 4,*(int *)(param_1 + 0x188));
      *(undefined4 *)(param_1 + 0x120) = 0x10;
      *(undefined4 *)(param_1 + 0x124) = 0x10;
    }
  }
  *(int *)(param_1 + 0x60) = iVar2;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc4) + 0x28);
    do {
      puVar3[-1] = *(undefined4 *)(param_1 + 0x120);
      iVar2 = iVar2 + 1;
      *puVar3 = *(undefined4 *)(param_1 + 0x124);
      puVar3 = puVar3 + 0x16;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return;
}


