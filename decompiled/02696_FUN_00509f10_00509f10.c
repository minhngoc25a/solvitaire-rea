// Function: FUN_00509f10
// Entry: 00509f10
// Size: 268 bytes
// Thunk: false
// External: false


uint * __cdecl
FUN_00509f10(uint param_1,int param_2,char *param_3,uint *param_4,int param_5,int param_6,
            uint param_7,uint param_8,uint *param_9,uint param_10)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = param_4;
  *(uint **)(param_6 + param_7 * 4) = param_4;
  if (param_5 != 0) {
    param_4 = param_9;
    do {
      uVar5 = param_2 - (int)puVar1;
      param_5 = param_5 + -1;
      if (param_8 <= uVar5) {
        return param_9;
      }
      puVar1 = *(uint **)(param_6 + (((-(uint)(param_7 < uVar5) & param_8) - uVar5) + param_7) * 4);
      if (((param_3 + -uVar5)[param_10] == param_3[param_10]) && (param_3[-uVar5] == *param_3)) {
        uVar6 = 1;
        uVar3 = param_1;
        if (1 < param_1) {
          piVar2 = (int *)(param_3 + 1);
          do {
            uVar7 = *(int *)(-uVar5 + (int)piVar2) - *piVar2;
            if (uVar7 != 0) {
              uVar4 = uVar6 + 2;
              if ((uVar7 & 0xffff) != 0) {
                uVar4 = uVar6;
              }
              uVar6 = uVar7 >> 0x10;
              if ((uVar7 & 0xffff) != 0) {
                uVar6 = uVar7;
              }
              uVar7 = uVar4 + 1;
              if ((char)uVar6 != '\0') {
                uVar7 = uVar4;
              }
              if (uVar7 < param_1) {
                uVar3 = uVar7;
              }
              break;
            }
            uVar6 = uVar6 + 4;
            piVar2 = piVar2 + 1;
          } while (uVar6 < param_1);
        }
        param_9 = param_4;
        if (param_10 < uVar3) {
          *param_4 = uVar3;
          param_4[1] = uVar5 - 1;
          param_9 = param_4 + 2;
          param_4 = param_9;
          param_10 = uVar3;
          if (uVar3 == param_1) {
            return param_9;
          }
        }
      }
    } while (param_5 != 0);
  }
  return param_9;
}


