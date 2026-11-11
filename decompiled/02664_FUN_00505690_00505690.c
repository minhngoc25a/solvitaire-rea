// Function: FUN_00505690
// Entry: 00505690
// Size: 511 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00505690(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = param_3[1] - 0x1000;
  if ((uVar3 < 0x5ffff001) && (uVar3 = param_3[4], uVar3 <= (uint)param_3[3])) {
    iVar9 = *param_3 + param_3[1];
    param_1[2] = iVar9;
    iVar5 = param_3[3];
    iVar1 = param_3[2];
    iVar8 = param_1[1];
    param_1[3] = iVar5 + iVar1;
    uVar2 = (uint)param_3[1] >> 1;
    uVar3 = (uint)param_3[1] >> 2;
    if (uVar2 < 0x40000001) {
      uVar3 = uVar2;
    }
    iVar5 = iVar5 + iVar1 + 0x80000 +
            ((uint)(param_3[3] + param_3[2] + *param_3) >> 1) + uVar3 + iVar9;
    param_1[1] = iVar5;
    if (((LPVOID)*param_1 != (LPVOID)0x0) && (iVar8 != iVar5)) {
      FUN_0049b300((LPVOID)*param_1,param_2);
      *param_1 = 0;
    }
    param_1[0x13] = param_3[3];
    uVar2 = param_3[4];
    param_1[0x12] = uVar2;
    iVar5 = param_3[1] + 1;
    param_1[0xf] = iVar5;
    uVar3 = 0;
    switch(param_3[5]) {
    case 3:
      puVar4 = &LAB_00509520;
      puVar6 = &LAB_005093e0;
      break;
    case 4:
      puVar4 = &LAB_005097e0;
      puVar6 = &LAB_00509620;
      break;
    default:
      goto switchD_00505740_caseD_5;
    case 0x12:
      puVar4 = &LAB_00509940;
      puVar6 = &LAB_005098b0;
      break;
    case 0x13:
      puVar4 = &LAB_00509b00;
      puVar6 = &LAB_005099b0;
      break;
    case 0x14:
      puVar4 = &LAB_00509d90;
      puVar6 = &LAB_00509bb0;
    }
    param_1[10] = puVar6;
    param_1[0xb] = puVar4;
    uVar3 = param_3[5];
    uVar10 = uVar3 & 0xf;
    if (uVar10 <= uVar2) {
      if (uVar10 == 2) {
        uVar7 = 0xffff;
      }
      else {
        uVar2 = param_3[1] - 1U | param_3[1] - 1U >> 1;
        uVar2 = uVar2 | uVar2 >> 2;
        uVar2 = uVar2 | uVar2 >> 4;
        uVar2 = (uVar2 | 0x1fffe00) >> 8 | uVar2;
        uVar7 = uVar2 >> 1;
        if (0x1000000 < uVar7) {
          if (uVar10 == 3) {
            uVar7 = 0xffffff;
          }
          else {
            uVar7 = uVar2 >> 2;
          }
        }
      }
      param_1[0x10] = uVar7;
      iVar9 = (-(uint)(2 < uVar10) & 0x400) + 1 + uVar7;
      iVar1 = param_1[0x15];
      iVar8 = iVar9 + 0x10000;
      if (uVar10 < 4) {
        iVar8 = iVar9;
      }
      iVar9 = param_1[0x16];
      param_1[0x15] = iVar8;
      param_1[0x16] = iVar5;
      if ((uVar3 >> 4 & 1) != 0) {
        iVar5 = iVar5 * 2;
        param_1[0x16] = iVar5;
      }
      if ((iVar1 != iVar8) || (iVar9 != iVar5)) {
        FUN_0049b300((LPVOID)param_1[0xc],param_2);
        param_1[0xc] = 0;
        FUN_0049b300((LPVOID)param_1[0xd],param_2);
        param_1[0xd] = 0;
      }
      uVar2 = param_3[6];
      param_1[0x11] = uVar2;
      if (uVar2 == 0) {
        if ((uVar3 >> 4 & 1) != 0) {
          uVar3 = ((uint)param_1[0x12] >> 1) + 0x10;
          param_1[0x11] = uVar3;
          return uVar3 & 0xffffff00;
        }
        uVar2 = ((uint)param_1[0x12] >> 2) + 4;
        param_1[0x11] = uVar2;
      }
      return uVar2 & 0xffffff00;
    }
  }
switchD_00505740_caseD_5:
  return CONCAT31((int3)(uVar3 >> 8),1);
}


