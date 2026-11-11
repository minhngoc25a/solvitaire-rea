// Function: FUN_0046db30
// Entry: 0046db30
// Size: 787 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0046db30(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  puVar6 = param_2;
  if ((((((100000 < *param_2) || (uVar1 = param_2[1], (int)uVar1 < 0)) ||
        ((int)(100000 - *param_2) < (int)uVar1)) ||
       (((uVar2 = param_2[2], 100000 < uVar2 || ((int)param_2[3] < 0)) ||
        (((int)(100000 - uVar2) < (int)param_2[3] ||
         ((uVar3 = param_2[4], 100000 < uVar3 || (local_14 = param_2[5], (int)local_14 < 0))))))))
      || ((int)(100000 - uVar3) < (int)local_14)) ||
     (((100000 < param_2[6] || (uVar4 = param_2[7], (int)uVar4 < 5)) ||
      ((int)(100000 - param_2[6]) < (int)uVar4)))) {
    return 1;
  }
  uVar5 = param_2[5];
  local_18 = uVar2 - uVar3;
  iVar7 = FUN_0046cd90((int *)&param_2,local_18,uVar1 - uVar5,7);
  if (iVar7 != 0) {
    local_4 = *puVar6 - puVar6[4];
    local_10 = puVar6[3] - local_14;
    iVar7 = FUN_0046cd90(&local_1c,local_10,local_4,7);
    if (iVar7 != 0) {
      local_8 = uVar4 - puVar6[5];
      local_14 = (int)param_2 - local_1c;
      iVar7 = FUN_0046cd90((int *)&param_2,local_18,local_8,7);
      if (iVar7 != 0) {
        local_c = puVar6[6] - puVar6[4];
        iVar7 = FUN_0046cd90(&local_1c,local_10,local_c,7);
        if (iVar7 != 0) {
          iVar7 = FUN_0046cd90(&local_18,uVar4,local_14,(int)param_2 - local_1c);
          if (iVar7 == 0) {
            return 1;
          }
          if (local_18 <= (int)uVar4) {
            return 1;
          }
          iVar7 = FUN_0046cd90((int *)&param_2,uVar1 - uVar5,local_c,7);
          if ((iVar7 != 0) && (iVar7 = FUN_0046cd90(&local_1c,local_4,local_8,7), iVar7 != 0)) {
            iVar7 = FUN_0046cd90((int *)&param_2,uVar4,local_14,(int)param_2 - local_1c);
            if (iVar7 == 0) {
              return 1;
            }
            if ((int)param_2 <= (int)uVar4) {
              return 1;
            }
            iVar8 = FUN_0046ce40(uVar4);
            iVar7 = local_18;
            iVar9 = FUN_0046ce40(local_18);
            iVar10 = FUN_0046ce40((int)param_2);
            iVar10 = (iVar8 - iVar9) - iVar10;
            if (iVar10 < 1) {
              return 1;
            }
            iVar7 = FUN_0046cd90(param_1,*puVar6,100000,iVar7);
            if (iVar7 == 0) {
              return 1;
            }
            iVar7 = FUN_0046cd90(param_1 + 1,puVar6[1],100000,local_18);
            if (iVar7 == 0) {
              return 1;
            }
            iVar7 = FUN_0046cd90(param_1 + 2,(100000 - puVar6[1]) - *puVar6,100000,local_18);
            if (iVar7 == 0) {
              return 1;
            }
            iVar7 = FUN_0046cd90(param_1 + 3,puVar6[2],100000,(int)param_2);
            if (iVar7 == 0) {
              return 1;
            }
            iVar7 = FUN_0046cd90(param_1 + 4,puVar6[3],100000,(int)param_2);
            if (iVar7 == 0) {
              return 1;
            }
            iVar7 = FUN_0046cd90(param_1 + 5,(100000 - puVar6[2]) - puVar6[3],100000,(int)param_2);
            if (iVar7 == 0) {
              return 1;
            }
            iVar7 = FUN_0046cd90(param_1 + 6,puVar6[4],iVar10,100000);
            if (iVar7 == 0) {
              return 1;
            }
            iVar7 = FUN_0046cd90(param_1 + 7,puVar6[5],iVar10,100000);
            if (iVar7 == 0) {
              return 1;
            }
            iVar7 = FUN_0046cd90(param_1 + 8,(100000 - puVar6[4]) - puVar6[5],iVar10,100000);
            if (iVar7 == 0) {
              return 1;
            }
            return 0;
          }
        }
      }
    }
  }
  return 2;
}


