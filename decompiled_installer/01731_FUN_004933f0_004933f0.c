// Function: FUN_004933f0
// Entry: 004933f0
// Size: 1081 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004933f0(int *param_1,char *param_2,uint param_3,int param_4,uint param_5,char *param_6,
            uint param_7,int param_8)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  
  pcVar6 = (char *)*param_1;
  if (param_2 != (char *)0x0) {
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)*param_1;
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    *param_1 = (int)pcVar6;
  }
  switch(param_4) {
  case 0x2711:
LAB_0049347c:
    *(undefined4 *)pcVar6 = DAT_005253dc;
    pcVar6[4] = DAT_005253e0;
    break;
  case 0x2712:
    param_6 = (char *)0x0;
    param_8 = -1;
    if ((param_3 & 0x3c00) == 0) goto LAB_0049347c;
    *(undefined4 *)pcVar6 = DAT_00529550;
    *(undefined2 *)(pcVar6 + 4) = DAT_00529554;
    pcVar6[6] = DAT_00529556;
    break;
  case 0x2713:
LAB_004934c0:
    *(undefined4 *)pcVar6 = s_group_00525750._0_4_;
    *(undefined2 *)(pcVar6 + 4) = s_group_00525750._4_2_;
    break;
  case 0x2714:
    param_6 = (char *)0x0;
    param_8 = -1;
    if ((param_3 & 0x3c00) == 0) goto LAB_004934c0;
    *(undefined4 *)pcVar6 = DAT_00529558;
    *(undefined2 *)(pcVar6 + 4) = DAT_0052955c;
    pcVar6[6] = DAT_0052955e;
    break;
  case 0x2715:
    param_6 = (char *)0x0;
    *(undefined4 *)pcVar6 = DAT_0052628c;
    param_8 = -1;
    pcVar6[4] = DAT_00526290;
    break;
  case 0x2716:
    param_6 = (char *)0x0;
    *(undefined4 *)pcVar6 = s_other_00525414._0_4_;
    param_8 = -1;
    *(undefined2 *)(pcVar6 + 4) = s_other_00525414._4_2_;
    break;
  default:
    break;
  case 0x277b:
    param_6 = (char *)0x0;
    *(undefined8 *)pcVar6 = s_everyone__00529560._0_8_;
    param_8 = -1;
    *(undefined2 *)(pcVar6 + 8) = s_everyone__00529560._8_2_;
  }
  pcVar5 = (char *)*param_1;
  pcVar6 = pcVar5 + 1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = *param_1;
  *param_1 = (int)(pcVar5 + (iVar2 - (int)pcVar6));
  pcVar5[iVar2 - (int)pcVar6] = ':';
  pcVar6 = (char *)(*param_1 + 1);
  *param_1 = (int)pcVar6;
  if ((((param_3 & 0x300) != 0) || (param_4 == 0x2711)) || (param_4 == 0x2713)) {
    if (param_6 == (char *)0x0) {
      if (((param_4 == 0x2711) || (param_4 == 0x2713)) &&
         (FUN_004938c0(param_1,param_8), (param_3 & 0x3c00) == 0)) {
        param_8 = -1;
      }
    }
    else {
      do {
        cVar1 = *param_6;
        param_6 = param_6 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar6 = (char *)*param_1;
      do {
        pcVar5 = pcVar6;
        pcVar6 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      *param_1 = (int)pcVar5;
    }
    if (((param_5 & 4) == 0) || ((param_4 != 0x2716 && (param_4 != 0x2715)))) {
      *(undefined1 *)*param_1 = 0x3a;
      *param_1 = *param_1 + 1;
    }
    if ((param_3 & 0x300) != 0) {
      *(byte *)*param_1 = (-((param_7 & 0x124) != 0) & 0x45U) + 0x2d;
      iVar2 = *param_1;
      *param_1 = iVar2 + 1;
      *(byte *)(iVar2 + 1) = (-((param_7 & 0x92) != 0) & 0x4aU) + 0x2d;
      iVar2 = *param_1;
      *param_1 = iVar2 + 1;
      *(byte *)(iVar2 + 1) = (-((param_7 & 0x49) != 0) & 0x4bU) + 0x2d;
      *param_1 = *param_1 + 1;
      pcVar6 = (char *)*param_1;
      goto LAB_004937ce;
    }
  }
  puVar7 = &DAT_0051889c;
  uVar4 = param_5 & 0x10;
  do {
    if ((*(uint *)(puVar7 + -4) & param_7) == 0) {
      if (uVar4 == 0) {
        *(undefined1 *)*param_1 = 0x2d;
        *param_1 = *param_1 + 1;
      }
    }
    else {
      *(undefined1 *)*param_1 = *puVar7;
      *param_1 = *param_1 + 1;
    }
    puVar7 = puVar7 + 8;
  } while ((int)puVar7 < 0x51890c);
  *(undefined1 *)*param_1 = 0x3a;
  puVar7 = (undefined1 *)(*param_1 + 1);
  *param_1 = (int)puVar7;
  if ((param_7 & 0x2000000) == 0) {
    if (uVar4 == 0) {
      *puVar7 = 0x2d;
      *param_1 = *param_1 + 1;
      puVar7 = (undefined1 *)*param_1;
    }
  }
  else {
    *puVar7 = 0x66;
    *param_1 = *param_1 + 1;
    puVar7 = (undefined1 *)*param_1;
  }
  if ((param_7 & 0x4000000) == 0) {
    if (uVar4 == 0) {
      *puVar7 = 0x2d;
      *param_1 = *param_1 + 1;
      puVar7 = (undefined1 *)*param_1;
    }
  }
  else {
    *puVar7 = 100;
    *param_1 = *param_1 + 1;
    puVar7 = (undefined1 *)*param_1;
  }
  if ((param_7 & 0x10000000) == 0) {
    if (uVar4 == 0) {
      *puVar7 = 0x2d;
      goto LAB_004936e5;
    }
  }
  else {
    *puVar7 = 0x69;
LAB_004936e5:
    *param_1 = *param_1 + 1;
    puVar7 = (undefined1 *)*param_1;
  }
  if ((param_7 & 0x8000000) == 0) {
    if (uVar4 == 0) {
      *puVar7 = 0x2d;
      goto LAB_00493701;
    }
  }
  else {
    *puVar7 = 0x6e;
LAB_00493701:
    *param_1 = *param_1 + 1;
    puVar7 = (undefined1 *)*param_1;
  }
  if ((param_7 & 0x20000000) == 0) {
    if (uVar4 == 0) {
      *puVar7 = 0x2d;
      goto LAB_0049371b;
    }
  }
  else {
    *puVar7 = 0x53;
LAB_0049371b:
    *param_1 = *param_1 + 1;
    puVar7 = (undefined1 *)*param_1;
  }
  if ((param_7 & 0x40000000) == 0) {
    if (uVar4 == 0) {
      *puVar7 = 0x2d;
      goto LAB_00493733;
    }
  }
  else {
    *puVar7 = 0x46;
LAB_00493733:
    *param_1 = *param_1 + 1;
    puVar7 = (undefined1 *)*param_1;
  }
  if ((param_7 & 0x1000000) == 0) {
    if (uVar4 == 0) {
      *puVar7 = 0x2d;
      goto LAB_0049374b;
    }
  }
  else {
    *puVar7 = 0x49;
LAB_0049374b:
    *param_1 = *param_1 + 1;
    puVar7 = (undefined1 *)*param_1;
  }
  *puVar7 = 0x3a;
  iVar2 = *param_1;
  pcVar6 = (char *)(iVar2 + 1);
  *param_1 = (int)pcVar6;
  if ((int)param_3 < 0x1001) {
    if (param_3 == 0x1000) {
      *(undefined4 *)pcVar6 = s_audit_005243e0._0_4_;
      uVar3 = s_audit_005243e0._4_2_;
    }
    else {
      if (param_3 != 0x400) {
        if (param_3 == 0x800) {
          *(undefined4 *)pcVar6 = DAT_00523a08;
          *(undefined1 *)(iVar2 + 5) = DAT_00523a0c;
        }
        goto LAB_004937b9;
      }
      *(undefined4 *)pcVar6 = s_allow_00523e28._0_4_;
      uVar3 = s_allow_00523e28._4_2_;
    }
LAB_004937b5:
    *(undefined2 *)(iVar2 + 5) = uVar3;
  }
  else if (param_3 == 0x2000) {
    *(undefined4 *)pcVar6 = s_alarm_00525e94._0_4_;
    uVar3 = s_alarm_00525e94._4_2_;
    goto LAB_004937b5;
  }
LAB_004937b9:
  pcVar5 = (char *)*param_1;
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  *param_1 = (int)pcVar6;
LAB_004937ce:
  if (param_8 != -1) {
    *pcVar6 = ':';
    *param_1 = *param_1 + 1;
    if (param_8 < 0) {
      param_8 = 0;
    }
    else if (9 < param_8) {
      FUN_004938c0(param_1,param_8 / 10);
    }
    *(char *)*param_1 = "0123456789"[param_8 % 10];
    *param_1 = *param_1 + 1;
  }
  return;
}


