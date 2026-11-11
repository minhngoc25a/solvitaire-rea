// Function: FUN_0044f4c4
// Entry: 0044f4c4
// Size: 402 bytes
// Thunk: false
// External: false


void __cdecl
FUN_0044f4c4(uint *param_1,uint param_2,bool param_3,byte param_4,floating_point_value *param_5)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar6 = ((param_5[4] == (floating_point_value)0x0) - 1 & 0x1d) + 0x17;
  if (0x40 < param_2) {
    uVar9 = param_2 >> 5;
    uVar7 = param_2 & 0x1f;
    iVar8 = uVar9 - 2;
    uVar5 = param_1[uVar9 - 1];
    puVar1 = param_1 + uVar9;
    if (uVar7 == 0) {
      iVar6 = iVar6 + iVar8 * 0x20;
      puVar2 = param_1 + (uVar9 - 1);
      bVar3 = param_4 ^ 1;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        param_1 = param_1 + 1;
        bVar3 = bVar3 & (*param_1 != 0) - 1U;
      }
      lVar12 = CONCAT44(*puVar1,*puVar2);
    }
    else {
      bVar3 = 1;
      bVar4 = (byte)uVar7;
      iVar6 = uVar7 + iVar8 * 0x20 + iVar6;
      lVar10 = __allshl(-bVar4 + 0x20,0);
      uVar11 = __aullshr(bVar4,0);
      lVar12 = __allshl(-bVar4 + 0x40,0);
      lVar12 = lVar10 + uVar11 + lVar12;
      if ((param_4 != 0) || ((uVar5 & (1 << bVar4) - 1U) != 0)) {
        bVar3 = 0;
      }
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        param_1 = param_1 + 1;
        bVar3 = bVar3 & (*param_1 != 0) - 1U;
      }
    }
    goto LAB_0044f649;
  }
  if (*param_1 == 0) {
    uVar5 = 0;
LAB_0044f500:
    uVar7 = 0;
  }
  else {
    uVar5 = param_1[1];
    if (*param_1 < 2) goto LAB_0044f500;
    uVar7 = param_1[2];
  }
  lVar12 = CONCAT44(uVar7,uVar5);
  bVar3 = param_4 ^ 1;
LAB_0044f649:
  FUN_0044f0f9((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),iVar6,param_3,bVar3,param_5);
  return;
}


