// Function: FUN_004ac490
// Entry: 004ac490
// Size: 437 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004ac490(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  piVar3 = (int *)param_1[6];
  iVar9 = piVar3[1];
  if (iVar9 == 0) {
    uVar4 = (*(code *)piVar3[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_004ac63b;
    iVar9 = piVar3[1];
  }
  bVar1 = *(byte *)*piVar3;
  pbVar8 = (byte *)*piVar3 + 1;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) {
    uVar4 = (*(code *)piVar3[3])(param_1);
    if ((char)uVar4 == '\0') {
LAB_004ac63b:
      return uVar4 & 0xffffff00;
    }
    pbVar8 = (byte *)*piVar3;
    iVar9 = piVar3[1];
  }
  uVar4 = (uint)*pbVar8;
  iVar7 = (uint)bVar1 * 0x100 + -2 + uVar4;
  do {
    pbVar8 = pbVar8 + 1;
    iVar9 = iVar9 + -1;
    if (iVar7 < 1) {
      if (iVar7 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xc;
        uVar4 = (**(code **)*param_1)(param_1);
      }
      piVar3[1] = iVar9;
      *piVar3 = (int)pbVar8;
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    if (iVar9 == 0) {
      uVar4 = (*(code *)piVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_004ac63b;
      pbVar8 = (byte *)*piVar3;
      iVar9 = piVar3[1];
    }
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    uVar5 = (uint)bVar1;
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) {
      uVar4 = (*(code *)piVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_004ac63b;
      pbVar8 = (byte *)*piVar3;
      iVar9 = piVar3[1];
    }
    bVar2 = *pbVar8;
    iVar7 = iVar7 + -2;
    *(undefined4 *)(*param_1 + 0x14) = 0x51;
    *(uint *)(*param_1 + 0x18) = uVar5;
    *(uint *)(*param_1 + 0x1c) = (uint)bVar2;
    uVar6 = (**(code **)(*param_1 + 4))(param_1,1);
    if (bVar1 < 0x20) {
      if (bVar1 < 0x10) {
        uVar4 = 0;
        *(byte *)((int)param_1 + uVar5 + 0xcb) = bVar2 & 0xf;
        *(byte *)((int)param_1 + uVar5 + 0xdb) = bVar2 >> 4;
        if (bVar2 >> 4 < (bVar2 & 0xf)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x1e;
          *(uint *)(*param_1 + 0x18) = (uint)bVar2;
          uVar4 = (**(code **)*param_1)(param_1);
        }
      }
      else {
        uVar4 = CONCAT31((int3)((uint)uVar6 >> 8),bVar2);
        *(byte *)((int)param_1 + uVar5 + 0xdb) = bVar2;
      }
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x1d;
      *(uint *)(*param_1 + 0x18) = uVar5;
      uVar6 = (**(code **)*param_1)(param_1);
      uVar4 = CONCAT31((int3)((uint)uVar6 >> 8),bVar2);
      *(byte *)((int)param_1 + uVar5 + 0xdb) = bVar2;
    }
  } while( true );
}


