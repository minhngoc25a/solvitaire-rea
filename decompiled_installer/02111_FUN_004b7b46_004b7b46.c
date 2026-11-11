// Function: FUN_004b7b46
// Entry: 004b7b46
// Size: 734 bytes
// Thunk: false
// External: false


void FUN_004b7b46(uint *param_1,uint param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *local_8;
  undefined4 *local_4;
  
  iVar6 = 0;
  if (param_4 != param_1) {
    if (param_3 != (int *)0x0) {
      puVar10 = (undefined4 *)*param_3;
      while (puVar10 != (undefined4 *)0xffffffff) {
        piVar9 = param_3 + 1;
        if (puVar10 == (undefined4 *)0xfffffff9) {
          puVar10 = (undefined4 *)*piVar9;
          local_4 = (undefined4 *)param_3[2];
          iVar3 = *(int *)((int)puVar10 + (int)param_4);
          piVar1 = (int *)((int)puVar10 + (int)param_1);
          piVar9 = param_3 + 2 + (int)(local_4 + 1);
          if (*piVar1 != 0) {
            (*DAT_0054415c)(*piVar1);
          }
          if (iVar3 != 0) {
            iVar5 = (*DAT_00544144)(*(undefined4 *)(iVar3 + -0x14),*(undefined4 *)(iVar3 + -8),
                                    *(undefined4 *)(iVar3 + -4),*(undefined4 *)(iVar3 + -0x10),
                                    piVar1);
            *(undefined4 *)(iVar5 + -0x18) = *(undefined4 *)(iVar3 + -0x18);
            (*DAT_00544150)(iVar3,iVar5,0);
          }
          uVar11 = (int)local_4 * 4 + 4;
        }
        else if (puVar10 == (undefined4 *)0xfffffffa) {
          puVar10 = (undefined4 *)*piVar9;
          piVar9 = param_3 + 6;
          iVar3 = *(int *)((int)puVar10 + (int)param_4);
          iVar5 = *(int *)((int)puVar10 + (int)param_1);
          if (iVar5 != 0) {
            (*DAT_00544164)(iVar5);
          }
          if (iVar3 != 0) {
            (*DAT_0054414c)(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),
                            *(undefined4 *)(iVar3 + 0x10),(int *)((int)puVar10 + (int)param_1),
                            *(undefined4 *)(iVar3 + 0x24));
            (*DAT_00544158)(*(undefined4 *)((int)puVar10 + (int)param_4),0,*local_8,0,0);
          }
LAB_004b7cb9:
          uVar11 = 4;
        }
        else if (puVar10 == (undefined4 *)0xfffffffb) {
          puVar10 = (undefined4 *)*piVar9;
          piVar9 = param_3 + 5;
          iVar3 = *(int *)((int)puVar10 + (int)param_4);
          iVar5 = *(int *)((int)puVar10 + (int)param_1);
          if (iVar5 != 0) {
            (*DAT_00544160)(iVar5);
          }
          if (iVar3 != 0) {
            (*DAT_00544148)(*(int *)(iVar3 + 0x28) + -8,(int *)((int)puVar10 + (int)param_1),
                            *(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0x2c));
            (*DAT_00544154)(*(undefined4 *)((int)puVar10 + (int)param_4),0,*local_4,0,0);
          }
          uVar11 = 8;
        }
        else {
          if (puVar10 == (undefined4 *)0xfffffffc) {
            puVar10 = (undefined4 *)*piVar9;
            piVar9 = param_3 + 6;
            iVar3 = *(int *)((int)puVar10 + (int)param_4);
            piVar1 = (int *)((int)puVar10 + (int)param_1);
            if (*piVar1 != 0) {
              (*DAT_0054415c)(*piVar1);
            }
            if (iVar3 != 0) {
              uVar4 = (*DAT_00544144)(*(undefined4 *)(iVar3 + -0x14),*(undefined4 *)(iVar3 + -8),
                                      *(undefined4 *)(iVar3 + -4),*(undefined4 *)(iVar3 + -0x10),
                                      piVar1);
              (*DAT_00544150)(iVar3,uVar4,0);
            }
            goto LAB_004b7cb9;
          }
          if (puVar10 == (undefined4 *)0xfffffffd) {
            puVar10 = (undefined4 *)*piVar9;
            uVar11 = param_3[2];
            piVar9 = param_3 + 4;
            FUN_004b7b46((uint *)((int)puVar10 + (int)param_1),uVar11,(int *)param_3[3],
                         (uint *)((int)puVar10 + (int)param_4));
          }
          else {
            if (puVar10 != (undefined4 *)0xfffffffe) {
              psVar2 = *(short **)((int)puVar10 + (int)param_4);
              piVar1 = (int *)((int)puVar10 + (int)param_1);
              if (*piVar1 != 0) {
                FUN_00424120(iVar6,param_1,(LPVOID)*piVar1);
                *piVar1 = 0;
              }
              if (psVar2 != (short *)0x0) {
                FUN_00424040(piVar1,psVar2);
              }
              goto LAB_004b7cb9;
            }
            local_4 = (undefined4 *)*piVar9;
            puVar10 = (undefined4 *)param_3[2];
            uVar11 = param_3[3];
            piVar1 = (int *)param_3[4];
            piVar9 = param_3 + 5;
            if (0 < (int)local_4) {
              puVar7 = (uint *)((int)puVar10 + (int)param_1);
              puVar8 = local_4;
              do {
                FUN_004b7b46(puVar7,uVar11,piVar1,
                             (uint *)(((int)param_4 - (int)param_1) + (int)puVar7));
                puVar7 = (uint *)((int)puVar7 + uVar11);
                puVar8 = (undefined4 *)((int)puVar8 + -1);
              } while (puVar8 != (undefined4 *)0x0);
            }
            uVar11 = (int)local_4 * uVar11;
            local_8 = puVar10;
          }
        }
        if (iVar6 < (int)puVar10) {
          FUN_0044c490((uint *)((int)param_1 + iVar6),(uint *)(iVar6 + (int)param_4),
                       (int)puVar10 - iVar6);
        }
        iVar6 = uVar11 + (int)puVar10;
        param_3 = piVar9;
        puVar10 = (undefined4 *)*piVar9;
      }
      if ((int)param_2 <= iVar6) {
        return;
      }
      param_2 = param_2 - iVar6;
      param_4 = (uint *)(iVar6 + (int)param_4);
      param_1 = (uint *)(iVar6 + (int)param_1);
    }
    FUN_0044c490(param_1,param_4,param_2);
  }
  return;
}


