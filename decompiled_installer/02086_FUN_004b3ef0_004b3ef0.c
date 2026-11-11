// Function: FUN_004b3ef0
// Entry: 004b3ef0
// Size: 393 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b3ef0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x6e] = (int)puVar2;
  *puVar2 = &LAB_004b4080;
  puVar2[1] = &LAB_004b40a0;
  *(undefined1 *)(puVar2 + 2) = 0;
  if ((char)param_1[0x44] != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x1a;
    (**(code **)*param_1)(param_1);
  }
  if (0 < param_1[9]) {
    piVar6 = (int *)(param_1[0x31] + 8);
    puVar7 = puVar2 + 0xd;
    puVar8 = (undefined1 *)((int)puVar2 + 0x96);
    do {
      iVar9 = param_1[0x47];
      iVar3 = (piVar6[7] * *piVar6) / param_1[0x48];
      iVar4 = (piVar6[8] * piVar6[1]) / param_1[0x49];
      iVar1 = param_1[0x46];
      puVar7[0xc] = iVar4;
      if ((char)piVar6[0xb] == '\0') {
        *puVar7 = &LAB_004b4190;
      }
      else if ((iVar3 == iVar1) && (iVar4 == iVar9)) {
        *puVar7 = &LAB_004b4180;
      }
      else {
        if (iVar3 * 2 == iVar1) {
          if (iVar4 == iVar9) {
            *puVar7 = &LAB_004b4280;
          }
          else {
            if (iVar4 * 2 != iVar9) goto LAB_004b3fed;
            *puVar7 = &LAB_004b42e0;
          }
        }
        else {
LAB_004b3fed:
          if ((iVar1 % iVar3 == 0) && (iVar9 % iVar4 == 0)) {
            *puVar7 = &LAB_004b41a0;
            puVar8[-10] = (char)(iVar1 / iVar3);
            *puVar8 = (char)(iVar9 / iVar4);
          }
          else {
            *(undefined4 *)(*param_1 + 0x14) = 0x27;
            (**(code **)*param_1)(param_1);
          }
        }
        iVar9 = param_1[0x47];
        iVar1 = param_1[1];
        iVar3 = FUN_004b7750(param_1[0x17],param_1[0x46]);
        uVar5 = (**(code **)(iVar1 + 8))(param_1,1,iVar3,iVar9);
        puVar7[-10] = uVar5;
      }
      puVar8 = puVar8 + 1;
      piVar6 = piVar6 + 0x16;
      puVar7 = puVar7 + 1;
    } while ((int)(puVar8 + (-0x96 - (int)puVar2)) < param_1[9]);
  }
  return;
}


