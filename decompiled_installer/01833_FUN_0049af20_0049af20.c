// Function: FUN_0049af20
// Entry: 0049af20
// Size: 570 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049af20(int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  bool bVar10;
  uint local_4;
  
  piVar8 = param_1;
  if ((((*param_1 != 0) || (param_1[1] == 0)) && ((param_1[4] != 0 || (param_1[5] == 0)))) &&
     ((((iVar6 = param_1[9], iVar6 != 0 && (*(int *)(iVar6 + 0x14) != 0)) && (param_2 < 5)) &&
      (*(char *)(iVar6 + 0x38 + param_2) != '\0')))) {
    if ((((param_1[10] != 0) || (param_1[0xb] != 0)) ||
        ((param_1[0xc] != 0 ||
         (((param_1[0xd] != 0 || (param_1[0xe] != 0 || param_1[0xf] != 0)) ||
          ((param_1[0x10] != 0 || param_1[0x11] != 0 ||
           (((param_1[0x12] != 0 || (param_1[0x13] != 0)) || (param_1[0x14] != 0)))))))))) ||
       (param_1[0x15] != 0)) {
      return 8;
    }
    switch(*(undefined4 *)(iVar6 + 0x30)) {
    case 0:
      switch(param_2) {
      case 1:
        *(undefined4 *)(iVar6 + 0x30) = 1;
        break;
      case 2:
        *(undefined4 *)(iVar6 + 0x30) = 2;
        break;
      case 3:
        *(undefined4 *)(iVar6 + 0x30) = 3;
        break;
      case 4:
        *(undefined4 *)(iVar6 + 0x30) = 4;
      }
      goto switchD_0049aff1_default;
    case 1:
      bVar10 = param_2 == 1;
      break;
    case 2:
      bVar10 = param_2 == 2;
      break;
    case 3:
      bVar10 = param_2 == 3;
      break;
    case 4:
      bVar10 = param_2 == 4;
      break;
    case 5:
      return 1;
    default:
      goto switchD_0049afe2_caseD_6;
    }
    if ((bVar10) && (*(int *)(iVar6 + 0x34) == param_1[1])) {
switchD_0049aff1_default:
      piVar1 = param_1 + 9;
      piVar2 = param_1 + 5;
      local_4 = 0;
      piVar3 = param_1 + 4;
      param_1 = (int *)0x0;
      uVar9 = (*(code *)((undefined4 *)*piVar1)[5])
                        (*(undefined4 *)*piVar1,piVar8[8],*piVar8,&local_4,piVar8[1],*piVar3,
                         &param_1,*piVar2,param_2);
      piVar8[1] = piVar8[1] - local_4;
      *piVar8 = *piVar8 + local_4;
      puVar4 = (uint *)(piVar8 + 2);
      uVar5 = *puVar4;
      *puVar4 = *puVar4 + local_4;
      piVar8[3] = piVar8[3] + (uint)CARRY4(uVar5,local_4);
      piVar8[4] = piVar8[4] + (int)param_1;
      piVar8[5] = piVar8[5] - (int)param_1;
      puVar4 = (uint *)(piVar8 + 6);
      uVar5 = *puVar4;
      *puVar4 = *puVar4 + (int)param_1;
      piVar8[7] = piVar8[7] + (uint)CARRY4(uVar5,(uint)param_1);
      *(int *)(piVar8[9] + 0x34) = piVar8[1];
      switch(uVar9) {
      case 0:
        if ((param_1 == (int *)0x0) && (local_4 == 0)) {
          if (*(char *)(piVar8[9] + 0x3d) != '\0') {
            return 10;
          }
          *(undefined1 *)(piVar8[9] + 0x3d) = 1;
          return uVar9;
        }
        break;
      case 1:
        iVar6 = piVar8[9];
        iVar7 = *(int *)(iVar6 + 0x30);
        if (((iVar7 != 1) && (iVar7 != 2)) && (iVar7 != 4)) {
          *(undefined4 *)(iVar6 + 0x30) = 5;
          *(undefined1 *)(piVar8[9] + 0x3d) = 0;
          return uVar9;
        }
        *(undefined4 *)(iVar6 + 0x30) = 0;
        break;
      case 2:
      case 3:
      case 4:
      case 6:
        break;
      default:
        *(undefined4 *)(piVar8[9] + 0x30) = 6;
        return uVar9;
      case 0x20:
        *(undefined1 *)(piVar8[9] + 0x3d) = 0;
        return 0;
      }
      *(undefined1 *)(piVar8[9] + 0x3d) = 0;
      return uVar9;
    }
  }
switchD_0049afe2_caseD_6:
  return 0xb;
}


