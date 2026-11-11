// Function: FUN_005013c0
// Entry: 005013c0
// Size: 223 bytes
// Thunk: false
// External: false


void __cdecl FUN_005013c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1;
  uVar4 = *(uint *)(param_1 + 0x44);
  puVar3 = (undefined4 *)(param_1 + 0x268);
  iVar5 = *(int *)(param_1 + 0x20);
  piVar1 = (int *)(param_1 + 0x24);
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x30);
  if (9999 < (int)uVar4) {
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    else if (100 < iVar8) {
      iVar8 = 100;
    }
    puVar2 = (undefined4 *)(param_1 + 0x24);
    param_1 = ((iVar8 + -1) / 3) * uVar4;
    FUN_00502430(iVar5,(byte *)*puVar2,(uVar4 & 1) + 0x22 + uVar4 + *piVar1,(int)puVar6,uVar4,
                 *puVar3,&param_1);
    if (-1 < param_1) goto LAB_00501461;
  }
  FUN_005017e0(*(int *)(iVar7 + 0x10),*(int *)(iVar7 + 0x14),puVar6,uVar4);
LAB_00501461:
  iVar8 = 0;
  *(undefined4 *)(iVar7 + 0x1c) = 0xffffffff;
  if (0 < *(int *)(iVar7 + 0x44)) {
    do {
      if (*(int *)(iVar5 + iVar8 * 4) == 0) {
        *(int *)(iVar7 + 0x1c) = iVar8;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar7 + 0x44));
  }
  if (*(int *)(iVar7 + 0x1c) != -1) {
    return;
  }
  param_1 = 0x3eb;
  guard_check_icall();
  return;
}


