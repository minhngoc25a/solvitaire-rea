// Function: FUN_004c95b0
// Entry: 004c95b0
// Size: 2751 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c95b0(int param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)(param_1 + 0x4c);
  if (0 < *(int *)(param_1 + 0x44)) {
    uVar4 = *(uint *)(param_1 + 0x260);
    *(uint *)(param_1 + 0x260) = ~uVar4;
    *(uint *)(param_1 + 0x264) =
         (*(uint *)(param_1 + 0x264) >> 0x1f | *(uint *)(param_1 + 0x264) * 2) ^ ~uVar4;
    if (*(int *)(param_1 + 0x26c) < 2) {
      FUN_005013c0(param_1);
    }
    else {
      *piVar6 = 0;
      FUN_005013c0(param_1);
    }
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x26c) == 1) {
    *(undefined4 *)(param_1 + 600) = 0x42000000;
    uVar4 = 0x42000000;
    *(undefined4 *)(param_1 + 0x25c) = 8;
    do {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c);
      *piVar6 = *piVar6 + 1;
      iVar5 = *piVar6;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3 + -8;
    } while (7 < iVar3 + -8);
    *(int *)(param_1 + 0x25c) = iVar3;
    uVar4 = 0x5a << (0x18U - ((char)iVar3 + -8) & 0x1f) | uVar4;
    *(uint *)(param_1 + 600) = uVar4;
    while (7 < iVar3) {
      *(char *)(*(int *)(param_1 + 0x2c) + iVar5) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      iVar5 = *(int *)(param_1 + 0x4c);
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    uVar4 = 0x68 << (0x18U - (char)iVar3 & 0x1f) | uVar4;
    iVar3 = iVar3 + 8;
    cVar1 = *(char *)(param_1 + 0x270);
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar3;
    while (7 < iVar3) {
      *(char *)(*(int *)(param_1 + 0x2c) + iVar5) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      iVar5 = *(int *)(param_1 + 0x4c);
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    *(uint *)(param_1 + 600) = (uint)(byte)(cVar1 + 0x30) << (0x18U - (char)iVar3 & 0x1f) | uVar4;
    *(int *)(param_1 + 0x25c) = iVar3 + 8;
  }
  piVar6 = (int *)(param_1 + 0x4c);
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar3 = *(int *)(param_1 + 0x25c);
    while (7 < iVar3) {
      *(undefined1 *)(*piVar6 + *(int *)(param_1 + 0x2c)) = *(undefined1 *)(param_1 + 0x25b);
      *piVar6 = *piVar6 + 1;
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar5 = iVar3 + 8;
    uVar4 = 0x31 << (0x18U - (char)iVar3 & 0x1f) | *(uint *)(param_1 + 600);
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    while (7 < iVar5) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    uVar4 = 0x41 << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    iVar5 = iVar5 + 8;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    while (7 < iVar5) {
      *(char *)(*(int *)(param_1 + 0x2c) + *piVar6) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    uVar4 = 0x59 << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    iVar5 = iVar5 + 8;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    while (7 < iVar5) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    uVar4 = 0x26 << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    iVar5 = iVar5 + 8;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    while (7 < iVar5) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    uVar4 = 0x53 << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    iVar5 = iVar5 + 8;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    while (7 < iVar5) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar3 = iVar5 + 8;
    uVar2 = *(uint *)(param_1 + 0x260);
    uVar4 = 0x59 << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar3;
    while (7 < iVar3) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar5 = iVar3 + 8;
    *(int *)(param_1 + 0x25c) = iVar5;
    uVar4 = (uVar2 >> 0x18) << (0x18U - (char)iVar3 & 0x1f) | uVar4;
    *(uint *)(param_1 + 600) = uVar4;
    while (7 < iVar5) {
      *(char *)(*(int *)(param_1 + 0x2c) + *piVar6) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar3 = iVar5 + 8;
    uVar4 = (uVar2 >> 0x10 & 0xff) << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    *(int *)(param_1 + 0x25c) = iVar3;
    *(uint *)(param_1 + 600) = uVar4;
    while (7 < iVar3) {
      *(char *)(*(int *)(param_1 + 0x2c) + *piVar6) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar5 = iVar3 + 8;
    uVar4 = (uVar2 >> 8 & 0xff) << (0x18U - (char)iVar3 & 0x1f) | uVar4;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    while (7 < iVar5) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar3 = iVar5 + 8;
    uVar4 = (uVar2 & 0xff) << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar3;
    while (7 < iVar3) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar3 = iVar3 + 1;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar3;
    while (7 < iVar3) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    *(int *)(param_1 + 0x25c) = iVar3 + 0x18;
    *(uint *)(param_1 + 600) = iVar5 << (8U - (char)iVar3 & 0x1f) | uVar4;
    FUN_004ca070(param_1);
    FUN_004ca260(param_1);
  }
  piVar6 = (int *)(param_1 + 0x4c);
  if (param_3 != '\0') {
    iVar3 = *(int *)(param_1 + 0x25c);
    while (7 < iVar3) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + *piVar6) = *(undefined1 *)(param_1 + 0x25b);
      *piVar6 = *piVar6 + 1;
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar5 = iVar3 + 8;
    *(int *)(param_1 + 0x25c) = iVar5;
    uVar4 = 0x17 << (0x18U - (char)iVar3 & 0x1f) | *(uint *)(param_1 + 600);
    *(uint *)(param_1 + 600) = uVar4;
    while (7 < iVar5) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar3 = iVar5 + 8;
    uVar4 = 0x72 << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar3;
    while (7 < iVar3) {
      *(char *)(*(int *)(param_1 + 0x2c) + *piVar6) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar5 = iVar3 + 8;
    uVar4 = 0x45 << (0x18U - (char)iVar3 & 0x1f) | uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    *(uint *)(param_1 + 600) = uVar4;
    while (7 < iVar5) {
      *(char *)(*(int *)(param_1 + 0x2c) + *piVar6) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar3 = iVar5 + 8;
    uVar4 = 0x38 << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    *(int *)(param_1 + 0x25c) = iVar3;
    *(uint *)(param_1 + 600) = uVar4;
    while (7 < iVar3) {
      *(char *)(*(int *)(param_1 + 0x2c) + *piVar6) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar5 = iVar3 + 8;
    uVar4 = 0x50 << (0x18U - (char)iVar3 & 0x1f) | uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    *(uint *)(param_1 + 600) = uVar4;
    while (7 < iVar5) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar3 = iVar5 + 8;
    uVar4 = 0x90 << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    *(int *)(param_1 + 0x25c) = iVar3;
    uVar2 = *(uint *)(param_1 + 0x264);
    *(uint *)(param_1 + 600) = uVar4;
    while (7 < iVar3) {
      *(char *)(*(int *)(param_1 + 0x2c) + *piVar6) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar5 = iVar3 + 8;
    uVar4 = (uVar2 >> 0x18) << (0x18U - (char)iVar3 & 0x1f) | uVar4;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    while (7 < iVar5) {
      *(char *)(*(int *)(param_1 + 0x2c) + *piVar6) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar3 = iVar5 + 8;
    uVar4 = (uVar2 >> 0x10 & 0xff) << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    *(int *)(param_1 + 0x25c) = iVar3;
    *(uint *)(param_1 + 600) = uVar4;
    while (7 < iVar3) {
      *(char *)(*(int *)(param_1 + 0x2c) + *piVar6) = (char)(uVar4 >> 0x18);
      iVar3 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar3;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    iVar5 = iVar3 + 8;
    uVar4 = (uVar2 >> 8 & 0xff) << (0x18U - (char)iVar3 & 0x1f) | uVar4;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    while (7 < iVar5) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      iVar5 = *(int *)(param_1 + 0x25c) + -8;
      *piVar6 = *piVar6 + 1;
      uVar4 = *(int *)(param_1 + 600) << 8;
      *(uint *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x25c) = iVar5;
    }
    piVar6 = (int *)(param_1 + 0x4c);
    uVar4 = (uVar2 & 0xff) << (0x18U - (char)iVar5 & 0x1f) | uVar4;
    iVar5 = iVar5 + 8;
    *(uint *)(param_1 + 600) = uVar4;
    *(int *)(param_1 + 0x25c) = iVar5;
    while (0 < iVar5) {
      *(char *)(*piVar6 + *(int *)(param_1 + 0x2c)) = (char)(uVar4 >> 0x18);
      *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
      *piVar6 = *piVar6 + 1;
      *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -8;
      uVar4 = *(uint *)(param_1 + 600);
      iVar5 = *(int *)(param_1 + 0x25c);
    }
  }
  return;
}


