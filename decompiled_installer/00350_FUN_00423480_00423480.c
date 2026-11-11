// Function: FUN_00423480
// Entry: 00423480
// Size: 318 bytes
// Thunk: false
// External: false


undefined8 FUN_00423480(ushort *param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  uVar3 = 0;
  iVar9 = 0;
  if (param_1 == (ushort *)0x0) goto LAB_004235b5;
  for (; (uVar7 = *param_1, uVar7 == 0x20 || (uVar7 == 9)); param_1 = param_1 + 1) {
  }
  if (uVar7 == 0x2d) {
    bVar11 = true;
LAB_004234b9:
    uVar7 = param_1[1];
    param_1 = param_1 + 1;
  }
  else {
    bVar11 = false;
    if (uVar7 == 0x2b) goto LAB_004234b9;
  }
  if (uVar7 == 0x24) {
    while( true ) {
      uVar7 = param_1[1];
      uVar8 = (uint)uVar7;
      param_1 = param_1 + 1;
      if ((((uVar8 < 0x30) || (0x39 < uVar8)) && ((uVar8 < 0x41 || (0x46 < uVar8)))) &&
         (5 < (ushort)(uVar7 - 0x61))) break;
      uVar4 = uVar3 * 0x10 + uVar8;
      iVar9 = (iVar9 << 4 | uVar3 >> 0x1c) + (uint)CARRY4(uVar3 * 0x10,uVar8);
      if ((ushort)(uVar7 - 0x30) < 10) {
        uVar3 = uVar4 - 0x30;
        iVar9 = iVar9 - (uint)(uVar4 < 0x30);
      }
      else if (uVar8 < 0x61) {
        uVar3 = uVar4 - 0x37;
        iVar9 = iVar9 - (uint)(uVar4 < 0x37);
      }
      else {
        uVar3 = uVar4 - 0x57;
        iVar9 = iVar9 - (uint)(uVar4 < 0x57);
      }
    }
  }
  else {
    uVar8 = (uint)*param_1;
    if (uVar8 == 0x25) {
      uVar7 = param_1[1];
      while ((uVar8 = (uint)uVar7, 0x2f < uVar8 && (uVar7 < 0x32))) {
        bVar10 = uVar3 < 0x18;
        uVar5 = uVar3 - 0x18;
        uVar4 = uVar5 * 2;
        uVar3 = uVar4 + uVar8;
        iVar9 = ((iVar9 - (uint)bVar10) * 2 | uVar5 >> 0x1f) + (uint)CARRY4(uVar4,uVar8);
        uVar7 = param_1[2];
        param_1 = param_1 + 1;
      }
    }
    else {
      while ((0x2f < uVar8 && ((ushort)uVar8 < 0x3a))) {
        uVar4 = uVar3 >> 0x1e;
        bVar10 = CARRY4(uVar3,uVar3 * 4);
        uVar2 = uVar3 * 5;
        puVar1 = param_1 + 1;
        uVar5 = uVar3 * 10;
        uVar6 = uVar5 + uVar8;
        uVar3 = uVar6 - 0x30;
        iVar9 = (((iVar9 + (iVar9 << 2 | uVar4) + (uint)bVar10) * 2 | uVar2 >> 0x1f) +
                (uint)CARRY4(uVar5,uVar8)) - (uint)(uVar6 < 0x30);
        param_1 = param_1 + 1;
        uVar8 = (uint)*puVar1;
      }
    }
  }
  if (bVar11) {
    bVar11 = uVar3 != 0;
    uVar3 = -uVar3;
    iVar9 = -(iVar9 + (uint)bVar11);
  }
LAB_004235b5:
  return CONCAT44(iVar9,uVar3);
}


