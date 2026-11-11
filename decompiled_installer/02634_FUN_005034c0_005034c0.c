// Function: FUN_005034c0
// Entry: 005034c0
// Size: 1229 bytes
// Thunk: false
// External: false


void __cdecl FUN_005034c0(undefined1 *param_1,uint param_2,uint param_3,undefined *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int local_11c;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined4 auStack_f8 [30];
  undefined4 auStack_80 [30];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_108 = param_1;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (undefined *)0x0)) {
    p_Var3 = FUN_0042470e();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_004243be();
  }
  else {
    local_11c = 0;
    if (1 < param_2) {
      puVar7 = param_1 + (param_2 - 1) * param_3;
LAB_00503542:
      while (uVar4 = (uint)((int)puVar7 - (int)local_108) / param_3 + 1, 8 < uVar4) {
        iVar5 = (uVar4 >> 1) * param_3;
        puVar8 = local_108 + iVar5;
        (*(code *)PTR_guard_check_icall_00532084)(local_108,puVar8);
        iVar6 = (*(code *)param_4)();
        if ((0 < iVar6) && (uVar4 = param_3, puVar10 = puVar8, local_108 != puVar8)) {
          do {
            uVar2 = puVar10[-iVar5];
            puVar10[-iVar5] = *puVar10;
            *puVar10 = uVar2;
            uVar4 = uVar4 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar4 != 0);
        }
        (*(code *)PTR_guard_check_icall_00532084)(local_108,puVar7);
        iVar5 = (*(code *)param_4)();
        if ((0 < iVar5) && (uVar4 = param_3, puVar10 = puVar7, local_108 != puVar7)) {
          do {
            puVar9 = puVar10 + 1;
            uVar2 = puVar9[(int)(local_108 + (-1 - (int)puVar7))];
            puVar9[(int)(local_108 + (-1 - (int)puVar7))] = *puVar10;
            *puVar10 = uVar2;
            uVar4 = uVar4 - 1;
            puVar10 = puVar9;
          } while (uVar4 != 0);
        }
        (*(code *)PTR_guard_check_icall_00532084)(puVar8,puVar7);
        iVar5 = (*(code *)param_4)();
        local_110 = local_108;
        local_100 = puVar7;
        if ((0 < iVar5) && (uVar4 = param_3, puVar10 = puVar7, puVar8 != puVar7)) {
          do {
            puVar9 = puVar10 + 1;
            uVar2 = puVar9[(int)(puVar8 + (-1 - (int)puVar7))];
            puVar9[(int)(puVar8 + (-1 - (int)puVar7))] = *puVar10;
            *puVar10 = uVar2;
            uVar4 = uVar4 - 1;
            puVar10 = puVar9;
          } while (uVar4 != 0);
        }
LAB_00503753:
        if (local_110 < puVar8) {
          do {
            local_110 = local_110 + param_3;
            if (puVar8 <= local_110) goto LAB_005037a0;
            (*(code *)PTR_guard_check_icall_00532084)(local_110,puVar8);
            iVar5 = (*(code *)param_4)();
            puVar10 = local_100;
          } while (iVar5 < 1);
        }
        else {
LAB_005037a0:
          do {
            local_110 = local_110 + param_3;
            puVar10 = local_100;
            if (puVar7 < local_110) break;
            (*(code *)PTR_guard_check_icall_00532084)(local_110,puVar8);
            iVar5 = (*(code *)param_4)();
          } while (iVar5 < 1);
        }
        do {
          local_100 = puVar10;
          puVar10 = local_100 + -param_3;
          if (puVar10 <= puVar8) break;
          (*(code *)PTR_guard_check_icall_00532084)(puVar10,puVar8);
          iVar5 = (*(code *)param_4)();
        } while (0 < iVar5);
        if (local_110 <= puVar10) {
          puVar9 = puVar10;
          uVar4 = param_3;
          if (puVar10 != local_110) {
            do {
              puVar1 = puVar9 + 1;
              uVar2 = puVar1[(int)(local_110 + (-1 - (int)puVar10))];
              puVar1[(int)(local_110 + (-1 - (int)puVar10))] = *puVar9;
              *puVar9 = uVar2;
              uVar4 = uVar4 - 1;
              puVar9 = puVar1;
            } while (uVar4 != 0);
          }
          local_100 = puVar10;
          if (puVar8 == puVar10) {
            puVar8 = local_110;
          }
          goto LAB_00503753;
        }
        if (puVar8 < local_100) {
          do {
            local_100 = local_100 + -param_3;
            if (local_100 <= puVar8) goto LAB_005038c0;
            (*(code *)PTR_guard_check_icall_00532084)(local_100,puVar8);
            iVar5 = (*(code *)param_4)();
          } while (iVar5 == 0);
        }
        else {
LAB_005038c0:
          do {
            local_100 = local_100 + -param_3;
            if (local_100 <= local_108) break;
            (*(code *)PTR_guard_check_icall_00532084)(local_100,puVar8);
            iVar5 = (*(code *)param_4)();
          } while (iVar5 == 0);
        }
        if ((int)local_100 - (int)local_108 < (int)puVar7 - (int)local_110) goto LAB_0050394a;
        if (local_108 < local_100) {
          auStack_80[local_11c] = local_108;
          auStack_f8[local_11c] = local_100;
          local_11c = local_11c + 1;
        }
        local_108 = local_110;
        if (puVar7 <= local_110) goto LAB_00503983;
      }
      for (; puVar10 = local_108, puVar8 = local_108, local_108 < puVar7; puVar7 = puVar7 + -param_3
          ) {
        while (puVar8 = puVar8 + param_3, puVar8 <= puVar7) {
          (*(code *)PTR_guard_check_icall_00532084)(puVar8,puVar10);
          iVar5 = (*(code *)param_4)();
          if (0 < iVar5) {
            puVar10 = puVar8;
          }
        }
        if (puVar10 != puVar7) {
          puVar8 = puVar7;
          uVar4 = param_3;
          do {
            uVar2 = puVar8[(int)puVar10 - (int)puVar7];
            (puVar8 + 1)[((int)puVar10 - (int)puVar7) + -1] = *puVar8;
            *puVar8 = uVar2;
            uVar4 = uVar4 - 1;
            puVar8 = puVar8 + 1;
          } while (uVar4 != 0);
        }
      }
      goto LAB_00503983;
    }
  }
LAB_0050350e:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_0050394a:
  if (local_110 < puVar7) {
    auStack_80[local_11c] = local_110;
    auStack_f8[local_11c] = puVar7;
    local_11c = local_11c + 1;
  }
  puVar7 = local_100;
  if (local_100 <= local_108) {
LAB_00503983:
    local_11c = local_11c + -1;
    if (-1 < local_11c) {
      local_108 = (undefined1 *)auStack_80[local_11c];
      puVar7 = (undefined1 *)auStack_f8[local_11c];
      goto LAB_00503542;
    }
    goto LAB_0050350e;
  }
  goto LAB_00503542;
}


