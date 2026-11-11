// Function: FUN_004a5a20
// Entry: 004a5a20
// Size: 774 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004a5a20(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_c;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (0 < param_4)) && (param_3 != 0)) {
    iVar6 = *(int *)(param_2 + 0x80);
    if (*(int *)(param_2 + 0x84) - iVar6 < param_4) {
      if (0x7fffffff - iVar6 < param_4) {
LAB_004a5aec:
        FUN_0046f6d0(param_1,"too many text chunks",1);
        return 1;
      }
      if (iVar6 + param_4 < 0x7ffffff7) {
        uVar11 = iVar6 + param_4 + 8U & 0xfffffff8;
      }
      else {
        uVar11 = 0x7fffffff;
      }
      puVar5 = FUN_004a49b0(param_1,*(uint **)(param_2 + 0x88),iVar6,uVar11 - iVar6,0x1c);
      if (puVar5 == (uint *)0x0) goto LAB_004a5aec;
      FUN_004a48e0(param_1,*(LPVOID *)(param_2 + 0x88));
      *(uint **)(param_2 + 0x88) = puVar5;
      *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x4000;
      *(uint *)(param_2 + 0x84) = uVar11;
    }
    piVar2 = (int *)(param_2 + 0x80);
    puVar9 = (undefined4 *)(param_3 + 0x14);
    local_c = 0;
    do {
      pcVar8 = (char *)puVar9[-4];
      piVar3 = (int *)(*(int *)(param_2 + 0x88) + *piVar2 * 0x1c);
      if (pcVar8 != (char *)0x0) {
        iVar6 = puVar9[-5];
        if (iVar6 + 1U < 4) {
          pcVar1 = pcVar8 + 1;
          do {
            cVar4 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar4 != '\0');
          uVar11 = (int)pcVar8 - (int)pcVar1;
          if (iVar6 < 1) {
            uVar12 = 0;
LAB_004a5b72:
            uVar7 = 0;
          }
          else {
            pcVar8 = (char *)*puVar9;
            if (pcVar8 == (char *)0x0) {
              uVar12 = 0;
            }
            else {
              pcVar1 = pcVar8 + 1;
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              uVar12 = (int)pcVar8 - (int)pcVar1;
            }
            pcVar8 = (char *)puVar9[1];
            if (pcVar8 == (char *)0x0) goto LAB_004a5b72;
            pcVar1 = pcVar8 + 1;
            do {
              cVar4 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar4 != '\0');
            uVar7 = (int)pcVar8 - (int)pcVar1;
          }
          pcVar8 = (char *)puVar9[-3];
          if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
            uVar10 = 0;
            iVar6 = (uint)(0 < iVar6) * 2 + -1;
          }
          else {
            pcVar1 = pcVar8 + 1;
            do {
              cVar4 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar4 != '\0');
            uVar10 = (int)pcVar8 - (int)pcVar1;
          }
          *piVar3 = iVar6;
          puVar5 = (uint *)FUN_004a4910(param_1,uVar10 + 4 + uVar7 + uVar12 + uVar11);
          piVar3[1] = (int)puVar5;
          if (puVar5 == (uint *)0x0) {
            FUN_0046f6d0(param_1,"text chunk: out of memory",1);
            return 1;
          }
          FUN_0044c490(puVar5,(uint *)puVar9[-4],uVar11);
          *(undefined1 *)(piVar3[1] + uVar11) = 0;
          if ((int)puVar9[-5] < 1) {
            iVar6 = piVar3[1] + uVar11;
            piVar3[5] = 0;
            piVar3[6] = 0;
          }
          else {
            puVar5 = (uint *)(piVar3[1] + 1 + uVar11);
            piVar3[5] = (int)puVar5;
            FUN_0044c490(puVar5,(uint *)*puVar9,uVar12);
            *(undefined1 *)(uVar12 + piVar3[5]) = 0;
            puVar5 = (uint *)(piVar3[5] + 1 + uVar12);
            piVar3[6] = (int)puVar5;
            FUN_0044c490(puVar5,(uint *)puVar9[1],uVar7);
            *(undefined1 *)(uVar7 + piVar3[6]) = 0;
            iVar6 = piVar3[6] + uVar7;
          }
          piVar3[2] = iVar6 + 1;
          if (uVar10 != 0) {
            FUN_0044c490((uint *)(iVar6 + 1),(uint *)puVar9[-3],uVar10);
          }
          *(undefined1 *)(uVar10 + piVar3[2]) = 0;
          if (*piVar3 < 1) {
            uVar11 = 0;
          }
          else {
            uVar11 = uVar10;
            uVar10 = 0;
          }
          piVar3[3] = uVar10;
          piVar3[4] = uVar11;
          *piVar2 = *piVar2 + 1;
        }
        else {
          FUN_0046f6d0(param_1,"text compression mode is out of range",1);
        }
      }
      local_c = local_c + 1;
      puVar9 = puVar9 + 7;
    } while (local_c < param_4);
  }
  return 0;
}


