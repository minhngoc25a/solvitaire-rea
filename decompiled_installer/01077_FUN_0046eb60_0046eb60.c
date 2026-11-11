// Function: FUN_0046eb60
// Entry: 0046eb60
// Size: 953 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046eb60(uint param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint *puVar2;
  char *extraout_ECX;
  uint extraout_ECX_00;
  char *pcVar3;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  char *extraout_ECX_04;
  char *extraout_ECX_05;
  uint uVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;
  int local_10;
  uint local_c;
  uint local_8;
  byte local_4;
  char local_3;
  undefined1 local_2;
  byte local_1;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x78) & 0x40) == 0) {
    FUN_004a6f60(param_1);
  }
  local_4 = *(byte *)(param_1 + 0x14f);
  local_c = *(uint *)(param_1 + 0x114);
  local_3 = *(char *)(param_1 + 0x150);
  local_2 = *(undefined1 *)(param_1 + 0x153);
  local_1 = *(byte *)(param_1 + 0x152);
  uVar4 = (uint)local_1;
  if (local_1 < 8) {
    uVar6 = local_c * uVar4 + 7 >> 3;
    local_8 = uVar6;
  }
  else {
    uVar4 = (local_1 >> 3) * local_c;
    uVar6 = local_c;
    local_8 = uVar4;
  }
  if ((*(char *)(param_1 + 0x14c) == '\0') || ((*(byte *)(param_1 + 0x7c) & 2) == 0))
  goto LAB_0046ec07;
  switch(*(undefined1 *)(param_1 + 0x14d)) {
  case 0:
    if ((*(byte *)(param_1 + 0x118) & 7) != 0) goto LAB_0046ed36;
    break;
  case 1:
    if ((*(byte *)(param_1 + 0x118) & 7) == 0) {
      bVar8 = *(uint *)(param_1 + 0x100) < 5;
LAB_0046ed30:
      if (!bVar8) break;
    }
    goto LAB_0046ed36;
  case 2:
    uVar6 = *(uint *)(param_1 + 0x118);
    if (((byte)uVar6 & 7) == 4) break;
    if (param_3 == (uint *)0x0) goto LAB_0046ed65;
    bVar8 = (uVar6 & 4) == 0;
    goto LAB_0046ed3c;
  case 3:
    if ((*(byte *)(param_1 + 0x118) & 3) == 0) {
      bVar8 = *(uint *)(param_1 + 0x100) < 3;
      goto LAB_0046ed30;
    }
    goto LAB_0046ed36;
  case 4:
    uVar6 = *(uint *)(param_1 + 0x118);
    if (((byte)uVar6 & 3) != 2) {
      if (param_3 == (uint *)0x0) goto LAB_0046ed65;
      bVar8 = (uVar6 & 2) == 0;
      goto LAB_0046ed3c;
    }
    break;
  case 5:
    if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
      bVar8 = *(uint *)(param_1 + 0x100) < 2;
      goto LAB_0046ed30;
    }
LAB_0046ed36:
    bVar8 = param_3 == (uint *)0x0;
LAB_0046ed3c:
    if (!bVar8) {
      uVar9 = FUN_004a60c0(param_1,param_3,1);
      FUN_004a6e20(extraout_ECX_00,(uint)(uVar9 >> 0x20),param_1);
      return;
    }
LAB_0046ed65:
    FUN_004a6e20(uVar6,uVar4,param_1);
    return;
  default:
    if ((*(byte *)(param_1 + 0x118) & 1) == 0) goto LAB_0046ed65;
  }
LAB_0046ec07:
  if ((*(byte *)(param_1 + 0x74) & 4) == 0) goto LAB_0046ef13;
  puVar5 = *(undefined1 **)(param_1 + 0x124);
  *puVar5 = 0xff;
  FUN_004a6a50(puVar5,uVar4,param_1,(uint)puVar5,local_8 + 1);
  bVar1 = **(byte **)(param_1 + 0x124);
  if (bVar1 != 0) {
    if (4 < bVar1) goto LAB_0046ef13;
    FUN_004a69d0(param_1,&local_c,*(byte **)(param_1 + 0x124) + 1,*(int *)(param_1 + 0x120) + 1,
                 (uint)bVar1);
  }
  puVar2 = *(uint **)(param_1 + 0x124);
  uVar9 = FUN_0044c490(*(uint **)(param_1 + 0x120),puVar2,local_8 + 1);
  uVar4 = (uint)(uVar9 >> 0x20);
  pcVar3 = extraout_ECX;
  if ((((*(byte *)(param_1 + 0x250) & 4) != 0) && (*(char *)(param_1 + 0x254) == '@')) &&
     ((local_4 & 2) != 0)) {
    pcVar3 = (char *)CONCAT31((int3)((uint)extraout_ECX >> 8),local_3);
    if (local_3 == '\b') {
      if (local_4 == 2) {
        iVar7 = 3;
      }
      else {
        if (local_4 != 6) goto LAB_0046ee25;
        iVar7 = 4;
      }
      uVar4 = 0;
      if (local_c != 0) {
        pcVar3 = (char *)((int)puVar2 + 3);
        uVar4 = local_c;
        do {
          pcVar3[-2] = pcVar3[-2] + pcVar3[-1];
          *pcVar3 = *pcVar3 + pcVar3[-1];
          pcVar3 = pcVar3 + iVar7;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        uVar4 = 0;
      }
    }
    else if (local_3 == '\x10') {
      if (local_4 == 2) {
        local_10 = 6;
      }
      else {
        if (local_4 != 6) goto LAB_0046ee25;
        local_10 = 8;
      }
      if (local_c != 0) {
        puVar5 = (undefined1 *)((int)puVar2 + 2);
        uVar6 = local_c;
        do {
          uVar4 = (uint)CONCAT11(puVar5[-1],*puVar5) + (uint)CONCAT11(puVar5[1],puVar5[2]) & 0xffff;
          *puVar5 = (char)uVar4;
          pcVar3 = (char *)((uint)CONCAT11(puVar5[3],puVar5[4]) +
                            (uint)CONCAT11(puVar5[1],puVar5[2]) & 0xffff);
          puVar5[-1] = (char)(uVar4 >> 8);
          puVar5[3] = (char)((uint)pcVar3 >> 8);
          puVar5[4] = (char)pcVar3;
          puVar5 = puVar5 + local_10;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
LAB_0046ee25:
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0046fa70(param_1,&local_c);
    pcVar3 = extraout_ECX_01;
    uVar4 = extraout_EDX;
  }
  if (*(byte *)(param_1 + 0x157) == 0) {
    *(byte *)(param_1 + 0x157) = local_1;
    if (*(byte *)(param_1 + 0x156) < local_1) {
LAB_0046ef13:
                    /* WARNING: Subroutine does not return */
      FUN_0046f190(param_1);
    }
  }
  else if (*(byte *)(param_1 + 0x157) != local_1) goto LAB_0046ef13;
  if ((*(char *)(param_1 + 0x14c) == '\0') ||
     (pcVar3 = *(char **)(param_1 + 0x7c), ((uint)pcVar3 & 2) == 0)) {
    if (param_2 != (uint *)0x0) {
      uVar9 = FUN_004a60c0(param_1,param_2,-1);
      uVar4 = (uint)(uVar9 >> 0x20);
      pcVar3 = extraout_ECX_04;
    }
    if (param_3 == (uint *)0x0) goto LAB_0046eee3;
    iVar7 = -1;
    param_2 = param_3;
  }
  else {
    if (*(byte *)(param_1 + 0x14d) < 6) {
      FUN_004a6570(&local_c,*(int *)(param_1 + 0x124) + 1,(uint)*(byte *)(param_1 + 0x14d),
                   (uint)pcVar3);
      pcVar3 = extraout_ECX_02;
      uVar4 = extraout_EDX_00;
    }
    if (param_3 != (uint *)0x0) {
      uVar9 = FUN_004a60c0(param_1,param_3,1);
      uVar4 = (uint)(uVar9 >> 0x20);
      pcVar3 = extraout_ECX_03;
    }
    if (param_2 == (uint *)0x0) goto LAB_0046eee3;
    iVar7 = 0;
  }
  uVar9 = FUN_004a60c0(param_1,param_2,iVar7);
  uVar4 = (uint)(uVar9 >> 0x20);
  pcVar3 = extraout_ECX_05;
LAB_0046eee3:
  FUN_004a6e20((uint)pcVar3,uVar4,param_1);
  if (*(code **)(param_1 + 0x1c0) == (code *)0x0) {
    return;
  }
  (**(code **)(param_1 + 0x1c0))
            (param_1,*(undefined4 *)(param_1 + 0x118),*(undefined1 *)(param_1 + 0x14d));
  return;
}


