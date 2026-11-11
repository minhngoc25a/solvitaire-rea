// Function: FUN_0045695c
// Entry: 0045695c
// Size: 863 bytes
// Thunk: false
// External: false


void __fastcall FUN_0045695c(__uint64 *param_1)

{
  int *piVar1;
  string_output_adapter<char> *this;
  string_output_adapter<char> *this_00;
  WCHAR WVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  WCHAR *pWVar11;
  int iVar12;
  int iVar13;
  int local_18;
  undefined4 local_14;
  byte local_10 [8];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  cVar5 = *(char *)((int)param_1 + 0x2d);
  if (cVar5 < 'e') {
    if (cVar5 == 'd') {
LAB_00456a07:
      *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x10;
LAB_00456a0b:
      uVar8 = FUN_00457dec(param_1,0);
      cVar5 = (char)uVar8;
    }
    else if (cVar5 < 'T') {
      if (cVar5 == 'S') {
LAB_00456a30:
        uVar7 = FUN_00455396(param_1);
        cVar5 = (char)uVar7;
      }
      else {
        if (cVar5 != 'A') {
          if (cVar5 == 'C') {
LAB_004569c9:
            uVar7 = FUN_0045529e((undefined6 *)param_1);
            cVar5 = (char)uVar7;
            goto LAB_00456a3c;
          }
          if (((cVar5 != 'E') && (cVar5 != 'F')) && (cVar5 != 'G')) goto LAB_00456cac;
        }
LAB_004569ad:
        uVar7 = FUN_00455408((uint *)param_1);
        cVar5 = (char)uVar7;
      }
    }
    else if (cVar5 == 'X') {
      bVar6 = 1;
LAB_004569da:
      uVar8 = FUN_00457ad2(param_1,bVar6);
      cVar5 = (char)uVar8;
    }
    else {
      if (cVar5 != 'Z') {
        if (cVar5 != 'a') {
          if (cVar5 != 'c') goto LAB_00456cac;
          goto LAB_004569c9;
        }
        goto LAB_004569ad;
      }
      uVar7 = FUN_00455333(param_1);
      cVar5 = (char)uVar7;
    }
  }
  else if (cVar5 < 'p') {
    if (cVar5 == 'o') {
      cVar5 = FUN_00455599(param_1);
    }
    else {
      if (((cVar5 == 'e') || (cVar5 == 'f')) || (cVar5 == 'g')) goto LAB_004569ad;
      if (cVar5 == 'i') goto LAB_00456a07;
      if (cVar5 != 'n') goto LAB_00456cac;
      uVar8 = FUN_004555cc((int)param_1);
      cVar5 = (char)uVar8;
    }
  }
  else {
    if (cVar5 != 'p') {
      if (cVar5 == 's') goto LAB_00456a30;
      if (cVar5 != 'u') {
        if (cVar5 != 'x') goto LAB_00456cac;
        bVar6 = 0;
        goto LAB_004569da;
      }
      goto LAB_00456a0b;
    }
    cVar5 = FUN_004555b6(param_1);
  }
LAB_00456a3c:
  if ((cVar5 == '\0') || (*(char *)((int)param_1 + 0x2c) != '\0')) goto LAB_00456cac;
  iVar9 = 0;
  local_14 = local_14 & 0xff000000;
  local_18 = 0;
  if ((*(uint *)((int)param_1 + 0x1c) >> 4 & 1) != 0) {
    if ((*(uint *)((int)param_1 + 0x1c) >> 6 & 1) == 0) {
      if ((*(byte *)((int)param_1 + 0x1c) & 1) == 0) {
        if ((*(uint *)((int)param_1 + 0x1c) >> 1 & 1) != 0) {
          local_14 = CONCAT31(local_14._1_3_,0x20);
          iVar9 = 1;
          local_18 = 1;
        }
        goto LAB_00456a9b;
      }
      local_14 = CONCAT31(local_14._1_3_,0x2b);
    }
    else {
      local_14 = CONCAT31(local_14._1_3_,0x2d);
    }
    local_18 = 1;
    iVar9 = 1;
  }
LAB_00456a9b:
  cVar5 = *(char *)((int)param_1 + 0x2d);
  if (((cVar5 != 'x') && (cVar5 != 'X')) ||
     (bVar3 = true, (*(uint *)((int)param_1 + 0x1c) >> 5 & 1) == 0)) {
    bVar3 = false;
  }
  if ((cVar5 == 'a') || (bVar4 = false, cVar5 == 'A')) {
    bVar4 = true;
  }
  if ((bVar3) || (bVar4)) {
    local_10[iVar9 + -4] = 0x30;
    if ((cVar5 == 'X') || (cVar5 == 'A')) {
      bVar6 = 0x58;
    }
    else {
      bVar6 = 0x78;
    }
    local_10[iVar9 + -3] = bVar6;
    iVar9 = iVar9 + 2;
    local_18 = iVar9;
  }
  iVar12 = ((int)param_1[4] - iVar9) - *(int *)((int)param_1 + 0x34);
  if (((*(byte *)((int)param_1 + 0x1c) & 0xc) == 0) && (0 < iVar12)) {
    iVar13 = *(int *)((int)param_1 + 0x14);
    iVar10 = 0;
    do {
      iVar9 = (int)param_1[0x89];
      if (*(int *)(iVar9 + 8) == *(int *)(iVar9 + 4)) {
        if (*(char *)(iVar9 + 0xc) == '\0') {
          iVar13 = -1;
        }
        else {
          iVar13 = iVar13 + 1;
        }
        *(int *)((int)param_1 + 0x14) = iVar13;
      }
      else {
        *(int *)((int)param_1 + 0x14) = iVar13 + 1;
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
        *(undefined1 *)**(undefined4 **)(param_1 + 0x89) = 0x20;
        **(int **)(param_1 + 0x89) = **(int **)(param_1 + 0x89) + 1;
      }
      iVar13 = *(int *)((int)param_1 + 0x14);
      iVar9 = local_18;
    } while ((iVar13 != -1) && (iVar10 = iVar10 + 1, iVar10 < iVar12));
  }
  piVar1 = (int *)((int)param_1 + 0x14);
  this = (string_output_adapter<char> *)(param_1 + 0x89);
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_14,iVar9,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 1));
  this_00 = (string_output_adapter<char> *)(param_1 + 0x89);
  if (((*(uint *)((int)param_1 + 0x1c) >> 3 & 1) != 0) &&
     (((*(uint *)((int)param_1 + 0x1c) >> 2 & 1) == 0 && (local_14 = 0, 0 < iVar12)))) {
    do {
      local_18 = *(int *)this_00;
      if (*(int *)(local_18 + 8) == *(int *)(local_18 + 4)) {
        if (*(char *)(local_18 + 0xc) == '\0') {
          iVar9 = -1;
        }
        else {
          iVar9 = *piVar1 + 1;
        }
        *piVar1 = iVar9;
      }
      else {
        *piVar1 = *piVar1 + 1;
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
        *(undefined1 *)**(undefined4 **)this_00 = 0x30;
        **(int **)this_00 = **(int **)this_00 + 1;
      }
    } while ((*piVar1 != -1) && (local_14 = local_14 + 1, (int)local_14 < iVar12));
  }
  iVar9 = 0;
  if (((char)param_1[7] == '\0') || (*(int *)((int)param_1 + 0x34) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this_00,*(char **)(param_1 + 6),*(int *)((int)param_1 + 0x34),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 1));
  }
  else {
    pWVar11 = *(WCHAR **)(param_1 + 6);
    local_14 = 0;
    do {
      WVar2 = *pWVar11;
      pWVar11 = pWVar11 + 1;
      local_18 = 0;
      iVar13 = FUN_004848ed(&local_18,local_10,6,WVar2,*(int **)(param_1 + 1));
      if ((iVar13 != 0) || (local_18 == 0)) {
        *piVar1 = -1;
        break;
      }
      __crt_stdio_output::string_output_adapter<char>::write_string
                ((string_output_adapter<char> *)(param_1 + 0x89),(char *)local_10,local_18,piVar1,
                 *(__crt_deferred_errno_cache **)(param_1 + 1));
      local_14 = local_14 + 1;
    } while (local_14 != *(uint *)((int)param_1 + 0x34));
  }
  iVar13 = *piVar1;
  if (((-1 < iVar13) && ((*(uint *)((int)param_1 + 0x1c) >> 2 & 1) != 0)) && (0 < iVar12)) {
    do {
      iVar10 = *(int *)this;
      if (*(int *)(iVar10 + 8) == *(int *)(iVar10 + 4)) {
        if (*(char *)(iVar10 + 0xc) == '\0') {
          iVar13 = -1;
        }
        else {
          iVar13 = iVar13 + 1;
        }
        *piVar1 = iVar13;
      }
      else {
        *piVar1 = iVar13 + 1;
        *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
        *(undefined1 *)**(undefined4 **)this = 0x20;
        **(int **)this = **(int **)this + 1;
      }
      iVar13 = *piVar1;
    } while ((iVar13 != -1) && (iVar9 = iVar9 + 1, iVar9 < iVar12));
  }
LAB_00456cac:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


