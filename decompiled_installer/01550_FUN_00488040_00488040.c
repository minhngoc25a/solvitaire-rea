// Function: FUN_00488040
// Entry: 00488040
// Size: 874 bytes
// Thunk: false
// External: false


int __cdecl FUN_00488040(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  LPVOID pvVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  
  puVar5 = param_1;
  iVar6 = FUN_00493d30(param_1,0xdeb0c5,1,"archive_read_open");
  if (iVar6 != -0x1e) {
    FUN_00487360((int)param_1);
    if (param_1[0x1f] == 0) {
      FUN_00487380((int)param_1,0x16,0x525d3c);
      param_1[1] = 0x8000;
    }
    else {
      if (((code *)param_1[0x1e] != (code *)0x0) &&
         (iVar6 = (*(code *)param_1[0x1e])(param_1,*(undefined4 *)(param_1[0x28] + 0x10)),
         iVar6 != 0)) {
        FUN_00489400((int)param_1);
        return iVar6;
      }
      uVar7 = FUN_0047f911(1,0x50);
      if (uVar7 != 0) {
        *(undefined4 *)(uVar7 + 8) = 0;
        *(undefined4 *)(uVar7 + 0xc) = 0;
        *(uint **)(uVar7 + 0x10) = param_1;
        *(undefined4 *)(uVar7 + 0x18) = *(undefined4 *)(param_1[0x28] + 0x10);
        *(undefined ***)(uVar7 + 0x14) = &PTR_LAB_0050f140;
        *(undefined **)(uVar7 + 0x1c) = &DAT_00526de8;
        *(undefined4 *)(uVar7 + 0x20) = 0;
        *(undefined4 *)(uVar7 + 0x24) = 1;
        *(undefined4 *)(uVar7 + 0x28) = 1;
        puVar1 = (undefined4 *)param_1[0x28];
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar2 = param_1[0x5a];
        if ((uVar2 == 0) || (param_1[0x5b] == 0)) {
          param_1[0x5a] = uVar7;
          param_1 = (uint *)0x0;
          do {
            puVar11 = puVar5 + 0x2a;
            param_3 = 0;
            puVar10 = (uint *)0x0;
            iVar6 = 0x10;
            do {
              if (((undefined4 *)puVar11[2] != (undefined4 *)0x0) &&
                 (uVar7 = (**(code **)puVar11[2])(puVar11,puVar5[0x5a]), (int)param_3 < (int)uVar7))
              {
                puVar10 = puVar11;
                param_3 = uVar7;
              }
              puVar11 = puVar11 + 3;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            if (puVar10 == (uint *)0x0) {
              FUN_00488730((uint *)puVar5[0x5a],1,&param_3);
              if (-1 < (int)param_3) {
                param_3 = 0;
                goto LAB_004882be;
              }
              FUN_00489040((int)puVar5);
              pvVar8 = (LPVOID)puVar5[0x5a];
              if ((LPVOID)puVar5[0x5a] != (LPVOID)0x0) {
                do {
                  pvVar3 = *(LPVOID *)((int)pvVar8 + 0xc);
                  FUN_0047d191(pvVar8);
                  puVar5[0x5a] = (uint)pvVar3;
                  pvVar8 = pvVar3;
                } while (pvVar3 != (LPVOID)0x0);
                puVar5[1] = 0x8000;
                return -0x1e;
              }
              goto LAB_00488210;
            }
            uVar7 = FUN_0047f911(1,0x50);
            if (uVar7 == 0) goto LAB_00488210;
            *(uint **)(uVar7 + 8) = puVar10;
            *(uint **)(uVar7 + 0x10) = puVar5;
            *(uint *)(uVar7 + 0xc) = puVar5[0x5a];
            puVar5[0x5a] = uVar7;
            iVar6 = (**(code **)(puVar10[2] + 4))(uVar7);
            if (iVar6 != 0) {
              FUN_00489040((int)puVar5);
              pvVar8 = (LPVOID)puVar5[0x5a];
              if ((LPVOID)puVar5[0x5a] != (LPVOID)0x0) {
                do {
                  pvVar3 = *(LPVOID *)((int)pvVar8 + 0xc);
                  FUN_0047d191(pvVar8);
                  puVar5[0x5a] = (uint)pvVar3;
                  pvVar8 = pvVar3;
                } while (pvVar3 != (LPVOID)0x0);
                puVar5[1] = 0x8000;
                return -0x1e;
              }
              goto LAB_00488210;
            }
            param_1 = (uint *)((int)param_1 + 1);
          } while ((int)param_1 < 0x19);
          FUN_00487380((int)puVar5,0x2a,0x526804);
LAB_00488210:
          puVar5[1] = 0x8000;
          return -0x1e;
        }
        for (uVar4 = *(uint *)(uVar2 + 0xc); uVar4 != 0; uVar4 = *(uint *)(uVar4 + 0xc)) {
          uVar2 = uVar4;
        }
        *(uint *)(uVar2 + 0xc) = uVar7;
LAB_004882be:
        uVar7 = 0;
        if (puVar5[0x110] != 0) {
LAB_0048838b:
          puVar5[1] = 2;
          FUN_00489460(puVar5[0x5a],0);
          return uVar7;
        }
        iVar6 = -1;
        puVar10 = puVar5 + 0x60;
        puVar11 = (uint *)0xffffffff;
        puVar5[0x110] = (uint)puVar10;
        param_1 = (uint *)0xffffffff;
        puVar12 = (uint *)0x0;
        do {
          if ((code *)puVar10[2] != (code *)0x0) {
            iVar9 = (*(code *)puVar10[2])(puVar5,iVar6);
            if (iVar9 == -0x1e) goto LAB_0048835c;
            puVar10 = (uint *)puVar5[0x5a];
            if (*puVar10 != 0 || puVar10[1] != 0) {
              FUN_00488a20(puVar10,0,0,0);
            }
            if ((iVar6 < iVar9) || (puVar11 = param_1, (int)param_1 < 0)) {
              puVar11 = puVar12;
              iVar6 = iVar9;
              param_1 = puVar12;
            }
          }
          puVar12 = (uint *)((int)puVar12 + 1);
          puVar10 = (uint *)(puVar5[0x110] + 0x2c);
          puVar5[0x110] = (uint)puVar10;
        } while ((int)puVar12 < 0x10);
        if ((int)puVar11 < 0) {
          pcVar13 = "No formats registered";
        }
        else {
          if (0 < iVar6) {
            puVar5[0x110] = (uint)(puVar5 + (int)puVar11 * 0xb + 0x60);
            uVar7 = param_3;
            goto LAB_0048838b;
          }
          pcVar13 = "Unrecognized archive format";
        }
        FUN_00487380((int)puVar5,0x2a,(int)pcVar13);
LAB_0048835c:
        FUN_00489040((int)puVar5);
        puVar5[1] = 0x8000;
        return -0x1e;
      }
    }
  }
  return -0x1e;
}


