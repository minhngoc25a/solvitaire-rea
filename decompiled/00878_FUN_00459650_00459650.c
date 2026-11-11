// Function: FUN_00459650
// Entry: 00459650
// Size: 372 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00459650(uint *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  short *psVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar6 = 10;
  psVar3 = (short *)FUN_00488730(param_1,10,&local_c);
  if ((((psVar3 == (short *)0x0) || (local_c == 0)) || (*psVar3 != -0x74e1)) ||
     (((char)psVar3[1] != '\b' || (bVar1 = *(byte *)((int)psVar3 + 3), (bVar1 & 0xe0) != 0)))) {
    return 0;
  }
  local_8 = (uint)bVar1;
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x54) = *(undefined4 *)(psVar3 + 2);
  }
  if ((bVar1 & 4) != 0) {
    psVar3 = (short *)FUN_00488730(param_1,0xc,&local_c);
    if (psVar3 == (short *)0x0) {
      return 0;
    }
    uVar6 = (ushort)psVar3[5] + 0xc;
  }
  uVar7 = uVar6;
  uVar2 = uVar6;
  if ((local_8 & 8) != 0) {
    do {
      local_4 = uVar2;
      uVar6 = uVar7 + 1;
      if ((int)local_c < (int)uVar6) {
        psVar3 = (short *)FUN_00488730(param_1,uVar6,&local_c);
      }
      if (psVar3 == (short *)0x0) {
        return 0;
      }
      pcVar4 = (char *)((int)psVar3 + uVar7);
      uVar7 = uVar6;
      uVar2 = local_4;
    } while (*pcVar4 != '\0');
    if (param_3 != 0) {
      FUN_0047d191(*(LPVOID *)(param_3 + 0x58));
      pcVar4 = FUN_004894ef((char *)(local_4 + (int)psVar3));
      *(char **)(param_3 + 0x58) = pcVar4;
    }
  }
  uVar7 = uVar6;
  if ((local_8 & 0x10) != 0) {
    do {
      uVar6 = uVar7 + 1;
      if ((int)local_c < (int)uVar6) {
        psVar3 = (short *)FUN_00488730(param_1,uVar6,&local_c);
      }
      if (psVar3 == (short *)0x0) {
        return 0;
      }
      pcVar4 = (char *)((int)psVar3 + uVar7);
      uVar7 = uVar6;
    } while (*pcVar4 != '\0');
  }
  if ((local_8 & 2) != 0) {
    uVar6 = uVar6 + 2;
    iVar5 = FUN_00488730(param_1,uVar6,&local_c);
    if (iVar5 == 0) {
      return 0;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0x1b;
  }
  return uVar6;
}


