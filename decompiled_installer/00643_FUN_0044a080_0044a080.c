// Function: FUN_0044a080
// Entry: 0044a080
// Size: 270 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0044a080(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  iVar7 = 0;
  for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x34); uVar8 = uVar8 + 1) {
    FUN_0042fa20((int *)(*(int *)(param_1 + 0x3c) + 0x14 + iVar7));
    iVar1 = *(int *)(param_1 + 0x3c) + iVar7;
    if (*(int *)(iVar1 + 0x24) != 0) {
      FUN_00449c00((uint)*(byte *)(iVar1 + 6) * 0x34 + *(int *)(*(int *)(iVar1 + 0x24) + 0x38),iVar1
                  );
    }
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x3c) + 0x14 + iVar7);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *puVar4 = 0;
      UNLOCK();
    }
    iVar7 = iVar7 + 0x28;
  }
  iVar7 = 0;
  for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x30); uVar8 = uVar8 + 1) {
    piVar5 = (int *)(*(int *)(param_1 + 0x38) + iVar7 + 0x1c);
    LOCK();
    piVar3 = (int *)*piVar5;
    if (piVar3 == (int *)0x0) {
      *piVar5 = 0;
      piVar3 = (int *)0x0;
    }
    UNLOCK();
    while (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      if ((iVar1 != 0) && ((uint)*(byte *)(piVar3 + 1) < *(uint *)(iVar1 + 0x34))) {
        iVar6 = (uint)*(byte *)(piVar3 + 1) * 0x28;
        FUN_0042fa20((int *)(*(int *)(iVar1 + 0x3c) + 0x14 + iVar6));
        iVar2 = *(int *)(iVar1 + 0x3c) + iVar6;
        if (*(int *)(iVar2 + 0x24) != 0) {
          FUN_00449c00((uint)*(byte *)(iVar2 + 6) * 0x34 + *(int *)(*(int *)(iVar2 + 0x24) + 0x38),
                       iVar2);
        }
        puVar4 = (undefined4 *)(*(int *)(iVar1 + 0x3c) + 0x14 + iVar6);
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          *puVar4 = 0;
          UNLOCK();
        }
      }
      piVar5 = piVar3 + 7;
      LOCK();
      piVar3 = (int *)*piVar5;
      if (piVar3 == (int *)0x0) {
        *piVar5 = 0;
        piVar3 = (int *)0x0;
      }
      UNLOCK();
    }
    iVar7 = iVar7 + 0x34;
  }
  return 0;
}


