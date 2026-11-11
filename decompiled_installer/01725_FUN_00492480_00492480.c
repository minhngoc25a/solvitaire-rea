// Function: FUN_00492480
// Entry: 00492480
// Size: 1960 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00492480(ushort *param_1,char *param_2,uint param_3,DWORD param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  __acrt_ptd *p_Var5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint **ppuVar12;
  uint **ppuVar13;
  uint **ppuVar14;
  int iVar15;
  uint **ppuVar16;
  char local_65;
  int *local_64;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint **local_4c;
  uint *local_48;
  uint *local_44;
  uint **local_40;
  uint **local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  int local_2c;
  uint *local_28 [4];
  uint *local_18 [4];
  uint *local_8;
  uint *local_4;
  
  if ((int)param_3 < 0x301) {
    if (param_3 == 0x300) {
      param_3 = 0x100;
    }
    else if ((param_3 != 0x100) && (param_3 != 0x200)) {
      return 0xffffffe2;
    }
    local_5c = 5;
  }
  else {
    if (param_3 != 0x3c00) {
      return 0xffffffe2;
    }
    local_5c = 6;
  }
  local_60 = 0;
  local_58 = 0;
  uVar2 = 0;
  uVar11 = 0;
  iVar6 = local_5c;
joined_r0x004924e7:
  do {
    do {
      if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
        iVar6 = 0;
        piVar3 = *(int **)(param_1 + 2);
        iVar15 = iVar6;
        if (piVar3 != (int *)0x0) {
          do {
            puVar8 = (uint *)(piVar3 + 1);
            piVar3 = (int *)*piVar3;
            iVar6 = iVar15 + 1;
            if ((*puVar8 & uVar11) == 0) {
              iVar6 = iVar15;
            }
            iVar15 = iVar6;
          } while (piVar3 != (int *)0x0);
          if ((0 < iVar6) && ((uVar11 & 0x100) != 0)) {
            iVar6 = iVar6 + 3;
          }
        }
        uVar9 = 0x2712;
        if (iVar6 <= (int)(-(uint)((uVar11 & 0x100) != 0) & 3)) {
          uVar9 = 0;
        }
        *(undefined4 *)(param_1 + 6) = uVar9;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 2);
        return uVar2;
      }
      iVar15 = 0;
      do {
        FUN_00493320((int *)&param_2,(int *)&local_38,&local_34,&local_65);
        if (iVar15 < iVar6) {
          (&local_30)[iVar15 * 2] = local_38;
          (&local_2c)[iVar15 * 2] = local_34;
        }
        iVar15 = iVar15 + 1;
        iVar1 = iVar15;
      } while (local_65 == ':');
      for (; iVar1 < iVar6; iVar1 = iVar1 + 1) {
        (&local_2c)[iVar1 * 2] = 0;
        (&local_30)[iVar1 * 2] = (int *)0x0;
      }
    } while ((local_30 != (int *)0x0) && ((char)*local_30 == '#'));
    uVar11 = 0;
    ppuVar14 = (uint **)0x0;
    local_40 = (uint **)0x0;
    local_54 = -1;
    local_4c = (uint **)0x0;
    local_44 = (uint *)0x0;
    local_48 = (uint *)0x0;
    if (param_3 != 0x3c00) {
      uVar10 = local_2c - (int)local_30;
      if (((char)*local_30 == 'd') &&
         ((uVar10 == 1 ||
          (((6 < uVar10 && (*(int *)((int)local_30 + 1) == 0x75616665)) &&
           (*(short *)((int)local_30 + 5) == 0x746c)))))) {
        local_50 = 0x200;
        if (7 < uVar10) {
          local_30 = (int *)((int)local_30 + 7);
        }
        uVar11 = (uint)(uVar10 < 8);
      }
      else {
        local_50 = param_3;
      }
      puVar8 = local_28[uVar11 * 2 + 1];
      FUN_00493210((char *)local_28[uVar11 * 2],(char *)puVar8,&local_54);
      if ((local_54 == -1) && ((int)(uVar11 + 3) < iVar15)) {
        FUN_00493210((char *)local_18[uVar11 * 2],(char *)local_18[uVar11 * 2 + 1],&local_54);
      }
      piVar3 = (&local_30)[uVar11 * 2];
      local_64 = (int *)0x0;
      iVar6 = (&local_2c)[uVar11 * 2] - (int)piVar3;
      if ((int *)(&local_2c)[uVar11 * 2] == piVar3) goto switchD_004927c4_caseD_7;
      switch((char)*piVar3) {
      case 'g':
        if ((iVar6 != 1) && ((iVar6 != 5 || (*(int *)((int)piVar3 + 1) != 0x70756f72)))) break;
        iVar6 = 0x2714;
        local_64 = (int *)0x2714;
        goto LAB_00492722;
      case 'm':
        if ((iVar6 != 1) &&
           (((iVar6 != 4 || (*(short *)((int)piVar3 + 1) != 0x7361)) ||
            (*(char *)((int)piVar3 + 3) != 'k')))) break;
        local_64 = (int *)0x2715;
        puVar7 = local_28[uVar11 * 2];
        if ((iVar15 == uVar11 + 2) && (puVar7 < puVar8)) {
          iVar6 = FUN_00493270((undefined1 *)puVar7,(undefined1 *)puVar8,(uint *)&local_4c);
          ppuVar14 = local_4c;
          if (iVar6 == 0) {
            puVar7 = local_28[uVar11 * 2];
            goto LAB_0049273c;
          }
          local_40 = (uint **)0x1;
        }
        else {
LAB_0049273c:
          if ((iVar15 == uVar11 + 3) && (puVar7 < puVar8)) goto switchD_004927c4_caseD_7;
        }
        if ((ppuVar14 == (uint **)0x0) &&
           (iVar6 = FUN_00493270((undefined1 *)local_28[(uVar11 - (int)local_40) * 2 + 2],
                                 (undefined1 *)local_18[(uVar11 - (int)local_40) * 2 + -1],
                                 (uint *)&local_4c), ppuVar14 = local_4c, iVar6 == 0))
        goto switchD_004927c4_caseD_7;
        goto LAB_00492b04;
      case 'o':
        if ((iVar6 == 1) || ((iVar6 == 5 && (*(int *)((int)piVar3 + 1) == 0x72656874)))) {
          iVar6 = 0x2716;
          local_64 = (int *)0x2716;
          goto LAB_00492722;
        }
        break;
      case 'u':
        if ((iVar6 == 1) ||
           (((iVar6 == 4 && (*(short *)((int)piVar3 + 1) == 0x6573)) &&
            (*(char *)((int)piVar3 + 3) == 'r')))) {
          iVar6 = 0x2712;
          local_64 = (int *)0x2712;
          goto LAB_00492722;
        }
      }
      iVar6 = 0;
LAB_00492722:
      if (iVar6 - 0x2712U < 5) {
        uVar2 = (*(code *)(&PTR_LAB_00492c7c)[iVar6 - 0x2712U])();
        return uVar2;
      }
      goto switchD_004927c4_caseD_7;
    }
    local_64 = (int *)0x0;
    switch(local_2c - (int)local_30) {
    case 4:
      if (*local_30 == 0x72657375) {
        piVar3 = (int *)0x2711;
        local_64 = (int *)0x2711;
      }
      else {
LAB_00492834:
        piVar3 = (int *)0x0;
      }
      goto LAB_00492836;
    case 5:
      if ((*local_30 != 0x756f7267) || ((char)local_30[1] != 'p')) goto LAB_00492834;
      piVar3 = (int *)0x2713;
      local_64 = (int *)0x2713;
LAB_00492836:
      if (piVar3 != (int *)0x0) {
        if ((piVar3 == (int *)0x2711) || (piVar3 == (int *)0x2713)) {
          local_48 = local_28[0];
          local_44 = local_28[1];
          FUN_00493210((char *)local_28[0],(char *)local_28[1],&local_54);
          local_40 = local_18 + 3;
          ppuVar16 = local_18 + 1;
          ppuVar12 = local_18;
          local_4c = &local_4;
          ppuVar13 = local_18 + 2;
          local_3c = local_18 + 4;
          piVar3 = local_64;
          puVar8 = local_28[2];
          puVar7 = local_28[3];
        }
        else {
LAB_004928d4:
          local_40 = local_18 + 1;
          ppuVar16 = local_28 + 3;
          local_4c = local_18 + 3;
          ppuVar12 = local_28 + 2;
          local_3c = local_18 + 2;
          ppuVar13 = local_18;
          puVar8 = local_28[0];
          puVar7 = local_28[1];
        }
        while (puVar8 < puVar7) {
          switch((char)*puVar8) {
          case '-':
            break;
          default:
            goto switchD_004927c4_caseD_7;
          case 'A':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x400);
            break;
          case 'C':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x2000);
            break;
          case 'D':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x100);
            break;
          case 'R':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x40);
            break;
          case 'W':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x80);
            break;
          case 'a':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x200);
            break;
          case 'c':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x1000);
            break;
          case 'd':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x800);
            break;
          case 'o':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x4000);
            break;
          case 'p':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x20);
            break;
          case 'r':
            ppuVar14 = (uint **)((uint)ppuVar14 | 8);
            break;
          case 's':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x8000);
            break;
          case 'w':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x10);
            break;
          case 'x':
            ppuVar14 = (uint **)((uint)ppuVar14 | 1);
          }
          piVar3 = local_64;
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        puVar8 = *ppuVar12;
        while (puVar8 < *ppuVar16) {
          uVar11 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          local_64 = piVar3;
          switch((char)uVar11) {
          case '-':
            break;
          default:
            goto switchD_004927c4_caseD_7;
          case 'F':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x40000000);
            break;
          case 'I':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x1000000);
            break;
          case 'S':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x20000000);
            break;
          case 'd':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x4000000);
            break;
          case 'f':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x2000000);
            break;
          case 'i':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x10000000);
            break;
          case 'n':
            ppuVar14 = (uint **)((uint)ppuVar14 | 0x8000000);
          }
        }
        puVar8 = *ppuVar13;
        uVar11 = 0;
        if ((int)*local_40 - (int)puVar8 == 4) {
          if (*puVar8 == 0x796e6564) {
            uVar11 = 0x800;
          }
          local_50 = uVar11;
          if (uVar11 == 0) break;
        }
        else {
          if ((int)*local_40 - (int)puVar8 != 5) break;
          if ((*puVar8 == 0x6f6c6c61) && ((char)puVar8[1] == 'w')) {
            local_50 = 0x400;
          }
          else if ((*puVar8 == 0x69647561) && ((char)puVar8[1] == 't')) {
            local_50 = 0x1000;
          }
          else {
            if ((*puVar8 != 0x72616c61) || ((char)puVar8[1] != 'm')) break;
            local_50 = 0x2000;
          }
        }
        FUN_00493210((char *)*local_3c,(char *)*local_4c,&local_54);
LAB_00492b04:
        puVar8 = local_48;
        uVar11 = local_50;
        uVar10 = (int)local_44 - (int)local_48;
        if ((local_50 == 0x100) && (((uint)ppuVar14 & 0xfffffff8) == 0)) {
          uVar2 = local_60;
          iVar6 = local_5c;
          if (local_64 == (int *)0x2712) {
            *param_1 = ((ushort)((int)ppuVar14 << 6) ^ *param_1) & 0x1c0 ^ *param_1;
            uVar11 = local_58 | 0x100;
            local_58 = uVar11;
            goto joined_r0x004924e7;
          }
          if (local_64 == (int *)0x2714) {
            uVar11 = local_58 | 0x100;
            *param_1 = ((ushort)ppuVar14 * 8 ^ *param_1) & 0x38 ^ *param_1;
            local_58 = uVar11;
            goto joined_r0x004924e7;
          }
          if (local_64 == (int *)0x2716) {
            *param_1 = ((ushort)ppuVar14 ^ *param_1) & 7 ^ *param_1;
            uVar11 = local_58 | 0x100;
            local_58 = uVar11;
            goto joined_r0x004924e7;
          }
        }
        puVar4 = FUN_00492da0((int)param_1,local_50,(uint)ppuVar14,local_64,local_54);
        if (puVar4 == (undefined4 *)0x0) {
          return 0xffffffe7;
        }
        if (((puVar8 == (uint *)0x0) || ((char)*puVar8 == '\0')) || (uVar10 == 0)) {
          FUN_0048d760(puVar4 + 5);
        }
        else {
          iVar6 = FUN_0048dd60(puVar4 + 5,puVar8,uVar10,param_4);
          if (iVar6 != 0) {
            p_Var5 = FUN_0042470e();
            if (*(int *)p_Var5 == 0xc) {
              return 0xffffffe2;
            }
            uVar11 = local_58 | uVar11;
            local_60 = 0xffffffec;
            uVar2 = local_60;
            iVar6 = local_5c;
            local_58 = uVar11;
            goto joined_r0x004924e7;
          }
        }
        uVar11 = local_58 | uVar11;
        uVar2 = local_60;
        iVar6 = local_5c;
        local_58 = uVar11;
        goto joined_r0x004924e7;
      }
      break;
    case 6:
      if ((*local_30 != 0x656e776f) || ((short)local_30[1] != 0x4072)) {
        if ((*local_30 == 0x756f7267) && ((short)local_30[1] == 0x4070)) {
          piVar3 = (int *)0x2714;
          local_64 = (int *)0x2714;
        }
        else {
          piVar3 = (int *)0x0;
          local_64 = (int *)0x0;
        }
        goto LAB_00492836;
      }
      piVar3 = (int *)0x2712;
      local_64 = piVar3;
      goto LAB_004928d4;
    case 9:
      if (((*local_30 == 0x72657665) && (local_30[1] == 0x656e6f79)) && ((char)local_30[2] == '@'))
      {
        piVar3 = (int *)0x277b;
        local_64 = piVar3;
        goto LAB_004928d4;
      }
    }
switchD_004927c4_caseD_7:
    local_60 = 0xffffffec;
    uVar2 = local_60;
    uVar11 = local_58;
    iVar6 = local_5c;
  } while( true );
}


