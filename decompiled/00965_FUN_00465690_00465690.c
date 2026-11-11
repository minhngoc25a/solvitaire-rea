// Function: FUN_00465690
// Entry: 00465690
// Size: 1344 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00465690(uint *param_1,uint *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  __acrt_ptd *p_Var6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int iVar9;
  undefined4 unaff_ESI;
  int *piVar10;
  uint uVar11;
  int unaff_EDI;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  char *pcVar17;
  char cVar18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  piVar3 = (int *)FUN_00488710((int)param_1,0x20,&local_c);
  cVar18 = (char)unaff_EBX;
  if (piVar3 == (int *)0x0) {
    return 0xffffffe2;
  }
  if ((((char)*piVar3 == 'M') && (*(char *)((int)piVar3 + 1) == 'Z')) || (*piVar3 == 0x464c457f)) {
    if ((int)local_c < 0x27001) {
      lVar14 = FUN_00488a00((int)param_1,0x27000,0,0);
      if (((int)((ulonglong)lVar14 >> 0x20) == 0 || lVar14 < 0) && (lVar14 < 0)) {
        return 0xffffffe2;
      }
    }
    else {
      FUN_00488f20((int)param_1,0x27000);
    }
    iVar9 = 0;
    uVar12 = 1;
    local_10 = 0;
    do {
      piVar3 = (int *)FUN_00488710((int)param_1,uVar12,&local_8);
      if (piVar3 == (int *)0x0) {
        uVar12 = (int)uVar12 >> 1;
        if (uVar12 < 0x40) {
          pcVar17 = "Couldn\'t find out 7-Zip header";
          uVar16 = 0x2a;
          goto LAB_00465bba;
        }
      }
      else if ((int)local_8 < 6) {
        uVar12 = 0x1000;
      }
      else {
        piVar1 = (int *)(local_8 + (int)piVar3);
        for (piVar10 = piVar3; piVar10 + 8 < piVar1; piVar10 = (int *)((int)piVar10 + iVar9)) {
          iVar9 = FUN_004620d0(piVar10);
          cVar18 = (char)unaff_EBX;
          if (iVar9 == 0) {
            iVar9 = *(int *)param_1[0x110];
            FUN_00488f20((int)param_1,(ulonglong)(uint)((int)piVar10 - (int)piVar3));
            *(undefined4 *)(iVar9 + 0x6c) = 0;
            *(uint *)(iVar9 + 0x68) = local_10 + 0x27000 + ((int)piVar10 - (int)piVar3);
            piVar3 = (int *)FUN_00488710((int)param_1,0x20,&local_c);
            if (piVar3 == (int *)0x0) {
              return 0xffffffe2;
            }
            goto LAB_004657f9;
          }
        }
        FUN_00488f20((int)param_1,(ulonglong)(uint)((int)piVar10 - (int)piVar3));
        iVar9 = local_10 + ((int)piVar10 - (int)piVar3);
        local_10 = iVar9;
        if (uVar12 == 1) {
          uVar12 = 0x1000;
        }
      }
    } while (uVar12 + iVar9 < 0x39001);
    pcVar17 = "Couldn\'t find out 7-Zip header";
    uVar16 = 0x2a;
    goto LAB_00465bba;
  }
LAB_004657f9:
  lVar14 = (ulonglong)local_8 << 0x20;
  puVar5 = param_2 + 0x1a;
  uVar12 = *puVar5;
  *puVar5 = *puVar5 + 0x20;
  param_2[0x1b] = param_2[0x1b] + (uint)(0xffffffdf < uVar12);
  if ((*piVar3 == -0x504385c9) && ((short)piVar3[1] == 0x1c27)) {
    thunk_FUN_0048b320(0,(uint *)(piVar3 + 3),0x14);
    uVar13 = FUN_00461580(piVar3 + 3);
    local_4 = (uint)((ulonglong)uVar13 >> 0x20);
    uVar4 = (uint)uVar13;
    lVar14 = FUN_00461580(piVar3 + 5);
    uVar11 = local_4;
    local_8 = (uint)((ulonglong)lVar14 >> 0x20);
    uVar12 = piVar3[7];
    if (lVar14 == 0) {
      return 1;
    }
    if (-1 < (int)local_4) {
      FUN_00488f20((int)param_1,0x20);
      if (uVar4 != 0 || uVar11 != 0) {
        if ((int)local_c < (int)uVar4) {
          lVar15 = FUN_00488a00((int)param_1,uVar4 + param_2[0x1a],
                                param_2[0x1b] + uVar11 + (uint)CARRY4(uVar4,param_2[0x1a]),0);
          if (lVar15 < 0) {
            return 0xffffffe2;
          }
        }
        else {
          FUN_00488f20((int)param_1,CONCAT44(uVar11,uVar4));
        }
      }
      param_2[0x2e] = uVar4;
      param_2[0x18] = uVar4;
      param_2[0x14] = (uint)lVar14;
      param_2[0x2f] = uVar11;
      param_2[0x19] = uVar11;
      param_2[0x15] = local_8;
      param_2[0x16] = 0;
      param_2[0x13] = 0;
      param_2[0x12] = 1;
      param_2[0x13eb] = 0;
      local_10 = 1;
      puVar5 = FUN_00463150(param_1,1);
      if (puVar5 == (uint *)0x0) {
        pcVar17 = "Truncated 7-Zip file body";
        uVar16 = 0x2a;
        goto LAB_00465bba;
      }
      if ((char)*puVar5 != '\x01') {
        if ((char)*puVar5 != '\x17') {
          FUN_00487380((int)param_1,0xffffffff,0x528b10);
          return 0xffffffe2;
        }
        iVar9 = *(int *)param_1[0x110];
        p_Var6 = FUN_0042470e();
        *(undefined4 *)p_Var6 = 0;
        iVar7 = FUN_00464c00(param_1,param_2);
        if (iVar7 < 0) {
          p_Var6 = FUN_0042470e();
          pcVar17 = "Malformed 7-Zip archive";
          if (*(int *)p_Var6 == 0xc) {
            pcVar17 = "Couldn\'t allocate memory";
          }
LAB_00465ac4:
          FUN_00487380((int)param_1,0xffffffff,(int)pcVar17);
          uVar11 = 0xffffffe2;
        }
        else {
          if ((param_2[2] == 0 && param_2[3] == 0) || (param_2[8] == 0 && param_2[9] == 0)) {
            pcVar17 = "Malformed 7-Zip archive";
            goto LAB_00465ac4;
          }
          uVar11 = *(uint *)param_2[4];
          local_8 = ((uint *)param_2[4])[1];
          uVar8 = param_2[1] + local_8 + (uint)CARRY4(*param_2,uVar11);
          uVar4 = *(uint *)(iVar9 + 100);
          if ((uVar4 < uVar8) ||
             ((((uVar4 <= uVar8 && (*(uint *)(iVar9 + 0x60) < *param_2 + uVar11)) ||
               ((int)uVar8 < 0)) || ((uVar11 == 0 && local_8 == 0 || ((int)param_2[1] < 0)))))) {
            pcVar17 = "Malformed Header offset";
            goto LAB_00465ac4;
          }
          if (param_2[0x16] == uVar12) {
            cVar2 = *(char *)(param_2[10] + 0x44);
            if (cVar2 != '\0') {
              uVar12 = *(uint *)(param_2[10] + 0x48);
            }
            local_10 = (uint)(cVar2 != '\0');
            if (param_2[0x38] != 0) {
              FUN_00465320((int)param_1);
            }
            uVar11 = FUN_00465bd0((uint)param_1,(uint *)param_2[10]);
            if (uVar11 == 0) {
              param_2[0x14] = param_2[0x32];
              param_2[0x15] = param_2[0x33];
              uVar11 = FUN_004655d0((int)param_1);
            }
          }
          else {
            FUN_00487380((int)param_1,0xffffffff,0x526a40);
            uVar11 = 0xffffffff;
          }
        }
        FUN_00462f40((uint)param_2);
        _memset(param_2,0,0x48);
        if ((int)uVar11 < 0) {
          return 0xffffffe2;
        }
        param_2[0x13] = 1;
        param_2[0x16] = 0;
      }
      p_Var6 = FUN_0042470e();
      *(undefined4 *)p_Var6 = 0;
      iVar9 = FUN_004643c0(param_1,param_3,(uint *)param_2[0x13],unaff_EDI,unaff_ESI,unaff_EBP,
                           cVar18);
      if (iVar9 < 0) {
        p_Var6 = FUN_0042470e();
        lVar14 = CONCAT44(local_8,local_10);
        pcVar17 = "Damaged 7-Zip archive";
        if (*(int *)p_Var6 == 0xc) {
          pcVar17 = "Couldn\'t allocate memory";
        }
        goto LAB_00465bb8;
      }
      puVar5 = FUN_00463150(param_1,1);
      lVar14 = CONCAT44(local_8,local_10);
      if (((puVar5 != (uint *)0x0) && (lVar14 = CONCAT44(local_8,local_10), (char)*puVar5 == '\0'))
         && ((local_10 == 0 || (lVar14 = CONCAT44(local_8,local_10), param_2[0x16] == uVar12)))) {
        param_2[0x35] = 0;
        param_2[0x34] = 0;
        param_2[0x32] = 0;
        param_2[0x33] = 0;
        param_2[0x2d] = 0;
        param_2[0x38] = 0;
        param_2[0x12] = 0;
        return 0;
      }
    }
    pcVar17 = "Malformed 7-Zip archive";
  }
  else {
    pcVar17 = "Not 7-Zip archive file";
  }
LAB_00465bb8:
  local_8 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar16 = 0xffffffff;
LAB_00465bba:
  FUN_00487380((int)param_1,uVar16,(int)pcVar17);
  return 0xffffffe2;
}


