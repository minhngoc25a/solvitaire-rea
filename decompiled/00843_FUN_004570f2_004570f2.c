// Function: FUN_004570f2
// Entry: 004570f2
// Size: 1012 bytes
// Thunk: false
// External: false


void __fastcall FUN_004570f2(__uint64 *param_1)

{
  int *piVar1;
  string_output_adapter<wchar_t> *this;
  string_output_adapter<wchar_t> *this_00;
  __uint64 *p_Var2;
  short sVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  byte bVar16;
  ushort uVar17;
  int local_18;
  uint local_14;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  uVar17 = *(ushort *)((int)param_1 + 0x2e);
  if (uVar17 < 0x65) {
    if (uVar17 == 100) {
LAB_004571b2:
      *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x10;
LAB_004571b6:
      uVar10 = FUN_00457940(param_1,0);
      cVar8 = (char)uVar10;
    }
    else if (uVar17 < 0x54) {
      if (uVar17 == 0x53) {
LAB_004571df:
        uVar9 = FUN_0045614f(param_1);
        cVar8 = (char)uVar9;
      }
      else {
        if (uVar17 != 0x41) {
          if (uVar17 == 0x43) {
LAB_0045716c:
            uVar9 = FUN_00456044(param_1);
            cVar8 = (char)uVar9;
            goto LAB_004571ef;
          }
          if (((uVar17 != 0x45) && (uVar17 != 0x46)) && (uVar17 != 0x47)) goto LAB_004574d7;
        }
LAB_0045714b:
        uVar9 = FUN_00456218((uint *)param_1);
        cVar8 = (char)uVar9;
      }
    }
    else if (uVar17 == 0x58) {
      bVar16 = 1;
LAB_00457181:
      uVar10 = FUN_0045761c(param_1,bVar16);
      cVar8 = (char)uVar10;
    }
    else {
      if (uVar17 != 0x5a) {
        if (uVar17 != 0x61) {
          if (uVar17 != 99) goto LAB_004574d7;
          goto LAB_0045716c;
        }
        goto LAB_0045714b;
      }
      uVar9 = FUN_004560ec(param_1);
      cVar8 = (char)uVar9;
    }
  }
  else if (uVar17 < 0x70) {
    if (uVar17 == 0x6f) {
      cVar8 = FUN_004563bf(param_1);
    }
    else {
      if (((uVar17 == 0x65) || (uVar17 == 0x66)) || (uVar17 == 0x67)) goto LAB_0045714b;
      if (uVar17 == 0x69) goto LAB_004571b2;
      if (uVar17 != 0x6e) goto LAB_004574d7;
      uVar10 = FUN_004555cc((int)param_1);
      cVar8 = (char)uVar10;
    }
  }
  else {
    if (uVar17 != 0x70) {
      if (uVar17 == 0x73) goto LAB_004571df;
      if (uVar17 != 0x75) {
        if (uVar17 != 0x78) goto LAB_004574d7;
        bVar16 = 0;
        goto LAB_00457181;
      }
      goto LAB_004571b6;
    }
    cVar8 = FUN_004563dc(param_1);
  }
LAB_004571ef:
  if ((cVar8 == '\0') || (*(char *)((int)param_1 + 0x2c) != '\0')) goto LAB_004574d7;
  local_10 = 0;
  uVar10 = 0;
  local_c = 0;
  local_14 = 0;
  if ((*(uint *)((int)param_1 + 0x1c) >> 4 & 1) != 0) {
    if ((*(uint *)((int)param_1 + 0x1c) >> 6 & 1) == 0) {
      if ((*(byte *)((int)param_1 + 0x1c) & 1) == 0) {
        if ((*(uint *)((int)param_1 + 0x1c) >> 1 & 1) != 0) {
          local_10 = 0x20;
          uVar10 = 1;
          local_14 = 1;
        }
        goto LAB_00457252;
      }
      uVar17 = 0x2b;
    }
    else {
      uVar17 = 0x2d;
    }
    local_10 = (uint)uVar17;
    local_14 = 1;
    uVar10 = 1;
  }
LAB_00457252:
  sVar3 = *(short *)((int)param_1 + 0x2e);
  if (((sVar3 != 0x78) && (sVar3 != 0x58)) ||
     (bVar6 = true, (*(uint *)((int)param_1 + 0x1c) >> 5 & 1) == 0)) {
    bVar6 = false;
  }
  if ((sVar3 == 0x61) || (bVar7 = false, sVar3 == 0x41)) {
    bVar7 = true;
  }
  if ((bVar6) || (bVar7)) {
    *(undefined2 *)((int)&local_10 + uVar10 * 2) = 0x30;
    if ((sVar3 == 0x58) || (uVar15 = 0x78, sVar3 == 0x41)) {
      uVar15 = 0x58;
    }
    *(undefined2 *)((int)&local_10 + uVar10 * 2 + 2) = uVar15;
    uVar10 = uVar10 + 2;
    local_14 = uVar10;
  }
  iVar13 = ((int)param_1[4] - *(int *)((int)param_1 + 0x34)) - uVar10;
  if (((*(byte *)((int)param_1 + 0x1c) & 0xc) == 0) && (0 < iVar13)) {
    iVar14 = *(int *)((int)param_1 + 0x14);
    iVar11 = 0;
    do {
      iVar4 = (int)param_1[0x89];
      if (*(int *)(iVar4 + 8) == *(int *)(iVar4 + 4)) {
        if (*(char *)(iVar4 + 0xc) == '\0') {
          iVar14 = -1;
        }
        else {
          iVar14 = iVar14 + 1;
        }
        *(int *)((int)param_1 + 0x14) = iVar14;
      }
      else {
        *(int *)((int)param_1 + 0x14) = iVar14 + 1;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        *(undefined2 *)**(undefined4 **)(param_1 + 0x89) = 0x20;
        **(int **)(param_1 + 0x89) = **(int **)(param_1 + 0x89) + 2;
      }
      iVar14 = *(int *)((int)param_1 + 0x14);
      uVar10 = local_14;
    } while ((iVar14 != -1) && (iVar11 = iVar11 + 1, iVar11 < iVar13));
  }
  piVar1 = (int *)((int)param_1 + 0x14);
  this = (string_output_adapter<wchar_t> *)(param_1 + 0x89);
  __crt_stdio_output::string_output_adapter<wchar_t>::write_string
            (this,(wchar_t *)&local_10,uVar10,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 1));
  this_00 = (string_output_adapter<wchar_t> *)(param_1 + 0x89);
  if (((*(uint *)((int)param_1 + 0x1c) >> 3 & 1) != 0) &&
     (((*(uint *)((int)param_1 + 0x1c) >> 2 & 1) == 0 && (local_18 = 0, 0 < iVar13)))) {
    do {
      local_14 = *(uint *)this_00;
      if (*(int *)(local_14 + 8) == *(int *)(local_14 + 4)) {
        if (*(char *)(local_14 + 0xc) == '\0') {
          iVar14 = -1;
        }
        else {
          iVar14 = *piVar1 + 1;
        }
        *piVar1 = iVar14;
      }
      else {
        *piVar1 = *piVar1 + 1;
        *(int *)(local_14 + 8) = *(int *)(local_14 + 8) + 1;
        *(undefined2 *)**(undefined4 **)this_00 = 0x30;
        **(int **)this_00 = **(int **)this_00 + 2;
      }
    } while ((*piVar1 != -1) && (local_18 = local_18 + 1, local_18 < iVar13));
  }
  iVar14 = 0;
  if (((char)param_1[7] == '\0') && (0 < *(int *)((int)param_1 + 0x34))) {
    piVar5 = *(int **)(param_1 + 1);
    if ((char)piVar5[5] == '\0') {
      FUN_0044ef90(piVar5);
    }
    pbVar12 = *(byte **)(param_1 + 6);
    local_18 = 0;
    if (*(int *)((int)param_1 + 0x34) != 0) {
      do {
        local_14 = local_14 & 0xffff0000;
        local_10 = FUN_0048476e((LPWSTR)&local_14,pbVar12,*(uint *)(piVar5[3] + 4),
                                *(int **)(param_1 + 1));
        p_Var2 = param_1 + 0x89;
        if ((int)local_10 < 1) {
          *piVar1 = -1;
          break;
        }
        iVar11 = (int)*p_Var2;
        if (*(int *)(iVar11 + 8) == *(int *)(iVar11 + 4)) {
          if (*(char *)(iVar11 + 0xc) == '\0') {
            *piVar1 = -1;
          }
          else {
            *piVar1 = *piVar1 + 1;
          }
        }
        else {
          *piVar1 = *piVar1 + 1;
          *(int *)(iVar11 + 8) = *(int *)(iVar11 + 8) + 1;
          *(short *)**(undefined4 **)p_Var2 = (short)local_14;
          **(int **)p_Var2 = **(int **)p_Var2 + 2;
        }
        pbVar12 = pbVar12 + local_10;
        local_18 = local_18 + 1;
      } while (local_18 != *(int *)((int)param_1 + 0x34));
    }
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              (this_00,*(wchar_t **)(param_1 + 6),*(int *)((int)param_1 + 0x34),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 1));
  }
  iVar11 = *piVar1;
  if (((-1 < iVar11) && ((*(uint *)((int)param_1 + 0x1c) >> 2 & 1) != 0)) && (0 < iVar13)) {
    do {
      iVar4 = (int)param_1[0x89];
      if (*(int *)(iVar4 + 8) == *(int *)(iVar4 + 4)) {
        if (*(char *)(iVar4 + 0xc) == '\0') {
          iVar11 = -1;
        }
        else {
          iVar11 = iVar11 + 1;
        }
        *piVar1 = iVar11;
      }
      else {
        *piVar1 = iVar11 + 1;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        *(undefined2 *)**(undefined4 **)this = 0x20;
        **(int **)this = **(int **)this + 2;
      }
      iVar11 = *piVar1;
    } while ((iVar11 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar13));
  }
LAB_004574d7:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


