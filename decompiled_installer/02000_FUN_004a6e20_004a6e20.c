// Function: FUN_004a6e20
// Entry: 004a6e20
// Size: 314 bytes
// Thunk: false
// External: false


void __fastcall FUN_004a6e20(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_ECX;
  uint extraout_EDX;
  byte bVar4;
  uint uVar5;
  
  uVar1 = *(int *)(param_3 + 0x118) + 1;
  *(uint *)(param_3 + 0x118) = uVar1;
  if (*(uint *)(param_3 + 0x108) <= uVar1) {
    if (*(char *)(param_3 + 0x14c) != '\0') {
      *(undefined4 *)(param_3 + 0x118) = 0;
      _memset(*(void **)(param_3 + 0x120),0,*(int *)(param_3 + 0x110) + 1);
      param_1 = extraout_ECX;
      param_2 = extraout_EDX;
      do {
        bVar4 = *(char *)(param_3 + 0x14d) + 1;
        *(byte *)(param_3 + 0x14d) = bVar4;
        if (6 < bVar4) goto LAB_004a6eee;
        uVar1 = (((byte)(&DAT_005194bc)[bVar4] - 1) +
                (*(int *)(param_3 + 0x100) - (uint)(byte)(&DAT_005194b4)[bVar4])) /
                (uint)(byte)(&DAT_005194bc)[bVar4];
        *(uint *)(param_3 + 0x114) = uVar1;
        if ((*(byte *)(param_3 + 0x7c) & 2) != 0) {
          return;
        }
        uVar5 = (uint)(byte)(&DAT_005194cc)[bVar4];
        param_1 = (uint)(byte)(&DAT_005194c4)[bVar4];
        uVar2 = *(int *)(param_3 + 0x104) + -1 + (uVar5 - param_1);
        uVar3 = uVar2 / uVar5;
        param_2 = uVar2 % uVar5;
        *(uint *)(param_3 + 0x108) = uVar3;
      } while ((uVar3 == 0) || (uVar1 == 0));
      if (bVar4 < 7) {
        return;
      }
    }
LAB_004a6eee:
    if ((*(byte *)(param_3 + 0x78) & 8) == 0) {
      FUN_004a6a50(param_1,param_2,param_3,0,0);
      *(undefined4 *)(param_3 + 0x90) = 0;
      if ((*(uint *)(param_3 + 0x78) & 8) == 0) {
        *(uint *)(param_3 + 0x74) = *(uint *)(param_3 + 0x74) | 8;
        *(uint *)(param_3 + 0x78) = *(uint *)(param_3 + 0x78) | 8;
      }
    }
    if (*(int *)(param_3 + 0x80) == 0x49444154) {
      *(undefined4 *)(param_3 + 0x84) = 0;
      *(undefined4 *)(param_3 + 0x88) = 0;
      *(undefined4 *)(param_3 + 0x80) = 0;
      FUN_004a5f90(param_3,*(uint *)(param_3 + 0x134));
    }
  }
  return;
}


