// Function: FUN_004b60e0
// Entry: 004b60e0
// Size: 357 bytes
// Thunk: false
// External: false


int __cdecl FUN_004b60e0(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_3 < param_4) {
    iVar3 = param_3 * 2;
    piVar4 = param_2 + param_3 * 8 + 3;
    do {
      iVar7 = 0;
      if (param_4 < iVar3) {
        piVar2 = (int *)0x0;
        piVar1 = param_2;
        iVar5 = param_3;
        if (0 < param_3) {
          do {
            if (iVar7 < piVar1[6]) {
              piVar2 = piVar1;
              iVar7 = piVar1[6];
            }
            iVar5 = iVar5 + -1;
            piVar1 = piVar1 + 8;
          } while (iVar5 != 0);
        }
      }
      else {
        piVar2 = (int *)0x0;
        if (0 < param_3) {
          piVar1 = param_2 + 6;
          iVar5 = param_3;
          do {
            if ((iVar7 < piVar1[1]) && (0 < *piVar1)) {
              piVar2 = piVar1 + -6;
              iVar7 = piVar1[1];
            }
            piVar1 = piVar1 + 8;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      if (piVar2 == (int *)0x0) {
        return param_3;
      }
      piVar1 = piVar4 + -3;
      piVar4[-2] = piVar2[1];
      *piVar4 = piVar2[3];
      piVar4[2] = piVar2[5];
      *piVar1 = *piVar2;
      piVar4[-1] = piVar2[2];
      piVar4[1] = piVar2[4];
      iVar5 = (piVar2[1] - *piVar2) * 0x10;
      iVar6 = (piVar2[3] - piVar2[2]) * 0xc;
      iVar7 = iVar6;
      if (iVar6 < iVar5) {
        iVar7 = iVar5;
      }
      if (iVar7 < (piVar2[5] - piVar2[4]) * 8) {
        iVar7 = (piVar2[5] + piVar2[4]) / 2;
        piVar2[5] = iVar7;
        piVar4[1] = iVar7 + 1;
      }
      else if (iVar5 <= iVar6) {
        if (iVar5 <= iVar6) {
          iVar7 = (piVar2[3] + piVar2[2]) / 2;
          piVar2[3] = iVar7;
          piVar4[-1] = iVar7 + 1;
        }
      }
      else {
        iVar7 = (piVar2[1] + *piVar2) / 2;
        piVar2[1] = iVar7;
        *piVar1 = iVar7 + 1;
      }
      FUN_004b5ca0(param_1,piVar2);
      FUN_004b5ca0(param_1,piVar1);
      param_3 = param_3 + 1;
      iVar3 = iVar3 + 2;
      piVar4 = piVar4 + 8;
    } while (param_3 < param_4);
  }
  return param_3;
}


