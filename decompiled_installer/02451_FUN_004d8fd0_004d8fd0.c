// Function: FUN_004d8fd0
// Entry: 004d8fd0
// Size: 187 bytes
// Thunk: false
// External: false


undefined8 __cdecl FUN_004d8fd0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_1 + 0xa4);
  uVar7 = 0x10000 - *(int *)(iVar1 + 66000);
  uVar6 = uVar7 & 0x7ff;
  uVar7 = uVar7 - uVar6;
  if (*(int *)(iVar1 + 0x101d4) == 0) {
    uVar3 = FUN_00494870(param_1,(LPCVOID)(iVar1 + 0x1d0),uVar7);
  }
  else {
    uVar3 = FUN_004ddf50(param_1,(LPCVOID)(iVar1 + 0x1d0),uVar7);
  }
  uVar2 = *(uint *)(iVar1 + 0x101d8);
  uVar4 = uVar7 + *(uint *)(iVar1 + 0x101d8);
  *(uint *)(iVar1 + 0x101d8) = uVar4;
  iVar5 = *(int *)(iVar1 + 0x101dc) + (uint)CARRY4(uVar7,uVar2);
  *(int *)(iVar1 + 0x101dc) = iVar5;
  if ((*(int *)(iVar1 + 0x101e4) <= iVar5) &&
     ((*(int *)(iVar1 + 0x101e4) < iVar5 || (*(uint *)(iVar1 + 0x101e0) < uVar4)))) {
    *(uint *)(iVar1 + 0x101e0) = uVar4;
    *(int *)(iVar1 + 0x101e4) = iVar5;
  }
  *(undefined4 *)(iVar1 + 66000) = 0x10000;
  if (uVar6 != 0) {
    *(uint *)(iVar1 + 66000) = 0x10000 - uVar6;
    uVar8 = FUN_0044c490((uint *)(iVar1 + 0x1d0),(uint *)(iVar1 + 0x1d0 + uVar7),uVar6);
    iVar5 = (int)(uVar8 >> 0x20);
  }
  return CONCAT44(iVar5,uVar3);
}


