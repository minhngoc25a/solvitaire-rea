// Function: FUN_004a6f60
// Entry: 004a6f60
// Size: 729 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a6f60(uint param_1)

{
  char cVar1;
  LPVOID pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_004703c0(param_1);
  uVar3 = *(uint *)(param_1 + 0x104);
  if (*(char *)(param_1 + 0x14c) == '\0') {
    *(uint *)(param_1 + 0x108) = uVar3;
    uVar3 = *(uint *)(param_1 + 0x100);
  }
  else {
    if ((*(byte *)(param_1 + 0x7c) & 2) == 0) {
      uVar3 = uVar3 + 7 >> 3;
    }
    *(uint *)(param_1 + 0x108) = uVar3;
    uVar3 = (((byte)(&DAT_005194dc)[*(byte *)(param_1 + 0x14d)] - 1) +
            (*(int *)(param_1 + 0x100) - (uint)(byte)(&DAT_005194d4)[*(byte *)(param_1 + 0x14d)])) /
            (uint)(byte)(&DAT_005194dc)[*(byte *)(param_1 + 0x14d)];
  }
  *(uint *)(param_1 + 0x114) = uVar3;
  uVar3 = *(uint *)(param_1 + 0x7c);
  uVar6 = (uint)*(byte *)(param_1 + 0x152);
  if (((uVar3 & 4) != 0) && (*(byte *)(param_1 + 0x150) < 8)) {
    uVar6 = 8;
  }
  uVar7 = uVar6;
  if ((uVar3 & 0x1000) != 0) {
    cVar1 = *(char *)(param_1 + 0x14f);
    if (cVar1 == '\x03') {
      uVar7 = (uint)(*(short *)(param_1 + 0x148) != 0) * 8 + 0x18;
    }
    else if (cVar1 == '\0') {
      if (uVar6 < 8) {
        uVar6 = 8;
      }
      uVar7 = uVar6 * 2;
      if (*(short *)(param_1 + 0x148) == 0) {
        uVar7 = uVar6;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)(param_1 + 0x148) != 0)) {
      uVar7 = (uVar6 * 4) / 3;
    }
  }
  if ((uVar3 & 0x200) != 0) {
    if ((uVar3 & 0x1000) == 0) {
      *(uint *)(param_1 + 0x7c) = uVar3 & 0xfffffdff;
    }
    else if (*(byte *)(param_1 + 0x150) < 0x10) {
      uVar7 = uVar7 * 2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x7c);
  if ((uVar3 & 0x8000) != 0) {
    cVar1 = *(char *)(param_1 + 0x14f);
    if (cVar1 == '\0') {
      uVar7 = (-(uint)(8 < uVar7) & 0x10) + 0x10;
    }
    else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      uVar7 = (-(uint)(0x20 < uVar7) & 0x20) + 0x20;
    }
  }
  if ((uVar3 & 0x4000) != 0) {
    if ((((*(short *)(param_1 + 0x148) == 0) || ((uVar3 & 0x1000) == 0)) && ((uVar3 & 0x8000) == 0))
       && (cVar1 = *(char *)(param_1 + 0x14f), cVar1 != '\x04')) {
      if (uVar7 < 9) {
        uVar7 = (uint)(cVar1 == '\x06') * 8 + 0x18;
      }
      else {
        uVar7 = 0x30;
        if (cVar1 == '\x06') {
          uVar7 = 0x40;
        }
      }
    }
    else {
      uVar7 = (-(uint)(0x10 < uVar7) & 0x20) + 0x20;
    }
  }
  if (((uVar3 & 0x100000) != 0) &&
     (uVar3 = (uint)*(byte *)(param_1 + 0x71) * (uint)*(byte *)(param_1 + 0x70),
     uVar7 <= uVar3 && uVar3 - uVar7 != 0)) {
    uVar7 = uVar3;
  }
  *(char *)(param_1 + 0x156) = (char)uVar7;
  uVar3 = *(int *)(param_1 + 0x100) + 7U & 0xfffffff8;
  *(undefined1 *)(param_1 + 0x157) = 0;
  if (uVar7 < 8) {
    uVar3 = uVar3 * uVar7 >> 3;
  }
  else {
    uVar3 = (uVar7 >> 3) * uVar3;
  }
  uVar3 = uVar3 + 0x31 + (uVar7 + 7 >> 3);
  if (*(uint *)(param_1 + 0x29c) < uVar3) {
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x264));
    FUN_004a48e0(param_1,*(LPVOID *)(param_1 + 0x2b0));
    if (*(char *)(param_1 + 0x14c) == '\0') {
      pvVar4 = (void *)FUN_004a47f0(param_1,uVar3);
    }
    else {
      pvVar4 = FUN_004a4830(param_1,uVar3);
    }
    *(void **)(param_1 + 0x264) = pvVar4;
    iVar5 = FUN_004a47f0(param_1,uVar3);
    *(int *)(param_1 + 0x2b0) = iVar5;
    *(uint *)(param_1 + 0x29c) = uVar3;
    *(uint *)(param_1 + 0x124) = (*(int *)(param_1 + 0x264) + 0x20U & 0xfffffff0) - 1;
    *(uint *)(param_1 + 0x120) = (iVar5 + 0x20U & 0xfffffff0) - 1;
  }
  if (*(int *)(param_1 + 0x110) != -1) {
    _memset(*(void **)(param_1 + 0x120),0,*(int *)(param_1 + 0x110) + 1);
    pvVar2 = *(LPVOID *)(param_1 + 0x2a0);
    if (pvVar2 != (LPVOID)0x0) {
      *(undefined4 *)(param_1 + 0x2a4) = 0;
      *(undefined4 *)(param_1 + 0x2a0) = 0;
      FUN_004a48e0(param_1,pvVar2);
    }
    iVar5 = FUN_004a9b90(param_1,0x49444154);
    if (iVar5 == 0) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x40;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


